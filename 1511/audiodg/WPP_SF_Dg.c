/*
 * XREFs of WPP_SF_Dg @ 0x1400330F4
 * Callers:
 *     ?GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z @ 0x1400321B0 (-GetEndpointBufferSize@CAudioDeviceGraph@@UEAAJPEAIPEAM@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Dg(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids, 23LL, &v5);
}
