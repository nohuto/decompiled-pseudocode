/*
 * XREFs of ?CreateFullScreenRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x18011D3C8
 * Callers:
 *     ?CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ @ 0x180077178 (-CreateRenderTargets@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?ResetScheduler@CComposition@@QEAAXXZ @ 0x18003B5B4 (-ResetScheduler@CComposition@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N44@Z @ 0x180074380 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ??0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180075B68 (--0CHwndRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ?ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ @ 0x180076C20 (-ReleaseRenderTargets@CDesktopRenderTarget@@AEAAXXZ.c)
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180076D60 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18009A984 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z @ 0x1800B8818 (-GetDisplayByHMonitorNoRefNoConst@CDisplaySet@@QEBAJQEAUHMONITOR__@@PEAPEAVCDisplay@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV?$DynArray@PEAVCDisplay@@$0A@@@@Z @ 0x180161AE4 (-GetSecondaryCloneDisplaysNoRef@CDisplaySet@@QEBAJPEAVCDisplay@@PEAV-$DynArray@PEAVCDisplay@@$0A.c)
 */

__int64 __fastcall CDesktopRenderTarget::CreateFullScreenRenderTargets(CDesktopRenderTarget *this)
{
  unsigned int v1; // esi
  int v3; // ebx
  int v4; // r15d
  int v5; // r12d
  __int64 v6; // rax
  int v7; // r13d
  unsigned int v8; // ecx
  __int64 v9; // r14
  __int64 v10; // rax
  struct CDisplay *v11; // rsi
  __int128 v12; // xmm0
  CHwndRenderTarget *v13; // rcx
  int inited; // eax
  unsigned int v15; // edx
  int v16; // eax
  int v17; // r14d
  bool v18; // al
  int v19; // ecx
  BOOL v20; // edx
  bool v21; // al
  unsigned int v22; // r14d
  __int64 i; // rsi
  void (__fastcall ***v24)(_QWORD); // rbx
  CHwndRenderTarget *v25; // rax
  CHwndRenderTarget *v26; // rcx
  unsigned int v27; // edx
  int v28; // eax
  __int64 v29; // rax
  int v30; // eax
  CComposition *v31; // rcx
  int v33; // r9d
  unsigned int v34; // [rsp+28h] [rbp-79h]
  unsigned int v35; // [rsp+28h] [rbp-79h]
  unsigned int v36; // [rsp+28h] [rbp-79h]
  char v37; // [rsp+30h] [rbp-71h]
  char v38; // [rsp+30h] [rbp-71h]
  char v39; // [rsp+38h] [rbp-69h]
  char v40; // [rsp+38h] [rbp-69h]
  char v41; // [rsp+40h] [rbp-61h]
  char v42; // [rsp+40h] [rbp-61h]
  int v43; // [rsp+48h] [rbp-59h]
  CHwndRenderTarget *v44; // [rsp+50h] [rbp-51h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-49h]
  __int128 v46; // [rsp+60h] [rbp-41h] BYREF
  __int64 v47; // [rsp+70h] [rbp-31h]
  unsigned int v48; // [rsp+78h] [rbp-29h]
  _QWORD v49[2]; // [rsp+80h] [rbp-21h] BYREF
  int v50; // [rsp+90h] [rbp-11h]
  __int64 v51; // [rsp+94h] [rbp-Dh]
  _BYTE v52[16]; // [rsp+A0h] [rbp-1h] BYREF
  struct CDisplay *v53; // [rsp+B0h] [rbp+Fh] BYREF
  __int128 v54; // [rsp+B8h] [rbp+17h] BYREF

  v1 = 0;
  v49[0] = v52;
  v53 = 0LL;
  v49[1] = v52;
  v3 = 0;
  v44 = 0LL;
  v50 = 2;
  v4 = 0;
  v51 = 2LL;
  v5 = 0;
  v6 = *((_QWORD *)this + 55);
  v7 = 0;
  v43 = 0;
  if ( !v6 || !*(_DWORD *)(v6 + 112) )
    goto LABEL_59;
  v8 = 0;
  v45 = 0;
  do
  {
    v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 55) + 120LL) + 8LL * v8);
    if ( (int)CDisplaySet::GetDisplayByHMonitorNoRefNoConst(*((CDisplaySet **)this + 45), *(HMONITOR *)(v9 + 120), &v53) < 0 )
      goto LABEL_52;
    v10 = *(_QWORD *)(v9 + 112);
    v47 = 0LL;
    v48 = 0;
    v11 = v53;
    v46 = 0LL;
    if ( *(_BYTE *)(v10 + 762) )
    {
      v12 = *(_OWORD *)((char *)v53 + 104);
      *((_DWORD *)v53 + 28) -= *((_DWORD *)v53 + 26);
      *((_DWORD *)v11 + 29) -= *((_DWORD *)v11 + 27);
      *(_OWORD *)((char *)v11 + 120) = v12;
      *((_BYTE *)v11 + 302) = 1;
      *((_QWORD *)v11 + 13) = 0LL;
    }
    v13 = *(CHwndRenderTarget **)(v9 + 112);
    v41 = *((_BYTE *)this + 426);
    v39 = *((_BYTE *)this + 412);
    v37 = *((_BYTE *)this + 424);
    v34 = *((_DWORD *)this + 98);
    v54 = *(_OWORD *)((char *)this + 396);
    inited = CHwndRenderTarget::InitFullScreen(
               v13,
               (__int64)this,
               (void (__fastcall ***)(_QWORD))v11,
               &v54,
               v34,
               v37,
               v39,
               v41);
    v3 = inited;
    if ( inited < 0 )
    {
      v36 = 597;
LABEL_67:
      v33 = inited;
LABEL_68:
      MilInstrumentationCheckHR(0x14u, &dword_1801C7290, 2u, v33, v36);
      DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v46);
      goto LABEL_57;
    }
    *(_QWORD *)&v54 = *(_QWORD *)(v9 + 112);
    v15 = HIDWORD(v51) + 1;
    if ( (unsigned int)(HIDWORD(v51) + 1) < HIDWORD(v51) )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      goto LABEL_14;
    }
    if ( v15 > (unsigned int)v51 )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v49, 8u, 1, &v54);
      v3 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
