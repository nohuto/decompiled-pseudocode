/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x14002DDCC
 * Callers:
 *     ExpShutdownWorkerFactory @ 0x14002DA50 (ExpShutdownWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x14006C640 (ExpWorkerFactoryCheckCreate.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 * Callees:
 *     KeDeregisterObjectNotification @ 0x14002DE1C (KeDeregisterObjectNotification.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
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
