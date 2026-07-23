/*
 * XREFs of LdrpLoadKnownDll @ 0x1800105C0
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x18000C4E4 (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 * Callees:
 *     LdrpFindLoadedDllByNameLockHeld @ 0x180007E28 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpFindKnownDll @ 0x18000E074 (LdrpFindKnownDll.c)
 *     LdrpMapDllWithSectionHandle @ 0x18000E5C0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInsertDataTableEntry @ 0x18000EB38 (LdrpInsertDataTableEntry.c)
 *     LdrpLogDllState @ 0x180012678 (LdrpLogDllState.c)
 *     LdrpHashUnicodeString @ 0x180018FBC (LdrpHashUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     LdrpCheckKnownDllFullPath @ 0x180072BE0 (LdrpCheckKnownDllFullPath.c)
 *     LdrpLoadContextReplaceModule @ 0x18007665C (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

__int64 __fastcall LdrpLoadKnownDll(UNICODE_STRING *p_Source)
{
  int Buffer; // eax
  __int64 v2; // rdi
  __int64 v3; // rsi
  int KnownDll; // ebx
  char v5; // al
  int v6; // ebx
  UNICODE_STRING Source; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  Buffer = (int)p_Source[1].Buffer;
  v2 = (__int64)p_Source;
  v3 = *(_QWORD *)&p_Source[3].Length;
  KnownDll = -1073741515;
  if ( (Buffer & 0x200) != 0 )
  {
    v5 = LdrpCheckKnownDllFullPath(p_Source, &Source);
    p_Source = &Source;
  }
  else
  {
    v5 = (Buffer & 0x28) == 32;
  }
  if ( v5 )
  {
    KnownDll = LdrpFindKnownDll(p_Source, (PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)(v3 + 72), &Handle);
    if ( KnownDll >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 5285LL);
      v9 = 0LL;
      v6 = LdrpHashUnicodeString(v3 + 88);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      KnownDll = LdrpFindLoadedDllByNameLockHeld(
                   (PUNICODE_STRING)(v3 + 88),
                   (PUNICODE_STRING)(v3 + 72),
                   *(_DWORD *)(v2 + 24),
                   &v9,
                   v6);
      if ( KnownDll == -1073741515 )
        LdrpInsertDataTableEntry(v3);
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( v9 )
      {
        LdrpLoadContextReplaceModule(v2);
      }
      else
      {
        LdrpLogDllState(0LL, v3 + 72, 5290LL);
        KnownDll = LdrpMapDllWithSectionHandle(v2, Handle);
      }
      NtClose(Handle);
    }
  }
  return (unsigned int)KnownDll;
}
