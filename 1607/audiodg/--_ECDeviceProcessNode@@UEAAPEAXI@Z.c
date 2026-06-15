/*
 * XREFs of ??_ECDeviceProcessNode@@UEAAPEAXI@Z @ 0x140010430
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000B620 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ??1CDeviceProcessNode@@UEAA@XZ @ 0x140010318 (--1CDeviceProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 */

CDeviceProcessNode *__fastcall CDeviceProcessNode::`vector deleting destructor'(CDeviceProcessNode *this, char a2)
{
  CDeviceProcessNode::~CDeviceProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
