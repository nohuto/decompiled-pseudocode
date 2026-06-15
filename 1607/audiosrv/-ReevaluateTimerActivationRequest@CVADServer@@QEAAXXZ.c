/*
 * XREFs of ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x180071E0C
 * Callers:
 *     ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x18007985C (-ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z.c)
 * Callees:
 *     ?QueryState@CVADServer@@QEAAJPEAH00@Z @ 0x180009468 (-QueryState@CVADServer@@QEAAJPEAH00@Z.c)
 *     ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x180079990 (-Renew@CPdcTimerActivation@@QEAAXXZ.c)
 */

void __fastcall CVADServer::ReevaluateTimerActivationRequest(CVADServer *this)
{
  __int64 v1; // rcx
  CPdcTimerActivation *v2; // rcx
  int v3; // [rsp+38h] [rbp+10h] BYREF
  int v4; // [rsp+40h] [rbp+18h] BYREF
  int v5; // [rsp+48h] [rbp+20h] BYREF

  CVADServer::QueryState(this, &v4, &v3, &v5);
  if ( v3 )
  {
    if ( !v5 )
      return;
  }
  else if ( !v4 )
  {
    return;
  }
  v2 = *(CPdcTimerActivation **)(v1 + 336);
  if ( v2 )
    CPdcTimerActivation::Renew(v2);
}
