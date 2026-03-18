/*
 * XREFs of ACPIWakeDisableAsync @ 0x1C0058538
 * Callers:
 *     OSNotifyDeviceWake @ 0x1C00515DC (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C0051808 (OSNotifyDeviceWakeByGPEEvent.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1C00519CC (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0005A60 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C000CFF4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0051B60 (OSNotifyDeviceWakeCallBack.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C00589F8 (ACPIWakeEnableDisablePciDevice.c)
 *     WPP_RECORDER_SF_LLLqss @ 0x1C0058C54 (WPP_RECORDER_SF_LLLqss.c)
 */

__int64 __fastcall ACPIWakeDisableAsync(__int64 a1, _QWORD **a2, __int64 a3, _QWORD **a4)
{
  char v4; // di
  _QWORD *v8; // rax
  int v9; // ebp
  const char *v10; // rsi
  KIRQL v11; // r12
  __int64 v12; // r8
  __int64 *v13; // r9
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 *v17; // r15
  __int64 v18; // rax
  const char *v19; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // r14
  _QWORD *v23; // rax
  _QWORD *v24; // rcx
  bool v25; // bp
  int v26; // eax
  int v27; // eax
  __int64 v28; // rcx
  int v29; // edi
  const char *v30; // rax
  __int64 v31; // rax
  const char *v32; // rcx
  int v33; // [rsp+30h] [rbp-F8h]
  int v34; // [rsp+38h] [rbp-F0h]
  __int64 v35; // [rsp+40h] [rbp-E8h]
  __int64 *v36; // [rsp+48h] [rbp-E0h]
  __int64 *v37; // [rsp+50h] [rbp-D8h]
  _QWORD v38[16]; // [rsp+60h] [rbp-C8h] BYREF

  v4 = 0;
  memset(v38, 0, 0x78uLL);
  v8 = *a2;
  v9 = 0;
  while ( v8 != a2 )
  {
    v8 = (_QWORD *)*v8;
    ++v9;
  }
  v10 = (const char *)qword_1C002C340;
  v11 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v12 = 0LL;
  v13 = qword_1C002C340;
  v14 = qword_1C002C340;
  if ( a1 )
  {
    v15 = *(_QWORD *)(a1 + 8);
    v12 = a1;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v13 = *(__int64 **)(a1 + 560);
      if ( (v15 & 0x400000000000LL) != 0 )
        v14 = *(__int64 **)(a1 + 568);
    }
  }
  v37 = v14;
  v36 = v13;
  v35 = v12;
  v34 = *(_DWORD *)(a1 + 504) - v9;
  v33 = v9;
  WPP_RECORDER_SF_LLLqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v14, v12, (_DWORD)v13);
  *(_DWORD *)(a1 + 504) -= v9;
  v17 = *(__int64 **)(a1 + 408);
  if ( !v17 )
    goto LABEL_12;
  if ( *(_DWORD *)(a1 + 504) )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) != 0 )
    {
      LOBYTE(v16) = 1;
      ACPIWakeEnableDisablePciDevice(a1, v16);
    }
    goto LABEL_12;
  }
  v21 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v22 = v21;
  if ( !v21 )
  {
    v4 = -102;
LABEL_12:
    KeReleaseSpinLock(&AcpiPowerLock, v11);
    v18 = *(_QWORD *)(a1 + 8);
    v19 = (const char *)qword_1C002C340;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 560);
      if ( (v18 & 0x400000000000LL) != 0 )
        v19 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xEu,
      (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
      v4,
      a1,
      v10,
      v19);
    OSNotifyDeviceWakeCallBack((__int64)v17, v4, 0LL, a4);
    return 259LL;
  }
  *((_BYTE *)v21 + 24) = 0;
  *((_DWORD *)v21 + 7) = v9;
  v21[4] = OSNotifyDeviceWakeCallBack;
  v23 = (_QWORD *)(a1 + 512);
  v22[5] = a4;
  v22[2] = a1;
  v24 = *(_QWORD **)(a1 + 520);
  v25 = *v23 == (_QWORD)v23;
  if ( *v24 != a1 + 512 )
    __fastfail(3u);
  v22[1] = v24;
  *v22 = v23;
  *v24 = v22;
  *(_QWORD *)(a1 + 520) = v22;
  KeReleaseSpinLock(&AcpiPowerLock, v11);
  if ( v25 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) != 0 )
      ACPIWakeEnableDisablePciDevice(a1, 0LL);
    v26 = *(_DWORD *)(a1 + 552);
    WORD1(v38[0]) = 1;
    v38[2] = 0LL;
    if ( (v26 & 0x40) != 0 )
    {
      WORD1(v38[5]) = 1;
      v38[7] = 0LL;
      WORD1(v38[10]) = 1;
      v38[12] = 0LL;
      v27 = AMLIAsyncEvalObject(v17, 0LL, 3u, v38, ACPIWakeEnableDisableAsyncCallBack, v22, v33, v34, v35, v36, v37);
    }
    else
    {
      v27 = AMLIAsyncEvalObject(v17, 0LL, 1u, v38, ACPIWakeEnableDisableAsyncCallBack, v22, v33, v34, v35, v36, v37);
    }
    v28 = *(_QWORD *)(a1 + 8);
    v29 = v27;
    v30 = (const char *)qword_1C002C340;
    if ( (v28 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 560);
      if ( (v28 & 0x400000000000LL) != 0 )
        v30 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xCu,
      (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
      v29,
      a1,
      v10,
      v30);
    if ( v29 != 259 )
      ACPIWakeEnableDisableAsyncCallBack((__int64)v17, v29, 0LL, v22);
  }
  else
  {
    v31 = *(_QWORD *)(a1 + 8);
    v32 = (const char *)qword_1C002C340;
    if ( (v31 & 0x200000000000LL) != 0 )
    {
      v10 = *(const char **)(a1 + 560);
      if ( (v31 & 0x400000000000LL) != 0 )
        v32 = *(const char **)(a1 + 568);
    }
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0x11u,
      0xDu,
      (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
      3,
      a1,
      v10,
      v32);
  }
  return 259LL;
}
