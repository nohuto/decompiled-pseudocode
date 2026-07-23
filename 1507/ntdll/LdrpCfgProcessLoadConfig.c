/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x180040ECC
 * Callers:
 *     LdrpProcessMappedModule @ 0x180040CD8 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     LdrpMakePermanentImageCommit @ 0x18004158C (LdrpMakePermanentImageCommit.c)
 *     ZwProtectVirtualMemory @ 0x180093E00 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  _DWORD *v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  _QWORD *v9; // rbx
  unsigned __int64 v10; // rcx
  NTSTATUS result; // eax
  __int64 (__fastcall **v12)(); // rdi
  unsigned __int64 v13; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-8h] BYREF
  ULONG NewProtect; // [rsp+80h] [rbp+40h] BYREF
  ULONG Size; // [rsp+88h] [rbp+48h] BYREF

  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0;
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
    {
      v6 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xDu, &Size);
      if ( v6 )
      {
        v7 = (__int64)a2 + a2[10] + 24;
        v8 = 0;
        if ( a2[3] )
        {
          while ( (unsigned int)(v6[3] - *(_DWORD *)(v7 + 12)) >= *(_DWORD *)(v7 + 8) )
          {
            ++v8;
            v7 += 40LL;
            if ( v8 >= a2[3] )
              goto LABEL_11;
          }
          BaseAddress = (PVOID)(*(_QWORD *)(a1 + 48) + *(unsigned int *)(v7 + 12));
          RegionSize = *(unsigned int *)(v7 + 8);
          LdrpMakePermanentImageCommit();
          ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 2u, &NewProtect);
        }
      }
    }
  }
LABEL_11:
  if ( !LdrSystemDllInitBlock.Wow64SharedInformation[9]
    || (a2[47] & 0x4000) == 0
    || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
  {
    return 0;
  }
  v9 = *(_QWORD **)(a3 + 112);
  if ( v9
    && (v10 = *(_QWORD *)(a1 + 48), (unsigned __int64)v9 >= v10)
    && (unsigned __int64)v9 < *(unsigned int *)(a1 + 64) + v10 - 8
    && *v9 )
  {
    BaseAddress = *(PVOID *)(a3 + 112);
    RegionSize = 8LL;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
    if ( result < 0 )
      return result;
    *v9 = LdrpValidateUserCallTarget;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result < 0 )
      return result;
    if ( (__int64 (__fastcall *)(_QWORD))*v9 != LdrpValidateUserCallTarget )
      return -1073741762;
  }
  else
  {
    v9 = 0LL;
  }
  v12 = *(__int64 (__fastcall ***)())(a3 + 120);
  if ( !v12 )
    return 0;
  v13 = *(_QWORD *)(a1 + 48);
  if ( (unsigned __int64)v12 < v13 || (unsigned __int64)v12 >= *(unsigned int *)(a1 + 64) + v13 - 8 || !*v12 )
    return 0;
  BaseAddress = v12;
  RegionSize = 8LL;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect);
  if ( result >= 0 )
  {
    *v12 = LdrpDispatchUserCallTarget;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
    if ( result >= 0 )
    {
      if ( v9 && (__int64 (__fastcall *)(_QWORD))*v9 == LdrpValidateUserCallTarget && *v12 == LdrpDispatchUserCallTarget )
        return 0;
      return -1073741762;
    }
  }
  return result;
}
