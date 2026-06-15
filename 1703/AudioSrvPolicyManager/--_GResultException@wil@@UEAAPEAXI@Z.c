/*
 * XREFs of ??_GResultException@wil@@UEAAPEAXI@Z @ 0x180002030
 * Callers:
 *     <none>
 * Callees:
 *     ??1ResultException@wil@@UEAA@XZ @ 0x180002064 (--1ResultException@wil@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

wil::ResultException *__fastcall wil::ResultException::`scalar deleting destructor'(
        wil::ResultException *this,
        char a2)
{
  wil::ResultException::~ResultException(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0xC8uLL);
  return this;
}
