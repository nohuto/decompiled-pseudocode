/*
 * XREFs of ??_EFxIoQueue@@UEAAPEAXI@Z @ 0x1C0082130
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1C00820CC (--1FxIoQueue@@UEAA@XZ.c)
 */

FxIoQueue *__fastcall FxIoQueue::`vector deleting destructor'(FxIoQueue *this, unsigned int a2)
{
  char v2; // bl
  FxIoQueue *v4; // rcx

  v2 = a2;
  FxIoQueue::~FxIoQueue(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxIoQueue *)((char *)this - 32);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree(v4);
  }
  return this;
}
