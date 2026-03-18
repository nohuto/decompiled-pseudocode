/*
 * XREFs of HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer @ 0x1C00210F4
 * Callers:
 *     HUBDSM_GettingBOSDescriptorHeader @ 0x1C0019A10 (HUBDSM_GettingBOSDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002037C (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetBOSDescriptorHeaderUsingControlTransfer(_QWORD *a1)
{
  void *v2; // rcx
  PVOID *v3; // rax
  void *v4; // rcx
  int Descriptor; // eax
  __int64 v6; // [rsp+28h] [rbp-20h]

  v2 = (void *)a1[255];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x64334855u);
  v3 = (PVOID *)a1[327];
  if ( v3 && *v3 )
    ExFreePoolWithTag(*v3, 0x64334855u);
  v4 = (void *)a1[327];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x64334855u);
  a1[255] = 0LL;
  Descriptor = HUBDTX_GetDescriptor((__int64)a1, (__int64)a1 + 1716, 255, 15, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v6) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1[1] + 1432LL),
      2u,
      5u,
      0x3Au,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
      v6);
    HUBSM_AddEvent((__int64)(a1 + 61), 0xFA4u);
  }
}
