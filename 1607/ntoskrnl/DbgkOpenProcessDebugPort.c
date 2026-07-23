/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x140617E54
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObOpenObjectByPointer @ 0x14041F280 (ObOpenObjectByPointer.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A6F78 (PspCheckForInvalidAccessByProtection.c)
 */

__int64 __fastcall DbgkOpenProcessDebugPort(__int64 a1, char a2, HANDLE *a3)
{
  NTSTATUS v6; // edi
  void *v7; // rbx

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
      if ( PspCheckForInvalidAccessByProtection(
             a2,
             (PS_PROTECTION)SBYTE2(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]),
             *(PS_PROTECTION *)(a1 + 1738)) )
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
