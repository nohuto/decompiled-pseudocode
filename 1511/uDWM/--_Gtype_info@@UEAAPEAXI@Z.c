/*
 * XREFs of ??_Gtype_info@@UEAAPEAXI@Z @ 0x18004ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009E03C (--3@YAXPEAX@Z.c)
 */

type_info *__fastcall type_info::`scalar deleting destructor'(type_info *this, char a2)
{
  type_info::~type_info(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
