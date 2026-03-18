/*
 * XREFs of ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C018492C
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01830C8 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01846E4 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01847CC (-_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 * Callees:
 *     ?_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@E@Z @ 0x1C0183C84 (-_AddPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEBU_LUID@@IIW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  char v1; // al

  v1 = 0;
  *((_WORD *)this + 5) = 0;
  if ( *((_BYTE *)this + 53) || *((_BYTE *)this + 60) )
    v1 = 1;
  return BTL_TOPOLOGY_CONSTRUCTOR::_AddPathToTopology(
           this,
           (const struct _LUID *)((char *)this + 12),
           *((_DWORD *)this + 5),
           *((_DWORD *)this + 6),
           (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY)*((_DWORD *)this + 8),
           v1);
}
