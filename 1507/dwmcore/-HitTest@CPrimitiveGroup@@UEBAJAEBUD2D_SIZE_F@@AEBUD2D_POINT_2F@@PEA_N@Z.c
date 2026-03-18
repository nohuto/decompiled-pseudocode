/*
 * XREFs of ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000C330
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureHitTestRegion@CPrimitiveGroup@@AEBAJXZ @ 0x18000C8D8 (-EnsureHitTestRegion@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::HitTest(
        CPrimitiveGroup *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  float y; // xmm1_4
  __int64 v8; // r14

  *a4 = 0;
  if ( *((_QWORD *)this + 44) )
  {
    if ( a3->x >= *((float *)this + 17) && *((float *)this + 19) >= a3->x )
    {
      y = a3->y;
      if ( y >= *((float *)this + 18)
        && *((float *)this + 20) >= y
        && (int)CPrimitiveGroup::EnsureHitTestRegion(this) >= 0 )
      {
        v8 = *((_QWORD *)this + 7);
        if ( v8 )
        {
          if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 56LL))(v8, *a3, 0LL) >= 0 )
            *a4 = 0;
        }
      }
    }
  }
  return 0LL;
}
