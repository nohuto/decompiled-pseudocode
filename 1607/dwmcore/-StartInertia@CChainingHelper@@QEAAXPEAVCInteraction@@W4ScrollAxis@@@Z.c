/*
 * XREFs of ?StartInertia@CChainingHelper@@QEAAXPEAVCInteraction@@W4ScrollAxis@@@Z @ 0x180168B10
 * Callers:
 *     ?StartInertia@CScrollAnimation@@AEAAX_N@Z @ 0x18015E4C4 (-StartInertia@CScrollAnimation@@AEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

_BYTE *__fastcall CChainingHelper::StartInertia(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdx
  _BYTE *result; // rax
  __int64 v5; // rdx

  v3 = 3LL * a3;
  *(_BYTE *)(a1 + 4 * v3) &= ~2u;
  result = (_BYTE *)(a1 + 36);
  *(_DWORD *)(a1 + 4 * v3 + 4) = 0;
  *(_BYTE *)(a1 + 36) |= 1u;
  *(_BYTE *)(a1 + 4 * v3) &= ~4u;
  *(_DWORD *)(a1 + 4 * v3 + 8) = 0;
  v5 = 3LL;
  *(_BYTE *)(a1 + 36) |= 2u;
  do
  {
    *(_BYTE *)a1 |= 4u;
    *(_DWORD *)(a1 + 8) = -1;
    a1 += 12LL;
    *result |= 2u;
    --v5;
  }
  while ( v5 );
  return result;
}
