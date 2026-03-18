/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x140617DA0
 * Callers:
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x1404203C0 (ObOpenObjectByPointer.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404BB248 (PspCheckForInvalidAccessByProtection.c)
 */

__int64 __fastcall DbgkOpenProcessDebugPort(__int64 a1, KPROCESSOR_MODE a2, HANDLE *a3)
{
  NTSTATUS v6; // edi
  void *v7; // rbx
  __int64 v8; // rdx
  _KPROCESS *Process; // rcx

  v6 = -1073740973;
  if ( *(_QWORD *)(a1 + 1056) )
  {
    ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
    v7 = *(void **)(a1 + 1056);
    if ( v7 )
      ObfReferenceObject(*(PVOID *)(a1 + 1056));
    KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
    if ( v7 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      LOBYTE(v8) = BYTE2(Process[2].ActiveProcessors.Bitmap[0]);
      LOBYTE(Process) = a2;
      if ( PspCheckForInvalidAccessByProtection((__int64)Process, v8, *(_BYTE *)(a1 + 1738)) )
      {
        v6 = -1073740014;
LABEL_8:
        ObfDereferenceObject(v7);
        return (unsigned int)v6;
      }
      v6 = ObOpenObjectByPointer(v7, a2 == 0 ? 0x200 : 0, 0LL, 0x2000000u, DbgkDebugObjectType, a2, a3);
      if ( v6 < 0 )
        goto LABEL_8;
    }
  }
  return (unsigned int)v6;
}
