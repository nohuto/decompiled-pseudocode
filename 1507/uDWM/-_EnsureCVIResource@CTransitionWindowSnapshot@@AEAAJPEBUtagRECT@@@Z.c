/*
 * XREFs of ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x1800112A8
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x1800116D0 (-Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEBUtagRECT@@PEAVCVisual@@@Z @ 0x180047890 (-Initialize@CTransitionWindowSnapshot@@MEAAJQEAUMIL_CHANNEL__@@PEBUtagRECT@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x1800092A8 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x180011484 (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800177C0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001CA80 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     TemplateEventDescriptor @ 0x18006B828 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureCVIResource(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2)
{
  const struct tagRECT *v4; // rax
  __int64 v5; // rdx
  float v6; // xmm1_4
  CBaseObject **v7; // rsi
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // eax
  CResource *v14; // rcx
  int v15; // eax
  float v16; // xmm1_4
  int v17; // eax
  int v18; // eax
  CResource *v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  signed int v24; // eax
  __int64 v25; // rcx
  __m128i v26; // xmm0
  int v27; // eax
  float v28; // xmm0_4
  CBaseObject *v29; // rcx
  int v30; // [rsp+30h] [rbp-49h] BYREF
  unsigned __int64 v31; // [rsp+34h] [rbp-45h]
  __int64 v32; // [rsp+3Ch] [rbp-3Dh]
  int v33; // [rsp+44h] [rbp-35h]
  int v34; // [rsp+50h] [rbp-29h] BYREF
  _BYTE v35[4]; // [rsp+54h] [rbp-25h] BYREF
  char v36; // [rsp+58h] [rbp-21h] BYREF
  double v37; // [rsp+68h] [rbp-11h]
  double v38; // [rsp+70h] [rbp-9h]
  int v39; // [rsp+80h] [rbp+7h]
  int v40; // [rsp+84h] [rbp+Bh]

  v34 = 152;
  memset_0(v35, 0, 0x40uLL);
  v4 = a2;
  v5 = 4LL;
  do
  {
    *(float *)((char *)&v4->left + &v36 - (char *)a2) = (float)v4->left;
    v4 = (const struct tagRECT *)((char *)v4 + 4);
    --v5;
  }
  while ( v5 );
  v6 = *((float *)this + 84);
  v40 = 0;
  if ( v6 != 1.0 )
  {
    v24 = a2->bottom - a2->top;
    v25 = *((_QWORD *)this + 37);
    if ( v24 < 0 )
      v24 = 0;
    v26 = _mm_cvtsi32_si128(v24);
    v27 = a2->right - a2->left;
    LODWORD(v28) = _mm_cvtepi32_ps(v26).m128_u32[0];
    if ( v27 < 0 )
      v27 = 0;
    v38 = (float)(v28 * v6);
    v37 = (float)((float)v27 * v6);
    CVisual::SetInterpolationMode(v25, 1LL);
  }
  v7 = (CBaseObject **)((char *)this + 272);
  if ( !*((_QWORD *)this + 34) )
  {
    v8 = a2->bottom - a2->top;
    if ( v8 < 0 )
      v8 = 0;
    v9 = a2->right - a2->left;
    if ( v9 < 0 )
      v9 = 0;
    if ( (int)CDesktopManager::GetCVIFromCache(v9, v8, (struct CResource **)this + 34) < 0 )
    {
      v10 = CResource::Create(52LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x104u);
LABEL_32:
        if ( *v7 )
        {
          CBaseObject::Release(*v7);
          *v7 = 0LL;
        }
        v29 = (CBaseObject *)*((_QWORD *)this + 35);
        if ( v29 )
        {
          CBaseObject::Release(v29);
          *((_QWORD *)this + 35) = 0LL;
        }
        return v11;
      }
    }
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL);
  v13 = 0;
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 24);
  v14 = *v7;
  v39 = v13;
  v15 = CResource::Send(v14, &v34, 0x44u);
  v11 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0x109u);
    goto LABEL_32;
  }
  v16 = *((float *)this + 84);
  v30 = 154;
  v31 = 0xFFFF830000000000uLL;
  v32 = 4294935296LL;
  v17 = a2->right - a2->left;
  if ( v17 < 0 )
    v17 = 0;
  HIDWORD(v32) = (int)(float)((float)v17 * v16) - 32000;
  v18 = a2->bottom - a2->top;
  if ( v18 < 0 )
    v18 = 0;
  v19 = *v7;
  v33 = (int)(float)((float)v18 * v16) - 32000;
  v20 = CResource::Send(v19, &v30, 0x18u);
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x116u);
    goto LABEL_32;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v21, &UdwmTransitionCVISnapshot_Info);
  v22 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
  v11 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x11Bu);
    goto LABEL_32;
  }
  return v11;
}
