/*
 * XREFs of ??_G_Iostream_error_category@std@@UEAAPEAXI@Z @ 0x1800513F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

std::_Iostream_error_category *__fastcall std::_Iostream_error_category::`scalar deleting destructor'(
        std::_Iostream_error_category *this,
        char a2)
{
  *(_QWORD *)this = &std::error_category::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x10);
  return this;
}
