/*
 * XREFs of InbvSolidColorFill @ 0x1401F0BC4
 * Callers:
 *     DisplayBootBitmap @ 0x14015EE80 (DisplayBootBitmap.c)
 *     PopShutdownHandler @ 0x140403F30 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InbvSolidColorFill(__int64 a1)
{
  __int64 (__fastcall *v1)(__int64); // r10
  __int64 result; // rax

  if ( qword_140353AD8 )
  {
    v1 = *(__int64 (__fastcall **)(__int64))(qword_140353AD8 + 32);
    if ( v1 )
      return v1(a1);
  }
  return result;
}
