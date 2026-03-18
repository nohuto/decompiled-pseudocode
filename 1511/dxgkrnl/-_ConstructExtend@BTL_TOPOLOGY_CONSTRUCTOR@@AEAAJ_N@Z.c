/*
 * XREFs of ?_ConstructExtend@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01847CC
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01830C8 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C0184804 (-_ConstructExtendSecondPath@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C018492C (-_ConstructInternal@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(BTL_TOPOLOGY_CONSTRUCTOR *this, bool a2)
{
  __int64 result; // rax

  result = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
  if ( (int)result >= 0 )
  {
    *((_WORD *)this + 5) = 0;
    return BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtendSecondPath(this, a2);
  }
  return result;
}
