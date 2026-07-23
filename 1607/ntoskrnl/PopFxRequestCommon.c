/*
 * XREFs of PopFxRequestCommon @ 0x140203854
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopFxRequestCommon(int a1)
{
  if ( a1 == 1 )
    return PopFxAcpiForwardRequestCommon(1LL);
  else
    return 3221225659LL;
}
