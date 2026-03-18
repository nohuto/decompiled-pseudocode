/*
 * XREFs of sub_1400D197C @ 0x1400D197C
 * Callers:
 *     RtlStringCbCopyUnicodeString @ 0x1400D18D8 (RtlStringCbCopyUnicodeString.c)
 *     RtlUnicodeStringCopy @ 0x140233C18 (RtlUnicodeStringCopy.c)
 * Callees:
 *     sub_1400D19B4 @ 0x1400D19B4 (sub_1400D19B4.c)
 */

__int64 __fastcall sub_1400D197C(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned __int16 *v4; // rcx
  unsigned __int64 *v5; // r10
  _QWORD *v6; // r11
  __int64 v7; // rdx

  *a2 = 0LL;
  *a3 = 0LL;
  result = sub_1400D19B4();
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
