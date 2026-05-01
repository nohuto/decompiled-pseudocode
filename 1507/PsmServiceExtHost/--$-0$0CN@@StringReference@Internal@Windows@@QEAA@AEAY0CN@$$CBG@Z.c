/*
 * XREFs of ??$?0$0CN@@StringReference@Internal@Windows@@QEAA@AEAY0CN@$$CBG@Z @ 0x180043904
 * Callers:
 *     ?VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z @ 0x180045D48 (-VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(HSTRING *string, PCWSTR sourceString)
{
  if ( WindowsCreateStringReference(sourceString, 0x2Cu, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
