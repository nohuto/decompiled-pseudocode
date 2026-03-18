/*
 * XREFs of HUBDTX_GetBOSDescriptorUsingControlTransfer @ 0x1C0020A54
 * Callers:
 *     HUBDSM_GettingAlternateBOSDescriptor @ 0x1C00199F0 (HUBDSM_GettingAlternateBOSDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009730 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002037C (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetBOSDescriptorUsingControlTransfer(__int64 a1)
{
  PVOID PoolWithTag; // rax
  int Descriptor; // eax
  __int64 v4; // [rsp+28h] [rbp-20h]

  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, *(unsigned __int16 *)(a1 + 1718), 0x64334855u);
  *(_QWORD *)(a1 + 2040) = PoolWithTag;
  if ( PoolWithTag )
  {
    Descriptor = HUBDTX_GetDescriptor(a1, (__int64)PoolWithTag, *(unsigned __int16 *)(a1 + 1718), 15, 0, 0);
    if ( Descriptor >= 0 )
      return;
  }
  else
  {
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x33u,
      (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids);
    Descriptor = -1073741670;
  }
  LODWORD(v4) = Descriptor;
  WPP_RECORDER_SF_d(
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
    2u,
    5u,
    0x34u,
    (__int64)&WPP_f73478d826785beb676296ba3ee7c315_Traceguids,
    v4);
  HUBSM_AddEvent(a1 + 488, 0xFA4u);
}