LABEL_14:
      if ( v3 < 0 )
      {
        v36 = 599;
LABEL_65:
        v33 = v3;
        goto LABEL_68;
      }
      goto LABEL_15;
    }
    *(_QWORD *)(v49[0] + 8LL * HIDWORD(v51)) = v54;
    HIDWORD(v51) = v15;
LABEL_15:
    v17 = v43;
    v18 = v5 <= v43 || v4 <= v7;
    v19 = *((_DWORD *)v11 + 26);
    v20 = v18;
    v21 = *((_DWORD *)v11 + 28) <= v19 || *((_DWORD *)v11 + 29) <= *((_DWORD *)v11 + 27);
    if ( v20 )
    {
      if ( v21 )
      {
        v4 = 0;
        v5 = 0;
        v7 = 0;
        v43 = 0;
      }
      else
      {
        v54 = *(_OWORD *)((char *)v11 + 104);
        v4 = HIDWORD(v54);
        v5 = DWORD2(v54);
        v7 = DWORD1(v54);
        v43 = v54;
      }
    }
    else if ( !v21 )
    {
      if ( v19 < v43 )
        v17 = *((_DWORD *)v11 + 26);
      v43 = v17;
      if ( *((_DWORD *)v11 + 27) < v7 )
        v7 = *((_DWORD *)v11 + 27);
      if ( *((_DWORD *)v11 + 28) > v5 )
        v5 = *((_DWORD *)v11 + 28);
      if ( *((_DWORD *)v11 + 29) > v4 )
        v4 = *((_DWORD *)v11 + 29);
    }
    inited = CDisplaySet::GetSecondaryCloneDisplaysNoRef(*((_QWORD *)this + 45), v11, &v46);
    v3 = inited;
    if ( inited < 0 )
    {
      v36 = 605;
      goto LABEL_67;
    }
    v22 = v48;
    for ( i = 0LL; (unsigned int)i < v22; i = (unsigned int)(i + 1) )
    {
      v24 = *(void (__fastcall ****)(_QWORD))(v46 + 8 * i);
      v25 = (CHwndRenderTarget *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                            + 16LL))(
                                   WPF::g_pProcessHeap,
                                   784LL);
      if ( v25 )
      {
        v26 = CHwndRenderTarget::CHwndRenderTarget(v25, *((struct CComposition **)this + 2));
        v44 = v26;
      }
      else
      {
        v26 = 0LL;
        v44 = 0LL;
      }
      if ( !v26 )
      {
        v3 = -2147024882;
        v36 = 613;
        goto LABEL_65;
      }
      v42 = *((_BYTE *)this + 426);
      v40 = *((_BYTE *)this + 412);
      v38 = *((_BYTE *)this + 424);
      v35 = *((_DWORD *)this + 98);
      v54 = *(_OWORD *)((char *)this + 396);
      inited = CHwndRenderTarget::InitFullScreen(v26, (__int64)this, v24, &v54, v35, v38, v40, v42);
      v3 = inited;
      if ( inited < 0 )
      {
        v36 = 623;
        goto LABEL_67;
      }
      v27 = HIDWORD(v51) + 1;
      if ( (unsigned int)(HIDWORD(v51) + 1) >= HIDWORD(v51) )
      {
        v3 = 0;
        if ( v27 <= (unsigned int)v51 )
        {
          *(_QWORD *)(v49[0] + 8LL * HIDWORD(v51)) = v44;
          HIDWORD(v51) = v27;
          goto LABEL_50;
        }
        v28 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v49, 8u, 1, &v44);
        v3 = v28;
        if ( v28 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0xC0u);
      }
      else
      {
        v3 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      }
      if ( v3 < 0 )
      {
        v36 = 625;
        goto LABEL_65;
      }
LABEL_50:
      v44 = 0LL;
    }
    DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&v46);
    v1 = 0;
LABEL_52:
    v29 = *((_QWORD *)this + 55);
    v8 = v45 + 1;
    v45 = v8;
  }
  while ( v8 < *(_DWORD *)(v29 + 112) );
  CDesktopRenderTarget::ReleaseRenderTargets(this);
  if ( HIDWORD(v51) )
  {
    while ( 1 )
    {
      v30 = CDesktopRenderTarget::AddRenderTarget(this, *(CDisplay ***)(v49[0] + 8LL * v1));
      v3 = v30;
      if ( v30 < 0 )
        break;
      if ( ++v1 >= HIDWORD(v51) )
        goto LABEL_56;
    }
    MilInstrumentationCheckHR(0x14u, &dword_1801C7290, 2u, v30, 0x283u);
  }
  else
  {
LABEL_56:
    v31 = (CComposition *)*((_QWORD *)this + 2);
    *((float *)this + 92) = (float)v43;
    *((float *)this + 93) = (float)v7;
    *((float *)this + 94) = (float)v5;
    *((float *)this + 95) = (float)v4;
    CComposition::ResetScheduler(v31);
  }
LABEL_57:
  if ( v44 )
  {
    (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v44 + 16LL))(v44);
    v44 = 0LL;
  }
LABEL_59:
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)v49);
  return (unsigned int)v3;
}
