/*
 * XREFs of ?SetRectangleHelper@CRectangleClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@PEBUD2D_RECT_F@@PEA_N@Z @ 0x1C00147D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C001B328 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CRectangleClipMarshaler::SetRectangleHelper(
        DirectComposition::CRectangleClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        const struct D2D_RECT_F *a3,
        bool *a4)
{
  char v5; // bp
  unsigned int v9; // ebx
  float v10; // xmm1_4
  char v11; // al
  float v12; // xmm1_4
  char v13; // al
  float v14; // xmm1_4
  char v15; // al
  float v16; // xmm1_4
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  char v21; // al
  char v22; // al
  char v23; // al
  char v24; // al
  bool v25; // al

  v5 = *a4;
  v9 = 0;
  if ( !_finite(*((float *)a3 + 1))
    || !_finite(*(float *)a3)
    || !_finite(*((float *)a3 + 3))
    || !_finite(*((float *)a3 + 2)) )
  {
    return (unsigned int)-1073741811;
  }
  v10 = *((float *)a3 + 1);
  if ( v10 < -2097152.0 )
  {
    v10 = FLOAT_N2097152_0;
  }
  else if ( v10 > 2097152.0 )
  {
    v10 = FLOAT_2097152_0;
  }
  if ( *((float *)this + 17) != v10 )
  {
    *((float *)this + 17) = v10;
LABEL_10:
    v11 = 1;
    goto LABEL_11;
  }
  if ( v5 )
    goto LABEL_10;
  v11 = 0;
LABEL_11:
  v12 = *(float *)a3;
  if ( *(float *)a3 < -2097152.0 )
  {
    v12 = FLOAT_N2097152_0;
  }
  else if ( v12 > 2097152.0 )
  {
    v12 = FLOAT_2097152_0;
  }
  if ( *((float *)this + 16) != v12 )
  {
    *((float *)this + 16) = v12;
LABEL_16:
    v13 = 1;
    goto LABEL_17;
  }
  if ( v11 )
    goto LABEL_16;
  v13 = 0;
LABEL_17:
  v14 = *((float *)a3 + 3);
  if ( v14 < -2097152.0 )
  {
    v14 = FLOAT_N2097152_0;
  }
  else if ( v14 > 2097152.0 )
  {
    v14 = FLOAT_2097152_0;
  }
  if ( *((float *)this + 19) != v14 )
  {
    *((float *)this + 19) = v14;
LABEL_22:
    v15 = 1;
    goto LABEL_23;
  }
  if ( v13 )
    goto LABEL_22;
  v15 = 0;
LABEL_23:
  v16 = *((float *)a3 + 2);
  if ( v16 < -2097152.0 )
  {
    v16 = FLOAT_N2097152_0;
  }
  else if ( v16 > 2097152.0 )
  {
    v16 = FLOAT_2097152_0;
  }
  if ( *((float *)this + 18) != v16 )
  {
    *((float *)this + 18) = v16;
LABEL_28:
    v17 = 1;
    goto LABEL_29;
  }
  if ( v15 )
    goto LABEL_28;
  v17 = 0;
LABEL_29:
  if ( *((float *)this + 20) != 0.0 )
  {
    *((_DWORD *)this + 20) = 0;
    goto LABEL_31;
  }
  if ( v17 )
  {
LABEL_31:
    v18 = 1;
    goto LABEL_32;
  }
  v18 = 0;
LABEL_32:
  if ( *((float *)this + 21) != 0.0 )
  {
    *((_DWORD *)this + 21) = 0;
    goto LABEL_34;
  }
  if ( v18 )
  {
LABEL_34:
    v19 = 1;
    goto LABEL_35;
  }
  v19 = 0;
LABEL_35:
  if ( *((float *)this + 22) != 0.0 )
  {
    *((_DWORD *)this + 22) = 0;
    goto LABEL_37;
  }
  if ( v19 )
  {
LABEL_37:
    v20 = 1;
    goto LABEL_38;
  }
  v20 = 0;
LABEL_38:
  if ( *((float *)this + 23) != 0.0 )
  {
    *((_DWORD *)this + 23) = 0;
    goto LABEL_40;
  }
  if ( v20 )
  {
LABEL_40:
    v21 = 1;
    goto LABEL_41;
  }
  v21 = 0;
LABEL_41:
  if ( *((float *)this + 24) != 0.0 )
  {
    *((_DWORD *)this + 24) = 0;
    goto LABEL_43;
  }
  if ( v21 )
  {
LABEL_43:
    v22 = 1;
    goto LABEL_44;
  }
  v22 = 0;
LABEL_44:
  if ( *((float *)this + 25) != 0.0 )
  {
    *((_DWORD *)this + 25) = 0;
    goto LABEL_46;
  }
  if ( v22 )
  {
LABEL_46:
    v23 = 1;
    goto LABEL_47;
  }
  v23 = 0;
LABEL_47:
  if ( *((float *)this + 26) != 0.0 )
  {
    *((_DWORD *)this + 26) = 0;
    goto LABEL_49;
  }
  if ( v23 )
  {
LABEL_49:
    v24 = 1;
    goto LABEL_50;
  }
  v24 = 0;
LABEL_50:
  if ( *((float *)this + 27) == 0.0 )
  {
    if ( !v24 )
    {
      v25 = 0;
      goto LABEL_53;
    }
  }
  else
  {
    *((_DWORD *)this + 27) = 0;
  }
  v25 = 1;
LABEL_53:
  if ( *((_QWORD *)this + 4) )
  {
    DirectComposition::CApplicationChannel::UnbindAllAnimations(a2, this);
    v25 = 1;
  }
  *a4 = v25;
  return v9;
}
