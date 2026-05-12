/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1C0010300
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00092D4 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaidAdapterStartMiniport @ 0x1C000802C (RaidAdapterStartMiniport.c)
 *     RaCallMiniportAdapterControl @ 0x1C0008F44 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C000958C (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 *     RaidGetD3ColdInterface @ 0x1C0009EBC (RaidGetD3ColdInterface.c)
 *     RaidAdapterCompleteInitialization @ 0x1C000FE34 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C0010524 (RaidAdapterRegisterDeviceInterface.c)
 *     RaidAdapterConfigureResources @ 0x1C001057C (RaidAdapterConfigureResources.c)
 *     RaidAdapterInitializeWmi @ 0x1C0010670 (RaidAdapterInitializeWmi.c)
 *     __security_check_cookie @ 0x1C0012DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C00214A0 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C00214BC (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0021CDC (RaidAdapterPoFxIdleComponent.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0024998 (RaidResumeAndRestartAdapterQueues.c)
 *     Template_pqtqq @ 0x1C0025294 (Template_pqtqq.c)
 *     WPP_SF_qq @ 0x1C0025880 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00258C8 (WPP_SF_qqD.c)
 *     WPP_SF_qD @ 0x1C0025AB4 (WPP_SF_qD.c)
 *     RaInitializeConfiguration @ 0x1C004FD58 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(char *Context, PIRP Irp)
{
  char v4; // r14
  int v5; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  _UNICODE_STRING *FileName; // r12
  int started; // esi
  __int64 v10; // rbx
  __int64 v11; // r8
  int v12; // r8d
  __int64 v13; // rax
  unsigned int v14; // r8d
  _QWORD *v16; // r9
  int *v17; // rax
  int v18; // ecx
  __int64 v19; // rdx
  PVOID *v20; // rbx
  __int64 v21; // rdx
  NTSTATUS v22; // r8d
  KIRQL v23; // bl
  unsigned int SystemPowerHint; // [rsp+48h] [rbp-40h]

  v4 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids, Context, Irp);
  }
  v5 = *((_DWORD *)Context + 22);
  *((_DWORD *)Context + 22) = 1;
  if ( v5 != 2 )
  {
    if ( v5 != 8 )
    {
      v14 = RaForwardIrpSynchronous(*((struct _DEVICE_OBJECT **)Context + 3), Irp);
      return RaidCompleteRequestEx(Irp, 0, v14);
    }
    v4 = 1;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
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
      v10 = *((_QWORD *)Context + 66);
      if ( v10 )
      {
        started = RaidAdapterConfigureResources(Context, SecurityContext, FileName);
        if ( started < 0 )
          goto LABEL_16;
        if ( *(_DWORD *)(v10 + 4) == 5 )
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
        RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1), (_QWORD *)Context + 680);
        started = RaidAdapterStartMiniport((__int64)Context, v10, v11);
        if ( started < 0 )
          goto LABEL_16;
        if ( v4 )
        {
          v23 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(Context);
          KeLowerIrql(v23);
        }
        else
        {
          started = RaidAdapterCompleteInitialization((__int64)Context);
          if ( started >= 0 )
          {
            if ( StorEtwLoggingEnabled )
            {
              v16 = (_QWORD *)*((_QWORD *)Context + 636);
              if ( v16 )
              {
                v17 = (int *)v16[1];
                v18 = *v17;
                if ( *v17 == 1 )
                  v19 = (__int64)(v17 + 4);
                else
                  v19 = v18 == 2 || v18 == 3 ? (__int64)(v17 + 6) : 0LL;
                if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
                  Template_pqtqq(
                    ((unsigned __int8)Context[108] >> 3) & 1,
                    v19,
                    v12,
                    *v16,
                    *((_DWORD *)Context + 14),
                    (Context[108] & 8) != 0,
                    *((_DWORD *)Context + 1276),
                    *(_DWORD *)(v19 + 8));
              }
            }
            RaidAdapterInitializeWmi(Context);
            RaidAdapterRegisterDeviceInterface(Context);
            if ( BYTE1(WPP_MAIN_CB.DeviceObjectExtension) != 1
              || !(unsigned int)RaidIsAdapterControlSupported((__int64)Context, 12) )
            {
              goto LABEL_15;
            }
            v20 = (PVOID *)(Context + 5096);
            v22 = PoRegisterPowerSettingCallback(
                    *((PDEVICE_OBJECT *)Context + 1),
                    &GUID_LOW_POWER_EPOCH,
                    RaidPowerSettingCallback,
                    Context,
                    (PVOID *)Context + 637);
            if ( v22 < 0 )
            {
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  18LL,
                  &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
                  Context,
                  v22);
              }
            }
            else
            {
              LOBYTE(v21) = 1;
              started = PoRegisterCoalescingCallback(RaidCoalescingCallback, v21, Context + 5112, Context);
              if ( started >= 0 )
              {
                Context[108] &= ~0x80u;
                Context[109] &= ~1u;
                SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
                RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
                RaCallMiniportAdapterControl((__int64)(Context + 296));
LABEL_15:
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
                goto LABEL_16;
              }
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  17LL,
                  &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
                  Context,
                  started);
              }
              *((_QWORD *)Context + 639) = 0LL;
              PoUnregisterPowerSettingCallback(*v20);
            }
            *v20 = 0LL;
            started = 0;
            goto LABEL_15;
          }
        }
      }
      else
      {
        started = -1073741810;
      }
    }
  }
LABEL_16:
  v13 = *((_QWORD *)Context + 636);
  if ( v13 && (*(_DWORD *)(v13 + 20) & 4) != 0 )
  {
    RaidAdapterPoFxIdleComponent(Context, 0LL, 0LL);
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
      &WPP_a0eb401ed86ffacb5c89201c01d8a335_Traceguids,
      Context,
      Irp,
      started);
  }
  v14 = started;
  return RaidCompleteRequestEx(Irp, 0, v14);
}
