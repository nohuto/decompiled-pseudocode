/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x1800131F0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180013ED0 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180013018 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180013080 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x180017A34 (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001D0C8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002988C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180074A88 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x180074AA0 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18007527C (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v2; // esi
  __int64 v3; // r10
  _DWORD *v4; // rcx
  __int64 i; // rax
  LONG top; // edx
  bool v7; // sf
  LONG v8; // ecx
  LONG bottom; // eax
  LONG v10; // eax
  CResource *v11; // rcx
  int v12; // eax
  LONG *v14; // r10
  int *v15; // rax
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  __m128i v19; // xmm0
  int v20; // ebx
  int v21; // eax
  __int64 v22; // r8
  CSecondaryWindowRepresentation *v23; // rcx
  CSecondaryWindowRepresentation *v24; // rcx
  struct tagPOINT v25[2]; // [rsp+38h] [rbp-9h] BYREF
  int nNumerator[4]; // [rsp+48h] [rbp+7h]
  struct tagRECT v27; // [rsp+58h] [rbp+17h] BYREF
  int v28; // [rsp+68h] [rbp+27h] BYREF
  __int64 v29; // [rsp+6Ch] [rbp+2Bh] BYREF
  __int64 v30; // [rsp+74h] [rbp+33h]
  float IconicHeight; // [rsp+7Ch] [rbp+3Bh]

  v2 = 0;
  if ( !*((_QWORD *)this + 47) || !*((_QWORD *)this + 44) )
    return v2;
  v28 = 32;
  v29 = 0LL;
  v30 = 0LL;
  IconicHeight = 0.0;
  *(_OWORD *)&v25[0].x = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v23 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 45);
    HIDWORD(v29) = 0;
    LODWORD(v30) = 0;
    *((float *)&v30 + 1) = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v23);
    IconicHeight = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v24);
  }
  else
  {
    if ( (*(_BYTE *)(v3 + 36) & 2) != 0 )
    {
      v14 = (LONG *)(v3 + 56);
      v15 = v14;
      v16 = 4LL;
      do
      {
        *(float *)((char *)v15 + (char *)&v29 + 4 - (char *)v14) = (float)*v15;
        ++v15;
        --v16;
      }
      while ( v16 );
      top = v14[1];
      v8 = v14[2] - *v14;
      v7 = v8 < 0;
      v25[0].x = *v14;
      bottom = v14[3];
LABEL_12:
      if ( v7 )
        v8 = 0;
      v25[0].y = top;
      v10 = bottom - top;
      v25[1].x = v8;
      if ( v10 < 0 )
        v10 = 0;
      v25[1].y = v10;
      goto LABEL_17;
    }
    v4 = (_DWORD *)*((_QWORD *)this + 45);
    if ( v4 )
    {
      v27.left = v4[22];
      v27.top = v4[24];
      v27.right = v4[20] - v4[23];
      v27.bottom = v4[21] - v4[25];
      if ( *(_BYTE *)(v3 + 32) )
      {
        nNumerator[2] = v4[20];
        nNumerator[3] = v4[21];
        *(_QWORD *)nNumerator = 0LL;
        v27 = *(struct tagRECT *)nNumerator;
      }
      else if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 44) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 167),
                                                                                  *(_QWORD *)(*(_QWORD *)(v3 + 24)
                                                                                            + 120LL)) )
      {
        ShiftViewPortOrigin(&v27);
      }
      for ( i = 0LL; i < 16; i += 4LL )
        *(float *)((char *)&v29 + i + 4) = (float)*(int *)((char *)&v27.left + i);
      top = v27.top;
      v7 = v27.right - v27.left < 0;
      v8 = v27.right - v27.left;
      v25[0].x = v27.left;
      bottom = v27.bottom;
      goto LABEL_12;
    }
  }
LABEL_17:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v17 = *((_DWORD *)this + 125) - v25[0].x;
    v18 = *((_DWORD *)this + 127);
    v19 = _mm_srli_si128(*(__m128i *)((char *)this + 484), 8);
    *(_OWORD *)nNumerator = *(_OWORD *)((char *)this + 484);
    v20 = MulDiv(v17, _mm_cvtsi128_si32(v19), v18) + _mm_cvtsi128_si32(*(__m128i *)nNumerator);
    v21 = MulDiv(*((_DWORD *)this + 126) - v25[0].y, nNumerator[3], *((_DWORD *)this + 128));
    v22 = *((_QWORD *)this + 44);
    v25[0].x = v20 + *(_DWORD *)(v22 + 40);
    v25[0].y = v21 + nNumerator[1] + *(_DWORD *)(v22 + 44);
    CVisual::SetOffset(this, v25);
  }
  else
  {
    v11 = (CResource *)*((_QWORD *)this + 47);
    *(_OWORD *)((char *)this + 500) = *(_OWORD *)&v25[0].x;
    v12 = CResource::Send(v11, &v28, 0x18u);
    v2 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x488u);
  }
  return v2;
}
