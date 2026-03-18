/*
 * XREFs of ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049850
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180049B1C (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18000DD28 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180040188 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x1800495FC (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800496E0 (-AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?DetachInUseDisplays@CDesktopRenderTarget@@AEAAXXZ @ 0x1800497D0 (-DetachInUseDisplays@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18004AEAC (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18004D580 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x180054D30 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x180054D5C (-GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV-$DynArray@PEAVCDisplay@@$0A.c)
 *     ?ResetScheduler@CComposition@@QEAAXXZ @ 0x1800683F8 (-ResetScheduler@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets(CDesktopRenderTarget *this)
{
  unsigned int v2; // edi
  int v3; // r15d
  int v4; // r12d
  __int64 v5; // rax
  int v6; // r13d
  unsigned int v7; // ecx
  __int64 v8; // rbx
  __int64 v9; // rax
  struct CDisplay *v10; // r14
  __int64 v11; // rcx
  int inited; // eax
  unsigned int v13; // edx
  _DWORD *v14; // r8
  bool IsEmpty; // al
  int *v16; // r8
  int v17; // edx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // eax
  CComposition *v22; // rcx
  __int128 v24; // xmm0
  int v25; // eax
  int v26; // ebx
  int v27; // ebx
  bool v28; // cc
  CHwndRenderTarget *v29; // rax
  CHwndRenderTarget *v30; // rcx
  unsigned int v31; // edx
  int v32; // eax
  int v33; // r9d
  unsigned int v34; // [rsp+28h] [rbp-A9h]
  unsigned int v35; // [rsp+28h] [rbp-A9h]
  unsigned int v36; // [rsp+28h] [rbp-A9h]
  char v37; // [rsp+30h] [rbp-A1h]
  char v38; // [rsp+30h] [rbp-A1h]
  char v39; // [rsp+38h] [rbp-99h]
  char v40; // [rsp+38h] [rbp-99h]
  char v41; // [rsp+40h] [rbp-91h]
  char v42; // [rsp+40h] [rbp-91h]
  int v43; // [rsp+48h] [rbp-89h]
  CHwndRenderTarget *v44; // [rsp+50h] [rbp-81h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-79h]
  __int128 v46; // [rsp+60h] [rbp-71h] BYREF
  __int64 v47; // [rsp+70h] [rbp-61h]
  unsigned int v48; // [rsp+78h] [rbp-59h]
  __int128 v49; // [rsp+88h] [rbp-49h] BYREF
  void *v50[2]; // [rsp+98h] [rbp-39h] BYREF
  int v51; // [rsp+A8h] [rbp-29h]
  __int64 v52; // [rsp+ACh] [rbp-25h]
  _BYTE v53[16]; // [rsp+B8h] [rbp-19h] BYREF
  struct CDisplay *v54; // [rsp+C8h] [rbp-9h] BYREF
  __int128 v55; // [rsp+D8h] [rbp+7h] BYREF
  __int128 v56; // [rsp+E8h] [rbp+17h] BYREF

  v50[0] = v53;
  v54 = 0LL;
  v50[1] = v53;
  v2 = 0;
  v44 = 0LL;
  v51 = 2;
  v3 = 0;
  v52 = 2LL;
  v4 = 0;
  v5 = *((_QWORD *)this + 34);
  v6 = 0;
  v56 = 0uLL;
  v43 = 0;
  if ( !v5 || !*(_DWORD *)(v5 + 40) )
    goto LABEL_24;
  v7 = 0;
  v45 = 0;
  do
  {
    v8 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 34) + 48LL) + 8LL * v7);
    if ( (int)CDisplaySet::GetDisplayByHMonitorNoRefNoConst(*((CDisplaySet **)this + 24), *(HMONITOR *)(v8 + 48), &v54) < 0 )
      goto LABEL_17;
    v9 = *(_QWORD *)(v8 + 40);
    v10 = v54;
    v46 = 0LL;
    v47 = 0LL;
    v48 = 0;
    if ( *(_BYTE *)(v9 + 592) )
    {
      v24 = *((_OWORD *)v54 + 7);
      *((_DWORD *)v54 + 30) -= *((_DWORD *)v54 + 28);
      *((_DWORD *)v10 + 31) -= *((_DWORD *)v10 + 29);
      *((_OWORD *)v10 + 8) = v24;
      *((_BYTE *)v10 + 147) = 1;
      *((_QWORD *)v10 + 14) = 0LL;
    }
    v11 = *(_QWORD *)(v8 + 40);
    v41 = *((_BYTE *)this + 258);
    v39 = *((_BYTE *)this + 244);
    v37 = *((_BYTE *)this + 256);
    v34 = *((_DWORD *)this + 56);
    v49 = *(_OWORD *)((char *)this + 228);
    inited = CHwndRenderTarget::InitFullScreen(v11, (_DWORD)this, (_DWORD)v10, (unsigned int)&v49, v34, v37, v39, v41);
    v2 = inited;
    if ( inited < 0 )
    {
      v36 = 464;
LABEL_63:
      v33 = inited;
      goto LABEL_64;
    }
    *(_QWORD *)&v49 = *(_QWORD *)(v8 + 40);
    v13 = HIDWORD(v52) + 1;
    if ( (unsigned int)(HIDWORD(v52) + 1) < HIDWORD(v52) )
    {
      v26 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v2 = -2147024362;
LABEL_60:
      v36 = 466;
LABEL_61:
      v33 = v26;
LABEL_64:
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v33, v36);
LABEL_65:
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v46);
      goto LABEL_22;
    }
    if ( v13 > (unsigned int)v52 )
    {
      v25 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v50, 8u, 1, &v49);
      v26 = v25;
      if ( v25 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
      v2 = v26;
      if ( v26 < 0 )
        goto LABEL_60;
    }
    else
    {
      *((_QWORD *)v50[0] + HIDWORD(v52)) = v49;
      HIDWORD(v52) = v13;
    }
    TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v56);
    IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v14);
    if ( !v17 )
    {
      if ( IsEmpty )
        goto LABEL_14;
      v27 = v43;
      if ( *v16 < v43 )
        v27 = *v16;
      v28 = v16[1] < v6;
      LODWORD(v56) = v27;
      if ( v28 )
        v6 = v16[1];
      v28 = v16[2] <= v4;
      DWORD1(v56) = v6;
      if ( !v28 )
        v4 = v16[2];
      v28 = v16[3] <= v3;
      DWORD2(v56) = v4;
      if ( !v28 )
        v3 = v16[3];
      HIDWORD(v56) = v3;
LABEL_40:
      v43 = v27;
      goto LABEL_14;
    }
    if ( IsEmpty )
    {
      v3 = 0;
      v6 = 0;
      v4 = 0;
      v56 = 0uLL;
      v27 = 0;
      goto LABEL_40;
    }
    v56 = *(_OWORD *)v16;
    v3 = HIDWORD(v56);
    v4 = DWORD2(v56);
    v6 = DWORD1(v56);
    v43 = v56;
LABEL_14:
    inited = CDisplaySet::GetSecondaryCloneDisplaysNoRef(*((_QWORD *)this + 24), v10, &v46);
    v2 = inited;
    if ( inited < 0 )
    {
      v36 = 472;
      goto LABEL_63;
    }
    v18 = 0LL;
    if ( v48 )
    {
      while ( 1 )
      {
        *(_QWORD *)&v49 = *(_QWORD *)(v46 + 8 * v18);
        v29 = (CHwndRenderTarget *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 16LL))(
                                     WPF::g_pProcessHeap,
                                     600LL);
        if ( v29 )
        {
          v30 = CHwndRenderTarget::CHwndRenderTarget(v29, *((struct CComposition **)this + 2));
          v44 = v30;
        }
        else
        {
          v30 = 0LL;
          v44 = 0LL;
        }
        if ( !v30 )
          break;
        v42 = *((_BYTE *)this + 258);
        v40 = *((_BYTE *)this + 244);
        v38 = *((_BYTE *)this + 256);
        v35 = *((_DWORD *)this + 56);
        v55 = *(_OWORD *)((char *)this + 228);
        inited = CHwndRenderTarget::InitFullScreen(
                   (_DWORD)v30,
                   (_DWORD)this,
                   v49,
                   (unsigned int)&v55,
                   v35,
                   v38,
                   v40,
                   v42);
        v2 = inited;
        if ( inited < 0 )
        {
          v36 = 490;
          goto LABEL_63;
        }
        v31 = HIDWORD(v52) + 1;
        if ( (unsigned int)(HIDWORD(v52) + 1) < HIDWORD(v52) )
        {
          v26 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v2 = -2147024362;
LABEL_55:
          v36 = 492;
          goto LABEL_61;
        }
        v2 = 0;
        if ( v31 > (unsigned int)v52 )
        {
          v32 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v50, 8u, 1, &v44);
          v26 = v32;
          if ( v32 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, 0xC0u);
          v2 = v26;
          if ( v26 < 0 )
            goto LABEL_55;
        }
        else
        {
          *((_QWORD *)v50[0] + HIDWORD(v52)) = v44;
          HIDWORD(v52) = v31;
        }
        v44 = 0LL;
        v18 = (unsigned int)(v18 + 1);
        if ( (unsigned int)v18 >= v48 )
          goto LABEL_16;
      }
      v2 = -2147024882;
      MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, -2147024882, 0x1E0u);
      goto LABEL_65;
    }
LABEL_16:
    DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v46);
LABEL_17:
    v19 = *((_QWORD *)this + 34);
    v7 = v45 + 1;
    v45 = v7;
  }
  while ( v7 < *(_DWORD *)(v19 + 40) );
  CDesktopRenderTarget::DetachInUseDisplays(this);
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  v20 = 0LL;
  if ( HIDWORD(v52) )
  {
    while ( 1 )
    {
      v21 = CDesktopRenderTarget::AddRenderTarget(this, *((CDisplay ***)v50[0] + v20));
      v2 = v21;
      if ( v21 < 0 )
        break;
      v20 = (unsigned int)(v20 + 1);
      if ( (unsigned int)v20 >= HIDWORD(v52) )
        goto LABEL_21;
    }
    MilInstrumentationCheckHR(0x14u, &dword_180164678, 2u, v21, 0x208u);
  }
  else
  {
LABEL_21:
    v22 = (CComposition *)*((_QWORD *)this + 2);
    *((float *)this + 50) = (float)v43;
    *((float *)this + 51) = (float)v6;
    *((float *)this + 52) = (float)v4;
    *((float *)this + 53) = (float)v3;
    CComposition::ResetScheduler(v22);
  }
LABEL_22:
  if ( v44 )
  {
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v44 + 16LL))(v44);
    v44 = 0LL;
  }
LABEL_24:
  DynArrayImpl<1>::~DynArrayImpl<1>(v50);
  return v2;
}
