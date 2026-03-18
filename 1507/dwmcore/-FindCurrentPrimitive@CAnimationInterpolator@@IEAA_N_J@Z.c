/*
 * XREFs of ?FindCurrentPrimitive@CAnimationInterpolator@@IEAA_N_J@Z @ 0x18000F2C0
 * Callers:
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18000F500 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 * Callees:
 *     ?GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z @ 0x18000F0F4 (-GetPrimitiveAtIndex@CAnimationInterpolator@@IEBAPEBUDwmAnimationPrimitive@@I@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CAnimationInterpolator::FindCurrentPrimitive(CAnimationInterpolator *this, __int64 a2)
{
  unsigned int v4; // edx
  unsigned int i; // ebp

  v4 = *((_DWORD *)this + 2);
  if ( v4 != -1 && *((_QWORD *)CAnimationInterpolator::GetPrimitiveAtIndex(this, v4) + 1) > a2 )
    *((_DWORD *)this + 2) = -1;
  for ( i = *((_DWORD *)this + 2);
        ++i < (unsigned __int64)(***(__int64 (__fastcall ****)(_QWORD))this)(*(_QWORD *)this)
     && *((_QWORD *)CAnimationInterpolator::GetPrimitiveAtIndex(this, i) + 1) <= a2;
        *((_DWORD *)this + 2) = i )
  {
    ;
  }
  return *((_DWORD *)this + 2) != -1;
}
