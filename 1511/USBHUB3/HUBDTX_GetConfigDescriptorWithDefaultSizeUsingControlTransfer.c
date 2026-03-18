/*
 * XREFs of HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer @ 0x1C0020720
 * Callers:
 *     HUBDSM_GettingConfigDescriptorWhileRenuemrating @ 0x1C0018AA0 (HUBDSM_GettingConfigDescriptorWhileRenuemrating.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002037C (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetConfigDescriptorWithDefaultSizeUsingControlTransfer(_QWORD *a1)
{
  void *v2; // rcx
  int Descriptor; // eax
  __int64 v4; // [rsp+28h] [rbp-20h]

  v2 = (void *)a1[250];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  a1[250] = 0LL;
  a1[249] = 0LL;
  Descriptor = HUBDTX_GetDescriptor((__int64)a1, (__int64)a1 + 1716, 255, 2, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v4) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432LL),
      2u,
      5u,
      0x25u,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      v4);
    HUBSM_AddEvent((__int64)(a1 + 61), 0xFA4u);
  }
}
