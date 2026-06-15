/*
 * XREFs of ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x14000C0F0
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140005860 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 * Callees:
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x14000BFE0 (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

CDeviceProcessNode *__fastcall CDeviceProcessNode::`vector deleting destructor'(CDeviceProcessNode *this, char a2)
{
  CDeviceProcessNode::~CDeviceProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
