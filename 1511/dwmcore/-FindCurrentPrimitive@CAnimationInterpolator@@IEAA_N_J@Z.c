/*
 * XREFs of ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x180015F48
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x180016270 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x180015D28 (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetPrimitivesCount@CAnimation@@UEAA_KXZ @ 0x1800838A0 (-GetPrimitivesCount@CAnimation@@UEAA_KXZ.c)
 */

bool __fastcall CAnimationInterpolator::FindCurrentPrimitive(CAnimationInterpolator *this, __int64 a2)
{
  unsigned int v4; // edx
  unsigned int i; // edi
  unsigned __int64 (__fastcall *v6)(CAnimation *__hidden); // rbp
  unsigned __int64 v7; // rax

  v4 = *((_DWORD *)this + 2);
  if ( v4 != -1 && *((_QWORD *)CAnimationInterpolator::GetPrimitiveAtIndex((CAnimation **)this, v4) + 1) > a2 )
    *((_DWORD *)this + 2) = -1;
  for ( i = *((_DWORD *)this + 2); ; *((_DWORD *)this + 2) = i )
  {
    ++i;
    v6 = ***(unsigned __int64 (__fastcall ****)(CAnimation *__hidden))this;
    v7 = v6 == CAnimation::GetPrimitivesCount
       ? CAnimation::GetPrimitivesCount(*(CAnimation **)this)
       : v6(*(CAnimation **)this);
    if ( i >= v7 || *((_QWORD *)CAnimationInterpolator::GetPrimitiveAtIndex((CAnimation **)this, i) + 1) > a2 )
      break;
  }
  return *((_DWORD *)this + 2) != -1;
}
