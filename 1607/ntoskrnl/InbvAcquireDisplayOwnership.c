/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1401C34E4
 * Callers:
 *     KiDisplayBlueScreen @ 0x1401D4F98 (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 InbvAcquireDisplayOwnership()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140328E10;
  if ( qword_140328E10 )
  {
    v1 = *(__int64 (**)(void))(qword_140328E10 + 8);
    if ( v1 )
      return v1();
  }
  return result;
}
