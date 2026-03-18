/*
 * XREFs of ?IsOpaque@CMILBrushBitmap@@UEBA_NXZ @ 0x180107150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CMILBrushBitmap::IsOpaque(CMILBrushBitmap *this)
{
  float v1; // xmm1_4
  bool result; // al
  int v3; // edx

  v1 = *((float *)this + 61);
  result = 0;
  if ( v1 < 1.0000001 && v1 > 0.99999988 )
  {
    v3 = *((_DWORD *)this + 60);
    if ( (v3 & 1) != 0 )
    {
      return 1;
    }
    else if ( (v3 & 2) == 0 )
    {
      return (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 32LL))(*((_QWORD *)this + 22)) == 3;
    }
  }
  return result;
}
