/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x18002FB1C
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002F928 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpIsModuleUnderSystem32 @ 0x18002CB74 (LdrpIsModuleUnderSystem32.c)
 *     LdrpMakePermanentImageCommit @ 0x18002DB98 (LdrpMakePermanentImageCommit.c)
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int16 v6; // ax
  int v7; // edi
  _DWORD *v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 (__fastcall **v11)(); // rdi
  unsigned __int64 v12; // rcx
  NTSTATUS result; // eax
  __int64 (__fastcall **v14)(); // rsi
  unsigned __int64 v15; // rcx
  int v16; // edi
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-8h] BYREF
  ULONG NewProtect; // [rsp+80h] [rbp+40h] BYREF
  ULONG Size; // [rsp+88h] [rbp+48h] BYREF

  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0;
  v6 = 32512;
  if ( (LdrpPolicyBits & 4) == 0 )
    v6 = 31488;
  v7 = (unsigned __int16)(v6 & *(_WORD *)(a3 + 78));
  *(_DWORD *)(a1 + 280) = v7;
  if ( v7 && LdrpIsModuleUnderSystem32(a1) )
  {
    if ( a1 == LdrpImageEntry )
      v16 = v7 | 0x200;
    else
      v16 = v7 | 0x100;
    *(_DWORD *)(a1 + 280) = v16;
  }
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
    {
      v8 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xDu, &Size);
      if ( v8 )
      {
        v9 = (__int64)a2 + a2[10] + 24;
        v10 = 0;
        if ( a2[3] )
        {
          while ( (unsigned int)(v8[3] - *(_DWORD *)(v9 + 12)) >= *(_DWORD *)(v9 + 8) )
          {
            ++v10;
            v9 += 40LL;
            if ( v10 >= a2[3] )
              goto LABEL_14;
          }
          BaseAddress = (PVOID)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(v9 + 12));
          RegionSize = *(unsigned int *)(v9 + 8);
          LdrpMakePermanentImageCommit((__int64)BaseAddress, RegionSize);
          ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &NewProtect);
        }
      }
    }
  }
LABEL_14:
  if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9]
    || (a2[47] & 0x4000) == 0
    || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
  {
    return 0;
  }
  v11 = *(__int64 (__fastcall ***)())(a3 + 112);
  if ( v11
    && (v12 = *(_QWORD *)(a1 + 48), (unsigned __int64)v11 >= v12)
    && (unsigned __int64)v11 < *(unsigned int *)(a1 + 64) + v12 - 8
    && *v11 )
  {
    BaseAddress = *(PVOID *)(a3 + 112);
    RegionSize = 8LL;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
    if ( result < 0 )
      return result;
    *v11 = LdrpValidateUserCallTarget;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result < 0 )
      return result;
    if ( *v11 != LdrpValidateUserCallTarget )
      return -1073741762;
  }
  else
  {
    v11 = 0LL;
  }
  v14 = *(__int64 (__fastcall ***)())(a3 + 120);
  if ( !v14 )
    return 0;
  v15 = *(_QWORD *)(a1 + 48);
  if ( (unsigned __int64)v14 < v15 || (unsigned __int64)v14 >= *(unsigned int *)(a1 + 64) + v15 - 8 || !*v14 )
    return 0;
  BaseAddress = v14;
  RegionSize = 8LL;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
  if ( result >= 0 )
  {
    *v14 = LdrpDispatchUserCallTarget;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result >= 0 )
    {
      if ( v11 && *v11 == LdrpValidateUserCallTarget && *v14 == LdrpDispatchUserCallTarget )
        return 0;
      return -1073741762;
    }
  }
  return result;
}
