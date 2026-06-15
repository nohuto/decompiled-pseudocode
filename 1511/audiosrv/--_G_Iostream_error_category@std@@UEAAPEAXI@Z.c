/*
 * XREFs of ??_G_Iostream_error_category@std@@UEAAPEAXI@Z @ 0x180067150
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

std::_Iostream_error_category *__fastcall std::_Iostream_error_category::`scalar deleting destructor'(
        std::_Iostream_error_category *this,
        char a2)
{
  *(_QWORD *)this = &std::error_category::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
