/*
 * XREFs of ?AdjustRestrictedEntityCount@CComposition@@QEAAX_N@Z @ 0x1800FACC8
 * Callers:
 *     ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x1800F6F20 (-ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTEN.c)
 * Callees:
 *     <none>
 */

void __fastcall CComposition::AdjustRestrictedEntityCount(CComposition *this, char a2)
{
  if ( a2 )
    ++*((_DWORD *)this + 52);
  else
    --*((_DWORD *)this + 52);
}
