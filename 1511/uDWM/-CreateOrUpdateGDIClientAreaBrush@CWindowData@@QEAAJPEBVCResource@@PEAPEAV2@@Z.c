/*
 * XREFs of ?CreateOrUpdateGDIClientAreaBrush@CWindowData@@QEAAJPEBVCResource@@PEAPEAV2@@Z @ 0x18007F674
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180009690 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z @ 0x180017ED4 (-AdjustDesktopWindowSize@CDesktopManager@@SA_NPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18001D0D0 (-Create@CResource@@SAJW4MIL_RESOURCE_TYPE@@QEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z @ 0x18007D30C (-ShiftViewPortOrigin@@YAXPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall CWindowData::CreateOrUpdateGDIClientAreaBrush(
        CWindowData *this,
        const struct CResource *a2,
        struct CResource **a3)
{
  volatile signed __int32 *v4; // rbx
  unsigned int v6; // esi
  bool v7; // zf
  LONG bottom; // eax
  LONG right; // ecx
  int top; // r8d
  LONG left; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // r8d
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  __m128i v23; // xmm3
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  int v27; // eax
  float v28; // xmm0_4
  CBaseObject *v29; // rbx
  __int64 v30; // rax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  CResource *v37; // [rsp+30h] [rbp-89h] BYREF
  __int64 v38; // [rsp+38h] [rbp-81h] BYREF
  int v39; // [rsp+40h] [rbp-79h]
  __int64 v40; // [rsp+44h] [rbp-75h]
  struct tagRECT v41; // [rsp+50h] [rbp-69h] BYREF
  int v42; // [rsp+60h] [rbp-59h] BYREF
  _BYTE v43[4]; // [rsp+64h] [rbp-55h] BYREF
  double v44; // [rsp+68h] [rbp-51h]
  __int128 v45; // [rsp+70h] [rbp-49h]
  float v46; // [rsp+80h] [rbp-39h]
  float v47; // [rsp+84h] [rbp-35h]
  float v48; // [rsp+88h] [rbp-31h]
  float v49; // [rsp+8Ch] [rbp-2Dh]
  __int64 v50; // [rsp+A0h] [rbp-19h]
  int v51; // [rsp+A8h] [rbp-11h]
  int v52; // [rsp+ACh] [rbp-Dh]
  int v53; // [rsp+B0h] [rbp-9h]
  __int64 v54; // [rsp+BCh] [rbp+3h]
  int v55; // [rsp+C4h] [rbp+Bh]
  int v56; // [rsp+C8h] [rbp+Fh]
  int v57; // [rsp+D0h] [rbp+17h]

  v4 = 0LL;
  v6 = 0;
  v37 = 0LL;
  if ( *((_QWORD *)this + 46) )
  {
    v42 = 257;
    memset_0(v43, 0, 0x70uLL);
    v7 = (*((_BYTE *)this + 568) & 0x40) == 0;
    v44 = DOUBLE_1_0;
    v45 = _xmm;
    v50 = 0LL;
    v51 = 0;
    v52 = 1;
    if ( v7 && CDesktopManager::AdjustDesktopWindowSize(*((HWND *)this + 5), &v41) )
    {
      ShiftViewPortOrigin(&v41);
      bottom = v41.bottom;
      right = v41.right;
      top = v41.top;
      left = v41.left;
    }
    else
    {
      v12 = *((_DWORD *)this + 49);
      v13 = *((_DWORD *)this + 50);
      if ( (*((_BYTE *)this + 571) & 4) != 0 )
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
      v41.bottom = bottom;
      v41.left = left;
      v41.right = right;
      v41.top = top;
    }
    v22 = right - left;
    v23 = _mm_cvtsi32_si128(left);
    if ( v22 < 0 )
      v22 = 0;
    v53 = 0;
    v24 = _mm_cvtepi32_ps(v23).m128_f32[0] + 0.60000002;
    v25 = (float)v22 - 1.2;
    v46 = v24;
    v47 = (float)top + 0.60000002;
    if ( v25 <= 0.0 )
      v25 = 0.0;
    v26 = v25 + v24;
    v27 = bottom - top;
    if ( v27 < 0 )
      v27 = 0;
    v48 = v26;
    v28 = (float)v27 - 1.2;
    if ( v28 <= 0.0 )
      v28 = 0.0;
    v29 = *a3;
    v30 = *((_QWORD *)this + 46);
    v54 = 1LL;
    v55 = 1;
    v56 = 1;
    v49 = v28 + (float)((float)top + 0.60000002);
    v57 = *(_DWORD *)(v30 + 24);
    v37 = v29;
    if ( v29 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v29 + 2);
      v4 = (volatile signed __int32 *)v37;
    }
    else
    {
      v31 = CResource::Create(0x4Bu, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v37);
      v6 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, 0x1B3Au);
LABEL_40:
        v4 = (volatile signed __int32 *)v37;
LABEL_41:
        if ( v4 )
          CBaseObject::Release((CBaseObject *)v4);
        return v6;
      }
      v4 = (volatile signed __int32 *)v37;
    }
    v32 = CResource::Send((CResource *)v4, &v42, 0x74u);
    v6 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0x1B3Du);
      goto LABEL_41;
    }
    v33 = *((_DWORD *)this + 90);
    v38 = 40LL;
    v40 = 0LL;
    v39 = v33;
    if ( (v33 & 2) != 0 )
    {
      v34 = *((_DWORD *)this + 91);
      LODWORD(v40) = v34 & 0xFFFFFF;
      HIDWORD(v40) = v34 | 0xFF000000;
    }
    v35 = CResource::Send((CResource *)v4, &v38, 0x14u);
    v6 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0x1B53u);
      goto LABEL_41;
    }
  }
  if ( *a3 )
    CBaseObject::Release(*a3);
  *a3 = (struct CResource *)v4;
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 2);
    goto LABEL_40;
  }
  return v6;
}
