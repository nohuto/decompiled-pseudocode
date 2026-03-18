/*
 * XREFs of ?AdjustRestrictedEntityCount@CComposition@@QEAAX_N@Z @ 0x18010F73C
 * Callers:
 *     ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x180109140 (-ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTEN.c)
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
