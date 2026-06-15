/*
 * XREFs of ??_ECExclusiveStreamGroupProxy@@MEAAPEAXI@Z @ 0x18008B7A0
 * Callers:
 *     ??_ECExclusiveStreamGroupProxy@@O7EAAPEAXI@Z @ 0x1800490D0 (--_ECExclusiveStreamGroupProxy@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CExclusiveStreamGroupProxy@@MEAA@XZ @ 0x18008B550 (--1CExclusiveStreamGroupProxy@@MEAA@XZ.c)
 */

CExclusiveStreamGroupProxy *__fastcall CExclusiveStreamGroupProxy::`vector deleting destructor'(
        CExclusiveStreamGroupProxy *this,
        char a2)
{
  CExclusiveStreamGroupProxy::~CExclusiveStreamGroupProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
