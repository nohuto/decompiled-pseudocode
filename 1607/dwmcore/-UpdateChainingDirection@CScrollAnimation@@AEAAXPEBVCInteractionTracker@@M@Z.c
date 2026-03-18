/*
 * XREFs of ?UpdateChainingDirection@CScrollAnimation@@AEAAXPEBVCInteractionTracker@@M@Z @ 0x18015E8BC
 * Callers:
 *     ?UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z @ 0x18015E958 (-UpdateValueWithChaining@CScrollAnimation@@IEAAMMMW4Boundary@@M@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CScrollAnimation::UpdateChainingDirection(
        CScrollAnimation *this,
        const struct CInteractionTracker *a2,
        float a3)
{
  __int64 v3; // r8
  float v4; // xmm0_4
  __int64 *v5; // rax
  __int64 v6; // rcx

  if ( (*((_BYTE *)this + 468) & 1) != 0 )
  {
    v3 = 0LL;
    v4 = (float)(int)((__PAIR64__(a3 > 0.0, LODWORD(a3)) - COERCE_UNSIGNED_INT(0.0)) >> 32);
    *((float *)this + 116) = v4;
    *((_BYTE *)this + 468) &= ~1u;
    *((_BYTE *)this + 468) |= v4 == 0.0;
    if ( (*((_BYTE *)this + 468) & 1) == 0 )
    {
      v5 = (__int64 *)*((_QWORD *)this + 54);
      if ( v5 )
        v3 = *v5;
      v6 = 3LL * *((int *)this + 72);
      *(_BYTE *)(v3 + 4 * v6 + 376) |= 4u;
      *(_DWORD *)(v3 + 4 * v6 + 384) = -1;
      *(_BYTE *)(v3 + 412) |= 2u;
    }
  }
}
