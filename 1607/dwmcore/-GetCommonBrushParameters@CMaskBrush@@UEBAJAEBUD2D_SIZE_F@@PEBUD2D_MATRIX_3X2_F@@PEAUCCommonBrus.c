/*
 * XREFs of ?GetCommonBrushParameters@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAUCCommonBrushParameters@@PEAPEAVCShape@@@Z @ 0x18013E950
 * Callers:
 *     <none>
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18013528C (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

__int64 __fastcall CMaskBrush::GetCommonBrushParameters(
        CMaskBrush *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_MATRIX_3X2_F *a3,
        struct D2D_RECT_F *a4,
        struct CShape **a5)
{
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct D2D_RECT_F v13; // xmm0
  struct D2D_RECT_F v14; // xmm1
  struct D2D_RECT_F v15; // xmm0
  struct D2D_RECT_F v16; // xmm1
  struct D2D_RECT_F v17; // xmm0
  struct D2D_RECT_F v18; // xmm1
  struct D2D_RECT_F v19; // xmm0
  void (__fastcall ***v20)(_QWORD, __int64); // rbx
  struct CShape *v21; // rax
  unsigned int v23; // [rsp+20h] [rbp-E0h]
  struct CShape *v24; // [rsp+30h] [rbp-D0h] BYREF
  float v25[16]; // [rsp+40h] [rbp-C0h] BYREF
  struct D2D_RECT_F v26; // [rsp+80h] [rbp-80h]
  struct D2D_RECT_F v27; // [rsp+90h] [rbp-70h]
  struct D2D_RECT_F v28; // [rsp+A0h] [rbp-60h]
  struct D2D_RECT_F v29; // [rsp+B0h] [rbp-50h]
  struct D2D_RECT_F v30; // [rsp+C0h] [rbp-40h]
  struct D2D_RECT_F v31; // [rsp+D0h] [rbp-30h]
  struct D2D_RECT_F v32; // [rsp+E0h] [rbp-20h]
  __int16 v33; // [rsp+120h] [rbp+20h]
  char v34; // [rsp+122h] [rbp+22h]

  v24 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, const struct D2D_SIZE_F *, _QWORD))(**((_QWORD **)this + 17) + 168LL))(
         *((_QWORD *)this + 17),
         a2,
         0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    v23 = 298;
  }
  else
  {
    v10 = *((_QWORD *)this + 16);
    if ( !v10 )
    {
LABEL_10:
      v9 = 0;
      goto LABEL_16;
    }
    LOWORD(v29.left) = 1;
    BYTE2(v29.left) = 0;
    v33 = 1;
    v34 = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, const struct D2D_SIZE_F *, _QWORD, float *, unsigned __int64))(*(_QWORD *)v10 + 168LL))(
           v10,
           a2,
           0LL,
           v25,
           (unsigned __int64)&v24 & -(__int64)(a5 != 0LL));
    v9 = v8;
    if ( v8 < 0 )
    {
      v23 = 304;
    }
    else
    {
      a4->left = fmaxf(a4->left, v25[0]);
      a4->top = fmaxf(a4->top, v25[1]);
      a4->right = fminf(a4->right, v25[2]);
      a4->bottom = fminf(a4->bottom, v25[3]);
      if ( IsEmpty(a4) )
      {
        v9 = -2003304441;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x136u);
        goto LABEL_16;
      }
      v12 = (__int64)v24;
      a4[1].left = fmaxf(a4[1].left, v25[4]);
      a4[1].top = fmaxf(a4[1].top, v25[5]);
      a4[1].right = fminf(a4[1].right, v25[6]);
      v13 = v26;
      a4[1].bottom = fminf(a4[1].bottom, v25[7]);
      v14 = v27;
      a4[11] = v13;
      v15 = v28;
      a4[12] = v14;
      v16 = v29;
      a4[13] = v15;
      v17 = v30;
      a4[14] = v16;
      v18 = v31;
      a4[15] = v17;
      v19 = v32;
      a4[16] = v18;
      a4[17] = v19;
      if ( !v12 )
        goto LABEL_10;
      v20 = (void (__fastcall ***)(_QWORD, __int64))*a5;
      if ( !*a5 )
      {
        v21 = v24;
        v24 = 0LL;
        *a5 = v21;
        goto LABEL_10;
      }
      v8 = CShape::Combine((__int64)v20, v11, v12, 0LL, 1, a5);
      v9 = v8;
      if ( v8 >= 0 )
      {
        (**v20)(v20, 1LL);
        goto LABEL_10;
      }
      v23 = 335;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, v23);
LABEL_16:
  if ( v24 )
    (**(void (__fastcall ***)(struct CShape *, __int64))v24)(v24, 1LL);
  return v9;
}
