/*
 * XREFs of PnpTraceDeviceRemoveProcessVeto @ 0x140649124
 * Callers:
 *     PnpLogVetoInformation @ 0x140642BC4 (PnpLogVetoInformation.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

void PnpTraceDeviceRemoveProcessVeto()
{
  unsigned __int16 *v0; // r9
  unsigned __int16 *v1; // r10
  unsigned __int16 *v2; // r11
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-39h] BYREF
  _DWORD *v4; // [rsp+50h] [rbp-19h]
  __int64 v5; // [rsp+58h] [rbp-11h]
  __int64 v6; // [rsp+60h] [rbp-9h]
  _DWORD v7[2]; // [rsp+68h] [rbp-1h] BYREF
  _DWORD *v8; // [rsp+70h] [rbp+7h]
  __int64 v9; // [rsp+78h] [rbp+Fh]
  __int64 v10; // [rsp+80h] [rbp+17h]
  _DWORD v11[2]; // [rsp+88h] [rbp+1Fh] BYREF
  _DWORD *v12; // [rsp+90h] [rbp+27h]
  __int64 v13; // [rsp+98h] [rbp+2Fh]
  __int64 v14; // [rsp+A0h] [rbp+37h]
  _DWORD v15[2]; // [rsp+A8h] [rbp+3Fh] BYREF

  if ( stru_1402F3230.LevelPlus1 > 5 )
  {
    if ( TlgKeywordOn(&stru_1402F3230, 0x400000000000uLL) )
    {
      v5 = 2LL;
      v4 = v7;
      v6 = *((_QWORD *)v2 + 1);
      v7[0] = *v2;
      v8 = v11;
      v10 = *((_QWORD *)v1 + 1);
      v11[0] = *v1;
      v12 = v15;
      v14 = *((_QWORD *)v0 + 1);
      v15[0] = *v0;
      v7[1] = 0;
      v9 = 2LL;
      v11[1] = 0;
      v13 = 2LL;
      v15[1] = 0;
      TlgWrite(&stru_1402F3230, &unk_14027BF35, 0LL, 0LL, 8u, &pData);
    }
  }
}
