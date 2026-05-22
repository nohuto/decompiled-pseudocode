/*
 * XREFs of ?EnsureTimerUnderLock@FeatureStateManager@details@wil@@AEAAXXZ @ 0x18003F6D4
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_K@Z @ 0x18003F520 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4wil_details_ServiceReportingKind@@_.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::FeatureStateManager::EnsureTimerUnderLock(_QWORD *pv)
{
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v3; // rbp
  PTP_TIMER v4; // rsi
  DWORD LastError; // ebx
  struct _TP_TIMER *v6; // rcx
  _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_BYTE *)pv + 88) )
  {
    if ( pv[10] )
      goto LABEL_6;
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_, pv, 0LL);
    v3 = (struct _TP_TIMER *)pv[10];
    v4 = ThreadpoolTimer;
    if ( v3 )
    {
      LastError = GetLastError();
      SetThreadpoolTimer(v3, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(v3, 1);
      CloseThreadpoolTimer(v3);
      SetLastError(LastError);
    }
    pv[10] = v4;
    if ( v4 )
    {
LABEL_6:
      v6 = (struct _TP_TIMER *)pv[10];
      pftDueTime = (_FILETIME)-3000000000LL;
      SetThreadpoolTimer(v6, &pftDueTime, 0, 0x124F8u);
      *((_BYTE *)pv + 88) = 1;
    }
  }
}
