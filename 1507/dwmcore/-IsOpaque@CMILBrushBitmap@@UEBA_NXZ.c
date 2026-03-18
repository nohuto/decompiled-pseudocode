/*
 * XREFs of ?IsOpaque@CMILBrushBitmap@@UEBA_NXZ @ 0x1800DBDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CMILBrushBitmap::IsOpaque(CMILBrushBitmap *this)
{
  float v1; // xmm1_4
  bool result; // al
  int v3; // edx

  v1 = *((float *)this + 59);
  result = 0;
  if ( v1 < 1.0000001 && v1 > 0.99999988 )
  {
    v3 = *((_DWORD *)this + 58);
    if ( (v3 & 1) != 0 )
    {
      return 1;
    }
    else if ( (v3 & 2) == 0 )
    {
      return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 32LL))(*((_QWORD *)this + 21)) == 3;
    }
  }
  return result;
}
