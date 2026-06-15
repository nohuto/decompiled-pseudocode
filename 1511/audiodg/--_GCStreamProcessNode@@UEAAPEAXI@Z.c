/*
 * XREFs of ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x140013340
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000FFE0 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 * Callees:
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x1400131E0 (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1400189FC (--3@YAXPEAX@Z.c)
 */

CStreamProcessNode *__fastcall CStreamProcessNode::`scalar deleting destructor'(CStreamProcessNode *this, char a2)
{
  CDeviceProcessNode::~CDeviceProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
