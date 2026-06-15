/*
 * XREFs of ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x18003C4D8
 * Callers:
 *     ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x18003BE60 (-EndInitialization@CAudioSrv@@UEAAJJ@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x18003C5DC (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     WPP_SF_S @ 0x180069E40 (WPP_SF_S.c)
 */

__int64 __fastcall StartRpcServer(unsigned __int16 *a1, unsigned __int16 *a2, void *a3, void *a4)
{
  unsigned int v7; // ebx
  RPC_STATUS v8; // eax
  int v9; // eax

  v7 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, a2);
  }
  if ( !ServerEndpointIsStarted(a2) )
  {
    v8 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, a2, a4);
    v7 = v8;
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x19u,
        (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids,
        v8);
    }
LABEL_10:
    if ( v7 )
      return v7;
    goto LABEL_11;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids);
    goto LABEL_10;
  }
LABEL_11:
  v9 = RpcServerRegisterIf3(a3, 0LL, 0LL, 33LL, 1234, 0, AudioSrvRpcIfCallback, a4);
  v7 = v9;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, (__int64)&WPP_35438112b434e0062086f6d4e2d2e42c_Traceguids, v9);
  }
  return v7;
}
