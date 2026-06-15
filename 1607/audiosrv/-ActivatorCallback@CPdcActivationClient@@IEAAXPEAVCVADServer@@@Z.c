/*
 * XREFs of ?ActivatorCallback@CPdcActivationClient@@IEAAXPEAVCVADServer@@@Z @ 0x18007985C
 * Callers:
 *     ?PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z @ 0x180079970 (-PdcTimerActivatorCallback@CPdcActivationClient@@KAXPEAXW4_PDC_ACTIVATOR_ERROR_DETAIL@@00@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x180071E0C (-ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CPdcActivationClient::ActivatorCallback(CPdcActivationClient *this, struct CVADServer *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  CVADServer **i; // rcx
  int v9; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-40h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+70h] [rbp-18h]
  int v14; // [rsp+74h] [rbp-14h]

  v10[1] = -2LL;
  v4 = (CPdcActivationClient *)((char *)this + 32);
  v10[2] = (char *)this + 32;
  v5 = _Mtx_lock((CPdcActivationClient *)((char *)this + 32));
  if ( v5 )
    std::_Throw_C_error(v5);
  if ( dword_1800CA040 > 4u )
  {
    v10[0] = a2;
    v12 = v10;
    v13 = 8;
    v14 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A8651, v6, v7, 3u, &pData);
  }
  for ( i = (CVADServer **)*((_QWORD *)this + 1); i != *((CVADServer ***)this + 2) && *i != a2; ++i )
    ;
  if ( i != *((CVADServer ***)this + 2) )
    CVADServer::ReevaluateTimerActivationRequest(*i);
  v9 = _Mtx_unlock(v4);
  if ( v9 )
    std::_Throw_C_error(v9);
}
