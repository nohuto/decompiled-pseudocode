/*
 * XREFs of ??_GCAudioDGModule@@UEAAPEAXI@Z @ 0x140026DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAudioDGModule@@UEAA@XZ @ 0x140014FE4 (--1CAudioDGModule@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

CAudioDGModule *__fastcall CAudioDGModule::`scalar deleting destructor'(CAudioDGModule *this, char a2)
{
  CAudioDGModule::~CAudioDGModule(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
