/*
 * XREFs of HUBDESC_ValidateMsOs20CcgpDevice @ 0x1C002EE30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00015F4 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001974 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_ValidateMsOs20CcgpDevice(__int64 a1, int *a2, unsigned __int16 *a3)
{
  int v3; // eax
  char v6; // di
  __int64 v7; // rdx

  v3 = *a2;
  v6 = 1;
  if ( (*a2 & 0x200) != 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 11), 2u, 5u, 0x156u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
    v7 = 201LL;
  }
  else
  {
    if ( *a3 == 4 )
    {
      *((_QWORD *)a2 + 7) = a3;
      *a2 = v3 | 0x200;
      return v6;
    }
    WPP_RECORDER_SF_d(
      *((_QWORD *)a2 + 11),
      2u,
      5u,
      0x157u,
      (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids,
      *a3);
    v7 = 202LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v7);
  v6 = 0;
  WPP_RECORDER_SF_(*((_QWORD *)a2 + 11), 2u, 5u, 0x158u, (__int64)&WPP_2371d6fec51640206d5aea3557771e4a_Traceguids);
  return v6;
}
