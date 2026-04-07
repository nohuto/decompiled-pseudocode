/*
 * XREFs of ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z @ 0x18007FF4C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180019EE0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180076558 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18007DEE0 (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowData::CreateOrUpdateGDIClientAreaBrush(
        CWindowData *this,
        const struct CResource *a2,
        struct CResource **a3)
{
  CBaseObject *v4; // rbx
  unsigned int v6; // esi
  bool v7; // zf
  LONG bottom; // ecx
  LONG right; // eax
  LONG top; // edx
  LONG left; // r8d
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // r8d
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  CBaseObject *v22; // rbx
  int v23; // eax
  __m128i v24; // xmm3
  __m128i v25; // xmm4
  int v26; // ecx
  float v27; // xmm3_4
  int v28; // eax
  int v29; // eax
  __int64 v30; // r9
  unsigned int v31; // edx
  int v32; // eax
  CBaseObject *v34; // [rsp+90h] [rbp-9h] BYREF
  struct tagRECT v35; // [rsp+98h] [rbp-1h] BYREF
  float v36; // [rsp+A8h] [rbp+Fh] BYREF
  float v37; // [rsp+ACh] [rbp+13h]
  float v38; // [rsp+B0h] [rbp+17h]
  float v39; // [rsp+B4h] [rbp+1Bh]
  __int128 v40; // [rsp+B8h] [rbp+1Fh] BYREF

  v4 = 0LL;
  v6 = 0;
  v34 = 0LL;
  if ( *((_QWORD *)this + 46) )
  {
    v7 = (*((_BYTE *)this + 576) & 0x40) == 0;
    v40 = _xmm;
    if ( v7 && CDesktopManager::AdjustDesktopWindowSize(*((HWND *)this + 5), &v35) )
    {
      ShiftViewPortOrigin(&v35);
      bottom = v35.bottom;
      right = v35.right;
      top = v35.top;
      left = v35.left;
    }
    else
    {
      v12 = *((_DWORD *)this + 49);
      v13 = *((_DWORD *)this + 50);
      if ( (*((_BYTE *)this + 579) & 4) != 0 )
      {
        v14 = v12 - *((_DWORD *)this + 47);
        v15 = *((_DWORD *)this + 59);
        v16 = *((_DWORD *)this + 61);
        if ( v14 < 0 )
          v14 = 0;
        v17 = v14 - *((_DWORD *)this + 60);
        v18 = v13 - *((_DWORD *)this + 48);
        if ( v18 < 0 )
          v18 = 0;
        v19 = v18 - *((_DWORD *)this + 62);
      }
      else
      {
        v20 = v12 - *((_DWORD *)this + 47);
        v15 = 0;
        v16 = 0;
        if ( v20 < 0 )
          v20 = 0;
        v17 = v20 - *((_DWORD *)this + 60) - *((_DWORD *)this + 59);
        v21 = v13 - *((_DWORD *)this + 48);
        if ( v21 < 0 )
          v21 = 0;
        v19 = v21 - *((_DWORD *)this + 62) - *((_DWORD *)this + 61);
      }
      left = *((_DWORD *)this + 20) + v15;
      right = v17 - *((_DWORD *)this + 21);
      top = *((_DWORD *)this + 22) + v16;
      bottom = v19 - *((_DWORD *)this + 23);
      v35.bottom = bottom;
      v35.left = left;
      v35.right = right;
      v35.top = top;
    }
    v22 = *a3;
    v23 = right - left;
    v24 = _mm_cvtsi32_si128(left);
    if ( v23 < 0 )
      v23 = 0;
    v25 = _mm_cvtsi32_si128(top);
    v26 = bottom - top;
    v34 = *a3;
    LODWORD(v27) = _mm_cvtepi32_ps(v24).m128_u32[0];
    if ( v26 < 0 )
      v26 = 0;
    v36 = v27 + 0.60000002;
    v37 = _mm_cvtepi32_ps(v25).m128_f32[0] + 0.60000002;
    v38 = fmaxf((float)v23 - 1.2, 0.0) + (float)(v27 + 0.60000002);
    v39 = fmaxf((float)v26 - 1.2, 0.0) + v37;
    if ( !v22 || (_InterlockedIncrement((volatile signed __int32 *)v22 + 2), (v4 = v34) == 0LL) )
    {
      v28 = CResource::Create(0x10u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v34);
      v6 = v28;
      if ( v28 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v28, 0x17BFu);
LABEL_37:
        v4 = v34;
        goto LABEL_38;
      }
      v4 = v34;
    }
    v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, float *, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD, int, _DWORD, int, int, _DWORD))(**((_QWORD **)v4 + 2) + 1152LL))(
            *((_QWORD *)v4 + 2),
            *((unsigned int *)v4 + 6),
            *((_QWORD *)v4 + 2),
            &v40,
            &v36,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            1,
            1,
            *(_DWORD *)(*((_QWORD *)this + 46) + 24LL));
    v6 = v29;
    if ( v29 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x17D2u);
LABEL_38:
      if ( v4 )
        CBaseObject::Release(v4);
      return v6;
    }
    v30 = 0LL;
    v31 = 0;
    if ( (*((_BYTE *)this + 360) & 2) != 0 )
    {
      v30 = *((_DWORD *)this + 91) & 0xFFFFFF;
      v31 = *((_DWORD *)this + 91) | 0xFF000000;
    }
    v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, unsigned int))(**((_QWORD **)v4 + 2) + 320LL))(
            *((_QWORD *)v4 + 2),
            *((unsigned int *)v4 + 6),
            *((unsigned int *)this + 90),
            v30,
            v31);
    v6 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0x17E8u);
      goto LABEL_38;
    }
  }
  if ( *a3 )
    CBaseObject::Release(*a3);
  *a3 = v4;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
    goto LABEL_37;
  }
  return v6;
}
