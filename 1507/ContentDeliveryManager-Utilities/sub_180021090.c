/*
 * XREFs of sub_180021090 @ 0x180021090
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002621C (--3@YAXPEAX@Z.c)
 *     ??1exception@@UEAA@XZ @ 0x1800264EC (--1exception@@UEAA@XZ.c)
 */

exception *__fastcall sub_180021090(exception *a1, char a2)
{
  exception::~exception(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
