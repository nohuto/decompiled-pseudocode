/*
 * XREFs of LdrpMapDllSearchPath @ 0x180042A04
 * Callers:
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpMapDllNtFileName @ 0x18003F1F8 (LdrpMapDllNtFileName.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180040448 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpInsertDataTableEntry @ 0x180040A6C (LdrpInsertDataTableEntry.c)
 *     LdrpHashUnicodeString @ 0x180040B80 (LdrpHashUnicodeString.c)
 *     LdrpFreeUnicodeString @ 0x180042C80 (LdrpFreeUnicodeString.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x180042DE0 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpAppCompatRedirect @ 0x180042DFC (LdrpAppCompatRedirect.c)
 *     LdrpRemoveDataTableEntry @ 0x180042EB8 (LdrpRemoveDataTableEntry.c)
 *     LdrpLoadContextReplaceModule @ 0x1800452D4 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800BD098 (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v1; // r14
  int v3; // r15d
  int v4; // eax
  int LoadedDllByNameLockHeld; // edi
  int v6; // ebx
  int v7; // r8d
  _UNICODE_STRING *v8; // rdx
  _UNICODE_STRING v9; // xmm1
  bool v10; // zf
  bool v12; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v13; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int128 v14; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v15; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING String1; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v17[2]; // [rsp+80h] [rbp-80h] BYREF
  _UNICODE_STRING v18; // [rsp+90h] [rbp-70h] BYREF
  _WORD v19[128]; // [rsp+A0h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v15 = 0LL;
  v17[0] = 0LL;
  v17[1] = 0LL;
  v3 = 0;
  v12 = 0;
  v18.Buffer = v19;
  v14 = 0uLL;
  *(_DWORD *)&v18.Length = 0x1000000;
  v19[0] = 0;
  v13 = 0;
  while ( 1 )
  {
    v4 = LdrpSearchPath(
           (const UNICODE_STRING *)a1,
           *(unsigned __int16 ***)(a1 + 16),
           (*(_BYTE *)(a1 + 24) & 8) != 0,
           v17,
           &v18,
           (__int64)&String1,
           (_UNICODE_STRING *)&v14,
           &v12,
           (__int64)&v13);
    LoadedDllByNameLockHeld = v4;
    if ( v12 )
      *(_DWORD *)(v1 + 104) |= 1u;
    if ( v4 == -1073741515 )
      break;
    if ( v4 < 0 )
      goto LABEL_16;
LABEL_6:
    v3 = 1;
    LoadedDllByNameLockHeld = LdrpAppCompatRedirect(
                                a1,
                                (unsigned int)&v14,
                                (unsigned int)&String1,
                                (unsigned int)&v18,
                                0LL,
                                v4);
    if ( LoadedDllByNameLockHeld < 0 )
      goto LABEL_16;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000) != 0 )
      v13 |= 1u;
    v6 = LdrpHashUnicodeString(&String1);
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    LdrpRemoveDataTableEntry(v1);
    v7 = *(_DWORD *)(a1 + 24);
    v8 = 0LL;
    if ( (v7 & 0x20) == 0 )
      v8 = (_UNICODE_STRING *)(v1 + 72);
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(&String1, v8, v7, &v15, v6);
    if ( LoadedDllByNameLockHeld == -1073741515 )
    {
      LdrpFreeUnicodeString(v1 + 72);
      v9 = String1;
      *(_OWORD *)(v1 + 72) = v14;
      *(_UNICODE_STRING *)(v1 + 88) = v9;
      v10 = (*(_BYTE *)(a1 + 24) & 0x20) == 0;
      v14 = 0uLL;
      if ( !v10 )
        LdrpInsertDataTableEntry(v1);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( LoadedDllByNameLockHeld != -1073741515 )
      goto LABEL_16;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName(a1, &v18);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_16;
    if ( v19 != v18.Buffer )
      NtdllpFreeStringRoutine(v18.Buffer);
    *(_DWORD *)&v18.Length = 0x1000000;
    v18.Buffer = v19;
    v19[0] = 0;
    LdrpFreeUnicodeString(&v14);
  }
  if ( !v3 )
    goto LABEL_6;
  LoadedDllByNameLockHeld = -1073741701;
LABEL_16:
  if ( v15 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( (unsigned __int8)LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v13, a1);
  }
  if ( v19 != v18.Buffer )
    NtdllpFreeStringRoutine(v18.Buffer);
  *(_DWORD *)&v18.Length = 0x1000000;
  v18.Buffer = v19;
  v19[0] = 0;
  LdrpFreeUnicodeString(&v14);
  return (unsigned int)LoadedDllByNameLockHeld;
}
