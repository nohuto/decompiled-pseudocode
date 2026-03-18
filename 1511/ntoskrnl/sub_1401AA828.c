/*
 * XREFs of sub_1401AA828 @ 0x1401AA828
 * Callers:
 *     RtlUnicodeStringCat @ 0x1401AA648 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x1401AA738 (RtlUnicodeStringCopy.c)
 * Callees:
 *     sub_1401AA860 @ 0x1401AA860 (sub_1401AA860.c)
 */

__int64 __fastcall sub_1401AA828(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int16 *v4; // rcx
  unsigned __int64 *v5; // r10
  _QWORD *v6; // r11
  __int64 v7; // rdx

  *a2 = 0LL;
  *a3 = 0LL;
  result = sub_1401AA860();
  if ( (int)result >= 0 )
  {
    if ( v4 )
    {
      v7 = *((_QWORD *)v4 + 1);
      *v5 = (unsigned __int64)*v4 >> 1;
      *v6 = v7;
    }
  }
  return result;
}
