/*
 * XREFs of ?RECHMGRCREATE@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C00365F4
 * Callers:
 *     ?Pid@HANDLELOCK@@QEAAXK@Z @ 0x1C002A4AC (-Pid@HANDLELOCK@@QEAAXK@Z.c)
 *     HmgSetOwner @ 0x1C0035D00 (HmgSetOwner.c)
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z @ 0x1C00C0400 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@PEAXKE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RECHMGRCREATE(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( LODWORD(WPP_MAIN_CB.Dpc.DpcData) )
  {
    if ( gpentHmgrStacks )
      RECSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000);
  }
}
