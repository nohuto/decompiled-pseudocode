/*
 * XREFs of ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000898C
 * Callers:
 *     ??_GEnabledStateManager@details@wil@@QEAAPEAXI@Z @ 0x18000C9FC (--_GEnabledStateManager@details@wil@@QEAAPEAXI@Z.c)
 *     _lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_ @ 0x18000E6A0 (_lambda_3a8e20f2e77891984b45453b80f2a737_--_lambda_invoker_cdecl_.c)
 *     wil::details::_dynamic_atexit_destructor_for__g_enabledStateManager__ @ 0x18005CE80 (wil--details--_dynamic_atexit_destructor_for__g_enabledStateManager__.c)
 * Callees:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z @ 0x1800085B8 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z.c)
 *     _lambda_8c70505f2e5d6009a5d9d790d810b5b7_::operator() @ 0x180008AC0 (_lambda_8c70505f2e5d6009a5d9d790d810b5b7_--operator().c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180058F42 (memset_0.c)
 */

void __fastcall wil::details::EnabledStateManager::RecordCachedUsageUnderLock(wil::details::EnabledStateManager *this)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  volatile signed __int32 *v4; // rdi
  signed __int32 v5; // r14d
  __int64 *v6; // rdi
  volatile signed __int32 v7; // [rsp+20h] [rbp-39h] BYREF
  __int64 v8; // [rsp+28h] [rbp-31h] BYREF
  _QWORD v9[3]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v10; // [rsp+48h] [rbp-11h]
  _BYTE v11[64]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v12; // [rsp+90h] [rbp+37h] BYREF

  if ( ((*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v2 = *((_QWORD *)this + 5);
    v3 = *((_QWORD *)this + 6) - v2;
    v9[2] = v2;
    v10 = v2 + (v3 & 0xFFFFFFFFFFFFFFF0uLL);
    if ( v2 != v10 )
    {
      v9[0] = &v8;
      v9[1] = v11;
      do
      {
        memset_0(v11, 0, sizeof(v11));
        v8 = 0LL;
        v4 = *(volatile signed __int32 **)(v2 + 8);
        do
        {
          v7 = *v4;
          v7 = *v4;
          v5 = v7;
        }
        while ( (unsigned __int8)lambda_8c70505f2e5d6009a5d9d790d810b5b7_::operator()(v9, &v7)
             && v5 != _InterlockedCompareExchange(v4, v7, v5) );
        v6 = (__int64 *)v11;
        do
        {
          if ( *((_DWORD *)v6 + 1) )
            wil::details::FeatureStateManager::RecordFeatureUsage(
              &wil::details::g_featureStateManager,
              *(_DWORD *)v2,
              *(_BYTE *)v6,
              *((_DWORD *)v6 + 1));
          ++v6;
        }
        while ( v6 != &v12 );
        v2 += 16LL;
      }
      while ( v2 != v10 );
    }
    *((_QWORD *)this + 6) = *((_QWORD *)this + 5);
    wil::details::FeatureStateManager::RecordFeatureUsage(&wil::details::g_featureStateManager, 0, 0xFEu, 0);
  }
}
