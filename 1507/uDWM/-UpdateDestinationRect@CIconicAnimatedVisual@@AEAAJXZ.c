/*
 * XREFs of ?UpdateDestinationRect@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009BC60
 * Callers:
 *     ?ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ @ 0x18009BF10 (-ValidateVisual@CIconicAnimatedVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z @ 0x180010A98 (-CreateRectangleGeometry@ResourceHelper@@SAJPEBUtagRECT@@PEAPEAVCResource@@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180074A88 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180074AA0 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 */

__int64 __fastcall CIconicAnimatedVisual::UpdateDestinationRect(CIconicAnimatedVisual *this)
{
  _QWORD *v1; // rsi
  _DWORD *v3; // r14
  int RectangleGeometry; // eax
  unsigned int v5; // ebx
  CSecondaryWindowRepresentation *v6; // rcx
  int IconicWidth; // eax
  int v8; // r8d
  CSecondaryWindowRepresentation *v9; // r10
  int IconicHeight; // eax
  int v11; // r9d
  float v12; // xmm1_4
  CSecondaryWindowRepresentation *v13; // rcx
  CSecondaryWindowRepresentation *v14; // rcx
  CResource *v15; // r11
  int v16; // eax
  CSecondaryWindowRepresentation *v17; // rcx
  CSecondaryWindowRepresentation *v18; // rcx
  int v19; // eax
  CResource *v20; // rcx
  int v21; // eax
  int v23; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v24[20]; // [rsp+34h] [rbp-1Ch] BYREF

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
      v6 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 34);
      v23 = 32;
      memset(v24, 0, sizeof(v24));
      IconicWidth = CSecondaryWindowRepresentation::GetIconicWidth(v6);
      *(float *)&v24[4] = (float)(v8 / 2 - IconicWidth / 2 - *v3);
      IconicHeight = CSecondaryWindowRepresentation::GetIconicHeight(v9);
      v12 = (float)(v11 / 2 - *((_DWORD *)this + 85) - IconicHeight / 2);
      *(float *)&v24[8] = v12;
      *(float *)&v24[12] = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v13) + *(float *)&v24[4];
      *(float *)&v24[16] = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v14) + v12;
      v16 = CResource::Send(v15, &v23, 0x18u);
      v5 = v16;
      if ( v16 >= 0 )
      {
        v17 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 34);
        memset(v24, 0, sizeof(v24));
        v23 = 33;
        *(double *)&v24[4] = (double)(int)CSecondaryWindowRepresentation::GetIconicWidth(v17);
        v19 = CSecondaryWindowRepresentation::GetIconicHeight(v18);
        v20 = (CResource *)*((_QWORD *)this + 39);
        *(double *)&v24[12] = (double)v19;
        v21 = CResource::Send(v20, &v23, 0x18u);
        v5 = v21;
        if ( v21 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0xA7u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0xA0u);
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, RectangleGeometry, 0x91u);
  }
  return v5;
}
