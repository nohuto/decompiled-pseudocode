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
  int v8; // r8d
  _UNICODE_STRING *v9; // rdx
  int v10; // eax
  _UNICODE_STRING v11; // xmm1
  bool v12; // zf
  char v14; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v15; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v16; // [rsp+60h] [rbp-A8h] BYREF
  _UNICODE_STRING v17; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v19[2]; // [rsp+88h] [rbp-80h] BYREF
  _UNICODE_STRING v20; // [rsp+98h] [rbp-70h] BYREF
  _WORD v21[128]; // [rsp+A8h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v16 = 0LL;
  v19[0] = 0LL;
  v19[1] = 0LL;
  v3 = 0LL;
  v14 = 0;
  v20.Buffer = v21;
  v4 = 0;
  *(_DWORD *)&v20.Length = 0x1000000;
  *(_QWORD *)&v17.Length = 0LL;
  v17.Buffer = 0LL;
  v21[0] = 0;
  v15 = 0;
  while ( 1 )
  {
    v5 = LdrpSearchPath(
           a1,
           *(_QWORD *)(a1 + 16),
           (*(unsigned __int8 *)(a1 + 24) >> 3) & 1,
           (unsigned int)v19,
           (__int64)&v20,
           (__int64)&String1_8,
           (__int64)&v17,
           (__int64)&v14,
           (__int64)&v15);
    LoadedDllByNameLockHeld = v5;
    if ( v14 )
      *(_DWORD *)(v1 + 104) |= 1u;
    if ( v5 == -1073741515 )
      break;
    if ( v5 < 0 )
      goto LABEL_7;
LABEL_10:
    v4 = 1;
    LoadedDllByNameLockHeld = LdrpAppCompatRedirect(a1, (__int64)&v17, (__int64)&String1_8, (__int64)&v20, 0LL, v5);
    if ( LoadedDllByNameLockHeld < 0 )
      goto LABEL_7;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000) != 0 )
      v15 |= 1u;
    v7 = LdrpHashUnicodeString(&String1_8);
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    LdrpRemoveDataTableEntry((__int64 *)v1);
    v8 = *(_DWORD *)(a1 + 24);
    v9 = &v17;
    if ( (v8 & 0x20) != 0 )
      v9 = 0LL;
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(&String1_8, v9, v8, &v16, v7);
    if ( LoadedDllByNameLockHeld != -1073741515 )
    {
      v3 = v16;
      goto LABEL_25;
    }
    if ( (*(_BYTE *)(a1 + 24) & 8) == 0 )
    {
      v3 = v16;
LABEL_22:
      LdrpFreeUnicodeString(v1 + 72);
      v11 = String1_8;
      *(_UNICODE_STRING *)(v1 + 72) = v17;
      *(_UNICODE_STRING *)(v1 + 88) = v11;
      v12 = (*(_BYTE *)(a1 + 24) & 0x20) == 0;
      *(_QWORD *)&v17.Length = 0LL;
      v17.Buffer = 0LL;
      if ( !v12 )
        LdrpInsertDataTableEntry(v1);
      goto LABEL_25;
    }
    v10 = LdrpFindLoadedDllByNameLockHeld(0LL, &v17, 0, &v16, v7);
    v3 = v16;
    LoadedDllByNameLockHeld = v10;
    if ( v10 >= 0 )
      *(_DWORD *)(v16 + 104) |= 1u;
    if ( v10 == -1073741515 )
      goto LABEL_22;
LABEL_25:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( LoadedDllByNameLockHeld != -1073741515 )
      goto LABEL_7;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName(a1, &v20);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_7;
    if ( v21 != v20.Buffer )
      NtdllpFreeStringRoutine();
    *(_DWORD *)&v20.Length = 0x1000000;
    v20.Buffer = v21;
    v21[0] = 0;
    LdrpFreeUnicodeString(&v17);
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
    LdrpLogEtwDllSearchResults(v15, a1);
  }
  if ( v21 != v20.Buffer )
    NtdllpFreeStringRoutine();
  *(_DWORD *)&v20.Length = 0x1000000;
  v20.Buffer = v21;
  v21[0] = 0;
  LdrpFreeUnicodeString(&v17);
  return (unsigned int)LoadedDllByNameLockHeld;
}
