/*
 * XREFs of ?IsOfType@CSkewTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800F9BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800180A0 (-IsOfType@CTransform@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CSkewTransform::IsOfType(__int64 a1, unsigned __int64 a2)
{
  bool v2; // al
  char v3; // cl

  if ( (_DWORD)a2 == 58 )
    return 1;
  v2 = CTransform::IsOfType(a1, a2);
  v3 = 0;
  if ( v2 )
    return 1;
  return v3;
}
