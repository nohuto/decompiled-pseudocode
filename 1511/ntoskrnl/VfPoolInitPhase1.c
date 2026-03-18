/*
 * XREFs of VfPoolInitPhase1 @ 0x1406C49B4
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x1406B6A08 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x14076F860 (VerifierInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x1400F8DC8 (InitializeSListHead.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1404D20DC (PsCreateSystemThread.c)
 */

PPCW_REGISTRATION *VfPoolInitPhase1()
{
  PPCW_REGISTRATION *v0; // rbx
  HANDLE v1; // rcx
  PPCW_REGISTRATION *result; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v0 = (PPCW_REGISTRATION *)&unk_140306C68;
  do
  {
    KeInitializeEvent((PRKEVENT)v0 - 1, SynchronizationEvent, 0);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, ViPoolDelayFreeTrimThreadRoutine, v0 - 5) >= 0 )
    {
      ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
      v1 = ThreadHandle;
      *v0 = (PPCW_REGISTRATION)Object;
      ZwClose(v1);
      InitializeSListHead((PSLIST_HEADER)(v0 - 5));
      _InterlockedExchange((volatile __int32 *)v0 + 2, 1);
    }
    v0 += 8;
    result = &PcwpSynchCounterSet;
  }
  while ( (__int64)v0 < (__int64)&PcwpSynchCounterSet );
  return result;
}
