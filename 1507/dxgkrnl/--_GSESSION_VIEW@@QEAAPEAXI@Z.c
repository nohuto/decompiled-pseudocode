/*
 * XREFs of ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C0004EBC
 * Callers:
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C008F2D4 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z @ 0x1C00BE00C (-RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??1SESSION_VIEW@@QEAA@XZ @ 0x1C008EFD4 (--1SESSION_VIEW@@QEAA@XZ.c)
 */

SESSION_VIEW *__fastcall SESSION_VIEW::`scalar deleting destructor'(SESSION_VIEW *this)
{
  SESSION_VIEW::~SESSION_VIEW(this);
  operator delete(this);
  return this;
}
