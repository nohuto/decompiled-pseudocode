/*
 * XREFs of ndisOidPostPDOpenProvider @ 0x1C006D3B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qqqqq @ 0x1C003F4F0 (WPP_SF_qqqqq.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     WPP_SF_qqqqd @ 0x1C006D184 (WPP_SF_qqqqd_ea_1C006D184.c)
 */

void __fastcall ndisOidPostPDOpenProvider(ULONG_PTR *a1)
{
  __int64 v1; // rdx
  ULONG_PTR *v2; // rbx
  ULONG_PTR v3; // rdi
  __int64 v4; // rsi
  char v5; // al
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = a1[4];
  v2 = a1;
  v3 = *a1;
  v4 = *(_QWORD *)(v1 + 40);
  v5 = byte_1C0083724;
  if ( (unsigned __int8)byte_1C0083724 >= 4u )
  {
    WPP_SF_qqqqq(0x1Au, &WPP_1c2478f64746bbfe15c5e36ca64a789d_Traceguids, v3, a1[2], a1[1], a1[3], v1);
    v5 = byte_1C0083724;
  }
  if ( !*v2 && !*((_DWORD *)v2 + 10) )
  {
    a1 = (ULONG_PTR *)&unk_1C0074ED0;
    if ( *(_UNKNOWN **)(v4 + 16) != &unk_1C0074ED0 )
      ndisBugCheckEx(0x23uLL, 5uLL, v2[2], v3);
  }
  if ( (unsigned __int8)v5 >= 4u )
  {
    LODWORD(v6) = *((_DWORD *)v2 + 10);
    WPP_SF_qqqqd((__int64)a1, v1, v3, v2[2], v2[1], v2[3], v6);
  }
}
