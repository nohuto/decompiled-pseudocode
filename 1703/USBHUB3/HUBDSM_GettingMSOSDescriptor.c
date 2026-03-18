/*
 * XREFs of HUBDSM_GettingMSOSDescriptor @ 0x1C001AB90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009BF8 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C00225AC (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingMSOSDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  int Descriptor; // eax
  __int64 v4; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  Descriptor = HUBDTX_GetDescriptor(v1, (int)v1 + 2064, 18, 3, 238, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v4) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x32u,
      (__int64)&WPP_1456c6ef7b533877ee207863935bf626_Traceguids,
      v4);
    HUBSM_AddEvent(v1 + 488, 4004);
  }
  return 1000LL;
}
