/*
 * XREFs of HUBDTX_GetDeviceDescriptorUsingControlTransfer @ 0x1C0020944
 * Callers:
 *     HUBDSM_GettingAlternateDeviceDescriptor @ 0x1C0018B30 (HUBDSM_GettingAlternateDeviceDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C00097E0 (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C002042C (HUBDTX_GetDescriptor.c)
 */

void __fastcall HUBDTX_GetDeviceDescriptorUsingControlTransfer(__int64 a1)
{
  int Descriptor; // eax
  __int64 v3; // [rsp+28h] [rbp-20h]

  Descriptor = HUBDTX_GetDescriptor(a1, a1 + 1716, 18, 1, 0, 0);
  if ( Descriptor < 0 )
  {
    LODWORD(v3) = Descriptor;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x28u,
      (__int64)&WPP_54b341aebfc139c3e8664792e3975607_Traceguids,
      v3);
    HUBSM_AddEvent(a1 + 488, 0xFA4u);
  }
}
