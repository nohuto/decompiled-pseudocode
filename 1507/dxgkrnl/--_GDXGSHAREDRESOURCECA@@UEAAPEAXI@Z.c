/*
 * XREFs of ??_GDXGSHAREDRESOURCECA@@UEAAPEAXI@Z @ 0x1C001C110
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1C012C884 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 */

DXGSHAREDRESOURCECA *__fastcall DXGSHAREDRESOURCECA::`scalar deleting destructor'(DXGSHAREDRESOURCECA *this, char a2)
{
  DXGSHAREDRESOURCECA::~DXGSHAREDRESOURCECA(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
