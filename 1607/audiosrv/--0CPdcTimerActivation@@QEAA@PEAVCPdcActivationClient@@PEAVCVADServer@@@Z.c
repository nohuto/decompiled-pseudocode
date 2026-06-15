/*
 * XREFs of ??0CPdcTimerActivation@@QEAA@PEAVCPdcActivationClient@@PEAVCVADServer@@@Z @ 0x1800059DC
 * Callers:
 *     ??$make_shared@VCPdcTimerActivation@@QEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA?AV?$shared_ptr@VCPdcTimerActivation@@@0@$$QEBQEAVCPdcActivationClient@@AEAPEAVCVADServer@@@Z @ 0x1800050CC (--$make_shared@VCPdcTimerActivation@@QEAVCPdcActivationClient@@AEAPEAVCVADServer@@@std@@YA-AV-$s.c)
 * Callees:
 *     Pdcv2ActivationClientActivate @ 0x180005210 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientSetBrokeredProcessId @ 0x18000556C (Pdcv2ActivationClientSetBrokeredProcessId.c)
 *     ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x1800093A4 (-GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ.c)
 *     ?GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ @ 0x180018598 (-GetClientFriendlyName@CAudioStream@@QEAAPEBGXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 */

CPdcTimerActivation *__fastcall CPdcTimerActivation::CPdcTimerActivation(
        CPdcTimerActivation *this,
        struct CPdcActivationClient *a2,
        struct CVADServer *a3)
{
  const unsigned __int16 *ClientFriendlyName; // rdx
  int v6; // r9d
  const wchar_t *v7; // rcx
  __int64 v8; // rax
  int v9; // esi
  CVADServer *v10; // rcx
  int v12; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+28h] [rbp-D8h]
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  CVADServer *v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 UniqueStreamIdentifier; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h]
  _DWORD v22[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  const wchar_t *v24; // [rsp+80h] [rbp-80h]
  _QWORD *v25; // [rsp+88h] [rbp-78h]
  _QWORD v26[22]; // [rsp+90h] [rbp-70h] BYREF
  void *v27; // [rsp+140h] [rbp+40h] BYREF
  int v28; // [rsp+148h] [rbp+48h]
  int v29; // [rsp+14Ch] [rbp+4Ch]
  void *v30; // [rsp+150h] [rbp+50h]
  int v31; // [rsp+158h] [rbp+58h]
  int v32; // [rsp+15Ch] [rbp+5Ch]
  CVADServer **v33; // [rsp+160h] [rbp+60h]
  __int64 v34; // [rsp+168h] [rbp+68h]
  int *v35; // [rsp+170h] [rbp+70h]
  __int64 v36; // [rsp+178h] [rbp+78h]
  unsigned __int64 *p_UniqueStreamIdentifier; // [rsp+180h] [rbp+80h]
  __int64 v38; // [rsp+188h] [rbp+88h]
  int *v39; // [rsp+190h] [rbp+90h]
  __int64 v40; // [rsp+198h] [rbp+98h]
  int *v41; // [rsp+1A0h] [rbp+A0h]
  __int64 v42; // [rsp+1A8h] [rbp+A8h]

  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 2) = a3;
  v26[1] = a3;
  *(_QWORD *)this = 0LL;
  v26[0] = 1LL;
  v26[2] = 352LL;
  memset(&v26[3], 0, 0x90uLL);
  ClientFriendlyName = CAudioStream::GetClientFriendlyName(*((CAudioStream **)a3 + 26));
  v22[0] = 1;
  v22[1] = 300;
  v25 = v26;
  v7 = L"Unknown";
  v23 = 0LL;
  v24 = L"Unknown";
  if ( ClientFriendlyName )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( ClientFriendlyName[v8] );
    if ( v8 )
      v7 = ClientFriendlyName;
    v24 = v7;
  }
  v9 = Pdcv2ActivationClientActivate(
         **((_QWORD **)this + 1),
         (__int64)v22,
         *((_QWORD *)this + 2),
         v6,
         v12,
         v13,
         this,
         &v16);
  if ( v9 >= 0 )
    Pdcv2ActivationClientSetBrokeredProcessId(*(_QWORD *)this, *((_DWORD *)a3 + 16));
  if ( dword_1800CA040 > 4u )
  {
    v10 = (CVADServer *)*((_QWORD *)this + 2);
    v33 = &v18;
    v18 = v10;
    v34 = 8LL;
    v14 = *((_DWORD *)v10 + 16);
    v35 = &v14;
    v36 = 4LL;
    UniqueStreamIdentifier = CVADServer::GetUniqueStreamIdentifier(v10);
    v38 = 8LL;
    p_UniqueStreamIdentifier = &UniqueStreamIdentifier;
    v39 = &v15;
    v17 = v16;
    v41 = &v17;
    v15 = v9 | 0x10000000;
    v40 = 4LL;
    v42 = 4LL;
    v20[1] = 4;
    v27 = off_1800CA048;
    v20[0] = ((unsigned int)&unk_1800A85ED - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v21 = 0LL;
    v28 = *(unsigned __int16 *)off_1800CA048;
    v30 = &unk_1800A85F8;
    v29 = 2;
    v31 = 88;
    v32 = 1;
    EtwEventWriteTransfer(qword_1800CA060, v20, 0LL, 0LL, 7, &v27);
  }
  return this;
}
