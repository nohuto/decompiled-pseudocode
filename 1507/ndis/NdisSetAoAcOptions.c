/*
 * XREFs of NdisSetAoAcOptions @ 0x1C00DD850
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall NdisSetAoAcOptions(__int64 a1, char a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  char v5; // r8
  int v7; // eax

  v2 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v2 + 4520);
  v5 = byte_1C0085315;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
  {
    WPP_SF_qD(0x25u, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, a1, a2);
    v5 = byte_1C0085315;
  }
  if ( *(_QWORD *)(v2 + 4520) )
  {
    v7 = ndisNicQuietDerefExtendedTimeout;
    if ( (a2 & 1) == 0 )
      v7 = ndisNicQuietDerefDefaultTimeout;
    *(_DWORD *)(v4 + 276) = v7;
    if ( (unsigned __int8)v5 >= 4u )
      WPP_SF_d(0x27u, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids, v7);
    return 0LL;
  }
  else
  {
    if ( (unsigned __int8)v5 >= 3u )
      WPP_SF_(0x26u, &WPP_393fd4d13135329a14ebf0b5e6137528_Traceguids);
    return 3221225659LL;
  }
}
