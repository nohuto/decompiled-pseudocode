/*
 * XREFs of InbvAcquireDisplayOwnership @ 0x1401C3600
 * Callers:
 *     KiDisplayBlueScreen @ 0x1401D516C (KiDisplayBlueScreen.c)
 *     PopShutdownHandler @ 0x1403DF97C (PopShutdownHandler.c)
 * Callees:
 *     <none>
 */

__int64 InbvAcquireDisplayOwnership()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140328DD0;
  if ( qword_140328DD0 )
  {
    v1 = *(__int64 (**)(void))(qword_140328DD0 + 8);
    if ( v1 )
      return v1();
  }
  return result;
}
