/*
 * XREFs of ?ReleaseD3DResources@CD3DPixelShader@@MEAAXXZ @ 0x1801791E0
 * Callers:
 *     ??1CD3DConstantBuffer@@MEAA@XZ @ 0x180178EF4 (--1CD3DConstantBuffer@@MEAA@XZ.c)
 *     ??1CD3DPixelShader@@MEAA@XZ @ 0x18017A134 (--1CD3DPixelShader@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DPixelShader::ReleaseD3DResources(CD3DPixelShader *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 16);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 16) = 0LL;
  }
}
