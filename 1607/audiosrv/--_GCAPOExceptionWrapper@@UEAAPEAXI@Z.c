/*
 * XREFs of ??_GCAPOExceptionWrapper@@UEAAPEAXI@Z @ 0x18008BD70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAPOExceptionWrapper@@UEAA@XZ @ 0x18008BCD4 (--1CAPOExceptionWrapper@@UEAA@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x18008D774 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x18008D820 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 */

CAPOExceptionWrapper *__fastcall CAPOExceptionWrapper::`scalar deleting destructor'(
        CAPOExceptionWrapper *this,
        char a2)
{
  void *v4; // rax

  CAPOExceptionWrapper::~CAPOExceptionWrapper(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = AERTGetDLLRTHeap();
    AERTFree(this, v4);
  }
  return this;
}
