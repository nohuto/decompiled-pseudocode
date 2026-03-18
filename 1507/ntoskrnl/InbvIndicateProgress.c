/*
 * XREFs of InbvIndicateProgress @ 0x1407B9620
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407B82F0 (IopInitializeSystemDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     <none>
 */

__int64 InbvIndicateProgress()
{
  __int64 result; // rax
  __int64 (*v1)(void); // rcx

  result = qword_140353AD8;
  if ( qword_140353AD8 )
  {
    v1 = *(__int64 (**)(void))(qword_140353AD8 + 120);
    if ( v1 )
      return v1();
  }
  return result;
}
