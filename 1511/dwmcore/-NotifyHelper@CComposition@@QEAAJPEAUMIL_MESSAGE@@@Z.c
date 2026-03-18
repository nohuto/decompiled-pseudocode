/*
 * XREFs of ?NotifyHelper@CComposition@@QEAAJPEAUMIL_MESSAGE@@@Z @ 0x180094B10
 * Callers:
 *     ?Reset@CCrossThreadComposition@@UEAAXXZ @ 0x180082090 (-Reset@CCrossThreadComposition@@UEAAXXZ.c)
 *     ?OnEndComposition@CCrossThreadComposition@@MEAAJXZ @ 0x1800820E0 (-OnEndComposition@CCrossThreadComposition@@MEAAJXZ.c)
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180094B94 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x180095844 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800F41D4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?NotifyScreenRotation@CComposition@@AEAAJXZ @ 0x18010104C (-NotifyScreenRotation@CComposition@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800A41C0 (-PostMessageToChannel@CChannelContext@@QEAAJPEBUMIL_MESSAGE@@@Z.c)
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0xF67u);
      if ( !v3 || v3 >= 0 && v9 < 0 )
        v3 = v9;
      v6 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  return (unsigned int)v3;
}
