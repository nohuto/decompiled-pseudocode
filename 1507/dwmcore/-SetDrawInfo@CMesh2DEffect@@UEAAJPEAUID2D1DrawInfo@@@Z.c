/*
 * XREFs of ?SetDrawInfo@CMesh2DEffect@@UEAAJPEAUID2D1DrawInfo@@@Z @ 0x18015B750
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMesh2DEffect::SetDrawInfo(CMesh2DEffect *this, struct ID2D1DrawInfo *a2)
{
  *((_QWORD *)this + 15) = a2;
  (*(void (__fastcall **)(struct ID2D1DrawInfo *))(*(_QWORD *)a2 + 8LL))(a2);
  return 0LL;
}
