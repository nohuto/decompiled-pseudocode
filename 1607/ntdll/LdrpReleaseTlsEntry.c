/*
 * XREFs of LdrpReleaseTlsEntry @ 0x1800840FC
 * Callers:
 *     LdrpLoadDependentModule @ 0x180016670 (LdrpLoadDependentModule.c)
 *     LdrpHandleTlsData @ 0x18002DEC4 (LdrpHandleTlsData.c)
 *     LdrpDereferenceModule @ 0x180032228 (LdrpDereferenceModule.c)
 * Callees:
 *     LdrpFindTlsEntry @ 0x180012628 (LdrpFindTlsEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 */

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, unsigned int **a2)
{
  unsigned int *TlsEntry; // rax
  unsigned int *v5; // rbx
  __int64 v6; // rcx
  unsigned int **v7; // rax

  if ( !a2 )
    RtlAcquireSRWLockExclusive(&LdrpTlsLock);
  TlsEntry = (unsigned int *)LdrpFindTlsEntry(a1);
  v5 = TlsEntry;
  if ( TlsEntry )
  {
    v6 = *(_QWORD *)TlsEntry;
    v7 = (unsigned int **)*((_QWORD *)TlsEntry + 1);
    if ( *(unsigned int **)(v6 + 8) != v5 || *v7 != v5 )
      __fastfail(3u);
    *v7 = (unsigned int *)v6;
    *(_QWORD *)(v6 + 8) = v7;
    _bittestandreset((signed __int32 *)LdrpTlsBitmap.Buffer, v5[16]);
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v5 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v5;
  else
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
