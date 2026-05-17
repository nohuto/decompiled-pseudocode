/*
 * XREFs of LdrpCfgProcessLoadConfig @ 0x180010044
 * Callers:
 *     LdrpProcessMappedModule @ 0x1800102F0 (LdrpProcessMappedModule.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpMakePermanentImageCommit @ 0x18000CD58 (LdrpMakePermanentImageCommit.c)
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpCfgProcessLoadConfig(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned __int16 *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 (__fastcall **v9)(); // rbx
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  __int64 (__fastcall **v12)(); // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // [rsp+30h] [rbp-10h] BYREF
  __int64 (__fastcall **v15)(); // [rsp+38h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+40h] BYREF
  char v17; // [rsp+88h] [rbp+48h] BYREF

  v4 = a2;
  if ( !a3 || *(_DWORD *)a3 < 0x94u )
    return 0LL;
  if ( (*(_DWORD *)(a3 + 144) & 0x1000) != 0 )
  {
    *(_DWORD *)(a1 + 104) |= 0x8000u;
    if ( (*(_DWORD *)(a3 + 144) & 0x2000) != 0 )
    {
      LOBYTE(a2) = 1;
      v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), a2, 13LL, &v17);
      if ( v6 )
      {
        v7 = (__int64)v4 + v4[10] + 24;
        v8 = 0;
        if ( v4[3] )
        {
          while ( (unsigned int)(*(_DWORD *)(v6 + 12) - *(_DWORD *)(v7 + 12)) >= *(_DWORD *)(v7 + 8) )
          {
            ++v8;
            v7 += 40LL;
            if ( v8 >= v4[3] )
              goto LABEL_11;
          }
          v15 = (__int64 (__fastcall **)())(*(_QWORD *)(a1 + 48) + *(unsigned int *)(v7 + 12));
          v14 = *(unsigned int *)(v7 + 8);
          LdrpMakePermanentImageCommit((__int64)v15, v14);
          ZwProtectVirtualMemory(-1LL, &v15, &v14, 2LL, &v16);
        }
      }
    }
  }
LABEL_11:
  if ( !qword_1801552F0 || (v4[47] & 0x4000) == 0 || (*(_DWORD *)(a3 + 144) & 0x100) == 0 )
    return 0LL;
  v9 = *(__int64 (__fastcall ***)())(a3 + 112);
  if ( v9
    && (v10 = *(_QWORD *)(a1 + 48), (unsigned __int64)v9 >= v10)
    && (unsigned __int64)v9 < *(unsigned int *)(a1 + 64) + v10 - 8
    && *v9 )
  {
    v15 = *(__int64 (__fastcall ***)())(a3 + 112);
    v14 = 8LL;
    result = ZwProtectVirtualMemory(-1LL, &v15, &v14, 4LL, &v16);
    if ( (int)result < 0 )
      return result;
    *v9 = LdrpValidateUserCallTarget;
    result = ZwProtectVirtualMemory(-1LL, &v15, &v14, v16, &v16);
    if ( (int)result < 0 )
      return result;
    if ( *v9 != LdrpValidateUserCallTarget )
      return 3221225534LL;
  }
  else
  {
    v9 = 0LL;
  }
  v12 = *(__int64 (__fastcall ***)())(a3 + 120);
  if ( !v12 )
    return 0LL;
  v13 = *(_QWORD *)(a1 + 48);
  if ( (unsigned __int64)v12 < v13 || (unsigned __int64)v12 >= *(unsigned int *)(a1 + 64) + v13 - 8 || !*v12 )
    return 0LL;
  v15 = v12;
  v14 = 8LL;
  result = ZwProtectVirtualMemory(-1LL, &v15, &v14, 4LL, &v16);
  if ( (int)result >= 0 )
  {
    *v12 = LdrpDispatchUserCallTarget;
    result = ZwProtectVirtualMemory(-1LL, &v15, &v14, v16, &v16);
    if ( (int)result >= 0 )
    {
      if ( v9 && *v9 == LdrpValidateUserCallTarget && *v12 == LdrpDispatchUserCallTarget )
        return 0LL;
      return 3221225534LL;
    }
  }
  return result;
}
