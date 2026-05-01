/*
 * XREFs of ??$?0$0CN@@StringReference@Internal@Windows@@QEAA@AEAY0CN@$$CBG@Z @ 0x1800488A4
 * Callers:
 *     ?VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z @ 0x18004B28C (-VerifyIsValidAUMID@Internal@ExecutionModel@@YAJPEBG0@Z.c)
 * Callees:
 *     <none>
 */

HSTRING *__fastcall Windows::Internal::StringReference::StringReference(HSTRING *string, PCWSTR sourceString)
{
  if ( WindowsCreateStringReference(sourceString, 0x2Cu, (HSTRING_HEADER *)(string + 1), string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  return string;
}
