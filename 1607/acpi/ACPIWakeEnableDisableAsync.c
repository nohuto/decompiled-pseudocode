/*
 * XREFs of ACPIWakeEnableDisableAsync @ 0x1C0005BD8
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000E7E0 (ACPIDeviceInitializePowerRequest.c)
 *     ACPIDeviceCancelWaitWakeIrp @ 0x1C0048F10 (ACPIDeviceCancelWaitWakeIrp.c)
 * Callees:
 *     ACPIWakeEnableDisableAsyncCallBack @ 0x1C0005A60 (ACPIWakeEnableDisableAsyncCallBack.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C0005F04 (WPP_RECORDER_SF_Dqss.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C000CFF4 (ExAllocateFromNPagedLookasideList.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     __security_check_cookie @ 0x1C002BC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 *     ACPIWakeEnableDisablePciDevice @ 0x1C00589F8 (ACPIWakeEnableDisablePciDevice.c)
 */

__int64 __fastcall ACPIWakeEnableDisableAsync(
        __int64 a1,
        char a2,
        void (__fastcall *a3)(__int64, _QWORD, _QWORD, __int64),
        __int64 a4)
{
  int v6; // edi
  __int64 v7; // rax
  __int64 *v8; // rsi
  __int64 *v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rdx
  _BYTE *v12; // rax
  _QWORD *v13; // r14
  KIRQL v14; // al
  _QWORD *v15; // rcx
  _QWORD *v16; // rdx
  int v17; // edx
  int v18; // eax
  unsigned int v19; // edx
  int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  int v23; // edi
  __int64 *v24; // rax
  __int64 v26; // rax
  __int64 *v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 v31; // [rsp+38h] [rbp-100h]
  __int64 v32; // [rsp+38h] [rbp-100h]
  bool v35; // [rsp+58h] [rbp-E0h]
  __int64 v36; // [rsp+60h] [rbp-D8h]
  _QWORD v38[16]; // [rsp+70h] [rbp-C8h] BYREF

  v6 = 0;
  memset(v38, 0, 0x78uLL);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = qword_1C002C340;
  v36 = 0LL;
  v9 = qword_1C002C340;
  v10 = qword_1C002C340;
  if ( a2 )
  {
    ++*(_DWORD *)(a1 + 504);
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v9 = *(__int64 **)(a1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v10 = *(__int64 **)(a1 + 568);
    }
    v31 = (__int64)v9;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_Dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      17,
      15,
      (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
      *(_DWORD *)(a1 + 504),
      a1,
      v31,
      (__int64)v10);
    if ( *(_DWORD *)(a1 + 504) != 1 )
    {
      if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
        goto LABEL_20;
      LOBYTE(v11) = 1;
      goto LABEL_27;
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 504);
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v9 = *(__int64 **)(a1 + 560);
      if ( (v7 & 0x400000000000LL) != 0 )
        v10 = *(__int64 **)(a1 + 568);
    }
    v32 = (__int64)v9;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_Dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      17,
      16,
      (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
      *(_DWORD *)(a1 + 504),
      a1,
      v32,
      (__int64)v10);
    if ( *(_DWORD *)(a1 + 504) )
    {
      if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
        goto LABEL_20;
      v11 = 1LL;
LABEL_27:
      ACPIWakeEnableDisablePciDevice(a1, v11);
      goto LABEL_20;
    }
  }
  v36 = *(_QWORD *)(a1 + 408);
  if ( !v36 )
  {
    if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) == 0 )
      goto LABEL_20;
    LOBYTE(v11) = a2;
    goto LABEL_27;
  }
  v12 = ExAllocateFromNPagedLookasideList(&XswContextLookAsideList);
  v13 = v12;
  if ( v12 )
  {
    v12[24] = a2;
    *((_QWORD *)v12 + 4) = a3;
    *((_QWORD *)v12 + 5) = a4;
    *((_QWORD *)v12 + 2) = a1;
    *((_DWORD *)v12 + 7) = 1;
    v14 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
    v15 = (_QWORD *)(a1 + 512);
    v16 = *(_QWORD **)(a1 + 520);
    v35 = *v15 == (_QWORD)v15;
    if ( *v16 != a1 + 512 )
      __fastfail(3u);
    *v13 = v15;
    v13[1] = v16;
    *v16 = v13;
    *(_QWORD *)(a1 + 520) = v13;
    KeReleaseSpinLock(&AcpiPowerLock, v14);
    if ( v35 )
    {
      if ( (*(_QWORD *)(a1 + 8) & 0x800000000000000LL) != 0 && !*((_BYTE *)v13 + 24) )
        ACPIWakeEnableDisablePciDevice(a1, 0LL);
      v18 = *(_DWORD *)(a1 + 552);
      WORD1(v38[0]) = 1;
      if ( (v18 & 0x40) != 0 )
      {
        v28 = *(_DWORD *)(a1 + 492);
        v19 = 3;
        WORD1(v38[5]) = 1;
        LOBYTE(v6) = AcpiPowerLeavingS0 != 0;
        v38[2] = a2 != 0;
        v38[7] = v6;
        WORD1(v38[10]) = 1;
        if ( v28 != 4 || (*(_DWORD *)(a1 + 8) & 0x800LL) != 0 )
          v38[12] = v28 - 1;
        else
          v38[12] = 4LL;
      }
      else
      {
        v19 = 1;
        LOBYTE(v6) = a2 != 0;
        v38[2] = v6;
      }
      v20 = AMLIAsyncEvalObject(v36, 0LL, v19, v38, ACPIWakeEnableDisableAsyncCallBack, v13);
      v22 = *(_QWORD *)(a1 + 8);
      v23 = v20;
      v24 = qword_1C002C340;
      if ( (v22 & 0x200000000000LL) != 0 )
      {
        v8 = *(__int64 **)(a1 + 560);
        if ( (v22 & 0x400000000000LL) != 0 )
          v24 = *(__int64 **)(a1 + 568);
      }
      LOBYTE(v21) = 4;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v21,
        17,
        17,
        (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
        v23,
        a1,
        (__int64)v8,
        (__int64)v24);
      if ( v23 != 259 )
        ACPIWakeEnableDisableAsyncCallBack(v36, v23, 0LL, v13);
    }
    else
    {
      v29 = *(_QWORD *)(a1 + 8);
      v30 = qword_1C002C340;
      if ( (v29 & 0x200000000000LL) != 0 )
      {
        v8 = *(__int64 **)(a1 + 560);
        if ( (v29 & 0x400000000000LL) != 0 )
          v30 = *(__int64 **)(a1 + 568);
      }
      LOBYTE(v17) = 4;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v17,
        17,
        18,
        (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
        3,
        a1,
        (__int64)v8,
        (__int64)v30);
    }
    return 259LL;
  }
  v6 = -1073741670;
LABEL_20:
  v26 = *(_QWORD *)(a1 + 8);
  v27 = qword_1C002C340;
  if ( (v26 & 0x200000000000LL) != 0 )
  {
    v8 = *(__int64 **)(a1 + 560);
    if ( (v26 & 0x400000000000LL) != 0 )
      v27 = *(__int64 **)(a1 + 568);
  }
  LOBYTE(v11) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v11,
    17,
    19,
    (__int64)&WPP_ebb91706bce23554e2399834bf7fd024_Traceguids,
    v6,
    a1,
    (__int64)v8,
    (__int64)v27);
  a3(v36, (unsigned int)v6, 0LL, a4);
  return 259LL;
}
