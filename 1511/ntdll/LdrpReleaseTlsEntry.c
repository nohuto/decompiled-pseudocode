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

__int64 __fastcall LdrpReleaseTlsEntry(void *a1, unsigned __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *TlsEntry; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax

  if ( !a2 )
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpTlsLock, 0LL, a3, a4);
  TlsEntry = (__int64 *)LdrpFindTlsEntry(a1);
  v7 = (unsigned __int64)TlsEntry;
  if ( TlsEntry )
  {
    v8 = *TlsEntry;
    v9 = (_QWORD *)TlsEntry[1];
    if ( *(_QWORD *)(v8 + 8) != v7 || *v9 != v7 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
    _bittestandreset((signed __int32 *)Src, *(_DWORD *)(v7 + 64));
  }
  if ( !a2 )
    RtlReleaseSRWLockExclusive(&LdrpTlsLock);
  if ( !v7 )
    return 3221226021LL;
  if ( a2 )
    *a2 = v7;
  else
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
  return 0LL;
}
