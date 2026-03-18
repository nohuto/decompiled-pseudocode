/*
 * XREFs of ??_GCInputQueue@@UEAAPEAXI@Z @ 0x1C004A9C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?MarkInvalid@CInputQueue@@UEAAXXZ @ 0x1C004AA30 (-MarkInvalid@CInputQueue@@UEAAXXZ.c)
 */

CInputQueue *__fastcall CInputQueue::`scalar deleting destructor'(CInputQueue *this, char a2)
{
  *(_QWORD *)this = &CInputQueue::`vftable';
  CInputQueue::MarkInvalid(this);
  if ( (a2 & 1) != 0 )
    Win32FreePool();
  return this;
}
