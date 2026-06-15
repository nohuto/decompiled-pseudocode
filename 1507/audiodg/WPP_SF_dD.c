/*
 * XREFs of WPP_SF_dD @ 0x14003308C
 * Callers:
 *     ?StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSendReceiveServer@@@Z @ 0x1400030B4 (-StartALPCHandleServer@CEndpointInstance@@KAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAVHandleSe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dD(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_ffe90e00dae7115ac53e8b1f73fce6e5_Traceguids, 13LL, &v5);
}
