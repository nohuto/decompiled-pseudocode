/*
 * XREFs of ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000A5F8
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x180009C58 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
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
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F1C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180007F78 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x18000A718 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        RTL_SRWLOCK *a1,
        __int64 a2,
        int a3)
{
  _BYTE *Ptr; // rcx
  _BYTE *v7; // rdx
  rsize_t v8; // rdx
  void (*v9)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *); // rax
  int Source; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+28h] [rbp-10h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  if ( LOBYTE(a1->Ptr) )
  {
    if ( a2 )
    {
      wil::srwlock::lock_exclusive(a1 + 1, &SRWLock);
      Source = a3;
      v11 = a2;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&a1[9], 0x10uLL) )
      {
        Ptr = a1[10].Ptr;
        v7 = a1[11].Ptr;
        if ( Ptr < v7 )
          v8 = v7 - Ptr;
        else
          v8 = 0LL;
        memcpy_s(Ptr, v8, &Source, 0x10uLL);
        a1[10].Ptr = (char *)a1[10].Ptr + 16;
      }
      if ( !a1[4].Ptr )
      {
        a1[4].Ptr = 0LL;
        v9 = g_wil_details_internalSubscribeFeatureStateChangeNotification;
        if ( g_wil_details_internalSubscribeFeatureStateChangeNotification
          || (v9 = g_wil_details_apiSubscribeFeatureStateChangeNotification) != 0LL )
        {
          ((void (__fastcall *)(RTL_SRWLOCK *, __int64 (__fastcall *)(), RTL_SRWLOCK *))v9)(
            &a1[4],
            lambda_42ed7cb8e6cd03c5242b9a63c40e80d6_::_lambda_invoker_cdecl_,
            a1);
        }
      }
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    else
    {
      wil::details::EnabledStateManager::OnStateChange((wil::details::EnabledStateManager *)a1);
    }
  }
}
