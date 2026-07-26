/*
 * XREFs of ndisMQueueOidRequest @ 0x1C00428C0
 * Callers:
 *     ndisQueueRestoreRequestsOnTop @ 0x1C0044B50 (ndisQueueRestoreRequestsOnTop.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMQueueOidRequest(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  unsigned int v5; // esi
  char v6; // r8
  _QWORD *v7; // rax
  _QWORD *i; // rcx
  _QWORD *v9; // rcx

  v3 = (_QWORD *)(a2 + 72);
  v5 = -1073741823;
  v6 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qq(0x15u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2);
    v6 = byte_1C0083712;
  }
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( (*(_DWORD *)(a1 + 124) & 0x100) == 0 )
  {
    v7 = (_QWORD *)(a1 + 2200);
    for ( i = *(_QWORD **)(a1 + 2200); i != v7; i = (_QWORD *)*i )
    {
      if ( i == v3 )
        goto LABEL_11;
    }
    v9 = *(_QWORD **)(a1 + 2208);
    v5 = 0;
    *v3 = v7;
    v3[1] = v9;
    if ( (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v3;
    *(_QWORD *)(a1 + 2208) = v3;
  }
LABEL_11:
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qqd(22LL, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, a1, a2, v5);
  return v5;
}
