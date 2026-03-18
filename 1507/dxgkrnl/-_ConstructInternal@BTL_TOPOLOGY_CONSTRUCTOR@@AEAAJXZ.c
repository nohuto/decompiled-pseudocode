/*
 * XREFs of ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C0180464
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C017EC3C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C018021C (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0180304 (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 * Callees:
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@E@Z @ 0x1C017F7F8 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  int v1; // r9d
  int v2; // r8d
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v4; // [rsp+20h] [rbp-18h]
  char v5; // [rsp+28h] [rbp-10h]

  v1 = *((_DWORD *)this + 6);
  v2 = *((_DWORD *)this + 5);
  v5 = *((_BYTE *)this + 53);
  v4 = *((_DWORD *)this + 8);
  *((_WORD *)this + 5) = 0;
  return BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(this, (const struct _LUID *)((char *)this + 12), v2, v1, v4, v5);
}
