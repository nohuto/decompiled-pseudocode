/*
 * XREFs of ?reset@?$auto_ptr@U_VIDPN_LKG_TOPOLOGY@@@@QEAAXPEAU_VIDPN_LKG_TOPOLOGY@@@Z @ 0x1C000CFC8
 * Callers:
 *     ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C0090C08 (-SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00DC850 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

void __fastcall auto_ptr<_VIDPN_LKG_TOPOLOGY>::reset(void **a1, void *a2)
{
  void *v4; // rcx

  v4 = *a1;
  if ( a2 != v4 )
    operator delete(v4);
  *a1 = a2;
}
