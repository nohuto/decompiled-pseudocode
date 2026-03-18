/*
 * XREFs of ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x1C0001820
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1C0065C14 (--1DXGSHAREDRESOURCE@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

DXGSHAREDRESOURCE *__fastcall DXGSHAREDRESOURCE::`scalar deleting destructor'(DXGSHAREDRESOURCE *this, char a2)
{
  DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
