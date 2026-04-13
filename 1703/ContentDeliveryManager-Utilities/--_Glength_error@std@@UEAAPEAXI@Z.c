/*
 * XREFs of ??_Glength_error@std@@UEAAPEAXI@Z @ 0x18006A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x18006F818 (--3@YAXPEAX@Z_0.c)
 *     ??1exception@@UEAA@XZ_0 @ 0x18006F826 (--1exception@@UEAA@XZ_0.c)
 */

std::length_error *__fastcall std::length_error::`scalar deleting destructor'(std::length_error *this, char a2)
{
  exception::~exception(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
