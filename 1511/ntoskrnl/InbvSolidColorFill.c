/*
 * XREFs of InbvSolidColorFill @ 0x1401B5CB0
 * Callers:
 *     DisplayBootBitmap @ 0x1401344C8 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x1403B2C90 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvSolidColorFill(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // r10
  __int64 result; // rax

  if ( qword_140305D60 )
  {
    v1 = *(__int64 (__fastcall **)(__int64))(qword_140305D60 + 32);
    if ( v1 )
      return v1(a1);
  }
  return result;
}
