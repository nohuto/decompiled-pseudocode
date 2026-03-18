/*
 * XREFs of ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x1400024A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001490 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001A90 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x140004AA8 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 */

__int64 __fastcall CPortClient::SendSimpleAsyncRequestWow64(CPortClient *this, int a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  void *v5; // rcx
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // edi
  NTSTATUS v10; // eax
  int v11; // eax
  _BYTE LpcMessage[18]; // [rsp+40h] [rbp-38h] BYREF
  __int128 LpcMessage_18; // [rsp+52h] [rbp-26h]
  _TBYTE LpcMessage_34; // [rsp+62h] [rbp-16h]
  __int16 v15; // [rsp+6Ch] [rbp-Ch]
  __int16 v16; // [rsp+6Eh] [rbp-Ah]

  v2 = 0;
  *(_OWORD *)&LpcMessage[2] = 0uLL;
  LpcMessage_18 = 0uLL;
  *(_QWORD *)&LpcMessage_34 = 0LL;
  v15 = 0;
  v16 = 0;
  *(_DWORD *)((char *)&LpcMessage_34 + 6) = a2;
  *(_DWORD *)LpcMessage = 3145736;
  v4 = EvaluateCurrentState(this);
  v5 = (void *)*((_QWORD *)this + 6);
  if ( v4 )
  {
    v6 = NtAlpcSendWaitReceivePort(v5, 0x10000LL, LpcMessage, 0LL, 0LL, 0LL, 0LL, 0LL);
    v7 = CPortClient::CheckStatus(this, v6);
    if ( v7 < 0 )
    {
      v8 = v7 | 0x10000000;
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v7 | 0x10000000, 0x3Au);
      return v8;
    }
  }
  else
  {
    v10 = NtRequestPort(v5, (PPORT_MESSAGE)LpcMessage);
    v11 = CPortClient::CheckStatus(this, v10);
    if ( v11 < 0 )
    {
      v2 = v11 | 0x10000000;
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v11 | 0x10000000, 0x3Eu);
    }
  }
  return v2;
}
