/*
 * XREFs of WPP_SF_Dg @ 0x14003018C
 * Callers:
 *     ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x14002F2F0 (-GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Dg(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids, 23LL, &v5);
}
