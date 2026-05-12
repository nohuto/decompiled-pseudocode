/*
 * XREFs of RaidAdapterStartDeviceIrp @ 0x1C000D588
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C000F7B0 (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0007190 (RaidCompleteRequestEx.c)
 *     RaidAdapterStartMiniport @ 0x1C000DA54 (RaidAdapterStartMiniport.c)
 *     RaidAdapterRegisterDeviceInterface @ 0x1C000EC8C (RaidAdapterRegisterDeviceInterface.c)
 *     RaCallMiniportAdapterControl @ 0x1C000EE90 (RaCallMiniportAdapterControl.c)
 *     RaForwardIrpSynchronous @ 0x1C000FAC4 (RaForwardIrpSynchronous.c)
 *     RaidIsAdapterControlSupported @ 0x1C000FF08 (RaidIsAdapterControlSupported.c)
 *     RaidGetD3ColdInterface @ 0x1C00104A4 (RaidGetD3ColdInterface.c)
 *     RaidAdapterCompleteInitialization @ 0x1C0015260 (RaidAdapterCompleteInitialization.c)
 *     RaidAdapterConfigureResources @ 0x1C0015FCC (RaidAdapterConfigureResources.c)
 *     RaidAdapterInitializeWmi @ 0x1C00160D8 (RaidAdapterInitializeWmi.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0019704 (RaidAdapterPoFxIdleComponent.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AA20 (_guard_dispatch_icall_nop.c)
 *     RaidAdapterGetSystemPowerHint @ 0x1C0027024 (RaidAdapterGetSystemPowerHint.c)
 *     RaidAdapterGetSystemPowerResumeLatency @ 0x1C0027040 (RaidAdapterGetSystemPowerResumeLatency.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C002A2DC (RaidResumeAndRestartAdapterQueues.c)
 *     Template_pqtqq @ 0x1C002A9F4 (Template_pqtqq.c)
 *     WPP_SF_qD @ 0x1C002AF64 (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C002B074 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C002B0BC (WPP_SF_qqD.c)
 *     RaInitializeConfiguration @ 0x1C0057C08 (RaInitializeConfiguration.c)
 */

