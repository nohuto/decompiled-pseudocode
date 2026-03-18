/*
 * XREFs of ?SendSimpleAsyncRequestNative@CPortClient@@AEAAJK@Z @ 0x140005440
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001610 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x140001960 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x140003F66 (memset_0.c)
 */

__int64 __fastcall CPortClient::SendSimpleAsyncRequestNative(CPortClient *this, int a2)
{
  void *v4; // rcx
  NTSTATUS v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  struct _PORT_MESSAGE LpcMessage; // [rsp+30h] [rbp-38h] BYREF
  int v10; // [rsp+58h] [rbp-10h]

  memset_0((char *)&LpcMessage.u1.Length + 2, 0, 0x2EuLL);
  v4 = (void *)*((_QWORD *)this + 6);
  v10 = a2;
  LpcMessage.u1.Length = 3145736;
  v5 = NtRequestPort(v4, &LpcMessage);
  v6 = CPortClient::CheckStatus(this, v5);
  if ( v6 >= 0 )
    return 0LL;
  v7 = v6 | 0x10000000;
  MilInstrumentationCheckHR(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, v6 | 0x10000000, 0x31u);
  return v7;
}
