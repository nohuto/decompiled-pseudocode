/*
 * XREFs of ?RenderAndCommit@CMagnifierControl@@AEAAJXZ @ 0x18007B758
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18007B0D8 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMagnifierControl::RenderAndCommit(struct MIL_CHANNEL__ **this)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = MilChannel_CommitChannel(this[2]);
  v2 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v1, 0x23Du);
  return v2;
}
