/*
 * XREFs of ACPIBuildProcessDeviceGenericEval @ 0x1C0010E20
 * Callers:
 *     <none>
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     WPP_RECORDER_SF_LLqss @ 0x1C0012410 (WPP_RECORDER_SF_LLqss.c)
 *     ACPIBuildScheduleDpc @ 0x1C0013240 (ACPIBuildScheduleDpc.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDeviceGenericEval(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebp
  _QWORD *v3; // r14
  __int64 *v5; // rbx
  int v6; // edi
  KIRQL v7; // dl
  __int64 v8; // rax
  __int64 *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  signed __int32 v14; // ecx
  KIRQL v15; // bl
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 *v19; // rdx
  __int64 v21; // rcx
  int BugCheckParameter4; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+48h] [rbp-20h]

  v1 = *(unsigned int *)(a1 + 28);
  v2 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  if ( (unsigned int)v1 >= 0x22 )
    KeBugCheckEx(0xA3u, 1uLL, 0x1011B6uLL, 0LL, 0LL);
  v5 = (__int64 *)v3[89];
  v6 = AcpiBuildDevicePowerNameLookup[v1];
  v7 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v8 = *v5;
  v9 = *(__int64 **)(*v5 + 24);
  v10 = (__int64 *)(v8 + 24);
  if ( v10 == v9 )
  {
LABEL_5:
    v9 = 0LL;
  }
  else
  {
    while ( v6 != *((_DWORD *)v9 + 10) )
    {
      v9 = (__int64 *)*v9;
      if ( v10 == v9 )
        goto LABEL_5;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v7);
  if ( v9 )
  {
    v11 = (__int64)(v9 + 15);
    AMLIReferenceHandleEx((__int64)(v9 + 15));
  }
  else
  {
    v11 = 0LL;
  }
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 28) + 1;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
  {
    AMLIDereferenceHandleEx(v13, v12);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v11;
  if ( !v11
    || (AMLIReferenceHandleEx(v11),
        v2 = AMLIAsyncEvalObject(v21, a1 + 80, 0LL, 0LL, ACPIBuildCompleteGeneric, a1),
        v2 != 259) )
  {
    v14 = *(_DWORD *)(a1 + 32);
    if ( v2 < 0 )
      *(_DWORD *)(a1 + 48) = v2;
    *(_DWORD *)(a1 + 32) = 2;
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v14, 1);
    v15 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
    ACPIBuildScheduleDpc();
    KeReleaseSpinLock(&AcpiBuildQueueLock, v15);
  }
  if ( v11 )
    AMLIDereferenceHandleEx(v11, v16);
  v17 = v3[1];
  v18 = qword_1C002C340;
  v19 = qword_1C002C340;
  if ( (v17 & 0x200000000000LL) != 0 )
  {
    v18 = (__int64 *)v3[70];
    if ( (v17 & 0x400000000000LL) != 0 )
      v19 = (__int64 *)v3[71];
  }
  v23 = (__int64)v19;
  LOBYTE(v19) = 4;
  WPP_RECORDER_SF_LLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v19,
    0,
    24,
    BugCheckParameter4,
    *(_DWORD *)(a1 + 28) - 3,
    v2,
    (char)v3,
    (__int64)v18,
    v23);
  return 0LL;
}
