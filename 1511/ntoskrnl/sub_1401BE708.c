/*
 * XREFs of sub_1401BE708 @ 0x1401BE708
 * Callers:
 *     RtlUnicodeStringPrintfEx @ 0x14012C1CC (RtlUnicodeStringPrintfEx.c)
 *     RtlUnicodeStringCopyStringEx @ 0x1401339D0 (RtlUnicodeStringCopyStringEx.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall sub_1401BE708(void *a1, __int64 a2, __int64 a3, _QWORD *a4, _QWORD *a5, _QWORD *a6, __int16 a7)
{
  if ( (a7 & 0x1000) != 0 )
  {
    *a4 = 0LL;
    *a5 = a1;
    *a6 = a2;
  }
  if ( (a7 & 0x400) != 0 )
  {
    memset(a1, (unsigned __int8)a7, 2 * a2);
    *a4 = 0LL;
    *a5 = a1;
    *a6 = a2;
  }
  if ( (a7 & 0x800) != 0 )
  {
    *a4 = 0LL;
    *a5 = a1;
    *a6 = a2;
  }
  return 0LL;
}
