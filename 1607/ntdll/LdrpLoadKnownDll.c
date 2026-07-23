/*
 * XREFs of LdrpLoadKnownDll @ 0x180012030
 * Callers:
 *     LdrpFindOrPrepareLoadingModule @ 0x18000F88C (LdrpFindOrPrepareLoadingModule.c)
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 * Callees:
 *     LdrpCheckKnownDllFullPath @ 0x18000F534 (LdrpCheckKnownDllFullPath.c)
 *     LdrpFindLoadedDllByNameLockHeld @ 0x18000F974 (LdrpFindLoadedDllByNameLockHeld.c)
 *     LdrpFindKnownDll @ 0x1800101A0 (LdrpFindKnownDll.c)
 *     LdrpLogDllState @ 0x180015E10 (LdrpLogDllState.c)
 *     LdrpHashUnicodeString @ 0x180018CF8 (LdrpHashUnicodeString.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpInsertDataTableEntry @ 0x18002F148 (LdrpInsertDataTableEntry.c)
 *     LdrpMapDllWithSectionHandle @ 0x18002F25C (LdrpMapDllWithSectionHandle.c)
 *     LdrpLoadContextReplaceModule @ 0x180073718 (LdrpLoadContextReplaceModule.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
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
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)a1 + 6);
  v2 = a1;
  v3 = *((_QWORD *)a1 + 6);
  KnownDll = -1073741515;
  if ( (v1 & 0x200) != 0 )
  {
    v5 = LdrpCheckKnownDllFullPath((unsigned __int16 *)a1, (__int64)v8);
    a1 = v8;
  }
  else
  {
    v5 = (v1 & 0x28) == 32;
  }
  if ( v5 )
  {
    KnownDll = LdrpFindKnownDll((UNICODE_STRING *)a1, (PUNICODE_STRING)(v3 + 88), (PUNICODE_STRING)(v3 + 72), &Handle);
    if ( KnownDll >= 0 )
    {
      LdrpLogDllState(*(_QWORD *)(v3 + 48), v3 + 72, 5285LL);
      v9 = 0LL;
      v6 = LdrpHashUnicodeString(v3 + 88);
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      KnownDll = LdrpFindLoadedDllByNameLockHeld(
                   (PUNICODE_STRING)(v3 + 88),
                   (PUNICODE_STRING)(v3 + 72),
                   *((_DWORD *)v2 + 6),
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
