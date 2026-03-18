/*
 * XREFs of ACPIDeviceCancelWaitWakeIrp @ 0x1C0048F10
 * Callers:
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0006190 (ACPIDeviceIrpWaitWakeRequestPending.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0004B60 (ACPIInternalGetDeviceExtension.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C0005BD8 (ACPIWakeEnableDisableAsync.c)
 *     ACPIWakeRemoveDevicesAndUpdate @ 0x1C0006B68 (ACPIWakeRemoveDevicesAndUpdate.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C00107C8 (WPP_RECORDER_SF_qqss.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qqqss @ 0x1C00437B8 (WPP_RECORDER_SF_qqqss.c)
 *     ACPIWakeEmulationDisable @ 0x1C005891C (ACPIWakeEmulationDisable.c)
 */

void __fastcall ACPIDeviceCancelWaitWakeIrp(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rax
  char v4; // bp
  const char *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  const char *v8; // r8
  const char *v9; // rcx
  __int64 v10; // rax
  __int64 i; // rsi
  const char *v12; // rcx
  __int64 v13; // rax
  const char *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 *v17; // rax
  void (__fastcall *v18)(_QWORD *, __int64, __int64); // rbx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0;
  v5 = (const char *)qword_1C002C340;
  v6 = (_QWORD *)DeviceExtension;
  LOBYTE(v7) = 0;
  v8 = (const char *)qword_1C002C340;
  v9 = (const char *)qword_1C002C340;
  if ( DeviceExtension )
  {
    v7 = DeviceExtension;
    v10 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v7 + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v7 + 568);
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    5u,
    0xAu,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a2,
    v7,
    v8,
    v9);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  for ( i = AcpiPowerWaitWakeList; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == &AcpiPowerWaitWakeList )
    {
      v12 = (const char *)qword_1C002C340;
      if ( v6 )
      {
        v13 = v6[1];
        v4 = (char)v6;
        if ( (v13 & 0x200000000000LL) != 0 )
        {
          v5 = (const char *)v6[70];
          if ( (v13 & 0x400000000000LL) != 0 )
            v12 = (const char *)v6[71];
        }
      }
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xCu,
        (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
        a2,
        v4,
        v5,
        v12);
      KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
      IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
      return;
    }
    if ( *(_QWORD **)(i + 40) == v6 && *(_QWORD *)(i + 200) == a2 )
      break;
  }
  v14 = (const char *)qword_1C002C340;
  if ( v6 )
  {
    v15 = v6[1];
    v4 = (char)v6;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v5 = (const char *)v6[70];
      if ( (v15 & 0x400000000000LL) != 0 )
        v14 = (const char *)v6[71];
    }
  }
  WPP_RECORDER_SF_qqqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0xBu,
    (__int64)&WPP_1563d0135a0a38916c89783620a3f0f9_Traceguids,
    a2,
    i,
    v4,
    v5,
    v14);
  v16 = *(_QWORD *)i;
  v17 = *(__int64 **)(i + 8);
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v17 != i )
    __fastfail(3u);
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  ACPIWakeRemoveDevicesAndUpdate(0LL, 0LL);
  *(_DWORD *)(i + 108) |= 4u;
  v18 = *(void (__fastcall **)(_QWORD *, __int64, __int64))(i + 192);
  *(_DWORD *)(i + 256) = -1073741536;
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
  v18(v6, a2, 3221225760LL);
  if ( (v6[114] & 0x100000000LL) != 0 )
    ACPIWakeEmulationDisable(i);
  ACPIWakeEnableDisableAsync(
    (__int64)v6,
    0,
    (void (__fastcall *)(__int64, _QWORD, _QWORD, __int64))ACPIDeviceCancelWaitWakeIrpCallBack,
    i);
}
