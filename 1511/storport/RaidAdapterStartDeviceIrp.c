/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1C0011F28
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C000B48C (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002A80 (RaidCompleteRequestEx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00078B0 (RaidAdapterPoFxIdleComponent.c)
 *     RaidAdapterConfigureResources @ 0x1C000A6D8 (RaidAdapterConfigureResources.c)
 *     RaidAdapterInitializeWmi @ 0x1C000A7E4 (RaidAdapterInitializeWmi.c)
 *     RaCallMiniportAdapterControl @ 0x1C000AFB8 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C000B7A0 (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C000BBE4 (RaidIsAdapterControlSupported.c)
 *     RaidGetD3ColdInterface @ 0x1C000C0F4 (RaidGetD3ColdInterface.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0012168 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterStartMiniport @ 0x1C0012798 (RaidAdapterStartMiniport.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C0013148 (RaidAdapterRegisterDeviceInterface.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0023C38 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0023C54 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0026E38 (RaidResumeAndRestartAdapterQueues.c)
 *     Template_pqtqq @ 0x1C0027374 (Template_pqtqq.c)
 *     WPP_SF_qq @ 0x1C002796C (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00279B4 (WPP_SF_qqD.c)
 *     WPP_SF_qD @ 0x1C0027BDC (WPP_SF_qD.c)
 *     RaInitializeConfiguration @ 0x1C0053DCC (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(char *Context, PIRP Irp)
{
  char v4; // r14
  int v5; // eax
  int started; // esi
  __int64 v7; // rbx
  int v8; // r8d
  _QWORD *v9; // r9
  __int64 v10; // rax
  unsigned int v11; // r8d
  int *v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  PVOID *v16; // rbx
  __int64 v17; // rdx
  NTSTATUS v18; // r8d
  KIRQL v19; // bl
  unsigned int SystemPowerHint; // [rsp+48h] [rbp-40h]

  v4 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids, Context, Irp);
  }
  v5 = *((_DWORD *)Context + 22);
  *((_DWORD *)Context + 22) = 1;
  if ( v5 != 2 )
  {
    if ( v5 != 8 )
    {
      v11 = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
      return RaidCompleteRequestEx(Irp, 0, v11);
    }
    v4 = 1;
  }
  started = RaInitializeConfiguration(
              Context + 304,
              *((_QWORD *)Context + 66),
              *((unsigned int *)Context + 188),
              *((unsigned int *)Context + 189));
  if ( started >= 0 )
  {
    started = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
    if ( started >= 0 )
    {
      v7 = *((_QWORD *)Context + 66);
      if ( v7 )
      {
        started = RaidAdapterConfigureResources((__int64)Context);
        if ( started < 0 )
          goto LABEL_17;
        if ( *(_DWORD *)(v7 + 4) == 5 )
          (*((void (__fastcall **)(_QWORD, __int64, char *, _QWORD, int))Context + 82))(
            *((_QWORD *)Context + 76),
            4LL,
            Context + 4828,
            0LL,
            64);
        *((_DWORD *)Context + 522) = 64;
        KeInitializeSpinLock((PKSPIN_LOCK)Context + 264);
        *((_QWORD *)Context + 263) = Context + 2096;
        *((_QWORD *)Context + 262) = Context + 2096;
        *((_QWORD *)Context + 265) = 0LL;
        *((_DWORD *)Context + 536) = 1;
        RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1), (_QWORD *)Context + 681);
        started = RaidAdapterStartMiniport(Context, v7);
        if ( started < 0 )
          goto LABEL_17;
        if ( v4 )
        {
          v19 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(Context);
          KeLowerIrql(v19);
        }
        else
        {
          started = RaidAdapterCompleteInitialization(Context);
          if ( started >= 0 )
          {
            if ( StorEtwLoggingEnabled )
            {
              v9 = (_QWORD *)*((_QWORD *)Context + 636);
              if ( v9 )
              {
                v13 = (int *)v9[1];
                v14 = *v13;
                if ( *v13 == 1 )
                  v15 = (__int64)(v13 + 4);
                else
                  v15 = v14 == 2 || v14 == 3 ? (__int64)(v13 + 6) : 0LL;
                if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
                  Template_pqtqq(
                    ((unsigned __int8)Context[108] >> 3) & 1,
                    v15,
                    v8,
                    *v9,
                    *((_DWORD *)Context + 14),
                    (Context[108] & 8) != 0,
                    *((_DWORD *)Context + 1276),
                    *(_DWORD *)(v15 + 8));
              }
            }
            RaidAdapterInitializeWmi((__int64)Context);
            RaidAdapterRegisterDeviceInterface(Context);
            if ( IsSystemAoAC != 1 || !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12) )
              goto LABEL_16;
            v16 = (PVOID *)(Context + 5096);
            v18 = PoRegisterPowerSettingCallback(
                    *((PDEVICE_OBJECT *)Context + 1),
                    &GUID_LOW_POWER_EPOCH,
                    RaidPowerSettingCallback,
                    Context,
                    (PVOID *)Context + 637);
            if ( v18 < 0 )
            {
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  18LL,
                  &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids,
                  Context,
                  v18);
              }
            }
            else
            {
              LOBYTE(v17) = 1;
              started = PoRegisterCoalescingCallback(RaidCoalescingCallback, v17, Context + 5112, Context);
              if ( started >= 0 )
              {
                Context[108] &= ~0x80u;
                Context[109] &= ~1u;
                SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
                RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
                RaCallMiniportAdapterControl((__int64)(Context + 296));
LABEL_16:
                if ( (unsigned int)RaidIsAdapterControlSupported((__int64)Context, 14) )
                {
                  PoRegisterPowerSettingCallback(
                    *((PDEVICE_OBJECT *)Context + 1),
                    &GUID_DISK_MAX_POWER,
                    RaidPowerSettingCallback,
                    Context,
                    (PVOID *)Context + 640);
                  started = IoRegisterDeviceInterface(
                              *((PDEVICE_OBJECT *)Context + 4),
                              &GUID_DEVINTERFACE_THERMAL_COOLING,
                              0LL,
                              (PUNICODE_STRING)(Context + 5128));
                  if ( started >= 0 )
                  {
                    Context[109] |= 8u;
                    IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5128), 1u);
                  }
                }
                goto LABEL_17;
              }
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  17LL,
                  &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids,
                  Context,
                  started);
              }
              *((_QWORD *)Context + 639) = 0LL;
              PoUnregisterPowerSettingCallback(*v16);
            }
            *v16 = 0LL;
            started = 0;
            goto LABEL_16;
          }
        }
      }
      else
      {
        started = -1073741810;
      }
    }
  }
LABEL_17:
  v10 = *((_QWORD *)Context + 636);
  if ( v10 && (*(_DWORD *)(v10 + 20) & 4) != 0 )
  {
    RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    *(_DWORD *)(*((_QWORD *)Context + 636) + 20LL) &= ~4u;
  }
  if ( started < 0 )
    *((_DWORD *)Context + 22) = 2;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      19LL,
      &WPP_187a9a52e0a035763cd3db40300053e1_Traceguids,
      Context,
      Irp,
      started);
  }
  v11 = started;
  return RaidCompleteRequestEx(Irp, 0, v11);
}
