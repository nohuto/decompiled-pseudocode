/*
 * XREFs of ??1CPdcTimerActivation@@QEAA@XZ @ 0x180005C28
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x1800051F0 (-_Destroy@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 * Callees:
 *     Pdcv2ActivationClientDeactivate @ 0x180004BC4 (Pdcv2ActivationClientDeactivate.c)
 *     ?ReleasePdcTimerActivation@CPdcActivationClient@@QEAAXPEAVCVADServer@@@Z @ 0x180004EFC (-ReleasePdcTimerActivation@CPdcActivationClient@@QEAAXPEAVCVADServer@@@Z.c)
 *     ?GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ @ 0x1800093A4 (-GetUniqueStreamIdentifier@CVADServer@@QEAA_KXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 */

void __fastcall CPdcTimerActivation::~CPdcTimerActivation(CPdcActivationClient **this)
{
  int v2; // eax
  int v3; // edi
  CVADServer *v4; // rcx
  int v5; // edx
  unsigned __int64 UniqueStreamIdentifier; // rax
  int v7; // [rsp+30h] [rbp-49h] BYREF
  int v8; // [rsp+34h] [rbp-45h] BYREF
  CVADServer *v9; // [rsp+38h] [rbp-41h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-39h] BYREF
  _DWORD v11[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v12; // [rsp+50h] [rbp-29h]
  void *v13; // [rsp+60h] [rbp-19h] BYREF
  int v14; // [rsp+68h] [rbp-11h]
  int v15; // [rsp+6Ch] [rbp-Dh]
  void *v16; // [rsp+70h] [rbp-9h]
  int v17; // [rsp+78h] [rbp-1h]
  int v18; // [rsp+7Ch] [rbp+3h]
  CVADServer **v19; // [rsp+80h] [rbp+7h]
  int v20; // [rsp+88h] [rbp+Fh]
  int v21; // [rsp+8Ch] [rbp+13h]
  int *v22; // [rsp+90h] [rbp+17h]
  int v23; // [rsp+98h] [rbp+1Fh]
  int v24; // [rsp+9Ch] [rbp+23h]
  unsigned __int64 *v25; // [rsp+A0h] [rbp+27h]
  int v26; // [rsp+A8h] [rbp+2Fh]
  int v27; // [rsp+ACh] [rbp+33h]
  int *v28; // [rsp+B0h] [rbp+37h]
  int v29; // [rsp+B8h] [rbp+3Fh]
  int v30; // [rsp+BCh] [rbp+43h]

  CPdcActivationClient::ReleasePdcTimerActivation(this[1], this[2]);
  if ( *this )
  {
    v2 = Pdcv2ActivationClientDeactivate((int *)*this);
    *this = 0LL;
    v3 = v2;
    if ( dword_1800CA040 > 4u )
    {
      v4 = this[2];
      v21 = 0;
      v19 = &v9;
      v9 = v4;
      v20 = 8;
      v5 = *((_DWORD *)v4 + 16);
      v24 = 0;
      v7 = v5;
      v22 = &v7;
      v23 = 4;
      UniqueStreamIdentifier = CVADServer::GetUniqueStreamIdentifier(v4);
      v27 = 0;
      v30 = 0;
      v10 = UniqueStreamIdentifier;
      v25 = &v10;
      v28 = &v8;
      v26 = 8;
      v8 = v3 | 0x10000000;
      v29 = 4;
      v12 = 0LL;
      v11[1] = 4;
      v13 = off_1800CA048;
      v11[0] = ((unsigned int)&unk_1800A8596 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v14 = *(unsigned __int16 *)off_1800CA048;
      v16 = &unk_1800A85A1;
      v15 = 2;
      v17 = 75;
      v18 = 1;
      EtwEventWriteTransfer(qword_1800CA060, v11, 0LL, 0LL, 6, &v13);
    }
  }
}
