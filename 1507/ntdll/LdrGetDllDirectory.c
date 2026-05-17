/*
 * XREFs of LdrGetDllDirectory @ 0x180072480
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyUnicodeString @ 0x18001FCD0 (RtlCopyUnicodeString.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall LdrGetDllDirectory(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // edi

  if ( LdrpAppPackagesPath.Buffer )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock, a2, a3, a4);
  v5 = *(unsigned __int16 *)(a1 + 2);
  v6 = (unsigned __int16)LdrpDllDirectory + 2;
  if ( v5 >= v6 )
  {
    RtlCopyUnicodeString((unsigned __int16 *)a1, (unsigned __int16 *)&LdrpDllDirectory);
    v7 = 0;
  }
  else
  {
    *(_WORD *)a1 = v6;
    v7 = -1073741789;
    if ( (_WORD)v5 )
      **(_WORD **)(a1 + 8) = 0;
  }
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  return v7;
}
