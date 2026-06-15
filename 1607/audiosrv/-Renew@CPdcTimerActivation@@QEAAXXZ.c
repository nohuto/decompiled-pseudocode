/*
 * XREFs of ?Renew@CPdcTimerActivation@@QEAAXXZ @ 0x180079990
 * Callers:
 *     ?ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ @ 0x180071E0C (-ReevaluateTimerActivationRequest@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x1800093A4 (-GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18008DEC4 (Pdcv2ActivationClientRenewActivation.c)
 */

void __fastcall CPdcTimerActivation::Renew(CPdcTimerActivation *this)
{
  __int64 v2; // rcx
  int v3; // edi
  CVADServer *v4; // rcx
  int v5; // edx
  __int64 UniqueStreamIdentifier; // rax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  int v11; // [rsp+38h] [rbp-C8h] BYREF
  int v12; // [rsp+3Ch] [rbp-C4h] BYREF
  CVADServer *v13; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v15[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h]
  __int64 v17; // [rsp+60h] [rbp-A0h]
  _QWORD *v18; // [rsp+68h] [rbp-98h]
  _QWORD v19[22]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  CVADServer **v21; // [rsp+140h] [rbp+40h]
  int v22; // [rsp+148h] [rbp+48h]
  int v23; // [rsp+14Ch] [rbp+4Ch]
  int *v24; // [rsp+150h] [rbp+50h]
  int v25; // [rsp+158h] [rbp+58h]
  int v26; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v27; // [rsp+160h] [rbp+60h]
  int v28; // [rsp+168h] [rbp+68h]
  int v29; // [rsp+16Ch] [rbp+6Ch]
  int *v30; // [rsp+170h] [rbp+70h]
  int v31; // [rsp+178h] [rbp+78h]
  int v32; // [rsp+17Ch] [rbp+7Ch]
  int *v33; // [rsp+180h] [rbp+80h]
  int v34; // [rsp+188h] [rbp+88h]
  int v35; // [rsp+18Ch] [rbp+8Ch]

  v19[1] = *((_QWORD *)this + 2);
  v19[0] = 1LL;
  v19[2] = 352LL;
  memset(&v19[3], 0, 0x90uLL);
  v2 = *(_QWORD *)this;
  v16 = 0LL;
  v17 = 0LL;
  v15[0] = 1;
  v15[1] = 300;
  v18 = v19;
  if ( v2 )
  {
    v3 = Pdcv2ActivationClientRenewActivation(v2, v15, &v11);
    if ( dword_1800CA040 > 4u )
    {
      v4 = (CVADServer *)*((_QWORD *)this + 2);
      v23 = 0;
      v21 = &v13;
      v13 = v4;
      v22 = 8;
      v5 = *((_DWORD *)v4 + 16);
      v26 = 0;
      v9 = v5;
      v24 = &v9;
      v25 = 4;
      UniqueStreamIdentifier = CVADServer::GetUniqueStreamIdentifier(v4);
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v14 = UniqueStreamIdentifier;
      v27 = &v14;
      v30 = &v10;
      v12 = v11;
      v33 = &v12;
      v28 = 8;
      v10 = v3 | 0x10000000;
      v31 = 4;
      v34 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A8534, v7, v8, 7u, &pData);
    }
  }
}
