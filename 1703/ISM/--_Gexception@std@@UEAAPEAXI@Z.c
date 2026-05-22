/*
 * XREFs of ??_Gexception@std@@UEAAPEAXI@Z @ 0x1800018D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::exception *__fastcall std::exception::`scalar deleting destructor'(std::exception *this, char a2)
{
  *(_QWORD *)this = &std::exception::`vftable';
  __std_exception_destroy((char *)this + 8);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
