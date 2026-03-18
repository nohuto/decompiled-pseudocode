/*
 * XREFs of ?GetBits@COffScreenRenderTarget@@UEAAJPEBUtagRECT@@PEAVIBitmapDest@@@Z @ 0x18011EB70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall COffScreenRenderTarget::GetBits(
        COffScreenRenderTarget *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  float left; // xmm8_4
  float top; // xmm6_4
  float right; // xmm7_4
  float bottom; // xmm9_4
  float v11; // xmm3_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  int v15; // eax
  float v17; // [rsp+30h] [rbp-78h] BYREF
  float v18; // [rsp+34h] [rbp-74h]
  float v19; // [rsp+38h] [rbp-70h]
  float v20; // [rsp+3Ch] [rbp-6Ch]

  v4 = 0;
  v6 = **((_QWORD **)this + 17);
  left = (float)a2->left;
  top = (float)a2->top;
  right = (float)a2->right;
  bottom = (float)a2->bottom;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v6 + 64LL))(v6, &v17);
    v11 = v17;
    if ( left > v17 )
    {
      v11 = left;
      v17 = left;
    }
    v12 = v18;
    if ( top > v18 )
    {
      v12 = top;
      v18 = top;
    }
    v13 = v19;
    if ( v19 > right )
    {
      v13 = right;
      v19 = right;
    }
    v14 = v20;
    if ( v20 > bottom )
    {
      v14 = bottom;
      v20 = bottom;
    }
    if ( v13 > v11 && v14 > v12 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD, float *, struct IBitmapDest *, _QWORD, _DWORD))(***((_QWORD ***)this + 17)
                                                                                             + 96LL))(
              **((_QWORD **)this + 17),
              &v17,
              a3,
              0LL,
              0);
      v4 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x203u);
    }
  }
  else
  {
    v4 = -2003304442;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x1F6u);
  }
  return v4;
}
