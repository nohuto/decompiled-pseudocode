/*
 * XREFs of ?SetDrawInfo@CMesh2DEffect@@UEAAJPEAUID2D1DrawInfo@@@Z @ 0x180168880
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CMesh2DEffect::SetDrawInfo(CMesh2DEffect *this, struct ID2D1DrawInfo *a2)
{
  *((_QWORD *)this + 15) = a2;
  (*(void (__fastcall **)(struct ID2D1DrawInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}
