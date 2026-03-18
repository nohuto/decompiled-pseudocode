/*
 * XREFs of InitializeInteractionStateInfo @ 0x1800A856C
 * Callers:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800A7CCC (--0CInteractionProcessor@@QEAA@XZ.c)
 * Callees:
 *     ResetInteractionStateInfo @ 0x1800BDA78 (ResetInteractionStateInfo.c)
 */

__int64 __fastcall InitializeInteractionStateInfo(__int64 a1)
{
  __int64 result; // rax

  result = ResetInteractionStateInfo();
  *(_OWORD *)(a1 + 16) = IdentityMatrix;
  *(_OWORD *)(a1 + 32) = *(&IdentityMatrix + 1);
  *(__m256 *)(a1 + 48) = ymmword_18019E9D0;
  *(_OWORD *)(a1 + 80) = IdentityMatrix;
  *(_OWORD *)(a1 + 96) = *(&IdentityMatrix + 1);
  *(__m256 *)(a1 + 112) = ymmword_18019E9D0;
  *(_OWORD *)(a1 + 144) = IdentityMatrix;
  *(_OWORD *)(a1 + 160) = *(&IdentityMatrix + 1);
  *(__m256 *)(a1 + 176) = ymmword_18019E9D0;
  *(_OWORD *)(a1 + 208) = IdentityMatrix;
  *(_OWORD *)(a1 + 224) = *(&IdentityMatrix + 1);
  *(__m256 *)(a1 + 240) = ymmword_18019E9D0;
  return result;
}
