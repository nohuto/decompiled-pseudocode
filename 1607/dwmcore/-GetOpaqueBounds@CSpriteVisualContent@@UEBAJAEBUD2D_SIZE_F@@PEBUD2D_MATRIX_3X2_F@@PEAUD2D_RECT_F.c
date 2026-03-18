/*
 * XREFs of ?GetOpaqueBounds@CSpriteVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUD2D_RECT_F@@@Z @ 0x180157F80
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsOpaque@CCommonBrushParameters@@SA_NAEBU1@@Z @ 0x1801580B8 (-IsOpaque@CCommonBrushParameters@@SA_NAEBU1@@Z.c)
 */

__int64 __fastcall CSpriteVisualContent::GetOpaqueBounds(
        CSpriteVisualContent *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 (__fastcall *v10)(CSpriteVisualContent *, const struct D2D_SIZE_F *, const struct D2D_MATRIX_3X2_F *, _OWORD *, _QWORD); // rax
  int v11; // eax
  _OWORD v13[7]; // [rsp+30h] [rbp-168h] BYREF
  __int16 v14; // [rsp+A0h] [rbp-F8h]
  char v15; // [rsp+A2h] [rbp-F6h]
  __int16 v16; // [rsp+110h] [rbp-88h]
  char v17; // [rsp+112h] [rbp-86h]

  *a4 = 0LL;
  v8 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CSpriteVisualContent *))(*(_QWORD *)this + 176LL))(this) )
  {
    v9 = *(_QWORD *)this;
    v14 = 1;
    v15 = 0;
    v10 = *(__int64 (__fastcall **)(CSpriteVisualContent *, const struct D2D_SIZE_F *, const struct D2D_MATRIX_3X2_F *, _OWORD *, _QWORD))(v9 + 168);
    v16 = 1;
    v17 = 0;
    v11 = v10(this, a2, a3, v13, 0LL);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x3Fu);
    }
    else if ( CCommonBrushParameters::IsOpaque((const struct CCommonBrushParameters *)v13) )
    {
      *a4 = (struct D2D_RECT_F)v13[0];
    }
  }
  return v8;
}
