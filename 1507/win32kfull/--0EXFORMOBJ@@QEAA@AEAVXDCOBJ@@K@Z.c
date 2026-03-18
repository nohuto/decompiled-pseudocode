/*
 * XREFs of ??0EXFORMOBJ@@QEAA@AEAVXDCOBJ@@K@Z @ 0x1C015B968
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 */

EXFORMOBJ *__fastcall EXFORMOBJ::EXFORMOBJ(EXFORMOBJ *this, struct XDCOBJ *a2, unsigned int a3)
{
  EXFORMOBJ::vQuickInit(this, a2, a3);
  return this;
}