__int64 __fastcall RaidAdapterStartDeviceIrp(char *Context, PIRP Irp)
{
  char v4; // bp
  int v5; // eax
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_SECURITY_CONTEXT *SecurityContext; // r15
  _UNICODE_STRING *FileName; // r12
  NTSTATUS started; // esi
  __int64 v10; // rbx
  int v11; // r8d
  _QWORD *v12; // r9
  __int64 v13; // rax
  unsigned int v14; // r8d
  int *v16; // rax
  int v17; // ecx
  __int64 v18; // rdx
  PVOID *v19; // rbx
  __int64 v20; // rdx
  NTSTATUS v21; // r8d
  KIRQL v22; // bl
  _DWORD v23[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int SystemPowerHint; // [rsp+48h] [rbp-40h]
  int SystemPowerResumeLatency; // [rsp+4Ch] [rbp-3Ch]

  v4 = 0;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 16LL, &WPP_222db84838ff3f85fffe5432ece91366_Traceguids, Context, Irp);
  }
  v5 = *((_DWORD *)Context + 22);
  *((_DWORD *)Context + 22) = 1;
  if ( v5 != 2 )
  {
    if ( v5 != 8 )
    {
      v14 = RaForwardIrpSynchronous(*((_QWORD *)Context + 3), Irp);
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
    started = RaForwardIrpSynchronous(*((_QWORD *)Context + 3), Irp);
    if ( started >= 0 )
    {
      v10 = *((_QWORD *)Context + 66);
      if ( v10 )
      {
        started = RaidAdapterConfigureResources(Context, SecurityContext, FileName);
        if ( started < 0 )
          goto LABEL_18;
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
        RaidGetD3ColdInterface(*((PDEVICE_OBJECT *)Context + 1));
        started = RaidAdapterStartMiniport(Context, v10);
        if ( started < 0 )
          goto LABEL_18;
        if ( v4 )
        {
          v22 = KfRaiseIrql(2u);
          RaidResumeAndRestartAdapterQueues(Context);
          KeLowerIrql(v22);
        }
        else
        {
          started = RaidAdapterCompleteInitialization(Context);
          if ( started >= 0 )
          {
            if ( StorEtwLoggingEnabled )
            {
              v12 = (_QWORD *)*((_QWORD *)Context + 636);
              if ( v12 )
              {
                v16 = (int *)v12[1];
                v17 = *v16;
                if ( *v16 == 1 )
                  v18 = (__int64)(v16 + 4);
                else
                  v18 = v17 == 2 || v17 == 3 ? (__int64)(v16 + 6) : 0LL;
                if ( (Microsoft_Windows_StorPortEnableBits & 0x100000) != 0 )
                  Template_pqtqq(
                    ((unsigned __int8)Context[108] >> 3) & 1,
                    v18,
                    v11,
                    *v12,
                    *((_DWORD *)Context + 14),
                    (Context[108] & 8) != 0,
                    *((_DWORD *)Context + 1276),
                    *(_DWORD *)(v18 + 8));
              }
            }
            RaidAdapterInitializeWmi(Context);
            RaidAdapterRegisterDeviceInterface(Context);
            if ( *((_DWORD *)Context + 1410)
              && IoRegisterDeviceInterface(
                   *((PDEVICE_OBJECT *)Context + 4),
                   &GUID_DEVINTERFACE_UNIFIED_ACCESS_RPMB,
                   0LL,
                   (PUNICODE_STRING)(Context + 5624)) >= 0
              && IoSetDeviceInterfaceState((PUNICODE_STRING)(Context + 5624), 1u) < 0 )
            {
              RtlFreeUnicodeString((PUNICODE_STRING)(Context + 5624));
            }
            if ( IsSystemAoAC != 1 || !(unsigned int)RaidIsAdapterControlSupported(Context, 12LL) )
              goto LABEL_17;
            v19 = (PVOID *)(Context + 5096);
            v21 = PoRegisterPowerSettingCallback(
                    *((PDEVICE_OBJECT *)Context + 1),
                    &GUID_LOW_POWER_EPOCH,
                    RaidPowerSettingCallback,
                    Context,
                    (PVOID *)Context + 637);
            if ( v21 < 0 )
            {
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  18LL,
                  &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
                  Context,
                  v21);
              }
            }
            else
            {
              LOBYTE(v20) = 1;
              started = PoRegisterCoalescingCallback(RaidCoalescingCallback, v20, Context + 5112, Context);
              if ( started >= 0 )
              {
                Context[108] &= ~0x80u;
                Context[109] &= ~1u;
                v23[1] = 16;
                v23[0] = 1;
                SystemPowerHint = RaidAdapterGetSystemPowerHint(Context);
                SystemPowerResumeLatency = RaidAdapterGetSystemPowerResumeLatency(SystemPowerHint);
                RaCallMiniportAdapterControl(Context + 296, 12LL, v23);
LABEL_17:
                if ( (unsigned int)RaidIsAdapterControlSupported(Context, 14LL) )
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
                goto LABEL_18;
              }
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_qD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  17LL,
                  &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
                  Context,
                  started);
              }
              *((_QWORD *)Context + 639) = 0LL;
              PoUnregisterPowerSettingCallback(*v19);
            }
            *v19 = 0LL;
            started = 0;
            goto LABEL_17;
          }
        }
      }
      else
      {
        started = -1073741810;
      }
    }
  }
LABEL_18:
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
      &WPP_222db84838ff3f85fffe5432ece91366_Traceguids,
      Context,
      Irp,
      started);
  }
  v14 = started;
  return RaidCompleteRequestEx(Irp, 0, v14);
}
