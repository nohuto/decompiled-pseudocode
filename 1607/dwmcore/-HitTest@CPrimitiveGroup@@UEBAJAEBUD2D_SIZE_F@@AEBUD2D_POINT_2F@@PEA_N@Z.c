/*
 * XREFs of ?HitTest@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18000E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000EA90 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::HitTest(
        CPrimitiveGroup *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  float y; // xmm1_4
  __int64 v8; // rcx
  __int64 v10; // rcx

  *a4 = 0;
  if ( *((_QWORD *)this + 54) )
  {
    if ( a3->x >= *((float *)this + 37) && *((float *)this + 39) >= a3->x )
    {
      y = a3->y;
      if ( y >= *((float *)this + 38)
        && *((float *)this + 40) >= y
        && (int)CPrimitiveGroup::EnsureHitTestRegions(this) >= 0 )
      {
        v8 = *((_QWORD *)this + 16);
        if ( v8 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 56LL))(v8, *a3, 0LL);
        v10 = *((_QWORD *)this + 17);
        if ( v10 )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v10 + 56LL))(v10, *a3, 0LL);
        *a4 = 0;
      }
    }
  }
  return 0LL;
}
