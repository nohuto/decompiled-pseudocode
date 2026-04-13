/*
 * XREFs of ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x180007440
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180009C58 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18000A718 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000B520 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000D410 (-LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU-$IAsyncOperation@_.c)
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000DD00 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180013104 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_AppInstallBatching@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180013278 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_AppInstallBatching@@@wil@@CA.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FrameworkScalability@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180030054 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FrameworkScalability@@@wil@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180030DE4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MinuteZeroExperiences@@@wil@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180030F58 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@w.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800310CC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@C.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003D708 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_TargetedContentAPI@@@wil@@CA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_SetEnabledAndHasNotificationStateProperties(
        volatile signed __int32 *a1,
        unsigned int a2,
        int a3)
{
  unsigned __int64 v4; // r11
  signed __int32 v5; // ebx
  volatile unsigned __int32 v6; // ecx
  __int64 result; // rax

  v4 = (a2 | (unsigned __int64)(unsigned int)(a3 << 8)) >> 8;
  do
  {
    v5 = *a1;
    v6 = *a1;
    result = *a1 & 3;
    if ( (*a1 & 3) == (unsigned __int8)a2 && ((v6 >> 4) & 3) == (_BYTE)v4 )
      break;
    result = (unsigned int)_InterlockedCompareExchange(a1, v6 & 0xFFFFFFCC | a2 & 3 | (16 * (v4 & 3)), v5);
  }
  while ( v5 != (_DWORD)result );
  return result;
}
