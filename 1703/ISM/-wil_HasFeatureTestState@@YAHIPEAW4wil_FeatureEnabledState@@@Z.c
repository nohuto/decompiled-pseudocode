/*
 * XREFs of ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18003E034
 * Callers:
 *     ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18003FA18 (-IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180043494 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@w.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_HasFeatureTestState(int a1, enum wil_FeatureEnabledState *a2)
{
  unsigned int v2; // ebx
  struct wil_details_FeatureTestState *i; // rax
  __int128 v7; // [rsp+20h] [rbp-28h]

  v2 = 0;
  if ( g_wil_details_testStates )
  {
    AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
    for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
    {
      if ( *((_DWORD *)i + 1) == a1 && !*(_DWORD *)i )
      {
        v2 = 1;
        v7 = *(_OWORD *)i;
        break;
      }
    }
    ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
  }
  if ( a2 )
    *(_DWORD *)a2 = v2 != 0 ? DWORD2(v7) : 0;
  return v2;
}
