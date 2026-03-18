/*
 * XREFs of HUBDESC_ValidateMsOs20CcgpDevice @ 0x1C002FB60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001CB4 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
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
    WPP_RECORDER_SF_(*((_QWORD *)a2 + 11), 2u, 5u, 0x154u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
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
      0x155u,
      (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids,
      *a3);
    v7 = 202LL;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), v7);
  v6 = 0;
  WPP_RECORDER_SF_(*((_QWORD *)a2 + 11), 2u, 5u, 0x156u, (__int64)&WPP_c8d10965268029d0460df6a43fc0a9a4_Traceguids);
  return v6;
}
