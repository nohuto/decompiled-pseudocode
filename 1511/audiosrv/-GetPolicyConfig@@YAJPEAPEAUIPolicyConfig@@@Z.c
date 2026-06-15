/*
 * XREFs of ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800430F4
 * Callers:
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x180042ABC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18006D620 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008A848 (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180043170 (-QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall GetPolicyConfig(struct IPolicyConfig **a1)
{
  __int64 (__fastcall *v1)(CPolicyConfig *__hidden, const struct _GUID *, void **); // rdi
  int Interface; // eax
  unsigned int v3; // ebx

  v1 = **(__int64 (__fastcall ***)(CPolicyConfig *__hidden, const struct _GUID *, void **))g_PolicyConfig;
  if ( v1 == CPolicyConfig::QueryInterface )
    Interface = CPolicyConfig::QueryInterface(g_PolicyConfig, &GUID_6be54be8_a068_4875_a49d_0c2966473b11, (void **)a1);
  else
    Interface = v1(g_PolicyConfig, &GUID_6be54be8_a068_4875_a49d_0c2966473b11, (void **)a1);
  v3 = Interface;
  if ( Interface < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x78u,
      (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      Interface);
  }
  return v3;
}
