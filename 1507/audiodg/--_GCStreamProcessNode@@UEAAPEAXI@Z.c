/*
 * XREFs of ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x14000C2B0
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140005860 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 * Callees:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x14000C130 (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

CStreamProcessNode *__fastcall CStreamProcessNode::`scalar deleting destructor'(CStreamProcessNode *this, char a2)
{
  CStreamProcessNode::~CStreamProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
