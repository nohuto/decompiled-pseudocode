/*
 * XREFs of ?IsOfType@CLinearTransferEffect@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801569F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CLinearTransferEffect::IsOfType(__int64 a1, unsigned int a2)
{
  char v2; // cl
  int v3; // eax

  v2 = 1;
  if ( a2 > 0x13 || (v3 = 524928, !_bittest(&v3, a2)) )
  {
    if ( a2 - 109 > 1 )
      return 0;
  }
  return v2;
}
