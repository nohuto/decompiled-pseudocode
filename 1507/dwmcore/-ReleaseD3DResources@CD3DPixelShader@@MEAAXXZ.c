/*
 * XREFs of ?ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ @ 0x180138F90
 * Callers:
 *     ??1CD3DConstantBuffer@@MEAA@XZ @ 0x180138AD8 (--1CD3DConstantBuffer@@MEAA@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DPixelShader::ReleaseD3DResources(CD3DPixelShader *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 16);
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    *((_QWORD *)this + 16) = 0LL;
  }
}
