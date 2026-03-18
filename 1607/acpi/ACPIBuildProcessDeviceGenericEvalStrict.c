/*
 * XREFs of ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C0011410
 * Callers:
 *     <none>
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     ACPIBuildCompleteCommon @ 0x1C000F100 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C0012410 (WPP_RECORDER_SF_LLqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEvalStrict(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r14d
  _QWORD *v3; // r15
  int v5; // ebp
  __int64 *v6; // rbx
  int v7; // edi
  KIRQL v8; // dl
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // rax
  ULONG_PTR v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 *v17; // r8
  __int64 v18; // rdx
  signed __int32 v19; // ecx
  KIRQL v20; // di
  int v21; // edx
  __int64 v23; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  v5 = 0;
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x101230uLL, 0LL, 0LL);
  v6 = (__int64 *)v3[89];
  v7 = AcpiBuildDevicePowerNameLookup[v1];
  v8 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v9 = *v6;
  v10 = *(__int64 **)(*v6 + 24);
  v11 = (__int64 *)(v9 + 24);
  if ( v11 == v10 )
  {
LABEL_5:
    v10 = 0LL;
  }
  else
  {
    while ( v7 != *((_DWORD *)v10 + 10) )
    {
      v10 = (__int64 *)*v10;
      if ( v11 == v10 )
        goto LABEL_5;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v8);
  if ( v10 )
  {
    v12 = (ULONG_PTR)(v10 + 15);
    AMLIReferenceHandleEx(v12);
  }
  else
  {
    v12 = 0LL;
  }
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v14 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  if ( v14 )
  {
    AMLIDereferenceHandleEx(v14, v13);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v12;
  if ( v12 )
  {
    AMLIReferenceHandleEx(v12);
    v5 = AMLIAsyncEvalObject(v23, a1 + 80, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
  }
  v15 = v3[1];
  v16 = qword_1C002C340;
  v17 = qword_1C002C340;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v16 = (__int64 *)v3[70];
    if ( (v15 & 0x400000000000LL) != 0 )
      v17 = (__int64 *)v3[71];
  }
  LOBYTE(v15) = 4;
  WPP_RECORDER_SF_LLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v15,
    (_DWORD)v17,
    25,
    BugCheckParameter4,
    *(_DWORD *)(a1 + 28) - 3,
    v5,
    (char)v3,
    (__int64)v16,
    (__int64)v17);
  if ( v5 != 259 )
  {
    v19 = *(_DWORD *)(a1 + 32);
    if ( v5 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
    }
    else
    {
      if ( v5 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v5;
        if ( v12 )
          v2 = *(_DWORD *)(*(_QWORD *)v12 + 40LL);
        KeBugCheckEx(0xA5u, 3uLL, v12, v5, v2);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v19, 1);
      v20 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v21 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v21;
      if ( (v21 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v21 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v20);
    }
  }
  if ( v12 )
    AMLIDereferenceHandleEx(v12, v18);
  return 0LL;
}
