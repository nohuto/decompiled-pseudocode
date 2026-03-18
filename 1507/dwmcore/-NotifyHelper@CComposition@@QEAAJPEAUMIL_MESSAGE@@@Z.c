/*
 * XREFs of ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x1800681C4
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAJXZ @ 0x180045720 (-OnEndComposition@CCrossThreadComposition@@MEAAJXZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180046620 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180068248 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x180093268 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?NotifyScreenRotation@CComposition@@AEAAJXZ @ 0x1800E2F54 (-NotifyScreenRotation@CComposition@@AEAAJXZ.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800EE6EC (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x180062E60 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::NotifyHelper(CComposition *this, struct MIL_MESSAGE *a2)
{
  unsigned int v2; // eax
  int v3; // ebx
  __int64 v6; // rsi
  __int64 v7; // rbp
  int v8; // eax
  int v9; // edi

  v2 = *((_DWORD *)this + 108);
  v3 = 0;
  if ( v2 )
  {
    v6 = 0LL;
    v7 = v2;
    do
    {
      v8 = CChannelContext::PostMessageToChannel(*(CChannelContext **)(v6 + *((_QWORD *)this + 51)), a2);
      v9 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF49u);
      if ( !v3 || v3 >= 0 && v9 < 0 )
        v3 = v9;
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  return (unsigned int)v3;
}
