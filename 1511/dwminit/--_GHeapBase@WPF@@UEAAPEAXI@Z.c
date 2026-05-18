/*
 * XREFs of ??_GHeapBase@WPF@@UEAAPEAXI@Z @ 0x180003F00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800040E0 (--3@YAXPEAX@Z.c)
 */

WPF::HeapBase *__fastcall WPF::HeapBase::`scalar deleting destructor'(WPF::HeapBase *this, char a2)
{
  *(_QWORD *)this = &WPF::HeapBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
