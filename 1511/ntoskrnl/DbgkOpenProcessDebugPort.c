/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x1405EE178
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A4564 (PspCheckForInvalidAccessByProtection.c)
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
             BYTE2(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next),
             *(_BYTE *)(a1 + 1722)) )
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
