/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x18002FB2C
 * Callers:
 *     LdrpProcessMappedModule @ 0x18002F938 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpIsModuleUnderSystem32 @ 0x18002CB84 (LdrpIsModuleUnderSystem32.c)
 *     LdrpMakePermanentImageCommit @ 0x18002DBA8 (LdrpMakePermanentImageCommit.c)
 *     RtlImageDirectoryEntryToData @ 0x180031B00 (RtlImageDirectoryEntryToData.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 *v4; // r14
  __int16 v6; // ax
  int v7; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 (__fastcall **v11)(); // rdi
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  __int64 (__fastcall **v14)(); // rsi
  unsigned __int64 v15; // rcx
  int v16; // edi
  unsigned __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+38h] [rbp-8h] BYREF
  unsigned int v19; // [rsp+80h] [rbp+40h] BYREF
  char v20; // [rsp+88h] [rbp+48h] BYREF

  v4 = a2;
  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0LL;
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
      LOBYTE(a2) = 1;
      v8 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 13LL, &v20);
      if ( v8 )
      {
        v9 = (__int64)v4 + v4[10] + 24;
        v10 = 0;
        if ( v4[3] )
        {
          while ( (unsigned int)(*(_DWORD *)(v8 + 12) - *(_DWORD *)(v9 + 12)) >= *(_DWORD *)(v9 + 8) )
          {
            ++v10;
            v9 += 40LL;
            if ( v10 >= v4[3] )
              goto LABEL_14;
          }
          v18 = (__int64 (__fastcall **)())(*(_QWORD *)(a1 + 48) + *(unsigned int *)(v9 + 12));
          v17 = *(unsigned int *)(v9 + 8);
          LdrpMakePermanentImageCommit((__int64)v18, v17);
          ZwProtectVirtualMemory(-1LL, &v18, &v17, 2LL, &v19);
        }
      }
    }
  }
LABEL_14:
  if ( !qword_180163310 || (v4[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
    return 0LL;
  v11 = *(__int64 (__fastcall ***)())(a3 + 112);
  if ( v11
    && (v12 = *(_QWORD *)(a1 + 48), (unsigned __int64)v11 >= v12)
    && (unsigned __int64)v11 < *(unsigned int *)(a1 + 64) + v12 - 8
    && *v11 )
  {
    v18 = *(__int64 (__fastcall ***)())(a3 + 112);
    v17 = 8LL;
    result = ZwProtectVirtualMemory(-1LL, &v18, &v17, 4LL, &v19);
    if ( (int)result < 0 )
      return result;
    *v11 = LdrpValidateUserCallTarget;
    result = ZwProtectVirtualMemory(-1LL, &v18, &v17, v19, &v19);
    if ( (int)result < 0 )
      return result;
    if ( *v11 != LdrpValidateUserCallTarget )
      return 3221225534LL;
  }
  else
  {
    v11 = 0LL;
  }
  v14 = *(__int64 (__fastcall ***)())(a3 + 120);
  if ( !v14 )
    return 0LL;
  v15 = *(_QWORD *)(a1 + 48);
  if ( (unsigned __int64)v14 < v15 || (unsigned __int64)v14 >= *(unsigned int *)(a1 + 64) + v15 - 8 || !*v14 )
    return 0LL;
  v18 = v14;
  v17 = 8LL;
  result = ZwProtectVirtualMemory(-1LL, &v18, &v17, 4LL, &v19);
  if ( (int)result >= 0 )
  {
    *v14 = LdrpDispatchUserCallTarget;
    result = ZwProtectVirtualMemory(-1LL, &v18, &v17, v19, &v19);
    if ( (int)result >= 0 )
    {
      if ( v11 && *v11 == LdrpValidateUserCallTarget && *v14 == LdrpDispatchUserCallTarget )
        return 0LL;
      return 3221225534LL;
    }
  }
  return result;
}
