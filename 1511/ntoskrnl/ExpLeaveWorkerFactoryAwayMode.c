/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x14002E49C
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     ExpShutdownWorkerFactory @ 0x1400C5128 (ExpShutdownWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400C54A0 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400C59E0 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x1400C5D50 (NtSetInformationWorkerFactory.c)
 * Callees:
 *     KeDeregisterObjectNotification @ 0x14002E4EC (KeDeregisterObjectNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(_QWORD *Object)
{
  __int64 v2; // rcx

  v2 = Object[2];
  if ( (Object[18] & 0x400) != 0 && (unsigned __int8)KeDeregisterObjectNotification(*(_QWORD *)(v2 + 8), Object + 44) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 36) &= ~0x400u;
  }
  *((_DWORD *)Object + 36) &= ~0x200u;
}
