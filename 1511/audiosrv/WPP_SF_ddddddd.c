/*
 * XREFs of WPP_SF_ddddddd @ 0x18009B2AC
 * Callers:
 *     AudioWriteLogHeader @ 0x18004556C (AudioWriteLogHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ddddddd(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+C8h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_7f352500bd04dee852eccd7763aed2fc_Traceguids, 13LL, &v5);
}
