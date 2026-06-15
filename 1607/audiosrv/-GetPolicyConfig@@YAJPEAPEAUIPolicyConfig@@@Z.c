/*
 * XREFs of ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x180032D24
 * Callers:
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18002F2CC (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180056D40 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180073A0C (-OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180032D90 (-QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPolicyConfig(struct IPolicyConfig **a1)
{
  __int64 (__fastcall *v1)(CPolicyConfig *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned int v3; // ebx

  v1 = **(__int64 (__fastcall ***)(CPolicyConfig *__hidden, const struct _GUID *, void **))g_PolicyConfig;
  if ( v1 == CPolicyConfig::QueryInterface )
    Interface = CPolicyConfig::QueryInterface(g_PolicyConfig, &GUID_00632a31_4d49_4167_8ae1_27f82ce135b1, (void **)a1);
  else
    Interface = v1(g_PolicyConfig, &GUID_00632a31_4d49_4167_8ae1_27f82ce135b1, (void **)a1);
  v3 = Interface;
  if ( Interface < 0 )
    AudSrvTraceLoggingErrorHelper("GetPolicyConfig", 6606, Interface);
  return v3;
}
