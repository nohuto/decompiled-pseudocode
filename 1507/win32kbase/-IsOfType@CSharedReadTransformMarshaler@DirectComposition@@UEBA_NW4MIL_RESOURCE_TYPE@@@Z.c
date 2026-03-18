/*
 * XREFs of ?IsOfType@CSharedReadTransformMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C0024F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CSharedReadTransformMarshaler::IsOfType(__int64 a1, int a2)
{
  char result; // al
  int v3; // ecx

  result = 0;
  switch ( a2 )
  {
    case 24:
      return 1;
    case 7:
      return 1;
    case 53:
      v3 = *(_DWORD *)(a1 + 48);
      if ( v3 == 60 || v3 == 59 )
        return 1;
      break;
  }
  return result;
}
