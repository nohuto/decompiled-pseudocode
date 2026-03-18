/*
 * XREFs of ExpLeaveWorkerFactoryAwayMode @ 0x1400F9B2C
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     NtSetInformationWorkerFactory @ 0x1400F7C10 (NtSetInformationWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1400F8A70 (NtReleaseWorkerFactoryWorker.c)
 *     ExpWorkerFactoryCheckCreate @ 0x1400F8F30 (ExpWorkerFactoryCheckCreate.c)
 *     ExpShutdownWorkerFactory @ 0x1400F9688 (ExpShutdownWorkerFactory.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeDeregisterObjectNotification @ 0x1400F9C48 (KeDeregisterObjectNotification.c)
 */

void __fastcall ExpLeaveWorkerFactoryAwayMode(_QWORD *Object)
{
  __int64 v2; // rcx

  v2 = Object[2];
  if ( (Object[19] & 0x400) != 0 && (unsigned __int8)KeDeregisterObjectNotification(*(_QWORD *)(v2 + 8)) )
  {
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
    *((_DWORD *)Object + 38) &= ~0x400u;
  }
  *((_DWORD *)Object + 38) &= ~0x200u;
}
