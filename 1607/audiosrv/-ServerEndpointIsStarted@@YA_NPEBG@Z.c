/*
 * XREFs of ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x180031010
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x180030560 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x180030F00 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 * Callees:
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 */

__int64 __fastcall ServerEndpointIsStarted(const unsigned __int16 *a1)
{
  unsigned __int8 v2; // bp
  RPC_STATUS v3; // eax
  RPC_BINDING_VECTOR *v4; // rax
  int v5; // ebx
  RPC_WSTR String[2]; // [rsp+30h] [rbp-38h] BYREF
  RPC_BINDING_VECTOR *BindingVector; // [rsp+78h] [rbp+10h] BYREF
  RPC_WSTR StringBinding; // [rsp+80h] [rbp+18h] BYREF
  RPC_WSTR Protseq; // [rsp+88h] [rbp+20h] BYREF

  BindingVector = 0LL;
  v2 = 0;
  v3 = RpcServerInqBindings(&BindingVector);
  if ( !v3 )
  {
    v4 = BindingVector;
    v5 = 0;
    if ( !BindingVector->Count )
      goto LABEL_18;
    while ( 1 )
    {
      if ( !RpcBindingToStringBindingW(v4->BindingH[v5], &StringBinding) )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            10LL,
            &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids,
            StringBinding);
        }
        if ( !RpcStringBindingParseW(StringBinding, 0LL, &Protseq, 0LL, String, 0LL) )
        {
          if ( !(unsigned int)_o__wcsicmp(Protseq, L"ncalrpc") )
          {
            if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 11LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids);
            }
            if ( !(unsigned int)_o__wcsicmp(String[0], a1) )
            {
              if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_S(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  12LL,
                  &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids,
                  a1);
              }
              v2 = 1;
              RpcStringFreeW(&Protseq);
              RpcStringFreeW(&StringBinding);
              RpcStringFreeW(String);
              v4 = BindingVector;
              goto LABEL_18;
            }
          }
          RpcStringFreeW(&Protseq);
          RpcStringFreeW(String);
        }
        RpcStringFreeW(&StringBinding);
      }
      v4 = BindingVector;
      if ( ++v5 >= BindingVector->Count )
        goto LABEL_18;
    }
  }
  if ( v3 == 1718 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_46a9ce01d2f43d18f900d88a548d1114_Traceguids, a1);
    }
    v4 = BindingVector;
LABEL_18:
    if ( v4 )
      RpcBindingVectorFree(&BindingVector);
  }
  return v2;
}
