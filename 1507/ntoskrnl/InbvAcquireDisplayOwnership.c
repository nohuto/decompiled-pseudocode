/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1401F0A2C
 * Callers:
 *     KiDisplayBlueScreen @ 0x140202B60 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x140403F30 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 InbvAcquireDisplayOwnership()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140353AD8;
  if ( qword_140353AD8 )
  {
    v1 = *(__int64 (**)(void))(qword_140353AD8 + 8);
    if ( v1 )
      return v1();
  }
  return result;
}
