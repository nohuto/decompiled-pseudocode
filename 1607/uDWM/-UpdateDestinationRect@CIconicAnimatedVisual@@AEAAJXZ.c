/*
 * XREFs of ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x180099E64
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009A0F0 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x18000B42C (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007D784 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007D79C (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateDestinationRect(CIconicAnimatedVisual *this)
{
  _QWORD *v1; // rsi
  _DWORD *v3; // rbp
  int RectangleGeometry; // eax
  unsigned int v5; // ebx
  int IconicWidth; // eax
  int v7; // r8d
  CSecondaryWindowRepresentation *v8; // r10
  int IconicHeight; // eax
  int v10; // r9d
  float v11; // xmm1_4
  CSecondaryWindowRepresentation *v12; // rcx
  CSecondaryWindowRepresentation *v13; // rcx
  __int64 v14; // r11
  int v15; // eax
  CSecondaryWindowRepresentation *v16; // rcx
  __m128i v17; // xmm0
  __int64 v18; // rax
  int v19; // eax
  float v21[4]; // [rsp+30h] [rbp-48h] BYREF
  double v22[2]; // [rsp+40h] [rbp-38h] BYREF

  v1 = (_QWORD *)((char *)this + 328);
  v3 = (_DWORD *)((char *)this + 336);
  RectangleGeometry = ResourceHelper::CreateRectangleGeometry(
                        (const struct tagRECT *)this + 21,
                        (struct CResource **)this + 41);
  v5 = RectangleGeometry;
  if ( RectangleGeometry >= 0 )
  {
    if ( *v1 && *((_QWORD *)this + 38) && *((_QWORD *)this + 39) )
    {
      IconicWidth = CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this + 34));
      v21[0] = (float)(v7 / 2 - IconicWidth / 2 - *v3);
      IconicHeight = CSecondaryWindowRepresentation::GetIconicHeight(v8);
      v11 = (float)(v10 / 2 - *((_DWORD *)this + 85) - IconicHeight / 2);
      v21[1] = v11;
      v21[2] = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v12) + v21[0];
      v21[3] = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v13) + v11;
      v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**(_QWORD **)(v14 + 16) + 288LL))(
              *(_QWORD *)(v14 + 16),
              *(unsigned int *)(v14 + 24),
              v21);
      v5 = v15;
      if ( v15 >= 0 )
      {
        v22[0] = (double)(int)CSecondaryWindowRepresentation::GetIconicWidth(*((CSecondaryWindowRepresentation **)this
                                                                             + 34));
        v17 = _mm_cvtsi32_si128(CSecondaryWindowRepresentation::GetIconicHeight(v16));
        v18 = *((_QWORD *)this + 39);
        *(_QWORD *)&v22[1] = *(_OWORD *)&_mm_cvtepi32_pd(v17);
        v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v18 + 16) + 296LL))(
                *(_QWORD *)(v18 + 16),
                *(unsigned int *)(v18 + 24),
                v22);
        v5 = v19;
        if ( v19 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0xABu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v15, 0xA3u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x93u);
  }
  return v5;
}
