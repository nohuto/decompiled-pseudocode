/*
 * XREFs of ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C000181C
 * Callers:
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C007BACC (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C007BB34 (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z.c)
 * Callees:
 *     ??1SESSION_VIEW@@QEAA@XZ @ 0x1C007ABBC (--1SESSION_VIEW@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

SESSION_VIEW *__fastcall SESSION_VIEW::`scalar deleting destructor'(SESSION_VIEW *this)
{
  SESSION_VIEW::~SESSION_VIEW(this);
  operator delete(this);
  return this;
}
