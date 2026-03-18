/*
 * XREFs of ?vGetCache@RFONTOBJ@@QEAAXXZ @ 0x1C015BA7C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002E94C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vGetCache(RFONTOBJ *this)
{
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
}
