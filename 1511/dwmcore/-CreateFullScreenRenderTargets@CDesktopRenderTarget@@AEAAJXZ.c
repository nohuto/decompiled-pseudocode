/*
 * XREFs of ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18007575C
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180075A2C (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180065E68 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z @ 0x18006F890 (-FindDisplayByHMonitor@CDisplaySet@@AEBAPEAVCDisplay@@QEAUHMONITOR__@@PEAI@Z.c)
 *     ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x18006F9C4 (-GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV-$DynArray@PEAVCDisplay@@$0A.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180075580 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z @ 0x18007566C (-AddRenderTarget@CDesktopRenderTarget@@AEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x18007C4E4 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18007E82C (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResetScheduler@CComposition@@QEAAXXZ @ 0x180094CFC (-ResetScheduler@CComposition@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets(
        CDesktopRenderTarget *this,
        __int64 a2,
        unsigned int *a3)
{
  unsigned int v4; // edi
  __int64 v5; // r14
  int v6; // r15d
  int v7; // r12d
  int v8; // r13d
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rbx
  HMONITOR *DisplayByHMonitor; // rax
  int v13; // r10d
  unsigned int v14; // r11d
  __int64 v15; // rax
  __int64 v16; // rcx
  int inited; // eax
  unsigned int v18; // edx
  _DWORD *v19; // r8
  bool IsEmpty; // al
  int *v21; // r8
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  int v26; // eax
  CComposition *v27; // rcx
  __int128 v29; // xmm0
  int v30; // eax
  int v31; // ebx
  int v32; // ebx
  bool v33; // cc
  CHwndRenderTarget *v34; // rax
  CHwndRenderTarget *v35; // rcx
  unsigned int v36; // edx
  int v37; // eax
  int v38; // r9d
  unsigned int v39; // [rsp+28h] [rbp-99h]
  unsigned int v40; // [rsp+28h] [rbp-99h]
  unsigned int v41; // [rsp+28h] [rbp-99h]
  char v42; // [rsp+30h] [rbp-91h]
  char v43; // [rsp+30h] [rbp-91h]
  char v44; // [rsp+38h] [rbp-89h]
  char v45; // [rsp+38h] [rbp-89h]
  char v46; // [rsp+40h] [rbp-81h]
  char v47; // [rsp+40h] [rbp-81h]
  int v48; // [rsp+48h] [rbp-79h]
  __int64 v49; // [rsp+50h] [rbp-71h] BYREF
  CHwndRenderTarget *v50; // [rsp+58h] [rbp-69h] BYREF
  unsigned int v51; // [rsp+60h] [rbp-61h]
  __int128 v52; // [rsp+68h] [rbp-59h] BYREF
  __int64 v53; // [rsp+78h] [rbp-49h]
  unsigned int v54; // [rsp+80h] [rbp-41h]
  _QWORD v55[2]; // [rsp+88h] [rbp-39h] BYREF
  int v56; // [rsp+98h] [rbp-29h]
  __int64 v57; // [rsp+9Ch] [rbp-25h]
  _BYTE v58[16]; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-9h] BYREF
  __int128 v60; // [rsp+C8h] [rbp+7h] BYREF
  __int128 v61; // [rsp+D8h] [rbp+17h] BYREF

  v55[0] = v58;
  v50 = 0LL;
  v55[1] = v58;
  v4 = 0;
  v56 = 2;
  v5 = 0LL;
  v57 = 2LL;
  v6 = 0;
  v48 = 0;
  v7 = 0;
  v61 = 0uLL;
  v8 = 0;
  v9 = *((_QWORD *)this + 40);
  if ( !v9 || !*(_DWORD *)(v9 + 40) )
    goto LABEL_26;
  v10 = 0;
  v51 = 0;
  do
  {
    v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 40) + 48LL) + 8LL * v10);
    DisplayByHMonitor = CDisplaySet::FindDisplayByHMonitor(*((CDisplaySet **)this + 30), *(HMONITOR *)(v11 + 48), a3);
    if ( DisplayByHMonitor )
    {
      v5 = (__int64)DisplayByHMonitor;
    }
    else
    {
      LODWORD(v49) = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x3FBu);
      v13 = v49;
      v14 = 0;
    }
    if ( v13 < 0 )
      goto LABEL_19;
    v15 = *(_QWORD *)(v11 + 40);
    v52 = 0LL;
    v53 = 0LL;
    v54 = v14;
    if ( *(_BYTE *)(v15 + 569) != (_BYTE)v14 )
    {
      v29 = *(_OWORD *)(v5 + 104);
      *(_DWORD *)(v5 + 112) -= *(_DWORD *)(v5 + 104);
      *(_DWORD *)(v5 + 116) -= *(_DWORD *)(v5 + 108);
      *(_OWORD *)(v5 + 120) = v29;
      *(_BYTE *)(v5 + 302) = 1;
      *(_QWORD *)(v5 + 104) = 0LL;
    }
    v16 = *(_QWORD *)(v11 + 40);
    v46 = *((_BYTE *)this + 306);
    v44 = *((_BYTE *)this + 292);
    v42 = *((_BYTE *)this + 304);
    v39 = *((_DWORD *)this + 68);
    v59 = *(_OWORD *)((char *)this + 276);
    inited = CHwndRenderTarget::InitFullScreen(v16, (_DWORD)this, v5, (unsigned int)&v59, v39, v42, v44, v46);
    v4 = inited;
    if ( inited < 0 )
    {
      v41 = 501;
LABEL_66:
      v38 = inited;
      goto LABEL_67;
    }
    v49 = *(_QWORD *)(v11 + 40);
    v18 = HIDWORD(v57) + 1;
    if ( (unsigned int)(HIDWORD(v57) + 1) < HIDWORD(v57) )
    {
      v31 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v4 = -2147024362;
LABEL_63:
      v41 = 503;
LABEL_64:
      v38 = v31;
LABEL_67:
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v38, v41);
LABEL_68:
      DynArrayImpl<1>::~DynArrayImpl<1>(&v52);
      goto LABEL_24;
    }
    if ( v18 > (unsigned int)v57 )
    {
      v30 = DynArrayImpl<0>::AddMultipleAndSet(v55, 8LL, 1LL, &v49);
      v31 = v30;
      if ( v30 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0xC0u);
      v4 = v31;
      if ( v31 < 0 )
        goto LABEL_63;
    }
    else
    {
      *(_QWORD *)(v55[0] + 8LL * HIDWORD(v57)) = v49;
      HIDWORD(v57) = v18;
    }
    TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(&v61);
    IsEmpty = TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v19);
    if ( !v22 )
    {
      if ( IsEmpty )
        goto LABEL_16;
      v32 = v48;
      if ( *v21 < v48 )
        v32 = *v21;
      v33 = v21[1] < v8;
      LODWORD(v61) = v32;
      if ( v33 )
        v8 = v21[1];
      v33 = v21[2] <= v7;
      DWORD1(v61) = v8;
      if ( !v33 )
        v7 = v21[2];
      v33 = v21[3] <= v6;
      DWORD2(v61) = v7;
      if ( !v33 )
        v6 = v21[3];
      HIDWORD(v61) = v6;
LABEL_43:
      v48 = v32;
      goto LABEL_16;
    }
    if ( IsEmpty )
    {
      v6 = 0;
      v8 = 0;
      v7 = 0;
      v61 = 0uLL;
      v32 = 0;
      goto LABEL_43;
    }
    v61 = *(_OWORD *)v21;
    v6 = HIDWORD(v61);
    v7 = DWORD2(v61);
    v8 = DWORD1(v61);
    v48 = v61;
LABEL_16:
    inited = CDisplaySet::GetSecondaryCloneDisplaysNoRef(*((_QWORD *)this + 30), v5, (__int64)&v52);
    v4 = inited;
    if ( inited < 0 )
    {
      v41 = 509;
      goto LABEL_66;
    }
    v23 = 0LL;
    LODWORD(v49) = 0;
    if ( v54 )
    {
      while ( 1 )
      {
        *(_QWORD *)&v59 = *(_QWORD *)(v52 + 8 * v23);
        v34 = (CHwndRenderTarget *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 16LL))(
                                     WPF::g_pProcessHeap,
                                     592LL);
        if ( v34 )
        {
          v35 = CHwndRenderTarget::CHwndRenderTarget(v34, *((struct CComposition **)this + 2));
          v50 = v35;
        }
        else
        {
          v35 = 0LL;
          v50 = 0LL;
        }
        if ( !v35 )
          break;
        v47 = *((_BYTE *)this + 306);
        v45 = *((_BYTE *)this + 292);
        v43 = *((_BYTE *)this + 304);
        v40 = *((_DWORD *)this + 68);
        v60 = *(_OWORD *)((char *)this + 276);
        inited = CHwndRenderTarget::InitFullScreen(
                   (_DWORD)v35,
                   (_DWORD)this,
                   v59,
                   (unsigned int)&v60,
                   v40,
                   v43,
                   v45,
                   v47);
        v4 = inited;
        if ( inited < 0 )
        {
          v41 = 527;
          goto LABEL_66;
        }
        v36 = HIDWORD(v57) + 1;
        if ( (unsigned int)(HIDWORD(v57) + 1) < HIDWORD(v57) )
        {
          v31 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          v4 = -2147024362;
LABEL_58:
          v41 = 529;
          goto LABEL_64;
        }
        v4 = 0;
        if ( v36 > (unsigned int)v57 )
        {
          v37 = DynArrayImpl<0>::AddMultipleAndSet(v55, 8LL, 1LL, &v50);
          v31 = v37;
          if ( v37 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0xC0u);
          v4 = v31;
          if ( v31 < 0 )
            goto LABEL_58;
        }
        else
        {
          *(_QWORD *)(v55[0] + 8LL * HIDWORD(v57)) = v50;
          HIDWORD(v57) = v36;
        }
        v50 = 0LL;
        v23 = (unsigned int)(v49 + 1);
        LODWORD(v49) = v23;
        if ( (unsigned int)v23 >= v54 )
          goto LABEL_18;
      }
      v4 = -2147024882;
      MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, -2147024882, 0x205u);
      goto LABEL_68;
    }
LABEL_18:
    DynArrayImpl<1>::~DynArrayImpl<1>(&v52);
LABEL_19:
    v24 = *((_QWORD *)this + 40);
    v10 = v51 + 1;
    v51 = v10;
  }
  while ( v10 < *(_DWORD *)(v24 + 40) );
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  v25 = 0LL;
  if ( HIDWORD(v57) )
  {
    while ( 1 )
    {
      v26 = CDesktopRenderTarget::AddRenderTarget(this, *(CDisplay ***)(v55[0] + 8 * v25));
      v4 = v26;
      if ( v26 < 0 )
        break;
      v25 = (unsigned int)(v25 + 1);
      if ( (unsigned int)v25 >= HIDWORD(v57) )
        goto LABEL_23;
    }
    MilInstrumentationCheckHR(0x14u, &dword_180170788, 2u, v26, 0x223u);
  }
  else
  {
LABEL_23:
    v27 = (CComposition *)*((_QWORD *)this + 2);
    *((float *)this + 62) = (float)v48;
    *((float *)this + 63) = (float)v8;
    *((float *)this + 64) = (float)v7;
    *((float *)this + 65) = (float)v6;
    CComposition::ResetScheduler(v27);
  }
LABEL_24:
  if ( v50 )
  {
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v50 + 16LL))(v50);
    v50 = 0LL;
  }
LABEL_26:
  DynArrayImpl<1>::~DynArrayImpl<1>(v55);
  return v4;
}
