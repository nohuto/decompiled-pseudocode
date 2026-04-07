/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180018CC0
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180019A20 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180018AB4 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x180018B1C (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800224E8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002C6B8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007CB0C (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007CB24 (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18007D30C (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v2; // esi
  __int64 v3; // r10
  _DWORD *v4; // rcx
  LONG v5; // r8d
  __int64 v6; // rdx
  __int64 i; // rax
  LONG top; // edx
  bool v9; // sf
  LONG v10; // ecx
  LONG bottom; // eax
  LONG v12; // eax
  CResource *v13; // rcx
  int v14; // eax
  LONG *v16; // r10
  int *v17; // rax
  __int64 v18; // rdx
  int v19; // ecx
  int v20; // r8d
  __m128i v21; // xmm0
  int v22; // ebx
  int v23; // eax
  __int64 v24; // r8
  CSecondaryWindowRepresentation *v25; // rcx
  CSecondaryWindowRepresentation *v26; // rcx
  struct tagPOINT v27[2]; // [rsp+38h] [rbp-9h] BYREF
  int nNumerator[4]; // [rsp+48h] [rbp+7h]
  struct tagRECT v29; // [rsp+58h] [rbp+17h] BYREF
  int v30; // [rsp+68h] [rbp+27h] BYREF
  __int64 v31; // [rsp+6Ch] [rbp+2Bh] BYREF
  __int64 v32; // [rsp+74h] [rbp+33h]
  float IconicHeight; // [rsp+7Ch] [rbp+3Bh]

  v2 = 0;
  if ( !*((_QWORD *)this + 47) || !*((_QWORD *)this + 44) )
    return v2;
  v30 = 35;
  v31 = 0LL;
  v32 = 0LL;
  IconicHeight = 0.0;
  *(_OWORD *)&v27[0].x = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v25 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 45);
    HIDWORD(v31) = 0;
    LODWORD(v32) = 0;
    *((float *)&v32 + 1) = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v25);
    IconicHeight = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v26);
  }
  else
  {
    if ( (*(_BYTE *)(v3 + 36) & 2) != 0 )
    {
      v16 = (LONG *)(v3 + 56);
      v17 = v16;
      v18 = 4LL;
      do
      {
        *(float *)((char *)v17 + (char *)&v31 + 4 - (char *)v16) = (float)*v17;
        ++v17;
        --v18;
      }
      while ( v18 );
      top = v16[1];
      v10 = v16[2] - *v16;
      v9 = v10 < 0;
      v27[0].x = *v16;
      bottom = v16[3];
LABEL_13:
      if ( v9 )
        v10 = 0;
      v27[0].y = top;
      v12 = bottom - top;
      v27[1].x = v10;
      if ( v12 < 0 )
        v12 = 0;
      v27[1].y = v12;
      goto LABEL_18;
    }
    v4 = (_DWORD *)*((_QWORD *)this + 45);
    if ( v4 )
    {
      v29.left = v4[22];
      v29.top = v4[24];
      v5 = v4[20] - v4[23];
      v29.right = v5;
      v29.bottom = v4[21] - v4[25];
      v6 = *(_QWORD *)(v3 + 24);
      if ( (*(_BYTE *)(v6 + 572) & 8) != 0
        && !*(_DWORD *)(v3 + 77)
        && v4[18] == 2
        && ((*(_DWORD *)(v6 + 100) & 0x1000000) != 0 || (*(_BYTE *)(v6 + 573) & 1) != 0) )
      {
        v29.right = v5 - *(_DWORD *)(v6 + 276) - *(_DWORD *)(v6 + 272);
        v29.bottom -= *(_DWORD *)(v6 + 280) + *(_DWORD *)(v6 + 284);
      }
      if ( *(_BYTE *)(v3 + 32) )
      {
        nNumerator[2] = v4[20];
        nNumerator[3] = v4[21];
        *(_QWORD *)nNumerator = 0LL;
        v29 = *(struct tagRECT *)nNumerator;
      }
      else if ( *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 44) + 24LL) + 40LL) == CWindowList::GetShellWindowForDesktop(
                                                                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                  + 167),
                                                                                  *(_QWORD *)(*(_QWORD *)(v3 + 24)
                                                                                            + 120LL)) )
      {
        ShiftViewPortOrigin(&v29);
      }
      for ( i = 0LL; i < 16; i += 4LL )
        *(float *)((char *)&v31 + i + 4) = (float)*(int *)((char *)&v29.left + i);
      top = v29.top;
      v9 = v29.right - v29.left < 0;
      v10 = v29.right - v29.left;
      v27[0].x = v29.left;
      bottom = v29.bottom;
      goto LABEL_13;
    }
  }
LABEL_18:
  if ( CThumbnailVisual::_IsThumbnailCVIStatic(this) )
  {
    v19 = *((_DWORD *)this + 125) - v27[0].x;
    v20 = *((_DWORD *)this + 127);
    v21 = _mm_srli_si128(*(__m128i *)((char *)this + 484), 8);
    *(_OWORD *)nNumerator = *(_OWORD *)((char *)this + 484);
    v22 = MulDiv(v19, _mm_cvtsi128_si32(v21), v20) + _mm_cvtsi128_si32(*(__m128i *)nNumerator);
    v23 = MulDiv(*((_DWORD *)this + 126) - v27[0].y, nNumerator[3], *((_DWORD *)this + 128));
    v24 = *((_QWORD *)this + 44);
    v27[0].x = v22 + *(_DWORD *)(v24 + 40);
    v27[0].y = v23 + nNumerator[1] + *(_DWORD *)(v24 + 44);
    CVisual::SetOffset(this, v27);
  }
  else
  {
    v13 = (CResource *)*((_QWORD *)this + 47);
    *(_OWORD *)((char *)this + 500) = *(_OWORD *)&v27[0].x;
    v14 = CResource::Send(v13, &v30, 0x18u);
    v2 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x455u);
  }
  return v2;
}
