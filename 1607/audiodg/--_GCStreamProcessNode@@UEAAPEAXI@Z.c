/*
 * XREFs of ??_GCStreamProcessNode@@UEAAPEAXI@Z @ 0x1400102E0
 * Callers:
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000B620 (--1CPipeInstance@@QEAA@XZ.c)
 * Callees:
 *     ??1CStreamProcessNode@@UEAA@XZ @ 0x140010164 (--1CStreamProcessNode@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 */

CStreamProcessNode *__fastcall CStreamProcessNode::`scalar deleting destructor'(CStreamProcessNode *this, char a2)
{
  CStreamProcessNode::~CStreamProcessNode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
