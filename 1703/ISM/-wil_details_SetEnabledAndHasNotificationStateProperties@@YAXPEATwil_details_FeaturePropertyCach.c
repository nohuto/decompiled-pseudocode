/*
 * XREFs of ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x18003D660
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18003FA18 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x180040204 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180043494 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@w.c)
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
