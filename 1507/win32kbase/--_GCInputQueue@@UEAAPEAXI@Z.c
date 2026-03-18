/*
 * XREFs of ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C0023790
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C0023810 (-MarkInvalid@CInputQueue@@UEAAXXZ.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

CInputQueue *__fastcall CInputQueue::`scalar deleting destructor'(CInputQueue *this, char a2)
{
  *(_QWORD *)this = &CInputQueue::`vftable';
  CInputQueue::MarkInvalid(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool(this);
  return this;
}
