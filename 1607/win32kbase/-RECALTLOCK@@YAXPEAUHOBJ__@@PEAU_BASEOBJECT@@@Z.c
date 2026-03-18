/*
 * XREFs of ?RECALTLOCK@@YAXPEAUHOBJ__@@PEAU_BASEOBJECT@@@Z @ 0x1C0030090
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0027340 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RECALTLOCK(struct HOBJ__ *a1, struct _BASEOBJECT *a2)
{
  if ( HIDWORD(WPP_MAIN_CB.Dpc.SystemArgument2) )
  {
    if ( gpentHmgrAltStacks )
      RECALTLOCKSTACKBACKTRACE((unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000, a2);
  }
}
