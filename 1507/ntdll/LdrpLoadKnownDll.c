/*
 * XREFs of LdrpLoadKnownDll @ 0x18003FE98
 * Callers:
 *     LdrpLoadDependentModule @ 0x180022010 (LdrpLoadDependentModule.c)
 *     LdrpFindOrPrepareLoadingModule @ 0x18003F368 (LdrpFindOrPrepareLoadingModule.c)
 * Callees:
 *     LdrpLogDllState @ 0x180021298 (LdrpLogDllState.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     LdrpFindKnownDll @ 0x18003FFC4 (LdrpFindKnownDll.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180040448 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpMapDllWithSectionHandle @ 0x180040678 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInsertDataTableEntry @ 0x180040A6C (LdrpInsertDataTableEntry.c)
 *     LdrpHashUnicodeString @ 0x180040B80 (LdrpHashUnicodeString.c)
 *     LdrpCheckKnownDllFullPath @ 0x180042954 (LdrpCheckKnownDllFullPath.c)
 *     LdrpLoadContextReplaceModule @ 0x1800452D4 (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(_BYTE *a1)
{
  int v1; // eax
  _BYTE *v2; // rdi
  __int64 v3; // rsi
  int KnownDll; // ebx
  char v5; // al
  int v6; // ebx
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 6);
  v2 = a1;
  v3 = *((_QWORD *)a1 + 6);
  KnownDll = -1073741515;
  if ( (v1 & 0x200) != 0 )
  {
    v5 = LdrpCheckKnownDllFullPath(a1, v8);
    a1 = v8;
  }
  else
  {
    v5 = (v1 & 0x28) == 32;
  }
  if ( v5 )
  {
    KnownDll = LdrpFindKnownDll((PCUNICODE_STRING)a1, (PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)(v3 + 72), &Handle);
    if ( KnownDll >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 0x14A5u);
      v6 = LdrpHashUnicodeString(v3 + 88);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( (unsigned int)LdrpFindLoadedDllByNameLockHeld((PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)(v3 + 72), v6) == -1073741515 )
        LdrpInsertDataTableEntry(v3);
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      LdrpLogDllState(0, v3 + 72, 0x14AAu);
      KnownDll = LdrpMapDllWithSectionHandle(v2, Handle);
      NtClose(Handle);
    }
  }
  return (unsigned int)KnownDll;
}
