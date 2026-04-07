/*
 * XREFs of ?UpdateSourceRect@CThumbnailVisual@@QEAAJXZ @ 0x180016280
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x180016D00 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 * Callees:
 *     ?_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ @ 0x180016068 (-_IsThumbnailCVIStatic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ @ 0x1800160D0 (-_IsImmersiveIconic@CThumbnailVisual@@AEAA_NXZ.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002BDF8 (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007D784 (-GetIconicHeight@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ @ 0x18007D79C (-GetIconicWidth@CSecondaryWindowRepresentation@@QEAAHXZ.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18007DEE0 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CThumbnailVisual::UpdateSourceRect(CThumbnailVisual *this)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  _DWORD *v4; // rcx
  LONG v5; // r9d
  __int64 v6; // r8
  __int64 i; // rax
  LONG top; // edx
  bool v9; // sf
  LONG v10; // ecx
  LONG bottom; // eax
  LONG v12; // eax
  __int64 v13; // rax
  int v14; // eax
  LONG *v16; // r8
  __int64 v17; // rcx
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
  __int64 v30; // [rsp+68h] [rbp+27h] BYREF
  __int64 v31; // [rsp+70h] [rbp+2Fh]

  v2 = 0;
  if ( !*((_QWORD *)this + 47) || !*((_QWORD *)this + 44) )
    return v2;
  v27[0] = 0LL;
  v27[1] = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( CThumbnailVisual::_IsImmersiveIconic(this) )
  {
    v25 = (CSecondaryWindowRepresentation *)*((_QWORD *)this + 45);
    v30 = 0LL;
    *(float *)&v31 = (float)(int)CSecondaryWindowRepresentation::GetIconicWidth(v25);
    *((float *)&v31 + 1) = (float)(int)CSecondaryWindowRepresentation::GetIconicHeight(v26);
  }
  else
  {
    v3 = *((_QWORD *)this + 44);
    if ( (*(_BYTE *)(v3 + 36) & 2) != 0 )
    {
      v16 = (LONG *)(v3 + 56);
      v17 = 0LL;
      v18 = v3 + 56 - (_QWORD)&v30;
      do
      {
        *((float *)&v30 + v17) = (float)*(int *)((char *)&v30 + 4 * v17 + v18);
        ++v17;
      }
      while ( v17 < 4 );
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
      if ( (*(_BYTE *)(v6 + 580) & 8) != 0
        && !*(_DWORD *)(v3 + 77)
        && v4[18] == 2
        && ((*(_DWORD *)(v6 + 100) & 0x1000000) != 0 || (*(_BYTE *)(v6 + 581) & 1) != 0) )
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
                                                                                  + 165),
                                                                                  *(_QWORD *)(*(_QWORD *)(v3 + 24)
                                                                                            + 120LL)) )
      {
        ShiftViewPortOrigin(&v29);
      }
      for ( i = 0LL; i < 16; i += 4LL )
        *(float *)((char *)&v30 + i) = (float)*(int *)((char *)&v29.left + i);
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
    v13 = *((_QWORD *)this + 47);
    *(_OWORD *)((char *)this + 500) = *(_OWORD *)&v27[0].x;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v13 + 16) + 288LL))(
            *(_QWORD *)(v13 + 16),
            *(unsigned int *)(v13 + 24),
            &v30);
    v2 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x462u);
  }
  return v2;
}
