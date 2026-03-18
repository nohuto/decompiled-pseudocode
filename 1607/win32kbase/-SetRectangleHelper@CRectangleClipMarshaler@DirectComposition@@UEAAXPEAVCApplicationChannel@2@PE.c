/*
 * XREFs of ?SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@PEBUD2D_RECT_F@@PEA_N@Z @ 0x1C0044FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C003F93C (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CRectangleClipMarshaler::SetRectangleHelper(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const __m128i *a3,
        bool *a4)
{
  float v6; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  bool v10; // di
  char v11; // r9
  float v12; // xmm1_4
  char v13; // r8
  float v14; // xmm1_4
  char v15; // dl
  char v16; // cl
  char v17; // al
  __m128 v18; // [rsp+20h] [rbp-18h]

  v6 = FLOAT_2097152_0;
  v18 = (__m128)_mm_loadu_si128(a3);
  v8 = _mm_shuffle_ps(v18, v18, 85).m128_f32[0];
  if ( v8 > 2097152.0 )
    v9 = FLOAT_2097152_0;
  else
    v9 = fmaxf(v8, -2097152.0);
  v10 = 0;
  if ( *((float *)this + 17) == v9 )
  {
    v11 = 0;
  }
  else
  {
    *((float *)this + 17) = v9;
    v11 = 1;
  }
  if ( v18.m128_f32[0] > 2097152.0 )
    v12 = FLOAT_2097152_0;
  else
    v12 = fmaxf(v18.m128_f32[0], -2097152.0);
  if ( *((float *)this + 16) == v12 )
  {
    v13 = 0;
  }
  else
  {
    *((float *)this + 16) = v12;
    v13 = 1;
  }
  if ( v18.m128_f32[3] > 2097152.0 )
    v14 = FLOAT_2097152_0;
  else
    v14 = fmaxf(v18.m128_f32[3], -2097152.0);
  if ( *((float *)this + 19) == v14 )
  {
    v15 = 0;
  }
  else
  {
    *((float *)this + 19) = v14;
    v15 = 1;
  }
  if ( v18.m128_f32[2] <= 2097152.0 )
    v6 = fmaxf(v18.m128_f32[2], -2097152.0);
  if ( *((float *)this + 18) == v6 )
  {
    v16 = 0;
  }
  else
  {
    *((float *)this + 18) = v6;
    v16 = 1;
  }
  if ( *((float *)this + 20) == 0.0 )
  {
    if ( *((float *)this + 21) == 0.0 )
    {
      if ( *((float *)this + 22) == 0.0 )
      {
        if ( *((float *)this + 23) == 0.0 )
        {
          if ( *((float *)this + 24) == 0.0 )
          {
            if ( *((float *)this + 25) == 0.0 )
            {
              if ( *((float *)this + 26) == 0.0 )
              {
                if ( *((float *)this + 27) == 0.0 )
                {
                  v17 = 0;
                  goto LABEL_26;
                }
                *((_DWORD *)this + 27) = 0;
              }
              else
              {
                *((_DWORD *)this + 26) = 0;
              }
            }
            else
            {
              *((_DWORD *)this + 25) = 0;
            }
          }
          else
          {
            *((_DWORD *)this + 24) = 0;
          }
        }
        else
        {
          *((_DWORD *)this + 23) = 0;
        }
      }
      else
      {
        *((_DWORD *)this + 22) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 21) = 0;
    }
  }
  else
  {
    *((_DWORD *)this + 20) = 0;
  }
  v17 = 1;
LABEL_26:
  if ( *((_QWORD *)this + 4) )
  {
    DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
    v17 = 1;
    v11 = 1;
    v13 = 1;
    v15 = 1;
    v16 = 1;
  }
  if ( v11 )
    *((_DWORD *)this + 4) &= ~0x400u;
  if ( v13 )
    *((_DWORD *)this + 4) &= ~0x200u;
  if ( v15 )
    *((_DWORD *)this + 4) &= ~0x1000u;
  if ( v16 )
    *((_DWORD *)this + 4) &= ~0x800u;
  if ( v17 )
    *((_DWORD *)this + 4) &= ~0x100u;
  if ( *a4 || v11 || v13 || v15 || v16 || v17 )
    v10 = 1;
  *a4 = v10;
}
