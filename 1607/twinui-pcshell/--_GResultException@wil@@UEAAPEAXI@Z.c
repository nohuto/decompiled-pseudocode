/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180002520
 * Callers:
 *     <none>
 * Callees:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x18000255C (--1ResultException@wil@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

wil::ResultException *__fastcall wil::ResultException::`scalar deleting destructor'(
        wil::ResultException *this,
        char a2)
{
  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
