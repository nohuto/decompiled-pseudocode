/*
 * XREFs of ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x18003AE2C
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18003A328 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x18003AD28 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_S @ 0x18006B12C (WPP_SF_S.c)
 */

char __fastcall ServerEndpointIsStarted(wchar_t *String2)
{
  char v2; // si
  RPC_STATUS v3; // eax
  __int64 v4; // rdi
  RPC_WSTR String1[2]; // [rsp+30h] [rbp-10h] BYREF
  RPC_BINDING_VECTOR *BindingVector; // [rsp+78h] [rbp+38h] BYREF
  RPC_WSTR StringBinding; // [rsp+80h] [rbp+40h] BYREF
  RPC_WSTR Protseq; // [rsp+88h] [rbp+48h] BYREF

  BindingVector = 0LL;
  v2 = 0;
  v3 = RpcServerInqBindings(&BindingVector);
  if ( !v3 || v3 == 1718 )
  {
    if ( v3 != 1718 )
    {
      v4 = 0LL;
      if ( !BindingVector->Count )
        goto LABEL_19;
      while ( 1 )
      {
        if ( !RpcBindingToStringBindingW(BindingVector->BindingH[v4], &StringBinding) )
        {
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
          {
            WPP_SF_S(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              11LL,
              &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
              StringBinding);
          }
          if ( !RpcStringBindingParseW(StringBinding, 0LL, &Protseq, 0LL, String1, 0LL) )
          {
            if ( !_wcsicmp(Protseq, L"ncalrpc") )
            {
              if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
              {
                WPP_SF_(
                  *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                  0xCu,
                  (__int64)&WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids);
              }
              if ( !_wcsicmp(String1[0], String2) )
              {
                if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
                  && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
                  && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
                {
                  WPP_SF_S(
                    *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
                    13LL,
                    &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
                    String2);
                }
                v2 = 1;
                RpcStringFreeW(&Protseq);
                RpcStringFreeW(&StringBinding);
                RpcStringFreeW(String1);
                goto LABEL_19;
              }
            }
            RpcStringFreeW(&Protseq);
            RpcStringFreeW(String1);
          }
          RpcStringFreeW(&StringBinding);
        }
        v4 = (unsigned int)(v4 + 1);
        if ( (unsigned int)v4 >= BindingVector->Count )
          goto LABEL_19;
      }
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_S(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        14LL,
        &WPP_38e46fdef237f327665e84f6b2229e5b_Traceguids,
        String2);
    }
LABEL_19:
    if ( BindingVector )
      RpcBindingVectorFree(&BindingVector);
  }
  return v2;
}
