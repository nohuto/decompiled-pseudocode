/*
 * XREFs of sub_1401AA7C0 @ 0x1401AA7C0
 * Callers:
 *     RtlUnicodeStringCat @ 0x1401AA648 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCatString @ 0x1401AA6D4 (RtlUnicodeStringCatString.c)
 *     RtlUnicodeStringCopy @ 0x1401AA738 (RtlUnicodeStringCopy.c)
 * Callees:
 *     sub_1401AA860 @ 0x1401AA860 (sub_1401AA860.c)
 */

__int64 __fastcall sub_1401AA7C0(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4)
{
  __int64 v6; // rcx
  int v7; // r8d
  unsigned __int16 *v8; // r10
  unsigned __int64 *v9; // r11

  *a2 = 0LL;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  v7 = sub_1401AA860();
  if ( v7 >= 0 )
  {
    if ( v6 )
    {
      *a2 = *(_QWORD *)(v6 + 8);
      *a3 = (unsigned __int64)v8[1] >> 1;
      if ( v9 )
        *v9 = (unsigned __int64)*v8 >> 1;
    }
  }
  return (unsigned int)v7;
}
