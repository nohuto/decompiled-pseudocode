/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C002A8F0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00C1F3C (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  __int64 v0; // rcx
  LONG result; // eax

  if ( !byte_1C0057190 && !byte_1C0057191 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C00571A0 + 3688), 2LL);
    v0 = qword_1C00571A0;
    if ( *(_BYTE *)(qword_1C00571A0 + 483) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(qword_1C00571A0 + 24) + 64LL) + 3872LL));
      v0 = qword_1C00571A0;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v0 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C0057198 + 72), 0);
    _InterlockedExchange64(&qword_1C0056EC8, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
