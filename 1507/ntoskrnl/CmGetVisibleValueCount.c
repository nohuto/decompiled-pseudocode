/*
 * XREFs of CmGetVisibleValueCount @ 0x1404F06D0
 * Callers:
 *     CmpQueryKeyDataFromNode @ 0x1404C7460 (CmpQueryKeyDataFromNode.c)
 *     CmpQueryKeyDataFromCache @ 0x1404F0520 (CmpQueryKeyDataFromCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetVisibleValueCount(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // r8

  result = 0xFFFFFFFFLL;
  if ( a2 )
    result = *(unsigned int *)(a2 + 36);
  if ( a1 )
  {
    if ( !a3 )
      return *(unsigned int *)(a1 + 96);
    v5 = *(_QWORD *)(a1 + 280);
    if ( v5 )
    {
      if ( v5 == a3 )
        return *(unsigned int *)(a1 + 272);
      return *(unsigned int *)(a1 + 96);
    }
    if ( !a2 )
      return *(unsigned int *)(a1 + 96);
  }
  return result;
}
