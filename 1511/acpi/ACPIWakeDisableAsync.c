/*
 * XREFs of ACPIWakeDisableAsync @ 0x1C0041A5C
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C003DC9C (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C003DD50 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C003DE48 (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1C000BC9C (ExAllocateFromNPagedLookasideList.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0021B20 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C0021C4C (ACPIWakeEnableDisablePciDevice.c)
 *     __security_check_cookie @ 0x1C0024C50 (__security_check_cookie.c)
 *     memset @ 0x1C00251C0 (memset.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C003DF90 (OSNotifyDeviceWakeCallBack.c)
 */

__int64 __fastcall ACPIWakeDisableAsync(__int64 a1, _QWORD **a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  _QWORD *v7; // rax
  int v8; // r14d
  KIRQL v9; // al
  KIRQL v10; // r15
  __int64 *v11; // rbp
  _QWORD *v13; // rax
  _QWORD *v14; // rsi
  _QWORD *v15; // rcx
  bool v16; // r14
  int v17; // eax
  int v18; // eax
  _QWORD v19[16]; // [rsp+30h] [rbp-C8h] BYREF

  v4 = 0;
  memset(v19, 0, 120);
  v7 = *a2;
  v8 = 0;
  while ( v7 != a2 )
  {
    v7 = (_QWORD *)*v7;
    ++v8;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  *(_DWORD *)(a1 + 496) -= v8;
  v10 = v9;
  v11 = *(__int64 **)(a1 + 400);
  if ( !v11 )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 496) )
  {
    if ( (*(_QWORD *)a1 & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 1);
    goto LABEL_8;
  }
  v13 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v14 = v13;
  if ( !v13 )
  {
    v4 = -1073741670;
LABEL_8:
    KeReleaseSpinLock(&AcpiPowerLock, v10);
    OSNotifyDeviceWakeCallBack((__int64)v11, v4, 0LL, a4);
    return 259LL;
  }
  *((_BYTE *)v13 + 24) = 0;
  *((_DWORD *)v13 + 7) = v8;
  v13[4] = OSNotifyDeviceWakeCallBack;
  v13[5] = a4;
  v13[2] = a1;
  v15 = *(_QWORD **)(a1 + 512);
  v16 = *(_QWORD *)(a1 + 504) == a1 + 504;
  *v13 = a1 + 504;
  v13[1] = v15;
  if ( *v15 != a1 + 504 )
    __fastfail(3u);
  *v15 = v13;
  *(_QWORD *)(a1 + 512) = v13;
  KeReleaseSpinLock(&AcpiPowerLock, v10);
  if ( v16 )
  {
    if ( (*(_QWORD *)a1 & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 0);
    v17 = *(_DWORD *)(a1 + 544);
    WORD1(v19[0]) = 1;
    v19[2] = 0LL;
    if ( (v17 & 0x40) != 0 )
    {
      WORD1(v19[5]) = 1;
      v19[7] = 0LL;
      WORD1(v19[10]) = 1;
      v19[12] = 0LL;
      v18 = AMLIAsyncEvalObject(v11, 0LL, 3u, v19, ACPIWakeEnableDisableAsyncCallBack, v14);
    }
    else
    {
      v18 = AMLIAsyncEvalObject(v11, 0LL, 1u, v19, ACPIWakeEnableDisableAsyncCallBack, v14);
    }
    if ( v18 != 259 )
      ACPIWakeEnableDisableAsyncCallBack(v11, v18, 0LL, v14);
  }
  return 259LL;
}
