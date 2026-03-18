/*
 * XREFs of HUBDSM_GettingAlternateModeStringDescriptor @ 0x1C0019A30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002037C (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDSM_GettingAlternateModeStringDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int Descriptor; // eax
  __int64 v5; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)(v1 + 2616);
  Descriptor = HUBDTX_GetDescriptor(
                 v1,
                 (int)v1 + 1716,
                 255,
                 3,
                 *(_BYTE *)(*(_QWORD *)v2 + 4LL * *(unsigned __int8 *)(v2 + 8) + 47),
                 0);
  if ( Descriptor < 0 )
  {
    *(_BYTE *)(v2 + 8) = -1;
    LODWORD(v5) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x2Du,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      v5);
    HUBSM_AddEvent(v1 + 488, 0xFA4u);
  }
  return 1000LL;
}
