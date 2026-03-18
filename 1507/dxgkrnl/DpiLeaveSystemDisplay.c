/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C00282E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C0061DC0 (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  __int64 v0; // rcx
  LONG result; // eax

  if ( !byte_1C0046F50 && !byte_1C0046F51 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C0046F60 + 2504), 2LL);
    v0 = qword_1C0046F60;
    if ( *(_BYTE *)(qword_1C0046F60 + 451) )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(qword_1C0046F60 + 24) + 64LL) + 2680LL));
      v0 = qword_1C0046F60;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v0 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C0046F58 + 72), 0);
    _InterlockedExchange64(&qword_1C0046C88, 0LL);
    return KeReleaseMutex((PRKMUTEX)Mutex, 0);
  }
  return result;
}
