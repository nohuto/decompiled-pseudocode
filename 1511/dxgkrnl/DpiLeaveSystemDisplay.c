/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C0027EA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C00A9F00 (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  __int64 v0; // rcx
  LONG result; // eax

  if ( !byte_1C0046FD0 && !byte_1C0046FD1 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C0046FE0 + 2544), 2LL);
    v0 = qword_1C0046FE0;
    if ( *(_BYTE *)(qword_1C0046FE0 + 483) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(qword_1C0046FE0 + 24) + 64LL) + 2720LL));
      v0 = qword_1C0046FE0;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v0 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C0046FD8 + 72), 0);
    _InterlockedExchange64(&qword_1C0046D08, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
