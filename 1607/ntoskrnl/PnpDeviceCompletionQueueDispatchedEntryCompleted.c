/*
 * XREFs of PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x140008480
 * Callers:
 *     PnpDeviceCompletionRoutine @ 0x1400083A0 (PnpDeviceCompletionRoutine.c)
 *     PipEnumerateDevice @ 0x1403F0B80 (PipEnumerateDevice.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PnpDeviceCompletionQueueDispatchedEntryCompleted(__int64 a1, _QWORD *a2)
{
  KIRQL v3; // al
  int v4; // r9d
  __int64 v5; // rdx
  KIRQL v6; // di
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_14031F928);
  v5 = *a2;
  v6 = v3;
  v7 = (_QWORD *)a2[1];
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (_QWORD *)*v7 != a2 )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v5 + 8) = v7;
  v8 = (_QWORD *)qword_14031F900;
  --dword_14031F8F0;
  if ( *(__int64 **)qword_14031F900 != &qword_14031F8F8 )
    __fastfail(3u);
  a2[1] = qword_14031F900;
  *a2 = &qword_14031F8F8;
  *v8 = a2;
  qword_14031F900 = (__int64)a2;
  KeReleaseSemaphoreEx((unsigned int)&byte_14031F908, 0, 1, v4, 0);
  KeReleaseSpinLock(&qword_14031F928, v6);
}
