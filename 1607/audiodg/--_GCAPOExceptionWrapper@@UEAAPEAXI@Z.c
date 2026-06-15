/*
 * XREFs of ??_GCAPOExceptionWrapper@@UEAAPEAXI@Z @ 0x140010A40
 * Callers:
 *     ?NDRelease@CAPOExceptionWrapper@@UEAAKXZ @ 0x140010630 (-NDRelease@CAPOExceptionWrapper@@UEAAKXZ.c)
 * Callees:
 *     ??1CAPOExceptionWrapper@@UEAA@XZ @ 0x140010A80 (--1CAPOExceptionWrapper@@UEAA@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140012620 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140012688 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
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
