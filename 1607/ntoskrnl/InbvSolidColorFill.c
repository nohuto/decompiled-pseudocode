/*
 * XREFs of InbvSolidColorFill @ 0x1401C367C
 * Callers:
 *     DisplayBootBitmap @ 0x14013CBCC (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvSolidColorFill(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // r10
  __int64 result; // rax

  if ( qword_140328E10 )
  {
    v1 = *(__int64 (__fastcall **)(__int64))(qword_140328E10 + 32);
    if ( v1 )
      return v1(a1);
  }
  return result;
}
