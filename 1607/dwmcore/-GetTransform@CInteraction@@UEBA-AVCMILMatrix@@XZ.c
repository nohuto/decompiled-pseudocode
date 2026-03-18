/*
 * XREFs of ?GetTransform@CInteraction@@UEBA?AVCMILMatrix@@XZ @ 0x1800C0720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetTransform(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int128 v3; // xmm1
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  v2 = *(_DWORD *)(a1 + 248);
  v3 = *(_OWORD *)(a1 + 200);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 184);
  v4 = *(_OWORD *)(a1 + 216);
  *(_OWORD *)(a2 + 16) = v3;
  v5 = *(_OWORD *)(a1 + 232);
  *(_OWORD *)(a2 + 32) = v4;
  *(_OWORD *)(a2 + 48) = v5;
  *(_DWORD *)(a2 + 64) = v2;
  return a2;
}
