/*
 * XREFs of ACPIBuildProcessDeviceGenericEval @ 0x1C000D870
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     ACPIBuildScheduleDpc @ 0x1C000DBD0 (ACPIBuildScheduleDpc.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
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
    || (AMLIReferenceHandleEx(v5),
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
