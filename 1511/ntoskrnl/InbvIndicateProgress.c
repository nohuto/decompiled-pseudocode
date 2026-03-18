/*
 * XREFs of InbvIndicateProgress @ 0x140752558
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407513D4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x14075210C (IopInitializeBuiltinDriver.c)
 * Callees:
 *     <none>
 */

__int64 InbvIndicateProgress()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140305D60;
  if ( qword_140305D60 )
  {
    v1 = *(__int64 (**)(void))(qword_140305D60 + 120);
    if ( v1 )
      return v1();
  }
  return result;
}
