/*
 * XREFs of ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800386C8
 * Callers:
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18003F5AC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18006ED40 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008DCD8 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800388F0 (-QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall GetPolicyConfig(struct IPolicyConfig **a1)
{
  __int64 (__fastcall *v1)(CPolicyConfig *__hidden, const struct _GUID *, void **); // rdi
  int Interface; // eax
  unsigned int v3; // ebx

  v1 = **(__int64 (__fastcall ***)(CPolicyConfig *__hidden, const struct _GUID *, void **))g_PolicyConfig;
  if ( v1 == CPolicyConfig::QueryInterface )
    Interface = CPolicyConfig::QueryInterface(g_PolicyConfig, &GUID_ca286fc3_91fd_42c3_8e9b_caafa66242e3, (void **)a1);
  else
    Interface = v1(g_PolicyConfig, &GUID_ca286fc3_91fd_42c3_8e9b_caafa66242e3, (void **)a1);
  v3 = Interface;
  if ( Interface < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x79u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      Interface);
  }
  return v3;
}
