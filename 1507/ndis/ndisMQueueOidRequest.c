/*
 * XREFs of ndisMQueueOidRequest @ 0x1C001EE70
 * Callers:
 *     ndisQueueRequestWorkItem @ 0x1C000895C (ndisQueueRequestWorkItem.c)
 *     ndisQueueRestoreRequestsOnTop @ 0x1C00435B8 (ndisQueueRestoreRequestsOnTop.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
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
  v6 = byte_1C0085312;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
  {
    WPP_SF_qq(21LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2);
    v6 = byte_1C0085312;
  }
  *v3 = 0LL;
  v3[1] = 0LL;
  if ( (*(_DWORD *)(a1 + 124) & 0x100) == 0 )
  {
    v7 = (_QWORD *)(a1 + 2200);
    for ( i = *(_QWORD **)(a1 + 2200); i != v7; i = (_QWORD *)*i )
    {
      if ( i == v3 )
        goto LABEL_8;
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
LABEL_8:
  if ( (unsigned __int8)v6 >= 4u )
    WPP_SF_qqd(22LL, &WPP_72ef677eb8bc3e91e72369ca310d6849_Traceguids, a1, a2, v5);
  return v5;
}
