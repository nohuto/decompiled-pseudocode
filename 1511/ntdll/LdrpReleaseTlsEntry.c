/*
 * XREFs of LdrpReleaseTlsEntry @ 0x18007F9B0
 * Callers:
 *     LdrpLoadDependentModule @ 0x180013200 (LdrpLoadDependentModule.c)
 *     LdrpDereferenceModule @ 0x180032630 (LdrpDereferenceModule.c)
 *     LdrpHandleTlsData @ 0x180040964 (LdrpHandleTlsData.c)
 * Callees:
 *     LdrpFindTlsEntry @ 0x1800115E0 (LdrpFindTlsEntry.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
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
