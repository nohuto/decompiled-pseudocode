/*
 * XREFs of OSNotifyDeviceWakeByGPEEvent @ 0x1C0051808
 * Callers:
 *     ACPIInterruptDispatchEventDpc @ 0x1C002B530 (ACPIInterruptDispatchEventDpc.c)
 * Callees:
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0006B68 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     OSNotifyDeviceWakeCallBack @ 0x1C0051B60 (OSNotifyDeviceWakeCallBack.c)
 *     WPP_RECORDER_SF_LDL @ 0x1C0051CB0 (WPP_RECORDER_SF_LDL.c)
 *     ACPIWakeDisableAsync @ 0x1C0058538 (ACPIWakeDisableAsync.c)
 */

void __fastcall OSNotifyDeviceWakeByGPEEvent(int a1, int a2, int a3, int a4)
{
  char v4; // bp
  __int64 v6; // rdi
  _QWORD *PoolWithTag; // rax
  int v8; // edx
  _QWORD *v9; // rbx
  __int64 *i; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax
  char v13; // si
  const char *v14; // rcx
  const char *v15; // rdx
  __int64 v16; // rax
  KIRQL Irql; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v6 = 0LL;
  WPP_RECORDER_SF_LDL(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x4D706341u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[1] = PoolWithTag;
    *PoolWithTag = PoolWithTag;
    IoAcquireCancelSpinLock(&Irql);
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    for ( i = (__int64 *)AcpiPowerWaitWakeList; i != &AcpiPowerWaitWakeList; i = (__int64 *)*i )
    {
      v6 = i[5];
      if ( (*(_QWORD *)(v6 + 912) & 0x500000000LL) == 0 && *(_DWORD *)(v6 + 456) == a1 )
      {
        ACPIWakeRemoveDevicesAndUpdate(i[5], (__int64)v9);
        break;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
    IoReleaseCancelSpinLock(Irql);
    if ( (_QWORD *)*v9 == v9 )
    {
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v12 = ACPIWakeDisableAsync(v6, v9, v11, v9);
      v13 = v12;
      if ( v12 != 259 )
        OSNotifyDeviceWakeCallBack(0LL, v12, 0LL, v9);
      v14 = (const char *)qword_1C002C340;
      v15 = (const char *)qword_1C002C340;
      if ( v6 )
      {
        v16 = *(_QWORD *)(v6 + 8);
        v4 = v6;
        if ( (v16 & 0x200000000000LL) != 0 )
        {
          v14 = *(const char **)(v6 + 560);
          if ( (v16 & 0x400000000000LL) != 0 )
            v15 = *(const char **)(v6 + 568);
        }
      }
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0x11u,
        0x21u,
        (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids,
        v13,
        v4,
        v14,
        v15);
    }
  }
  else
  {
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      32,
      (__int64)&WPP_d1586059086e37ef10da2d60ebfd83de_Traceguids);
  }
}
