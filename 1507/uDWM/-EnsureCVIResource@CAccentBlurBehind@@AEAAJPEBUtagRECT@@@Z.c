/*
 * XREFs of ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180002D70
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x1800027BC (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Create@CGaussianBlurEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180003BE4 (-Create@CGaussianBlurEffect@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180012308 (-Create@CCachedVisualImageBrushResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001CA80 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x180034EF8 (-Create@CVisual@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CAccentBlurBehind::EnsureCVIResource(struct CVisual **this, const struct tagRECT *a2)
{
  _QWORD *v2; // r14
  char *v5; // r15
  const struct tagRECT *v6; // rax
  __int64 v7; // rdx
  float v8; // xmm3_4
  signed int v9; // eax
  __m128i v10; // xmm0
  int v11; // eax
  float v12; // xmm0_4
  CResource **v13; // r15
  __int64 v14; // rcx
  int v15; // eax
  CResource *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // ebx
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  CResource *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  CResource *v30; // rax
  volatile signed __int32 *v31; // r14
  int v32; // eax
  CBaseObject *v33; // rcx
  CBaseObject *v34; // rcx
  CBaseObject *v35; // rcx
  CResource *v36; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v37[3]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+44h] [rbp-BCh]
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+54h] [rbp-ACh]
  int v41; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v42[4]; // [rsp+64h] [rbp-9Ch] BYREF
  double v43; // [rsp+68h] [rbp-98h]
  __int128 v44; // [rsp+70h] [rbp-90h]
  __int128 v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+A4h] [rbp-5Ch]
  int v47; // [rsp+ACh] [rbp-54h]
  int v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+BCh] [rbp-44h]
  __int64 v50; // [rsp+C4h] [rbp-3Ch]
  int v51; // [rsp+D0h] [rbp-30h]
  int v52; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v53[4]; // [rsp+E4h] [rbp-1Ch] BYREF
  char v54; // [rsp+E8h] [rbp-18h] BYREF
  double v55; // [rsp+F8h] [rbp-8h]
  double v56; // [rsp+100h] [rbp+0h]
  int v57; // [rsp+110h] [rbp+10h]
  int v58; // [rsp+114h] [rbp+14h]

  v2 = this + 44;
  v36 = 0LL;
  if ( !this[44] )
  {
    v21 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), this + 44);
    v19 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x543u);
      goto LABEL_18;
    }
    CVisual::SetInterpolationMode(*v2, 0LL);
  }
  if ( !this[45] )
  {
    v22 = CVisual::Create(*((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4), this + 45);
    v19 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x549u);
      goto LABEL_18;
    }
  }
  if ( !this[42] )
  {
    v23 = CResource::Create(63LL, *((_QWORD *)this[2] + 2));
    v19 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x54Eu);
      goto LABEL_18;
    }
  }
  v5 = (char *)(this + 43);
  if ( !this[43] )
  {
    v24 = CGaussianBlurEffect::Create(*((struct MIL_CHANNEL__ *const *)this[2] + 2), this + 43);
    v19 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x554u);
      goto LABEL_18;
    }
    v25 = *(CResource **)v5;
    v37[1] = 0;
    *(float *)&v37[2] = FLOAT_3_0;
    v37[0] = 217;
    v38 = 0x100000000LL;
    CResource::Send(v25, v37, 0x14u);
    v39 = 45;
    v40 = 0LL;
    v26 = *v2;
    HIDWORD(v40) = *(_DWORD *)(*(_QWORD *)v5 + 24LL);
    v27 = CResource::Send(*(CResource **)(v26 + 16), &v39, 0xCu);
    v19 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x55Du);
      goto LABEL_18;
    }
  }
  v52 = 152;
  memset_0(v53, 0, 0x40uLL);
  v6 = a2;
  v7 = 4LL;
  do
  {
    *(float *)((char *)&v6->left + &v54 - (char *)a2) = (float)v6->left;
    v6 = (const struct tagRECT *)((char *)v6 + 4);
    --v7;
  }
  while ( v7 );
  v8 = *((float *)this + 76);
  v58 = 0;
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v8 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v9 = a2->bottom - a2->top;
    if ( v9 < 0 )
      v9 = 0;
    v10 = _mm_cvtsi32_si128(v9);
    v11 = a2->right - a2->left;
    LODWORD(v12) = _mm_cvtepi32_ps(v10).m128_u32[0];
    if ( v11 < 0 )
      v11 = 0;
    v56 = (float)(v12 * v8);
    v55 = (float)((float)v11 * v8);
  }
  v13 = this + 39;
  if ( !this[39] )
  {
    v28 = CResource::Create(52LL, *((_QWORD *)this[2] + 2));
    v19 = v28;
    if ( v28 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x572u);
      goto LABEL_18;
    }
  }
  v14 = *(_QWORD *)(*v2 + 16LL);
  v15 = 0;
  if ( v14 )
    v15 = *(_DWORD *)(v14 + 24);
  v16 = *v13;
  v57 = v15;
  v17 = CResource::Send(v16, &v52, 0x44u);
  v19 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x576u);
    goto LABEL_18;
  }
  if ( this[40] )
    goto LABEL_18;
  v29 = CCachedVisualImageBrushResource::Create(v18, *((_QWORD *)this[2] + 2), &v36);
  v19 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x57Bu);
    goto LABEL_37;
  }
  v41 = 250;
  memset_0(v42, 0, 0x70uLL);
  v30 = *v13;
  v31 = (volatile signed __int32 *)v36;
  v43 = DOUBLE_1_0;
  v47 = 1;
  v44 = _xmm;
  v48 = 1;
  v45 = _xmm;
  v46 = 0LL;
  v49 = 1LL;
  v50 = 0LL;
  v51 = *((_DWORD *)v30 + 6);
  v32 = CResource::Send(v36, &v41, 0x74u);
  v19 = v32;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0x591u);
LABEL_38:
    if ( v31 )
      CBaseObject::Release((CBaseObject *)v31);
    goto LABEL_18;
  }
  v33 = this[40];
  if ( v33 )
    CBaseObject::Release(v33);
  this[40] = (struct CVisual *)v31;
  if ( v31 )
  {
    _InterlockedAdd(v31 + 2, 1u);
LABEL_37:
    v31 = (volatile signed __int32 *)v36;
    goto LABEL_38;
  }
LABEL_18:
  if ( v19 < 0 )
  {
    v34 = this[39];
    if ( v34 )
    {
      CBaseObject::Release(v34);
      this[39] = 0LL;
    }
    v35 = this[40];
    if ( v35 )
    {
      CBaseObject::Release(v35);
      this[40] = 0LL;
    }
  }
  return (unsigned int)v19;
}
