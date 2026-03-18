/*
 * XREFs of ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x18003C450 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?RenderingStatusFromHr@CComposition@@QEAA?AW4RENDERING_STATUS@1@J@Z @ 0x18003C36C (-RenderingStatusFromHr@CComposition@@QEAA-AW4RENDERING_STATUS@1@J@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180073B70 (-IsOfType@CHwndRenderTarget@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800788D8 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x180078BD8 (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180078F88 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z @ 0x18009A5B0 (-AddMultipleAndSet@-$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18009A710 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1800B5068 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800B7F34 (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800BA398 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x180110CB4 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x1801275E4 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180129428 (-IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     ?MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z @ 0x18016186C (-MilUnexpectedErrorWithAsimovEvent@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CRenderTargetManager::Render(CRenderTargetManager *this, bool *a2, __int64 a3)
{
  unsigned int v3; // edi
  int v4; // r13d
  __int64 v6; // rax
  bool v8; // cc
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // rsi
  __int64 v12; // rsi
  _QWORD *v13; // rbx
  __int64 (__fastcall *v14)(_QWORD *, __int64); // rax
  int v16; // eax
  int v17; // edi
  __int64 *v18; // r12
  __int64 v19; // rcx
  void *v20; // rbx
  int v21; // eax
  int v22; // edx
  unsigned int v23; // edx
  __int64 v24; // rdi
  char v25; // r14
  __int64 v26; // rbx
  _BYTE *v27; // rcx
  char v28; // dl
  __int64 *v29; // rbx
  __int64 v30; // r14
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // rax
  void (__fastcall *v34)(WPF::ProcessHeapImpl *, void *); // rax
  int v35; // ebx
  char *v36; // r14
  __int64 v37; // rsi
  bool *v38; // r12
  __int64 v39; // rdx
  CHwndRenderTarget *v40; // rcx
  __int64 (__fastcall *v41)(CHwndRenderTarget *__hidden, bool, bool *); // rax
  int v42; // eax
  __int64 v43; // rcx
  int v44; // edi
  int v45; // eax
  unsigned int v47; // r14d
  int v48; // eax
  __int64 v49; // rdx
  char v50; // bl
  __int64 v51; // r8
  __int64 v52; // rbx
  int v53; // eax
  unsigned int v54; // esi
  unsigned int v55; // edx
  __int64 *v56; // r9
  __int64 v57; // xmm0_8
  __int64 v58; // rcx
  unsigned int i; // esi
  __int64 v60; // rbx
  __int64 v61; // r8
  unsigned int v62; // edx
  __int64 *v63; // r9
  int v64; // eax
  __int64 v65; // xmm0_8
  __int64 v66; // rcx
  int v67; // eax
  int v68; // eax
  __int64 v69; // rdx
  COverlayContext **v70; // rbx
  int v71; // eax
  __int64 v72; // r8
  const struct _TlgProvider_t *v73; // rcx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  int v75; // eax
  __int64 v76; // r8
  const struct _TlgProvider_t *v77; // rcx
  DwmCoreAsimov::CDwmEventManager *v78; // rax
  unsigned int v79; // [rsp+28h] [rbp-E0h]
  __int128 v80; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v81; // [rsp+48h] [rbp-C0h]
  __int64 v82; // [rsp+50h] [rbp-B8h]
  _BYTE *v83; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE *v84; // [rsp+60h] [rbp-A8h]
  int v85; // [rsp+68h] [rbp-A0h]
  __int64 v86; // [rsp+6Ch] [rbp-9Ch]
  _BYTE v87[32]; // [rsp+78h] [rbp-90h] BYREF
  char *v88; // [rsp+98h] [rbp-70h]
  _BYTE *v89; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE *v90; // [rsp+B0h] [rbp-58h]
  int v91; // [rsp+B8h] [rbp-50h]
  __int64 v92; // [rsp+BCh] [rbp-4Ch]
  _BYTE v93[32]; // [rsp+C8h] [rbp-40h] BYREF
  void *v94[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v95; // [rsp+F8h] [rbp-10h]
  unsigned int v96; // [rsp+100h] [rbp-8h]
  __int64 v97; // [rsp+108h] [rbp+0h] BYREF
  _QWORD v98[2]; // [rsp+118h] [rbp+10h] BYREF
  int v99; // [rsp+128h] [rbp+20h]
  __int64 v100; // [rsp+12Ch] [rbp+24h]
  _BYTE v101[32]; // [rsp+138h] [rbp+30h] BYREF
  void *Src; // [rsp+1A8h] [rbp+A0h] BYREF
  bool *v103; // [rsp+1B0h] [rbp+A8h]
  char v104; // [rsp+1B8h] [rbp+B0h] BYREF
  int v105; // [rsp+1C0h] [rbp+B8h]

  v103 = a2;
  v3 = 0;
  v4 = 0;
  v6 = *((_QWORD *)this + 2);
  v105 = 0;
  v80 = 0LL;
  v81 = 0LL;
  v8 = *(_DWORD *)(v6 + 1104) <= 2;
  LODWORD(v82) = 0;
  if ( v8 || *((_BYTE *)this + 109) )
  {
    v88 = (char *)this + 24;
  }
  else
  {
    v54 = 0;
    if ( *((_DWORD *)this + 24) )
    {
      while ( 1 )
      {
        v55 = v3 + 1;
        v56 = (__int64 *)(*((_QWORD *)this + 9) + 8LL * v54);
        if ( v3 + 1 < v3 )
          break;
        if ( v55 > HIDWORD(v81) )
        {
          v64 = DynArrayImpl<1>::AddMultipleAndSet(&v80, 8LL, a3, v56);
          v35 = v64;
          if ( v64 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0xC0u);
          v3 = v82;
LABEL_96:
          if ( v35 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v35, 0xBDu);
            goto LABEL_63;
          }
          goto LABEL_88;
        }
        v57 = *v56;
        v58 = v3++;
        LODWORD(v82) = v55;
        *(_QWORD *)(v80 + 8 * v58) = v57;
LABEL_88:
        if ( ++v54 >= *((_DWORD *)this + 24) )
          goto LABEL_89;
      }
      v35 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      goto LABEL_96;
    }
LABEL_89:
    for ( i = 0; i < *((_DWORD *)this + 12); ++i )
    {
      v60 = 8LL * i;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v60 + *((_QWORD *)this + 3)) + 144LL))(*(_QWORD *)(v60 + *((_QWORD *)this + 3))) )
      {
        v62 = v3 + 1;
        v63 = (__int64 *)(v60 + *((_QWORD *)this + 3));
        if ( v3 + 1 >= v3 )
        {
          if ( v62 <= HIDWORD(v81) )
          {
            v65 = *v63;
            v66 = v3++;
            LODWORD(v82) = v62;
            *(_QWORD *)(v80 + 8 * v66) = v65;
            continue;
          }
          v67 = DynArrayImpl<1>::AddMultipleAndSet(&v80, 8LL, v61, v63);
          v35 = v67;
          if ( v67 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v67, 0xC0u);
          v3 = v82;
        }
        else
        {
          v35 = -2147024362;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
        }
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v35, 0xC4u);
          goto LABEL_63;
        }
      }
    }
    v88 = (char *)&v80;
    *a2 = *((_BYTE *)this + 108);
    *((_BYTE *)this + 108) = 0;
  }
  v9 = *((_DWORD *)this + 12);
  v10 = 0;
  v11 = 0LL;
  v95 = 0LL;
  v96 = 0;
  *(_OWORD *)v94 = 0LL;
  if ( v9 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = *(_QWORD **)(v12 + *((_QWORD *)this + 3));
      v14 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*v13 + 48LL);
      if ( (char *)v14 == (char *)CHwndRenderTarget::IsOfType
         ? CHwndRenderTarget::IsOfType(v13, 38LL)
         : (unsigned __int8)v14(v13, 38LL) )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v13 + 144LL))(v13) )
        {
          v97 = v13[92];
          if ( v97 )
          {
            v16 = DynArray<COverlayContext *,0>::AddMultipleAndSet(v94, &v97);
            v17 = v16;
            if ( v16 < 0 )
              break;
          }
        }
      }
      ++v10;
      v12 += 8LL;
      if ( v10 >= v9 )
      {
        v11 = v96;
        goto LABEL_13;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x133u);
    v18 = (__int64 *)v94[0];
  }
  else
  {
LABEL_13:
    v18 = (__int64 *)v94[0];
    v83 = v87;
    v85 = 4;
    v84 = v87;
    v86 = 4LL;
    v89 = v93;
    v91 = 4;
    v90 = v93;
    v92 = 4LL;
    Src = v94[0];
    v17 = DynArrayImpl<0>::Grow((unsigned int)&v83, 8, v11, 0, (__int64)&Src);
    if ( v17 < 0 )
    {
      v79 = 204;
LABEL_130:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, v79);
    }
    else
    {
      memcpy_0(&v83[8 * HIDWORD(v86)], Src, (unsigned int)(8 * v11));
      HIDWORD(v86) += v11;
      if ( HIDWORD(v86) )
      {
        while ( 1 )
        {
          v20 = *(void **)(*(_QWORD *)v83 + 64LL);
          Src = v20;
          v21 = DynArray<COverlayContext *,0>::AddMultipleAndSet(&v89, v83);
          v17 = v21;
          if ( v21 < 0 )
            break;
          v22 = HIDWORD(v86);
          if ( HIDWORD(v86) )
          {
            if ( HIDWORD(v86) != 1 )
            {
              *(_QWORD *)v83 = *(_QWORD *)&v83[8 * (HIDWORD(v86) - 1)];
              v22 = HIDWORD(v86);
            }
            v23 = v22 - 1;
            HIDWORD(v86) = v23;
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x217u);
            v23 = HIDWORD(v86);
          }
          v24 = 0LL;
          while ( (unsigned int)v24 < v23 )
          {
            if ( *(_QWORD *)(*(_QWORD *)&v83[8 * v24] + 64LL) == __PAIR64__(HIDWORD(Src), (unsigned int)v20) )
            {
              DynArray<COverlayContext *,0>::AddMultipleAndSet(&v89, &v83[8 * v24]);
              DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved(&v83, (unsigned int)v24);
              v23 = HIDWORD(v86);
            }
            else
            {
              v24 = (unsigned int)(v24 + 1);
            }
          }
          v17 = 0;
          v25 = 0;
          v26 = 0LL;
          LOBYTE(Src) = 0;
          if ( HIDWORD(v92) )
          {
            v27 = v89;
            do
            {
              if ( COverlayContext::HaveOverlayCandidatesChanged(*(COverlayContext **)&v27[8 * v26]) )
              {
                v28 = 1;
                LOBYTE(Src) = 1;
              }
              else
              {
                v28 = (char)Src;
              }
              v27 = v89;
              if ( *(_DWORD *)(*(_QWORD *)&v89[8 * v26] + 732LL) )
                v25 = 1;
              v26 = (unsigned int)(v26 + 1);
            }
            while ( (unsigned int)v26 < HIDWORD(v92) );
            v18 = (__int64 *)v94[0];
            if ( v28 )
            {
              if ( v25 )
              {
                v99 = 4;
                v98[0] = v101;
                v47 = 0;
                v100 = 4LL;
                v98[1] = v101;
                LOBYTE(Src) = 0;
                v104 = 0;
                do
                {
                  v48 = COverlayContext::DeriveCheckCandidatesList(&v89, v98, &v104);
                  v17 = v48;
                  if ( v48 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x711u);
                    goto LABEL_80;
                  }
                  v50 = v104;
                  if ( v104 )
                  {
                    v68 = COverlayContext::CheckMultiPlaneOverlaySupport(&v89, v98, &Src);
                    v17 = v68;
                    if ( v68 < 0 )
                    {
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v68, 0x717u);
                      goto LABEL_80;
                    }
                  }
                  v51 = (unsigned __int8)Src;
                  ++v47;
                }
                while ( v50 && !(_BYTE)Src && v47 <= 8 );
                v52 = 0LL;
                if ( HIDWORD(v92) )
                {
                  while ( 1 )
                  {
                    v53 = COverlayContext::PushCandidates(*(COverlayContext **)&v89[8 * v52]);
                    v17 = v53;
                    if ( v53 < 0 )
                      break;
                    v52 = (unsigned int)(v52 + 1);
                    if ( (unsigned int)v52 >= HIDWORD(v92) )
                      goto LABEL_80;
                  }
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x725u);
                }
LABEL_80:
                DynArrayImpl<1>::~DynArrayImpl<1>(v98, v49, v51);
              }
            }
          }
          if ( v17 < 0 )
          {
            v79 = 247;
            goto LABEL_130;
          }
          HIDWORD(v92) = 0;
          DynArrayImpl<0>::ShrinkToSize(&v89, 8LL);
          if ( !HIDWORD(v86) )
            goto LABEL_31;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xDAu);
      }
      else
      {
LABEL_31:
        if ( (_DWORD)v11 )
        {
          v29 = v18;
          v30 = (unsigned int)v11;
          v31 = *(_QWORD *)(*v18 + 1104);
          do
          {
            v32 = *v29;
            v33 = 0LL;
            LODWORD(Src) = 0;
            if ( *(_DWORD *)(v32 + 264) )
            {
              while ( !COverlayContext::IsRevokable(
                         (COverlayContext *)v32,
                         (struct COverlayContext::OverlayPlaneInfo *)(*(_QWORD *)(v32 + 240) + 232 * v33)) )
              {
                v33 = (unsigned int)((_DWORD)Src + 1);
                LODWORD(Src) = v33;
                if ( (unsigned int)v33 >= *(_DWORD *)(v32 + 264) )
                  goto LABEL_34;
              }
              v69 = *(_QWORD *)(v31 + 512);
              v19 = *(unsigned int *)(v69 + 25580);
              if ( !(_DWORD)v19 || CCommonRegistryData::m_dwOverlayDisqualifyInterval < (unsigned int)v19 )
                *(_DWORD *)(v69 + 25580) = CCommonRegistryData::m_dwOverlayDisqualifyInterval;
            }
LABEL_34:
            ++v29;
            --v30;
          }
          while ( v30 );
          v18 = (__int64 *)v94[0];
        }
      }
    }
    if ( v17 < 0 && (_DWORD)v11 )
    {
      v70 = (COverlayContext **)v18;
      do
      {
        COverlayContext::Reset(*v70++);
        --v11;
      }
      while ( v11 );
    }
    if ( v89 != v90 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      v89 = 0LL;
    }
    if ( v83 != v84 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      v83 = 0LL;
    }
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x138u);
    v4 = v105;
  }
  if ( v18 != v94[1] )
  {
    v34 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v34 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v18);
    else
      v34(WPF::g_pProcessHeap, v18);
  }
  if ( v17 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v17, 0xCDu);
  v35 = v17;
  if ( v17 < 0 )
  {
    v71 = CComposition::RenderingStatusFromHr(v19, v17);
    CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v71, v72);
    if ( v17 == -2147024882 || IsOOM(v17) )
    {
      Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v73);
      DwmCoreAsimov::CDwmEventManager::ReportCompositionError(
        Manager,
        L"RenderTarget",
        L"Render: Encountered low memory condition",
        v17);
    }
    else if ( v17 == -2003304442 || v17 == -2003304307 )
    {
      v35 = 0;
      v4 = v17;
    }
    else
    {
      MilUnexpectedErrorWithAsimovEvent((int)v73, L"intermediate rendering error");
    }
  }
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v35, 0xDBu);
  }
  else
  {
    v36 = v88;
    v37 = 0LL;
    if ( *((_DWORD *)v88 + 6) )
    {
      v38 = v103;
      do
      {
        v39 = *((unsigned __int8 *)this + 110);
        v40 = (CHwndRenderTarget *)(*(_QWORD *)(*(_QWORD *)v36 + 8 * v37) + 112LL);
        LOBYTE(Src) = 0;
        v41 = *(__int64 (__fastcall **)(CHwndRenderTarget *__hidden, bool, bool *))(*(_QWORD *)v40 + 56LL);
        if ( v41 == CHwndRenderTarget::Render )
          v42 = CHwndRenderTarget::Render(v40, v39, (bool *)&Src);
        else
          v42 = ((__int64 (__fastcall *)(CHwndRenderTarget *, __int64, void **, __int64 (__fastcall *)(CHwndRenderTarget *__hidden, bool, bool *)))v41)(
                  v40,
                  v39,
                  &Src,
                  CHwndRenderTarget::Render);
        v44 = v42;
        if ( v42 < 0 )
          MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v42, 0xE2u);
        v35 = v44;
        if ( v44 < 0 )
        {
          v75 = CComposition::RenderingStatusFromHr(v43, v44);
          CComposition::ProcessRenderingStatus(*((_QWORD *)this + 2), v75, v76);
          if ( v44 == -2147024882 || IsOOM(v44) )
          {
            v78 = DwmCoreAsimov::CDwmEventManager::GetManager(v77);
            DwmCoreAsimov::CDwmEventManager::ReportCompositionError(
              v78,
              L"RenderTarget",
              L"Render: Encountered low memory condition",
              v44);
          }
          else if ( v44 == -2003304442 || v44 == -2003304307 )
          {
            v35 = 0;
            v4 = v44;
          }
          else
          {
            MilUnexpectedErrorWithAsimovEvent((int)v77, L"intermediate rendering error");
          }
        }
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, &dword_1801AD850, 2u, v35, 0xF1u);
          goto LABEL_63;
        }
        *v38 |= (unsigned __int8)Src;
        v37 = (unsigned int)(v37 + 1);
      }
      while ( (unsigned int)v37 < *((_DWORD *)v36 + 6) );
      if ( v4 < 0 )
      {
        *((_DWORD *)this + 26) += 2;
        if ( *((_DWORD *)this + 26) > 0xAu )
          RaiseFailFastException(0LL, 0LL, 0);
      }
      else
      {
        v45 = *((_DWORD *)this + 26);
        if ( v45 )
          *((_DWORD *)this + 26) = v45 - 1;
      }
    }
  }
LABEL_63:
  if ( !*((_DWORD *)this + 14) )
    *((_WORD *)this + 55) = 0;
  if ( (_QWORD)v80 != *((_QWORD *)&v80 + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  return (unsigned int)v35;
}
