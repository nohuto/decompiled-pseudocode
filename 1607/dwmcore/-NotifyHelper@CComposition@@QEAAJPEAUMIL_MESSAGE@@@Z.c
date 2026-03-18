/*
 * XREFs of ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x18003B3A0
 * Callers:
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAXXZ @ 0x180038C60 (-OnEndComposition@CCrossThreadComposition@@MEAAXXZ.c)
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180039310 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x18003C058 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180107FF0 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800395C4 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::NotifyHelper(CComposition *this, struct MIL_MESSAGE *a2, __int64 a3)
{
  unsigned int v3; // eax
  int v4; // ebx
  __int64 v7; // rsi
  __int64 v8; // rbp
  int v9; // eax
  int v10; // edi

  v3 = *((_DWORD *)this + 108);
  v4 = 0;
  if ( v3 )
  {
    v7 = 0LL;
    v8 = v3;
    do
    {
      v9 = CChannelContext::PostMessageToChannel(*(CConnection ***)(v7 + *((_QWORD *)this + 51)), a2, a3);
      v10 = v9;
      if ( v9 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xE02u);
      if ( !v4 || v4 >= 0 && v10 < 0 )
        v4 = v10;
      v7 += 8LL;
      --v8;
    }
    while ( v8 );
  }
  return (unsigned int)v4;
}
