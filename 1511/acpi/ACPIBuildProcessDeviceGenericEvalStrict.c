/*
 * XREFs of ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000D990
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000B874 (ACPIBuildCompleteCommon.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEvalStrict(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebp
  int v4; // r14d
  __int64 v5; // rbx
  unsigned int v6; // edi
  KIRQL v7; // dl
  __int64 v8; // rcx
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v11; // rcx
  signed __int32 v12; // ecx
  KIRQL v13; // di
  int v14; // edx
  __int64 v16; // rcx

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v4 = 0;
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x101213uLL, 0LL, 0LL);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 704LL);
  v6 = AcpiBuildDevicePowerNameLookup[v1];
  v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v8 = *(_QWORD *)(*(_QWORD *)v5 + 24LL);
  v9 = v8;
  if ( v8 )
  {
    while ( v6 != *(_DWORD *)(v9 + 32) )
    {
      v9 = *(_QWORD *)(v9 + 8);
      if ( v9 == v8 )
      {
        v9 = 0LL;
        break;
      }
      if ( !v9 )
        break;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
  if ( v9 )
  {
    v10 = (volatile signed __int32 *)(v9 + 112);
    AMLIReferenceHandleEx(v10);
  }
  else
  {
    v10 = 0LL;
  }
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v11 = *(volatile signed __int32 **)(a1 + 56);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  if ( v11 )
  {
    AMLIDereferenceHandleEx(v11);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v10;
  if ( !v10
    || (AMLIReferenceHandleEx(v10),
        v4 = AMLIAsyncEvalObject(v16, a1 + 80, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1),
        v4 != 259) )
  {
    v12 = *(_DWORD *)(a1 + 32);
    if ( v4 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
    }
    else
    {
      if ( v4 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v4;
        if ( v10 )
          v2 = *(_DWORD *)(*(_QWORD *)v10 + 32LL);
        KeBugCheckEx(0xA5u, 3uLL, (ULONG_PTR)v10, v4, v2);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v12, 1);
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v14 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v14;
      if ( (v14 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v14 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v13);
    }
  }
  if ( v10 )
    AMLIDereferenceHandleEx(v10);
  return 0LL;
}
