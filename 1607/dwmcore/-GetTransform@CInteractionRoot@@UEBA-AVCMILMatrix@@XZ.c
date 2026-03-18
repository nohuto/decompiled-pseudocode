/*
 * XREFs of ?GetTransform@CInteractionRoot@@UEBA?AVCMILMatrix@@XZ @ 0x1800C12C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteractionRoot::GetTransform(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm1
  int v3; // eax
  __int128 v4; // xmm0
  __int128 v5; // xmm1

  v2 = xmmword_1801EAD20;
  v3 = dword_1801EAD50;
  *(_OWORD *)a2 = CMILMatrix::Identity;
  v4 = xmmword_1801EAD30;
  *(_OWORD *)(a2 + 16) = v2;
  v5 = xmmword_1801EAD40;
  *(_OWORD *)(a2 + 32) = v4;
  *(_OWORD *)(a2 + 48) = v5;
  *(_DWORD *)(a2 + 64) = v3;
  return a2;
}
