/*
 * XREFs of ?EnsureCVIResource@CAccentBlurBehind@@AEAAJPEBUtagRECT@@@Z @ 0x180007CD4
 * Callers:
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x180007700 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Create@CGaussianBlurEffect@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180005520 (-Create@CGaussianBlurEffect@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180009BEC (-Create@CCachedVisualImageBrushResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037870 (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccentBlurBehind::EnsureCVIResource(struct CVisual **this, const struct tagRECT *a2)
{
  _QWORD *v2; // rsi
  char *v5; // r14
  __int64 i; // rcx
  float v7; // xmm3_4
  signed int v8; // eax
  __m128i v9; // xmm0
  int v10; // eax
  float v11; // xmm0_4
  char *v12; // r14
  __int64 v13; // rcx
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  __int64 v23; // r8
  int v24; // eax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rax
  volatile signed __int32 *v28; // rsi
  int v29; // eax
  CBaseObject *v30; // rcx
  CBaseObject *v31; // rcx
  CBaseObject *v32; // rcx
  CBaseObject *v33; // [rsp+90h] [rbp-9h] BYREF
  __int128 v34; // [rsp+98h] [rbp-1h] BYREF
  double v35; // [rsp+A8h] [rbp+Fh] BYREF
  double v36; // [rsp+B0h] [rbp+17h]
  __int128 v37; // [rsp+B8h] [rbp+1Fh] BYREF

  v2 = this + 44;
  v35 = 0.0;
  v33 = 0LL;
  v36 = 0.0;
  if ( !this[44] )
  {
    v19 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), this + 44);
    v17 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x53Eu);
      goto LABEL_18;
    }
    CVisual::SetInterpolationMode(*v2, 0LL);
  }
  if ( !this[45] )
  {
    v20 = CVisual::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), this + 45);
    v17 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x544u);
      goto LABEL_18;
    }
  }
  if ( !this[42] )
  {
    v21 = CResource::Create(24LL, *((_QWORD *)this[2] + 2));
    v17 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x549u);
      goto LABEL_18;
    }
  }
  v5 = (char *)(this + 43);
  if ( !this[43] )
  {
    v22 = CGaussianBlurEffect::Create(*((struct IDwmChannel **)this[2] + 2), this + 43);
    v17 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x54Fu);
      goto LABEL_18;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, int))(**(_QWORD **)(*(_QWORD *)v5 + 16LL) + 1056LL))(
      *(_QWORD *)(*(_QWORD *)v5 + 16LL),
      *(unsigned int *)(*(_QWORD *)v5 + 24LL),
      v23,
      0LL,
      1);
    v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(*v2 + 16LL) + 16LL) + 360LL))(
            *(_QWORD *)(*(_QWORD *)(*v2 + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*v2 + 16LL) + 24LL),
            *(unsigned int *)(*(_QWORD *)v5 + 24LL));
    v17 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x558u);
      goto LABEL_18;
    }
  }
  for ( i = 0LL; i < 4; ++i )
    *((float *)&v34 + i) = (float)*(int *)((char *)&v34 + 4 * i + (char *)a2 - (char *)&v34);
  v7 = *((float *)this + 76);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
    v8 = a2->bottom - a2->top;
    if ( v8 < 0 )
      v8 = 0;
    v9 = _mm_cvtsi32_si128(v8);
    v10 = a2->right - a2->left;
    LODWORD(v11) = _mm_cvtepi32_ps(v9).m128_u32[0];
    if ( v10 < 0 )
      v10 = 0;
    v36 = (float)(v11 * v7);
    v35 = (float)((float)v10 * v7);
  }
  v12 = (char *)(this + 39);
  if ( !this[39] )
  {
    v25 = CResource::Create(5LL, *((_QWORD *)this[2] + 2));
    v17 = v25;
    if ( v25 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x56Au);
      goto LABEL_18;
    }
  }
  v13 = *(_QWORD *)(*v2 + 16LL);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 24);
  else
    v14 = 0;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, double *, _DWORD, _DWORD, int, _DWORD))(**(_QWORD **)(*(_QWORD *)v12 + 16LL) + 952LL))(
          *(_QWORD *)(*(_QWORD *)v12 + 16LL),
          *(unsigned int *)(*(_QWORD *)v12 + 24LL),
          &v34,
          &v35,
          0,
          0,
          v14,
          0);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x574u);
    goto LABEL_18;
  }
  if ( this[40] )
    goto LABEL_18;
  v26 = CCachedVisualImageBrushResource::Create(v16, *((_QWORD *)this[2] + 2), &v33);
  v17 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x578u);
LABEL_36:
    v28 = (volatile signed __int32 *)v33;
    goto LABEL_37;
  }
  v27 = *(_QWORD *)v12;
  v28 = (volatile signed __int32 *)v33;
  v37 = _xmm;
  v34 = _xmm;
  v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)v33 + 2) + 1152LL))(
          *((_QWORD *)v33 + 2),
          *((unsigned int *)v33 + 6),
          *((_QWORD *)v33 + 2),
          &v37,
          &v34,
          0,
          0,
          0,
          1,
          1,
          0,
          0,
          1,
          0,
          0,
          0,
          *(_DWORD *)(v27 + 24));
  v17 = v29;
  if ( v29 >= 0 )
  {
    v30 = this[40];
    if ( v30 )
      CBaseObject::Release(v30);
    this[40] = (struct CVisual *)v28;
    _InterlockedIncrement(v28 + 2);
    goto LABEL_36;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v29, 0x595u);
LABEL_37:
  if ( v28 )
    CBaseObject::Release((CBaseObject *)v28);
LABEL_18:
  if ( v17 < 0 )
  {
    v31 = this[39];
    if ( v31 )
    {
      CBaseObject::Release(v31);
      this[39] = 0LL;
    }
    v32 = this[40];
    if ( v32 )
    {
      CBaseObject::Release(v32);
      this[40] = 0LL;
    }
  }
  return (unsigned int)v17;
}
