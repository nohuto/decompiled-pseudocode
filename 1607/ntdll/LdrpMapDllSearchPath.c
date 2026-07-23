/*
 * XREFs of LdrpMapDllSearchPath @ 0x18000E5B8
 * Callers:
 *     LdrpProcessWork @ 0x18000E18C (LdrpProcessWork.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 *     LdrpRemoveDataTableEntry @ 0x18000DC78 (LdrpRemoveDataTableEntry.c)
 *     LdrpIsSecurityEtwLoggingEnabled @ 0x18000DCF4 (LdrpIsSecurityEtwLoggingEnabled.c)
 *     LdrpAppCompatRedirect @ 0x18000E054 (LdrpAppCompatRedirect.c)
 *     LdrpFreeUnicodeString @ 0x18000E8EC (LdrpFreeUnicodeString.c)
 *     LdrpSearchPath @ 0x18000EBE0 (LdrpSearchPath.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000F974 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpReleaseDllPath @ 0x18001215C (LdrpReleaseDllPath.c)
 *     LdrpInitializeDllPath @ 0x1800121A8 (LdrpInitializeDllPath.c)
 *     LdrpHashUnicodeString @ 0x180018CF8 (LdrpHashUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpMapDllNtFileName @ 0x18002D39C (LdrpMapDllNtFileName.c)
 *     LdrpInsertDataTableEntry @ 0x18002F148 (LdrpInsertDataTableEntry.c)
 *     LdrpLoadContextReplaceModule @ 0x180073718 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     LdrpLogEtwDllSearchResults @ 0x1800D135C (LdrpLogEtwDllSearchResults.c)
 */

__int64 __fastcall LdrpMapDllSearchPath(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r14
  int v4; // r12d
  __int64 v5; // r15
  __int64 v6; // rax
  _BYTE *v7; // r13
  int v8; // eax
  int LoadedDllByNameLockHeld; // edi
  int v10; // ebx
  _UNICODE_STRING *p_SourceString; // rdx
  _UNICODE_STRING v12; // xmm1
  bool v13; // zf
  int v15; // eax
  char v16; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v17; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v18; // [rsp+60h] [rbp-A8h]
  _UNICODE_STRING SourceString; // [rsp+68h] [rbp-A0h] BYREF
  _UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  int v21[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v22; // [rsp+90h] [rbp-78h]
  __int64 v23; // [rsp+98h] [rbp-70h] BYREF
  _WORD *v24; // [rsp+A0h] [rbp-68h]
  _WORD v25[128]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v26[128]; // [rsp+1A8h] [rbp+A0h] BYREF

  LODWORD(v23) = 0x1000000;
  v18 = 0LL;
  *(_QWORD *)v21 = 0LL;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v22 = 0LL;
  v4 = 0;
  v16 = 0;
  v5 = *(_QWORD *)(a1 + 48);
  v24 = v25;
  v25[0] = 0;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  v17 = 0;
  if ( v2 && (v6 = *(unsigned int *)(v2 + 280), (_DWORD)v6) )
  {
    LdrpInitializeDllPath(*(_QWORD *)(v2 + 80), v6 | 1, v26);
    v7 = v26;
  }
  else
  {
    LdrpInitializeDllPath(0LL, 0LL, v26);
    v7 = *(_BYTE **)(a1 + 16);
  }
  while ( 1 )
  {
    v8 = LdrpSearchPath(
           a1,
           (int)v7,
           (*(unsigned __int8 *)(a1 + 24) >> 3) & 1,
           (int)v21,
           (__int64)&v23,
           (__int64)&String1_8,
           &SourceString,
           (__int64)&v16,
           (__int64)&v17);
    LoadedDllByNameLockHeld = v8;
    if ( v16 )
      *(_DWORD *)(v5 + 104) |= 1u;
    if ( v8 == -1073741515 )
      break;
    if ( v8 < 0 )
      goto LABEL_20;
LABEL_8:
    v4 = 1;
    LoadedDllByNameLockHeld = LdrpAppCompatRedirect(
                                a1,
                                (__int64)&SourceString,
                                (__int64)&String1_8,
                                (__int64)&v23,
                                0LL,
                                v8);
    if ( LoadedDllByNameLockHeld < 0 )
      goto LABEL_20;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000) != 0 )
      v17 |= 1u;
    v10 = LdrpHashUnicodeString(&String1_8);
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    LdrpRemoveDataTableEntry((__int64 *)v5);
    p_SourceString = &SourceString;
    if ( (*(_DWORD *)(a1 + 24) & 0x20) != 0 )
      p_SourceString = 0LL;
    LoadedDllByNameLockHeld = LdrpFindLoadedDllByNameLockHeld(&String1_8, p_SourceString, v10);
    if ( LoadedDllByNameLockHeld != -1073741515 )
    {
      v3 = v18;
      goto LABEL_18;
    }
    if ( (*(_BYTE *)(a1 + 24) & 8) == 0 )
    {
      v3 = v18;
LABEL_16:
      LdrpFreeUnicodeString(v5 + 72);
      v12 = String1_8;
      *(_UNICODE_STRING *)(v5 + 72) = SourceString;
      *(_UNICODE_STRING *)(v5 + 88) = v12;
      v13 = (*(_BYTE *)(a1 + 24) & 0x20) == 0;
      *(_QWORD *)&SourceString.Length = 0LL;
      SourceString.Buffer = 0LL;
      if ( !v13 )
        LdrpInsertDataTableEntry(v5);
      goto LABEL_18;
    }
    v15 = LdrpFindLoadedDllByNameLockHeld(0LL, &SourceString, v10);
    v3 = v18;
    LoadedDllByNameLockHeld = v15;
    if ( v15 >= 0 )
      *(_DWORD *)(v18 + 104) |= 1u;
    if ( v15 == -1073741515 )
      goto LABEL_16;
LABEL_18:
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( LoadedDllByNameLockHeld != -1073741515 )
      goto LABEL_20;
    LoadedDllByNameLockHeld = LdrpMapDllNtFileName(a1, &v23);
    if ( LoadedDllByNameLockHeld != 1073741838 )
      goto LABEL_20;
    if ( v25 != v24 )
      NtdllpFreeStringRoutine(v24);
    LODWORD(v23) = 0x1000000;
    v24 = v25;
    v25[0] = 0;
    LdrpFreeUnicodeString(&SourceString);
  }
  if ( !v4 )
    goto LABEL_8;
  LoadedDllByNameLockHeld = -1073741701;
LABEL_20:
  if ( v3 )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( LdrpIsSecurityEtwLoggingEnabled() )
  {
    LdrpLogEtwDllSearchResults(v17, a1);
  }
  if ( v25 != v24 )
    NtdllpFreeStringRoutine(v24);
  LODWORD(v23) = 0x1000000;
  v24 = v25;
  v25[0] = 0;
  LdrpFreeUnicodeString(&SourceString);
  LdrpReleaseDllPath(v26);
  return (unsigned int)LoadedDllByNameLockHeld;
}
