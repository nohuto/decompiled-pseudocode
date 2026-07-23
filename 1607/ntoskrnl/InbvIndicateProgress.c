/*
 * XREFs of InbvIndicateProgress @ 0x14079BFCC
 * Callers:
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 * Callees:
 *     <none>
 */

__int64 InbvIndicateProgress()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140328E10;
  if ( qword_140328E10 )
  {
    v1 = *(__int64 (**)(void))(qword_140328E10 + 120);
    if ( v1 )
      return v1();
  }
  return result;
}
