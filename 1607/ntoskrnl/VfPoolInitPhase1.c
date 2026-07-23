/*
 * XREFs of VfPoolInitPhase1 @ 0x140710A6C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140703204 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x1407B9E08 (VerifierInitSystem.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1403E5D3C (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

char *VfPoolInitPhase1()
{
  char *v0; // rbx
  HANDLE v1; // rcx
  char *result; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-38h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+8h] BYREF
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF

  v0 = (char *)&unk_14033EB88;
  do
  {
    KeInitializeEvent((PRKEVENT)v0 - 1, SynchronizationEvent, 0);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( PsCreateSystemThread(&ThreadHandle, 0, &ObjectAttributes, 0LL, 0LL, ViPoolDelayFreeTrimThreadRoutine, v0 - 40) >= 0 )
    {
      ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
      v1 = ThreadHandle;
      *(_QWORD *)v0 = Object;
      ZwClose(v1);
      InitializeSListHead((PSLIST_HEADER)(v0 - 40));
      _InterlockedExchange((volatile __int32 *)v0 + 2, 1);
    }
    v0 += 64;
    result = byte_14033EC08;
  }
  while ( (__int64)v0 < (__int64)byte_14033EC08 );
  return result;
}
