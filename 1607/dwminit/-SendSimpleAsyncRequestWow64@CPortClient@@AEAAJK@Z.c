/*
 * XREFs of ?SendSimpleAsyncRequestWow64@CPortClient@@AEAAJK@Z @ 0x1800056E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180004B1C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x1800055B0 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     memset_0 @ 0x18000818E (memset_0.c)
 */

__int64 __fastcall CPortClient::SendSimpleAsyncRequestWow64(CPortClient *this, int a2)
{
  unsigned int v4; // edi
  const struct reg_FeatureDescriptor *v5; // rcx
  BOOL v6; // eax
  void *v7; // rcx
  unsigned int v8; // eax
  int v9; // eax
  NTSTATUS v10; // eax
  unsigned int v12; // [rsp+20h] [rbp-58h]
  _PORT_MESSAGE LpcMessage; // [rsp+40h] [rbp-38h] BYREF
  int v14; // [rsp+68h] [rbp-10h]

  v4 = 0;
  memset_0((char *)&LpcMessage.u1.Length + 2, 0, 0x2EuLL);
  v14 = a2;
  LpcMessage.u1.Length = 3145736;
  v6 = EvaluateCurrentState(v5);
  v7 = (void *)*((_QWORD *)this + 6);
  if ( v6 )
  {
    v8 = NtAlpcSendWaitReceivePort(v7, 0x10000LL, &LpcMessage, 0LL, 0LL, 0LL, 0LL, 0LL);
    v9 = CPortClient::CheckStatus(this, v8);
    if ( v9 < 0 )
    {
      v12 = 58;
LABEL_6:
      v4 = v9 | 0x10000000;
      MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8LL, v9 | 0x10000000, v12);
    }
  }
  else
  {
    v10 = NtRequestPort(v7, &LpcMessage);
    v9 = CPortClient::CheckStatus(this, v10);
    if ( v9 < 0 )
    {
      v12 = 62;
      goto LABEL_6;
    }
  }
  return v4;
}
