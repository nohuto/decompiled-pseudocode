/*
 * XREFs of ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATFeaturePropertyCache@23@@Z @ 0x18000885C
 * Callers:
 *     ?ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@Z @ 0x180008CCC (-ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180006F78 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

void __fastcall wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        RTL_SRWLOCK *pv,
        int a2,
        union wil::details::FeaturePropertyCache *a3)
{
  _BYTE *Ptr; // rcx
  _BYTE *v7; // rdx
  rsize_t v8; // rdx
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v10; // rbp
  PTP_TIMER v11; // rsi
  DWORD LastError; // ebx
  struct _TP_TIMER *v13; // rcx
  int Source; // [rsp+20h] [rbp-28h] BYREF
  union wil::details::FeaturePropertyCache *v15; // [rsp+28h] [rbp-20h]
  struct _FILETIME pftDueTime; // [rsp+50h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+68h] [rbp+20h] BYREF

  if ( LOBYTE(pv->Ptr) )
  {
    wil::srwlock::lock_exclusive(pv + 1, &SRWLock);
    Source = a2;
    v15 = a3;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)&pv[5], 0x10uLL) )
    {
      Ptr = pv[6].Ptr;
      v7 = pv[7].Ptr;
      if ( Ptr < v7 )
        v8 = v7 - Ptr;
      else
        v8 = 0LL;
      memcpy_s(Ptr, v8, &Source, 0x10uLL);
      pv[6].Ptr = (char *)pv[6].Ptr + 16;
    }
    if ( !LOBYTE(pv[3].Ptr) )
    {
      if ( pv[2].Ptr )
        goto LABEL_12;
      ThreadpoolTimer = CreateThreadpoolTimer(lambda_3a8e20f2e77891984b45453b80f2a737_::_lambda_invoker_cdecl_, pv, 0LL);
      v10 = (struct _TP_TIMER *)pv[2].Ptr;
      v11 = ThreadpoolTimer;
      if ( v10 )
      {
        LastError = GetLastError();
        SetThreadpoolTimer(v10, 0LL, 0, 0);
        WaitForThreadpoolTimerCallbacks(v10, 1);
        CloseThreadpoolTimer(v10);
        SetLastError(LastError);
      }
      pv[2].Ptr = v11;
      if ( v11 )
      {
LABEL_12:
        v13 = (struct _TP_TIMER *)pv[2].Ptr;
        pftDueTime = (struct _FILETIME)-3000000000LL;
        SetThreadpoolTimer(v13, &pftDueTime, 0, 0x124F8u);
        LOBYTE(pv[3].Ptr) = 1;
      }
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
  }
}
