/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011BB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000F100 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckDep(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 *v7; // rdx
  signed __int32 v8; // ecx
  KIRQL v9; // di
  int v10; // edx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 5;
  v3 = 0;
  memset((void *)(a1 + 88), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 912) & 0x20) == 0 )
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 )
    {
      AMLIDereferenceHandleEx(v12, v4);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v13 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1346716767LL);
    *(_QWORD *)(a1 + 56) = v13;
    if ( v13 )
    {
      v3 = AMLIAsyncEvalObject(v13, a1 + 88, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      _InterlockedOr64((volatile signed __int64 *)(v1 + 912), 0x20uLL);
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    }
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = qword_1C002C340;
  v7 = qword_1C002C340;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(__int64 **)(v1 + 560);
    if ( (v5 & 0x400000000000LL) != 0 )
      v7 = *(__int64 **)(v1 + 568);
  }
  v14 = (__int64)v7;
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v7,
    6,
    57,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v3,
    v1,
    (__int64)v6,
    v14);
  if ( v3 != 259 )
  {
    v8 = *(_DWORD *)(a1 + 32);
    if ( v3 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
    }
    else
    {
      if ( v3 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v3;
        KeBugCheckEx(0xA5u, 3uLL, 0LL, v3, 0LL);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v8, 1);
      v9 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v10 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v10;
      if ( (v10 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v10 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v9);
    }
  }
  return (unsigned int)v3;
}
