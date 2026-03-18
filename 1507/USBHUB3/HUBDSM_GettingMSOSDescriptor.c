/*
 * XREFs of HUBDSM_GettingMSOSDescriptor @ 0x1C0018580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00091B0 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C001F76C (HUBDTX_GetDescriptor.c)
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
      (__int64)&WPP_3af9c4bc24663ab710b8f4aaa06e62ad_Traceguids,
      v4);
    HUBSM_AddEvent(v1 + 488, 0xFA4u);
  }
  return 1000LL;
}
