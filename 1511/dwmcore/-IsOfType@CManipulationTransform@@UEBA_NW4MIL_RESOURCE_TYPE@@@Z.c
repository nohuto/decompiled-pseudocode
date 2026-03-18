/*
 * XREFs of ?IsOfType@CManipulationTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800680D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180067450 (-IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CManipulationTransform::IsOfType(__int64 a1, unsigned __int64 a2)
{
  char v2; // al
  char v3; // cl

  if ( (_DWORD)a2 == 64 )
    return 1;
  v2 = CTransform::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
