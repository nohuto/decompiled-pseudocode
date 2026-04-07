/*
 * XREFs of ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800256A0
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x180026E10 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CTopLevelWindow3D::ShouldFreezeAnimationCVI(CTopLevelWindow3D *this)
{
  int v1; // eax

  v1 = *((_DWORD *)this + 88);
  return v1 == 3 || v1 == 6;
}
