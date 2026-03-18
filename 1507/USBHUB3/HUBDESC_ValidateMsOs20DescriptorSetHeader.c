/*
 * XREFs of HUBDESC_ValidateMsOs20DescriptorSetHeader @ 0x1C002E1C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20DescriptorSetHeader(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  char v6; // di

  v6 = 1;
  if ( (*(_BYTE *)a2 & 2) != 0 )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 88), 2u, 5u, 0x12Eu, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 154LL);
    v6 = 0;
  }
  if ( *a3 != 10 )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a2 + 88),
      2u,
      5u,
      0x12Fu,
      (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids,
      *a3);
    (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 155LL);
    v6 = 0;
  }
  if ( v6 == 1 )
    *(_DWORD *)a2 |= 2u;
  else
    WPP_RECORDER_SF_(*(_QWORD *)(a2 + 88), 2u, 5u, 0x130u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
  return v6;
}
