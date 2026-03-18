/*
 * XREFs of ACPIWakeEnableDisableAsync @ 0x1C0021958
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AF5C (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0038450 (ACPIDeviceCancelWaitWakeIrp.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C000BC9C (ExAllocateFromNPagedLookasideList.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021B20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C0021C4C (ACPIWakeEnableDisablePciDevice.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024E60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIWakeEnableDisableAsync(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(__int64 *, _QWORD, _QWORD, __int64),
        __int64 a4)
{
  int v4; // edi
  char v6; // r12
  __int64 *v8; // r15
  _BYTE *v10; // rax
  _BYTE *v11; // r14
  KIRQL v12; // al
  _QWORD *v13; // rdx
  bool v14; // r13
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v19; // ecx
  _QWORD v21[16]; // [rsp+40h] [rbp-79h] BYREF

  v4 = 0;
  memset(v21, 0, 120);
  v6 = a2;
  v8 = 0LL;
  if ( (_BYTE)a2 )
  {
    if ( ++*(_DWORD *)(a1 + 496) != 1 )
    {
      if ( (*(_QWORD *)a1 & 0x800000000000000LL) == 0 )
        goto LABEL_6;
      LOBYTE(a2) = 1;
      goto LABEL_5;
    }
  }
  else if ( (*(_DWORD *)(a1 + 496))-- != 1 )
  {
    if ( (*(_QWORD *)a1 & 0x800000000000000LL) == 0 )
      goto LABEL_6;
    a2 = 1LL;
    goto LABEL_5;
  }
  v8 = *(__int64 **)(a1 + 400);
  if ( !v8 )
  {
    if ( (*(_QWORD *)a1 & 0x800000000000000LL) == 0 )
    {
LABEL_6:
      a3(v8, (unsigned int)v4, 0LL, a4);
      return 259LL;
    }
LABEL_5:
    ACPIWakeEnableDisablePciDevice(a1, a2);
    goto LABEL_6;
  }
  v10 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v11 = v10;
  if ( !v10 )
  {
    v4 = -1073741670;
    goto LABEL_6;
  }
  v10[24] = v6;
  *((_QWORD *)v10 + 4) = a3;
  *((_QWORD *)v10 + 5) = a4;
  *((_QWORD *)v10 + 2) = a1;
  *((_DWORD *)v10 + 7) = 1;
  v12 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v13 = *(_QWORD **)(a1 + 512);
  v14 = *(_QWORD *)(a1 + 504) == a1 + 504;
  *(_QWORD *)v11 = a1 + 504;
  *((_QWORD *)v11 + 1) = v13;
  if ( *v13 != a1 + 504 )
    __fastfail(3u);
  *v13 = v11;
  *(_QWORD *)(a1 + 512) = v11;
  KeReleaseSpinLock(&AcpiPowerLock, v12);
  if ( v14 )
  {
    if ( (*(_QWORD *)a1 & 0x800000000000000LL) != 0 && !v11[24] )
      ACPIWakeEnableDisablePciDevice(a1, 0LL);
    v15 = *(_DWORD *)(a1 + 544);
    WORD1(v21[0]) = 1;
    if ( (v15 & 0x40) != 0 )
    {
      v19 = *(_DWORD *)(a1 + 484);
      WORD1(v21[5]) = 1;
      WORD1(v21[10]) = 1;
      v16 = 3;
      LOBYTE(v4) = AcpiPowerLeavingS0 != 0;
      v21[2] = v6 != 0;
      v21[7] = v4;
      if ( v19 != 4 || (*(_DWORD *)a1 & 0x800LL) != 0 )
        v21[12] = v19 - 1;
      else
        v21[12] = 4LL;
    }
    else
    {
      v16 = 1;
      LOBYTE(v4) = v6 != 0;
      v21[2] = v4;
    }
    v17 = AMLIAsyncEvalObject(v8, 0LL, v16, v21, ACPIWakeEnableDisableAsyncCallBack, v11);
    if ( v17 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v8, v17, 0LL, v11);
  }
  return 259LL;
}
