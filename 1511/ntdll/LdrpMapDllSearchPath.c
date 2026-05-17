/*
 * XREFs of LdrpMapDllSearchPath @ 0x18000A018
 * Callers:
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 * Callees:
 *     LdrpMapDllNtFileName @ 0x180007960 (LdrpMapDllNtFileName.c)
 *     LdrpRemoveDataTableEntry @ 0x180007DAC (LdrpRemoveDataTableEntry.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180007E28 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x1800088D8 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpAppCompatRedirect @ 0x1800090C4 (LdrpAppCompatRedirect.c)
 *     LdrpFreeUnicodeString @ 0x18000A308 (LdrpFreeUnicodeString.c)
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 *     LdrpInsertDataTableEntry @ 0x18000EB38 (LdrpInsertDataTableEntry.c)
 *     LdrpHashUnicodeString @ 0x180018FBC (LdrpHashUnicodeString.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpLoadContextReplaceModule @ 0x18007665C (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800C9DB8 (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // r14
  int v4; // r12d
  int v5; // eax
  int LoadedDllByNameLockHeld; // edi
  int v7; // ebx
  _BYTE *v8; // rdx
  int v9; // eax
  __int128 v10; // xmm1
  bool v11; // zf
  char v13; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v14; // [rsp+5Ch] [rbp-ACh] BYREF
  _BYTE v15[24]; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v16; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v17[2]; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING v18; // [rsp+98h] [rbp-70h] BYREF
  _WORD v19[128]; // [rsp+A8h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  memset(v15, 0, sizeof(v15));
  v17[0] = 0LL;
  v17[1] = 0LL;
  v3 = 0LL;
  v13 = 0;
  v18.Buffer = v19;
  v4 = 0;
  *(_DWORD *)&v18.Length = 0x1000000;
  v19[0] = 0;
  v14 = 0;
  while ( 1 )
  {
    v5 = LdrpSearchPath(
           a1,
           *(_QWORD *)(a1 + 16),
           (*(unsigned __int8 *)(a1 + 24) >> 3) & 1,
           (unsigned int)v17,
           (__int64)&v18,
           (__int64)&v16,
           (__int64)&v15[8],
           (__int64)&v13,
           (__int64)&v14);
    LoadedDllByNameLockHeld = v5;
    if ( v13 )
      *(_DWORD *)(v1 + 104) |= 1u;
    if ( v5 == -1073741515 )
      break;
    if ( v5 < 0 )
      goto LABEL_7;
LABEL_10:
    v4 = 1;
    LoadedDllByNameLockHeld = LdrpAppCompatRedirect(a1, (__int64)&v15[8], (int)&v16, (__int64)&v18, 0LL, v5);
    if ( LoadedDllByNameLockHeld < 0 )
      goto LABEL_7;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000) != 0 )
      v14 |= 1u;
    v7 = LdrpHashUnicodeString(&v16);
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    LdrpRemoveDataTableEntry((__int64 *)v1);
    v8 = &v15[8];
    if ( (*(_DWORD *)(a1 + 24) & 0x20) != 0 )
      v8 = 0LL;
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(
                                (__int64)&v16,
                                (__int64)v8,
                                *(unsigned int *)(a1 + 24),
                                (volatile signed __int32 **)v15,
                                v7);
    if ( LoadedDllByNameLockHeld != -1073741515 )
    {
      v3 = *(_QWORD *)v15;
      goto LABEL_25;
    }
    if ( (*(_BYTE *)(a1 + 24) & 8) == 0 )
    {
      v3 = *(_QWORD *)v15;
LABEL_22:
      LdrpFreeUnicodeString(v1 + 72);
      v10 = v16;
      *(_OWORD *)(v1 + 72) = *(_OWORD *)&v15[8];
      *(_OWORD *)(v1 + 88) = v10;
      v11 = (*(_BYTE *)(a1 + 24) & 0x20) == 0;
      *(_QWORD *)&v15[8] = 0LL;
      *(_QWORD *)&v15[16] = 0LL;
      if ( !v11 )
        LdrpInsertDataTableEntry(v1);
      goto LABEL_25;
    }
    v9 = LdrpFindLoadedDllByNameLockHeld(0LL, (__int64)&v15[8], 0LL, (volatile signed __int32 **)v15, v7);
    v3 = *(_QWORD *)v15;
    LoadedDllByNameLockHeld = v9;
    if ( v9 >= 0 )
      *(_DWORD *)(*(_QWORD *)v15 + 104LL) |= 1u;
    if ( v9 == -1073741515 )
      goto LABEL_22;
LABEL_25:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( LoadedDllByNameLockHeld != -1073741515 )
      goto LABEL_7;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName(a1, &v18);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_7;
    if ( v19 != v18.Buffer )
      NtdllpFreeStringRoutine();
    *(_DWORD *)&v18.Length = 0x1000000;
    v18.Buffer = v19;
    v19[0] = 0;
    LdrpFreeUnicodeString(&v15[8]);
  }
  if ( !v4 )
    goto LABEL_10;
  LoadedDllByNameLockHeld = -1073741701;
LABEL_7:
  if ( v3 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v14, a1);
  }
  if ( v19 != v18.Buffer )
    NtdllpFreeStringRoutine();
  *(_DWORD *)&v18.Length = 0x1000000;
  v18.Buffer = v19;
  v19[0] = 0;
  LdrpFreeUnicodeString(&v15[8]);
  return (unsigned int)LoadedDllByNameLockHeld;
}
