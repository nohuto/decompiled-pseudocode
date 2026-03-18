/*
 * XREFs of ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C00633C0
 * Callers:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x1C00652A0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 * Callees:
 *     ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0063448 (-_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::QueryAnchorInfo(
        struct _LUID *a1,
        unsigned int *a2,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a3)
{
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v9; // rax
  struct _LUID v10; // [rsp+20h] [rbp-30h] BYREF
  int v11; // [rsp+28h] [rbp-28h]
  unsigned int v12; // [rsp+2Ch] [rbp-24h]
  int v13; // [rsp+30h] [rbp-20h]
  int v14; // [rsp+34h] [rbp-1Ch]
  int v15; // [rsp+38h] [rbp-18h]
  int v16; // [rsp+3Ch] [rbp-14h]
  int v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+44h] [rbp-Ch]
  __int16 v19; // [rsp+48h] [rbp-8h]

  v15 = 0;
  v17 = 0;
  v11 = -1;
  v10 = 0LL;
  v12 = -1;
  v16 = -1;
  v13 = -2;
  v14 = -2;
  v18 = 1;
  v19 = 0;
  v5 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *)&v10);
  v7 = v5;
  if ( v5 < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v9 + 24) = v7;
    WdLogEvent5_WdError(v9);
  }
  else
  {
    *a1 = v10;
    *a2 = v12;
  }
  return (unsigned int)v7;
}
