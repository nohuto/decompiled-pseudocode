/*
 * XREFs of ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x18000F124
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000EB48 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Create@CGaussianBlurEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180010E20 (-Create@CGaussianBlurEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180013E8C (-Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001803C (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x180021ED8 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CAccentBlurBehind::EnsureCVIResource(struct CVisual **this, const struct tagRECT *a2)
{
  _QWORD *v2; // r14
  char *v5; // r15
  const struct tagRECT *v6; // rax
  __int64 v7; // rdx
  float v8; // xmm3_4
  float v9; // xmm2_4
  signed int v10; // eax
  __m128i v11; // xmm0
  int v12; // eax
  float v13; // xmm0_4
  CResource **v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  CResource *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  CResource *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  CResource *v31; // rax
  volatile signed __int32 *v32; // r14
  int v33; // eax
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  CBaseObject *v36; // rcx
  CResource *v37; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v38[3]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v39; // [rsp+44h] [rbp-BCh]
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+54h] [rbp-ACh]
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v43[4]; // [rsp+64h] [rbp-9Ch] BYREF
  double v44; // [rsp+68h] [rbp-98h]
  __int128 v45; // [rsp+70h] [rbp-90h]
  __int128 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+A4h] [rbp-5Ch]
  int v48; // [rsp+ACh] [rbp-54h]
  int v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+BCh] [rbp-44h]
  __int64 v51; // [rsp+C4h] [rbp-3Ch]
  int v52; // [rsp+D0h] [rbp-30h]
  int v53; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v54[4]; // [rsp+E4h] [rbp-1Ch] BYREF
  char v55; // [rsp+E8h] [rbp-18h] BYREF
  double v56; // [rsp+F8h] [rbp-8h]
  double v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+114h] [rbp+14h]

  v2 = this + 44;
  v37 = 0LL;
  if ( !this[44] )
  {
    v22 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), this + 44);
    v20 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x553u);
      goto LABEL_18;
    }
    CVisual::SetInterpolationMode(*v2, 0LL);
  }
  if ( !this[45] )
  {
    v23 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), this + 45);
    v20 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x559u);
      goto LABEL_18;
    }
  }
  if ( !this[42] )
  {
    v24 = CResource::Create(67LL, *((_QWORD *)this[2] + 2));
    v20 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x55Eu);
      goto LABEL_18;
    }
  }
  v5 = (char *)(this + 43);
  if ( !this[43] )
  {
    v25 = CGaussianBlurEffect::Create(*((struct MIL_CHANNEL__ *const *)this[2] + 2), this + 43);
    v20 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x564u);
      goto LABEL_18;
    }
    v26 = *(CResource **)v5;
    v38[1] = 0;
    *(float *)&v38[2] = FLOAT_3_0;
    v38[0] = 224;
    v39 = 0x100000000LL;
    CResource::Send(v26, v38, 0x14u);
    v40 = 48;
    v41 = 0LL;
    v27 = *v2;
    HIDWORD(v41) = *(_DWORD *)(*(_QWORD *)v5 + 24LL);
    v28 = CResource::Send(*(CResource **)(v27 + 16), &v40, 0xCu);
    v20 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x56Du);
      goto LABEL_18;
    }
  }
  v53 = 162;
  memset_0(v54, 0, 0x40uLL);
  v6 = a2;
  v7 = 4LL;
  do
  {
    *(float *)((char *)&v6->left + &v55 - (char *)a2) = (float)v6->left;
    v6 = (const struct tagRECT *)((char *)v6 + 4);
    --v7;
  }
  while ( v7 );
  v8 = *((float *)this + 76);
  v59 = 0;
  v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - 1.0)) & _xmm);
  if ( v9 >= 0.0000011920929 )
  {
    v10 = a2->bottom - a2->top;
    if ( v10 < 0 )
      v10 = 0;
    v11 = _mm_cvtsi32_si128(v10);
    v12 = a2->right - a2->left;
    LODWORD(v13) = _mm_cvtepi32_ps(v11).m128_u32[0];
    if ( v12 < 0 )
      v12 = 0;
    v57 = (float)(v13 * v8);
    v56 = (float)((float)v12 * v8);
  }
  v14 = this + 39;
  if ( !this[39] )
  {
    v29 = CResource::Create(56LL, *((_QWORD *)this[2] + 2));
    v20 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x582u);
      goto LABEL_18;
    }
  }
  v15 = *(_QWORD *)(*v2 + 16LL);
  v16 = 0;
  if ( v15 )
    v16 = *(_DWORD *)(v15 + 24);
  v17 = *v14;
  v58 = v16;
  v18 = CResource::Send(v17, &v53, 0x44u);
  v20 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x586u);
    goto LABEL_18;
  }
  if ( this[40] )
    goto LABEL_18;
  v30 = CCachedVisualImageBrushResource::Create(v19, *((_QWORD *)this[2] + 2), &v37);
  v20 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x58Bu);
    goto LABEL_37;
  }
  v42 = 257;
  memset_0(v43, 0, 0x70uLL);
  v31 = *v14;
  v32 = (volatile signed __int32 *)v37;
  v44 = DOUBLE_1_0;
  v48 = 1;
  v45 = _xmm;
  v49 = 1;
  v46 = _xmm;
  v47 = 0LL;
  v50 = 1LL;
  v51 = 0LL;
  v52 = *((_DWORD *)v31 + 6);
  v33 = CResource::Send(v37, &v42, 0x74u);
  v20 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v33, 0x5A1u);
LABEL_38:
    if ( v32 )
      CBaseObject::Release((CBaseObject *)v32);
    goto LABEL_18;
  }
  v34 = this[40];
  if ( v34 )
    CBaseObject::Release(v34);
  this[40] = (struct CVisual *)v32;
  if ( v32 )
  {
    _InterlockedAdd(v32 + 2, 1u);
LABEL_37:
    v32 = (volatile signed __int32 *)v37;
    goto LABEL_38;
  }
LABEL_18:
  if ( v20 < 0 )
  {
    v35 = this[39];
    if ( v35 )
    {
      CBaseObject::Release(v35);
      this[39] = 0LL;
    }
    v36 = this[40];
    if ( v36 )
    {
      CBaseObject::Release(v36);
      this[40] = 0LL;
    }
  }
  return (unsigned int)v20;
}
