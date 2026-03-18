/*
 * XREFs of DbgkOpenProcessDebugPort @ 0x140666668
 * Callers:
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140509FD0 (PspCheckForInvalidAccessByProtection.c)
 */

__int64 __fastcall DbgkOpenProcessDebugPort(__int64 a1, char a2, HANDLE *a3, __int64 a4)
{
  NTSTATUS v7; // edi
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // r14
  void *v11; // rbx
  unsigned __int8 v12; // r14
  signed __int32 v13; // eax

  v7 = -1073740973;
  if ( *(_QWORD *)(a1 + 1056) )
  {
    v8 = KeAbPreAcquire((ULONG_PTR)&DbgkpProcessDebugPortMutex, 0LL, 0LL, a4);
    v9 = v8;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&DbgkpProcessDebugPortMutex, v8);
    if ( v9 )
      *(_BYTE *)(v9 + 26) |= 1u;
    qword_14034D468 = (__int64)KeGetCurrentThread();
    dword_14034D490 = CurrentIrql;
    v11 = *(void **)(a1 + 1056);
    if ( v11 )
      ObfReferenceObject(*(PVOID *)(a1 + 1056));
    qword_14034D468 = 0LL;
    v12 = dword_14034D490;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&DbgkpProcessDebugPortMutex, v13);
    __writecr8(v12);
    KeAbPostRelease((ULONG_PTR)&DbgkpProcessDebugPortMutex);
    if ( v11 )
    {
      if ( PspCheckForInvalidAccessByProtection(
             a2,
             BYTE2(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink),
             *(_BYTE *)(a1 + 1714)) )
      {
        v7 = -1073740014;
LABEL_14:
        ObfDereferenceObject(v11);
        return (unsigned int)v7;
      }
      v7 = ObOpenObjectByPointer(v11, a2 == 0 ? 0x200 : 0, 0LL, 0x2000000u, DbgkDebugObjectType, a2, a3);
      if ( v7 < 0 )
        goto LABEL_14;
    }
  }
  return (unsigned int)v7;
}
