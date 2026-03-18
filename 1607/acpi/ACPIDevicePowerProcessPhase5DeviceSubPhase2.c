/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000FA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qdqss @ 0x1C000FCF0 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0012530 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C001341C (WPP_RECORDER_SF_qLqss.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memmove @ 0x1C002BE80 (memmove.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // r14
  unsigned int v3; // edi
  _OWORD *PoolWithTag; // rbp
  int v5; // edx
  __int64 *v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 result; // rax
  KIRQL v12; // al
  __int64 v13; // rcx
  KIRQL v14; // r12
  __int64 v15; // rdx
  _OWORD *v16; // rax
  size_t v17; // r8
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // edx
  __int64 *v21; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = qword_1C002C340;
  v3 = 0;
  PoolWithTag = 0LL;
  v5 = 0;
  v7 = qword_1C002C340;
  *(_DWORD *)(a1 + 212) = 5;
  v8 = qword_1C002C340;
  if ( v1 )
  {
    v9 = *(_QWORD *)(v1 + 8);
    v5 = v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = *(__int64 **)(v1 + 560);
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = *(__int64 **)(v1 + 568);
    }
  }
  WPP_RECORDER_SF_qdqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    10,
    73,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a1,
    5,
    v5,
    (__int64)v7,
    (__int64)v8);
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0
    || (v10 = AMLIGetNamedChild(*(_QWORD *)(v1 + 712), 1397904223LL)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 912), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_6:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v13 = *(_QWORD *)(v1 + 640);
  v14 = v12;
  if ( v13 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(v13 + 24) + 40LL, 0x4F706341u);
    if ( PoolWithTag )
    {
      v16 = *(_OWORD **)(v1 + 640);
      *PoolWithTag = *v16;
      PoolWithTag[1] = v16[1];
      v17 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(*(_QWORD *)(v1 + 640) + 32LL), v17);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
  if ( PoolWithTag )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 912), 0xFFFFFFFFFFFFFEFFuLL);
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v18 = AMLIAsyncEvalObject(v10, 0LL, 1LL, PoolWithTag, ACPIDeviceCompleteGenericPhase, a1);
    v19 = *(_QWORD *)(v1 + 8);
    v20 = 0;
    v3 = v18;
    v21 = qword_1C002C340;
    if ( (v19 & 0x200000000000LL) != 0 )
    {
      v2 = *(__int64 **)(v1 + 560);
      if ( (v19 & 0x400000000000LL) != 0 )
        v21 = *(__int64 **)(v1 + 568);
    }
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_qLqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      10,
      74,
      (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
      a1,
      v3,
      v1,
      (__int64)v2,
      (__int64)v21);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  AMLIDereferenceHandleEx(v10, v15);
  result = 259LL;
  if ( v3 != 259 )
    goto LABEL_6;
  return result;
}
