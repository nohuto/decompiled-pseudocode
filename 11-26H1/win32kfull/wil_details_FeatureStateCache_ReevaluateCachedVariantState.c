/*
 * XREFs of wil_details_FeatureStateCache_ReevaluateCachedVariantState @ 0x1402A0944
 * Callers:
 *     Feature_HSHELL_IAM_Delivery__private_GetVariant @ 0x1401492A0 (Feature_HSHELL_IAM_Delivery__private_GetVariant.c)
 *     Feature_YieldInputQueue2__private_GetVariant @ 0x14018AA6C (Feature_YieldInputQueue2__private_GetVariant.c)
 * Callees:
 *     wil_details_GetCurrentVariantState @ 0x1402A0A64 (wil_details_GetCurrentVariantState.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

signed __int64 __fastcall wil_details_FeatureStateCache_ReevaluateCachedVariantState(
        volatile signed __int64 *a1,
        signed __int64 a2,
        __int64 a3)
{
  unsigned int v3; // esi
  __int64 CurrentVariantState; // rax
  bool v8; // zf
  int v9; // ecx
  int v10; // r9d
  unsigned int v11; // r10d
  signed __int64 v12; // rbx
  unsigned int v13; // r8d
  unsigned int v14; // edx
  signed __int64 v15; // rax
  unsigned __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h]

  v3 = 0;
  LODWORD(v17) = 0;
  if ( g_wil_details_ensureSubscribedToFeatureConfigurationChanges )
    v3 = g_wil_details_ensureSubscribedToFeatureConfigurationChanges();
  CurrentVariantState = wil_details_GetCurrentVariantState(a3, &v17);
  v8 = *(_BYTE *)(a3 + 28) == 0;
  v9 = CurrentVariantState;
  v18 = CurrentVariantState;
  if ( v8 )
    v10 = v3 != 0 ? v17 : 0;
  else
    v10 = v17;
  v11 = HIDWORD(v18);
  do
  {
    v12 = a2;
    v17 = a2;
    if ( (a2 & 8) != 0 )
    {
      v13 = v17;
    }
    else
    {
      v13 = (v10 != 0 ? 8 : 0) | v9 & 0x3F800 | a2 & 0xFFFC07F7;
      v17 = __PAIR64__(v11, v13);
      v12 = __PAIR64__(v11, v13);
    }
    v14 = ((unsigned int)a2 >> 2) & 1;
    if ( !v14 )
    {
      LODWORD(v17) = v13 & 0xFFFFFBFF | v9 & 0x400 | 4;
      v12 = v17;
    }
    v15 = _InterlockedCompareExchange64(a1, v12, a2);
    v8 = a2 == v15;
    a2 = v15;
  }
  while ( !v8 );
  if ( !v14 && g_wil_details_subscribeFeatureStateCacheToConfigurationChanges )
    g_wil_details_subscribeFeatureStateCacheToConfigurationChanges(a1, *(unsigned __int8 *)(a3 + 28), v3);
  return v12;
}
