/*
 * XREFs of ?MustRecomputeValue@CScrollAnimation@@UEBA_NXZ @ 0x18015E2C0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x18014ADA0 (-IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 *     ?IsInMotion@CScrollAnimation@@QEBA_NXZ @ 0x18015E234 (-IsInMotion@CScrollAnimation@@QEBA_NXZ.c)
 */

char __fastcall CScrollAnimation::MustRecomputeValue(CScrollAnimation *this)
{
  _QWORD *v2; // rax
  float *v3; // rcx
  char v4; // r8

  if ( CScrollAnimation::IsInMotion(this) )
    return 1;
  v2 = (_QWORD *)*((_QWORD *)this + 54);
  v3 = v2 ? (float *)*v2 : 0LL;
  if ( (unsigned __int8)CInteractionTracker::IsOutOfBounds(v3, *((_DWORD *)this + 72)) )
    return 1;
  return v4;
}
