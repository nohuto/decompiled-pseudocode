/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1401B5B18
 * Callers:
 *     KiDisplayBlueScreen @ 0x1401C6018 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1403B2C90 (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 InbvAcquireDisplayOwnership()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140305D60;
  if ( qword_140305D60 )
  {
    v1 = *(__int64 (**)(void))(qword_140305D60 + 8);
    if ( v1 )
      return v1();
  }
  return result;
}
