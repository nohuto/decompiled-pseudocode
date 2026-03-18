/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase2 @ 0x1C000BE10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C280 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C0018430 (AMLIAsyncEvalObject.c)
 *     memmove @ 0x1C0023800 (memmove.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase2(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // edi
  _OWORD *PoolWithTag; // rsi
  __int64 v5; // r14
  __int64 result; // rax
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // r15
  _OWORD *v10; // rax
  size_t v11; // r8

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 212) = 5;
  v3 = 0;
  PoolWithTag = 0LL;
  if ( (*(_QWORD *)v1 & 0x8000000000000LL) != 0 || (v5 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1397904223LL)) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 904), 0xFFFFFFFFFFFFFEFFuLL);
LABEL_4:
    ACPIDeviceCompleteGenericPhase(0LL, v3, 0LL, a1);
    return 0LL;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v8 = *(_QWORD *)(v1 + 632);
  v9 = v7;
  if ( v8 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *(unsigned int *)(v8 + 24) + 40LL, 0x4F706341u);
    if ( PoolWithTag )
    {
      v10 = *(_OWORD **)(v1 + 632);
      *PoolWithTag = *v10;
      PoolWithTag[1] = v10[1];
      v11 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(*(_QWORD *)(v1 + 632) + 32LL), v11);
    }
    else
    {
      v3 = -1073741670;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v9);
  if ( PoolWithTag )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v1 + 904), 0xFFFFFFFFFFFFFEFFuLL);
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v3 = AMLIAsyncEvalObject(v5, 0LL, 1LL, PoolWithTag, ACPIDeviceCompleteGenericPhase, a1);
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  AMLIDereferenceHandleEx(v5);
  result = 259LL;
  if ( v3 != 259 )
    goto LABEL_4;
  return result;
}
