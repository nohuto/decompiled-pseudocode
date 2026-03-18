/*
 * XREFs of HUBDESC_ValidateMsOs20DescriptorSetHeader @ 0x1C0031E30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001D40 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20DescriptorSetHeader(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v6; // di

  v6 = 1;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 88), 2u, 5u, 0x131u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 154LL);
    v6 = 0;
  }
  if ( *a3 != 10 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x132u,
      (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids,
      *a3);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 155LL);
    v6 = 0;
  }
  if ( v6 == 1 )
    *(_DWORD *)a2 |= 2u;
  else
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 88), 2u, 5u, 0x133u, (__int64)&WPP_12a06aa43bd1352a4a1eaab3037908e2_Traceguids);
  return v6;
}
