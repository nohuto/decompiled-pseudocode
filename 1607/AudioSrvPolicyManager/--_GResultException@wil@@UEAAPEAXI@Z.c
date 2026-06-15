/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180001FB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x180001FF4 (--1ResultException@wil@@UEAA@XZ.c)
 */

wil::ResultException *__fastcall wil::ResultException::`scalar deleting destructor'(
        wil::ResultException *this,
        char a2)
{
  HANDLE ProcessHeap; // rax

  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
