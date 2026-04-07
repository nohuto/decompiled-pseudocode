/*
 * XREFs of ?_EnsureResources@CDesktopThumbnailCVI@@IEAAJXZ @ 0x18009B01C
 * Callers:
 *     ?CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource@@1AEBUtagRECT@@@Z @ 0x180099D90 (-CreateBrush@CDesktopThumbnailCVI@@QEAAJPEAPEAVCCachedVisualImageBrushResource@@PEAPEAVCResource.c)
 *     ?FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z @ 0x18009A1A0 (-FreezeDesktopThumbnail@CPerMonitorDesktopThumbnail@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CDesktopThumbnailCVI::_EnsureResources(CDesktopThumbnailCVI *this)
{
  unsigned int v1; // ebx
  CBaseObject **v2; // rsi
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // r8d
  int v8; // r9d
  int v9; // edx
  __int64 v10; // rax
  int v11; // ecx
  float v12; // xmm0_4
  int v13; // ecx
  __m128i v14; // xmm0
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  CResource *v18; // rcx
  int v19; // eax
  __int64 v21; // [rsp+38h] [rbp-29h] BYREF
  _DWORD v22[6]; // [rsp+40h] [rbp-21h] BYREF
  int v23; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v24[4]; // [rsp+5Ch] [rbp-5h] BYREF
  float v25; // [rsp+60h] [rbp-1h]
  float v26; // [rsp+64h] [rbp+3h]
  float v27; // [rsp+68h] [rbp+7h]
  float v28; // [rsp+6Ch] [rbp+Bh]
  __int64 v29; // [rsp+70h] [rbp+Fh]
  double v30; // [rsp+78h] [rbp+17h]
  int v31; // [rsp+88h] [rbp+27h]
  int v32; // [rsp+8Ch] [rbp+2Bh]

  v1 = 0;
  v2 = (CBaseObject **)((char *)this + 32);
  if ( *((_QWORD *)this + 4) )
    return v1;
  v4 = CResource::Create(0x38u, *((_QWORD *)this + 2), (CBaseObject **)this + 4);
  v1 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x228u);
    goto LABEL_16;
  }
  v23 = 162;
  memset_0(v24, 0, 0x40uLL);
  v5 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, _DWORD *))(*(_QWORD *)this + 16LL))(this, v22);
  v1 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v5, 0x22Cu);
    goto LABEL_16;
  }
  v6 = (*(__int64 (__fastcall **)(CDesktopThumbnailCVI *, __int64 *))(*(_QWORD *)this + 24LL))(this, &v21);
  v1 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0x22Fu);
    goto LABEL_16;
  }
  v7 = v22[0];
  v8 = v22[1];
  v9 = HIDWORD(v21);
  *((_DWORD *)this + 12) = v22[2];
  *((_DWORD *)this + 13) = v22[3];
  v10 = v21;
  *((_DWORD *)this + 10) = v7;
  *((_DWORD *)this + 11) = v8;
  *((_QWORD *)this + 7) = v10;
  if ( !(_DWORD)v10 || !v9 )
  {
    *((_DWORD *)this + 14) = *((_DWORD *)this + 12) - v7;
    *((_DWORD *)this + 15) = *((_DWORD *)this + 13) - v8;
  }
  v11 = *((_DWORD *)this + 12);
  v32 = 0;
  v12 = (float)(v11 - v7);
  v13 = *((_DWORD *)this + 13) - v8;
  v25 = (float)v7;
  v27 = v12 + (float)v7;
  v26 = (float)v8;
  v28 = (float)v13 + (float)v8;
  v14 = _mm_cvtsi32_si128(v10);
  v15 = *((_QWORD *)this + 3);
  v30 = (double)v9;
  v29 = *(_OWORD *)&_mm_cvtepi32_pd(v14);
  v16 = *(_QWORD *)(v15 + 16);
  if ( v16 )
    v17 = *(_DWORD *)(v16 + 24);
  else
    v17 = 0;
  v18 = *v2;
  v31 = v17;
  v19 = CResource::Send(v18, &v23, 0x44u);
  v1 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x248u);
LABEL_16:
    if ( *v2 )
    {
      CBaseObject::Release(*v2);
      *v2 = 0LL;
    }
  }
  return v1;
}
