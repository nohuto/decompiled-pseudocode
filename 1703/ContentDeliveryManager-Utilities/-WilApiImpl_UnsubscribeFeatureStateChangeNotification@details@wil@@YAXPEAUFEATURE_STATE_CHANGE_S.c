/*
 * XREFs of ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18000A220
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F1C (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002F88 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification(
        wil::details *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp+18h] BYREF

  if ( wil::details::g_featureStateManager && this )
  {
    wil::critical_section::lock(&CriticalSection, &lpCriticalSection);
    wil::srwlock::lock_exclusive(&stru_1800F30C0, &SRWLock);
    if ( (unsigned __int64)this - 1 < (*(&xmmword_1800F3110 + 1) - xmmword_1800F3110) >> 4 )
      *(_OWORD *)(xmmword_1800F3110 + 16LL * ((_QWORD)this - 1)) = 0uLL;
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
