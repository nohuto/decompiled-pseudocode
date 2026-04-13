/*
 * XREFs of sub_1800263F0 @ 0x1800263F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002621C (--3@YAXPEAX@Z.c)
 */

type_info *__fastcall sub_1800263F0(type_info *a1, char a2)
{
  type_info::~type_info(a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
