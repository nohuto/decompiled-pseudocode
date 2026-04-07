/*
 * XREFs of ?_EnsureCVIResource@CTransitionWindowSnapshot@@AEAAJPEBUtagRECT@@@Z @ 0x180009E24
 * Callers:
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@@Z @ 0x18000A280 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEAVCTopLevelWindow@@PEAVCVisual@@P.c)
 *     ?Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z @ 0x180049DB0 (-Initialize@CTransitionWindowSnapshot@@MEAAJPEAUIDwmChannel@@PEBUtagRECT@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z @ 0x180009B98 (-GetCVIFromCache@CDesktopManager@@SAJHHPEAPEAVCResource@@@Z.c)
 *     ?_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ @ 0x18000A00C (-_EnsureBrushForCVI@CTransitionWindowSnapshot@@AEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z @ 0x18001F154 (-SetInterpolationMode@CVisual@@QEAAXW4Enum@MilBitmapInterpolationMode@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     TemplateEventDescriptor @ 0x180075A10 (TemplateEventDescriptor.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::_EnsureCVIResource(
        CTransitionWindowSnapshot *this,
        const struct tagRECT *a2)
{
  __int64 v4; // rcx
  signed __int64 v5; // rdx
  float v6; // xmm1_4
  CBaseObject **v7; // rsi
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  int v13; // ecx
  int v14; // eax
  float v15; // xmm1_4
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  signed int v22; // eax
  __int64 v23; // rcx
  __m128i v24; // xmm0
  int v25; // eax
  float v26; // xmm0_4
  CBaseObject *v27; // rcx
  double v28; // [rsp+50h] [rbp-30h] BYREF
  double v29; // [rsp+58h] [rbp-28h]
  float v30[4]; // [rsp+60h] [rbp-20h] BYREF

  v4 = 0LL;
  v5 = (char *)a2 - (char *)v30;
  do
  {
    v30[v4] = (float)*(int *)((char *)&v30[v4] + v5);
    ++v4;
  }
  while ( v4 < 4 );
  v6 = *((float *)this + 84);
  v28 = 0.0;
  v29 = 0.0;
  if ( v6 != 1.0 )
  {
    v22 = a2->bottom - a2->top;
    v23 = *((_QWORD *)this + 37);
    if ( v22 < 0 )
      v22 = 0;
    v24 = _mm_cvtsi32_si128(v22);
    v25 = a2->right - a2->left;
    LODWORD(v26) = _mm_cvtepi32_ps(v24).m128_u32[0];
    if ( v25 < 0 )
      v25 = 0;
    v29 = (float)(v26 * v6);
    v28 = (float)((float)v25 * v6);
    CVisual::SetInterpolationMode(v23, 1LL);
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
      v10 = CResource::Create(5LL, *(_QWORD *)(*((_QWORD *)this + 2) + 16LL));
      v11 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x10Cu);
LABEL_33:
        if ( *v7 )
        {
          CBaseObject::Release(*v7);
          *v7 = 0LL;
        }
        v27 = (CBaseObject *)*((_QWORD *)this + 35);
        if ( v27 )
        {
          CBaseObject::Release(v27);
          *((_QWORD *)this + 35) = 0LL;
        }
        return v11;
      }
    }
  }
  v12 = *(_QWORD *)(*((_QWORD *)this + 37) + 16LL);
  if ( v12 )
    v13 = *(_DWORD *)(v12 + 24);
  else
    v13 = 0;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *, double *, _DWORD, _DWORD, int, _DWORD))(**((_QWORD **)*v7 + 2)
                                                                                                  + 952LL))(
          *((_QWORD *)*v7 + 2),
          *((unsigned int *)*v7 + 6),
          v30,
          &v28,
          0,
          0,
          v13,
          0);
  v11 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x117u);
    goto LABEL_33;
  }
  v15 = *((float *)this + 84);
  v28 = NAN;
  v16 = a2->right - a2->left;
  if ( v16 < 0 )
    v16 = 0;
  LODWORD(v29) = (int)(float)((float)v16 * v15) - 32000;
  v17 = a2->bottom - a2->top;
  if ( v17 < 0 )
    v17 = 0;
  HIDWORD(v29) = (int)(float)((float)v17 * v15) - 32000;
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**((_QWORD **)*v7 + 2) + 968LL))(
          *((_QWORD *)*v7 + 2),
          *((unsigned int *)*v7 + 6),
          &v28);
  v11 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x128u);
    goto LABEL_33;
  }
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    TemplateEventDescriptor(v19, &UdwmTransitionCVISnapshot_Info);
  v20 = CTransitionWindowSnapshot::_EnsureBrushForCVI(this);
  v11 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x12Eu);
    goto LABEL_33;
  }
  return v11;
}
