/*
 * XREFs of ACPIBuildProcessDeviceGenericEval @ 0x1C000D190
 * Callers:
 *     <none>
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C0008ED4 (AMLIReferenceHandleEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     ACPIBuildScheduleDpc @ 0x1C000D64C (ACPIBuildScheduleDpc.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C0023B40 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEval(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rdi
  volatile signed __int32 *v6; // rcx
  signed __int32 v7; // ecx
  KIRQL v8; // bl
  __int64 v10; // rcx

  v2 = 0;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(unsigned int *)(a1 + 28);
  if ( (unsigned int)v4 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x10119AuLL, 0LL, 0LL);
  v5 = (volatile signed __int32 *)AMLIGetNamedChild(*(_QWORD *)(v3 + 704), AcpiBuildDevicePowerNameLookup[v4]);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v6 = *(volatile signed __int32 **)(a1 + 56);
  if ( v6 )
  {
    AMLIDereferenceHandleEx(v6);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v5;
  if ( !v5
    || (AMLIReferenceHandleEx((__int64)v5),
        v2 = AMLIAsyncEvalObject(v10, a1 + 80, 0LL, 0LL, ACPIBuildCompleteGeneric, a1),
        v2 != 259) )
  {
    v7 = *(_DWORD *)(a1 + 32);
    if ( v2 < 0 )
      *(_DWORD *)(a1 + 48) = v2;
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v7, 1);
    v8 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v8);
  }
  if ( v5 )
    AMLIDereferenceHandleEx(v5);
  return 0LL;
}
