/*
 * XREFs of ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180025DA0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180022070 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetReverseAlignment@CText@@QEAAX_N@Z @ 0x1800187D8 (-SetReverseAlignment@CText@@QEAAX_N@Z.c)
 *     ?SetRTLReading@CText@@QEAAX_N@Z @ 0x1800187F8 (-SetRTLReading@CText@@QEAAX_N@Z.c)
 *     ?SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z @ 0x1800188A4 (-SetFont@CText@@QEAAXAEBUtagLOGFONTW@@@Z.c)
 *     ?SetScalingFactor@CText@@QEAAXN@Z @ 0x180018950 (-SetScalingFactor@CText@@QEAAXN@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetRTLMirror@CVisual@@QEAAX_N@Z @ 0x180020C78 (-SetRTLMirror@CVisual@@QEAAX_N@Z.c)
 *     ?GetWindowColorizationColor@CTopLevelWindow@@QEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180023750 (-GetWindowColorizationColor@CTopLevelWindow@@QEBAKU-$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags.c)
 *     ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x1800237D0 (-GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA-AU-$TMILFlagsEnum@W4FlagsEnum@Coloriza.c)
 *     ?IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ @ 0x18002381C (-IsSheetOfGlass@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x1800259A8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x1800267F0 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ @ 0x180027560 (-TreatAsActiveWindow@CTopLevelWindow@@AEAA_NXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002AE80 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z @ 0x18002B678 (-SetDirtyFlags@CAtlasedImage@@IEAAXKK@Z.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x18002B710 (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18002BC00 (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 *     ?Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180039884 (-Create@CImage@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003DBC0 (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     ?BlendColors@@YAKKKM@Z @ 0x180040EB8 (-BlendColors@@YAKKKM@Z.c)
 *     ?Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041500 (-Create@CText@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     IsOpenThemeDataPresent @ 0x18004F7C0 (IsOpenThemeDataPresent.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x180077650 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateWindowVisuals(CTopLevelWindow *this)
{
  unsigned int v2; // edi
  struct CTopLevelWindow::WindowFrame *v3; // rax
  int v4; // ebx
  struct CTopLevelWindow::WindowFrame *v5; // r14
  __int64 v6; // r8
  bool v7; // r12
  _BYTE *v8; // rcx
  char v9; // dl
  _BYTE *v10; // rcx
  char v11; // dl
  __int64 v12; // r15
  void *(*v13)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdx
  unsigned int v14; // r13d
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  void (__fastcall *v22)(CVisual *, int); // rax
  int v23; // eax
  __int64 v24; // rbx
  int v25; // ecx
  int v26; // ebp
  bool IsSheetOfGlass; // al
  CAtlasedImage *v28; // rcx
  CAtlasedImage *v29; // rcx
  CAtlasedImage *v30; // rcx
  CAtlasedImage *v31; // rcx
  CAtlasedImage *v32; // rcx
  CAtlasedImage *v33; // rcx
  CAtlasedImage *v34; // rcx
  CAtlasedImage *v35; // rcx
  CAtlasedImage *v36; // rcx
  CAtlasedImage *v37; // rcx
  CAtlasedImage *v38; // rcx
  CAtlasedImage *v39; // rcx
  CAtlasedImage *v40; // rcx
  CAtlasedImage *v41; // rcx
  CAtlasedImage *v42; // rcx
  CAtlasedImage *v43; // rcx
  int updated; // eax
  char v45; // r12
  struct CVisual **v46; // rbx
  _DWORD *CurrentDefaultColorizationFlags; // rax
  unsigned int WindowColorizationColor; // eax
  struct CVisual *v49; // rcx
  unsigned int v50; // edi
  int v51; // eax
  unsigned int v52; // edx
  struct CVisual *v53; // rcx
  int v54; // edx
  __int64 v55; // rax
  void (__fastcall *v56)(CVisual *, int); // rax
  CAtlasedImage *v58; // rcx
  __int64 v59; // rcx
  void (__fastcall *v60)(CVisual *, int); // rax
  int v61; // eax
  __int64 v62; // rdi
  int v63; // ecx
  void (__fastcall *v64)(CVisual *); // rax
  __int64 v65; // rbx
  void *(*v66)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rax
  _DWORD *v67; // rax
  __int64 v68; // rbx
  _DWORD *v69; // r12
  unsigned int v70; // edx
  unsigned int v71; // ecx
  _QWORD *j; // rax
  int v73; // eax
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 *v76; // rdx
  __int64 *v77; // r8
  void (__fastcall *v78)(CVisual *, int); // rax
  int v79; // ebx
  __int64 v80; // r9
  CVisual *v81; // rbx
  unsigned int v82; // edx
  __int64 v83; // rcx
  __int64 i; // r8
  void (__fastcall *v85)(CVisual *, int); // rax
  volatile signed __int32 *v86; // rcx
  void *(__fastcall *v87)(CAtlasedImage *__hidden, unsigned int); // rax
  void (__fastcall *v88)(CVisual *); // rax
  __int64 v89; // r8
  struct CVisual *v90; // rdx
  struct CVisual *v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rdx
  void (__fastcall *v94)(CVisual *, int); // rax
  CBaseObject *v95; // rcx
  __int64 v96; // rcx
  CBaseObject *v97; // rcx
  __int64 v98; // rcx
  CBaseObject *v99; // rcx
  unsigned int v100; // [rsp+20h] [rbp-68h]
  int v101; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v102; // [rsp+38h] [rbp-50h] BYREF
  __int64 v103; // [rsp+40h] [rbp-48h] BYREF
  struct CTopLevelWindow::WindowFrame *v104; // [rsp+48h] [rbp-40h]
  unsigned __int8 v105; // [rsp+98h] [rbp+10h]
  char v106; // [rsp+A0h] [rbp+18h]

  v2 = 0;
  if ( !(unsigned __int8)IsOpenThemeDataPresent() )
    return v2;
  v3 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 152),
         0,
         (*(_BYTE *)(*((_QWORD *)this + 93) + 579LL) & 0x20) != 0);
  v4 = *((_DWORD *)this + 152);
  v5 = v3;
  v104 = v3;
  LOBYTE(v6) = (unsigned __int8)IsOpenThemeDataPresent() && (v4 & 6) != 0;
  v105 = v6;
  v7 = (*((_DWORD *)this + 152) & 0x20000) != 0;
  v8 = (_BYTE *)*((_QWORD *)this + 35);
  v106 = v7;
  v9 = v8[84];
  if ( v7 != (v9 & 1) )
  {
    v8[84] = v9 ^ (v7 ^ v9) & 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v8 + 24LL))(v8, 16LL);
    v6 = v105;
  }
  v10 = (_BYTE *)*((_QWORD *)this + 70);
  v11 = v10[84];
  if ( v7 != (v11 & 1) )
  {
    v10[84] = v11 ^ (v7 ^ v11) & 1;
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 16LL);
    v6 = v105;
  }
  v12 = 0LL;
  v13 = WPF::ProcessHeapImpl::AllocClear;
  v14 = 0;
  v15 = 0LL;
  do
  {
    if ( (_BYTE)v6 )
    {
      if ( *((_QWORD *)this + v15 + 40) )
      {
LABEL_12:
        if ( v5 )
        {
          v16 = *((_QWORD *)v5 + 2 * v15 + 187);
          if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) && *((_QWORD *)v5 + 2 * v15 + 188) )
            v16 = *((_QWORD *)v5 + 2 * v15 + 188);
        }
        else
        {
          v16 = 0LL;
        }
        v17 = *((_QWORD *)this + v15 + 40);
        v18 = *(_QWORD *)(v17 + 72);
        if ( v18 != v16 )
        {
          if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 8), 0xFFFFFFFF) == 1 )
            (**(void (__fastcall ***)(__int64, __int64, __int64, void (__fastcall *)(CVisual *)))v18)(
              v18,
              1LL,
              v6,
              CVisual::SetDirtyChildren);
          *(_QWORD *)(v17 + 72) = v16;
          if ( v16 )
            _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
          *(_DWORD *)(v17 + 96) |= 1u;
          v59 = *(_QWORD *)(v17 + 80);
          if ( v59 )
          {
            v60 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v59 + 24LL);
            if ( v60 == CVisual::SetDirtyFlags )
            {
              v61 = *(_DWORD *)(v59 + 80);
              if ( (v61 & 0x2000) == 0 )
              {
                v62 = *(_QWORD *)(v59 + 24);
                for ( *(_DWORD *)(v59 + 80) = v61 | 0x2000; v62; v62 = *(_QWORD *)(v62 + 24) )
                {
                  v63 = *(_DWORD *)(v62 + 80);
                  if ( (v63 & 1) != 0 )
                    break;
                  v64 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v62 + 32LL);
                  if ( v64 == CVisual::SetDirtyChildren )
                    *(_DWORD *)(v62 + 80) = v63 | 1;
                  else
                    ((void (__fastcall *)(__int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64), __int64, void (__fastcall *)(CVisual *)))v64)(
                      v62,
                      v13,
                      v6,
                      CVisual::SetDirtyChildren);
                }
              }
            }
            else
            {
              ((void (__fastcall *)(__int64, __int64, __int64, void (__fastcall *)(CVisual *)))v60)(
                v59,
                0x2000LL,
                v6,
                CVisual::SetDirtyChildren);
            }
          }
        }
        if ( (v14 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16)) && v16 )
        {
          v19 = *((_QWORD *)this + v15 + 40);
          if ( *(_DWORD *)(v19 + 24) != *(_DWORD *)(v16 + 24) || *(_DWORD *)(v19 + 28) != *(_DWORD *)(v16 + 28) )
          {
            v20 = *(_QWORD *)(v16 + 24);
            *(_DWORD *)(v19 + 96) |= 1u;
            *(_QWORD *)(v19 + 24) = v20;
            v21 = *(_QWORD *)(v19 + 80);
            if ( v21 )
            {
              v22 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v21 + 24LL);
              if ( v22 == CVisual::SetDirtyFlags )
              {
                v23 = *(_DWORD *)(v21 + 80);
                if ( (v23 & 0x2000) == 0 )
                {
                  v24 = *(_QWORD *)(v21 + 24);
                  for ( *(_DWORD *)(v21 + 80) = v23 | 0x2000; v24; v24 = *(_QWORD *)(v24 + 24) )
                  {
                    v25 = *(_DWORD *)(v24 + 80);
                    if ( (v25 & 1) != 0 )
                      break;
                    v88 = *(void (__fastcall **)(CVisual *))(*(_QWORD *)v24 + 32LL);
                    if ( v88 == CVisual::SetDirtyChildren )
                      *(_DWORD *)(v24 + 80) = v25 | 1;
                    else
                      ((void (__fastcall *)(__int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64), __int64, void (__fastcall *)(CVisual *)))v88)(
                        v24,
                        v13,
                        v6,
                        CVisual::SetDirtyChildren);
                  }
                }
              }
              else
              {
                ((void (__fastcall *)(__int64, __int64, __int64, void (__fastcall *)(CVisual *)))v22)(
                  v21,
                  0x2000LL,
                  v6,
                  CVisual::SetDirtyChildren);
              }
            }
          }
          v12 = *((_QWORD *)this + v15 + 40);
        }
        else
        {
          v80 = *((_QWORD *)this + v15 + 40);
          v81 = *(CVisual **)(v80 + 80);
          if ( v81 )
          {
            v82 = *((_DWORD *)v81 + 72);
            v83 = 0LL;
            for ( i = *((_QWORD *)v81 + 33); (unsigned int)v83 < v82; v83 = (unsigned int)(v83 + 1) )
            {
              if ( v80 == *(_QWORD *)(i + 8 * v83) )
                break;
            }
            if ( (unsigned int)v83 < v82 )
            {
              if ( (unsigned int)v83 < v82 - 1 )
              {
                do
                {
                  v92 = (unsigned int)(v83 + 1);
                  *(_QWORD *)(i + 8 * v83) = *(_QWORD *)(i + 8 * v92);
                  v83 = v92;
                }
                while ( (unsigned int)v92 < *((_DWORD *)v81 + 72) - 1 );
              }
              --*((_DWORD *)v81 + 72);
            }
            *(_QWORD *)(v80 + 80) = 0LL;
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v80 + 8), 0xFFFFFFFF) == 1 )
              (**(void (__fastcall ***)(__int64, __int64, __int64))v80)(v80, 1LL, i);
            v85 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v81 + 24LL);
            if ( v85 == CVisual::SetDirtyFlags )
              CVisual::SetDirtyFlags(v81, 0x2000);
            else
              ((void (__fastcall *)(CVisual *, __int64, __int64))v85)(v81, 0x2000LL, i);
          }
          v86 = (volatile signed __int32 *)*((_QWORD *)this + v15 + 40);
          if ( v86 )
          {
            if ( _InterlockedExchangeAdd(v86 + 2, 0xFFFFFFFF) == 1 )
            {
              v87 = **(void *(__fastcall ***)(CAtlasedImage *__hidden, unsigned int))v86;
              if ( v87 == CAtlasedImage::`vector deleting destructor' )
                CAtlasedImage::`vector deleting destructor'((CAtlasedImage *)v86, 1u);
              else
                v87((CAtlasedImage *)v86, 1u);
            }
            *((_QWORD *)this + v15 + 40) = 0LL;
          }
        }
LABEL_24:
        v6 = v105;
        v13 = WPF::ProcessHeapImpl::AllocClear;
        goto LABEL_25;
      }
      v65 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v66 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
      if ( v66 == WPF::ProcessHeapImpl::AllocClear )
        v67 = WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL);
      else
        v67 = (_DWORD *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64, __int64, void (__fastcall *)(CVisual *)))v66)(
                          WPF::g_pProcessHeap,
                          136LL,
                          v6,
                          CVisual::SetDirtyChildren);
      if ( !v67 )
      {
        v2 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x95u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x696u);
        return v2;
      }
      v67[2] = 1;
      *(_QWORD *)v67 = &CAtlasedImage::`vftable';
      *((_QWORD *)v67 + 9) = 0LL;
      *((_QWORD *)v67 + 11) = 0LL;
      v67[8] = 0x7FFFFFFF;
      v67[10] = 0x7FFFFFFF;
      v67[9] = 0x7FFFFFFF;
      v67[11] = 0x7FFFFFFF;
      v67[13] = 0x80000000;
      v67[12] = 0x80000000;
      v67[15] = 0x7FFFFFFF;
      v67[14] = 0x7FFFFFFF;
      v67[17] = -1;
      v67[33] = 22;
      *((_QWORD *)v67 + 13) = v65;
      v68 = 0LL;
      *((_QWORD *)this + v15 + 40) = v67;
      v67[33] = v14;
      v69 = (_DWORD *)*((_QWORD *)this + 37);
      if ( v12 )
      {
        v70 = v69[72];
        v71 = 0;
        for ( j = (_QWORD *)*((_QWORD *)v69 + 33); v71 < v70; ++j )
        {
          if ( v12 == *j )
            break;
          ++v71;
        }
        if ( v71 == v70 )
        {
          v79 = -2147024809;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5Au);
          v2 = -2147024809;
          goto LABEL_176;
        }
        v68 = v71 + 1;
      }
      v103 = *((_QWORD *)this + v15 + 40);
      if ( (unsigned int)v68 > v69[72] )
      {
        v2 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C3u);
      }
      else
      {
        v102 = &v103;
        v73 = DynArrayImpl<0>::Grow((int)v69 + 264, 8, 1, 0, (__int64)&v102);
        v2 = v73;
        if ( v73 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v73, 0x1CDu);
        }
        else
        {
          ++v69[72];
          v74 = *((_QWORD *)v69 + 33);
          v75 = (unsigned int)(v69[72] - 1);
          if ( (unsigned int)v75 > (unsigned int)v68 )
          {
            v89 = v74 + 8 * v75;
            do
            {
              v75 = (unsigned int)(v75 - 1);
              v89 -= 8LL;
              *(_QWORD *)(v89 + 8) = *(_QWORD *)(v74 + 8 * v75);
            }
            while ( (unsigned int)v75 > (unsigned int)v68 );
          }
          v76 = v102;
          v77 = (__int64 *)(v74 + 8 * v68);
          if ( v102 >= v77 && (unsigned __int64)v102 < v74 + 8 * ((unsigned __int64)(unsigned int)v69[72] - 1) )
            v76 = ++v102;
          *v77 = *v76;
        }
        if ( (v2 & 0x80000000) == 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v103 + 8));
          *(_QWORD *)(v103 + 80) = v69;
          v78 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v69 + 24LL);
          if ( v78 == CVisual::SetDirtyFlags )
            CVisual::SetDirtyFlags((CVisual *)v69, 0x2000);
          else
            v78((CVisual *)v69, 0x2000);
          goto LABEL_112;
        }
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x73u);
LABEL_112:
      v79 = v2;
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x61u);
LABEL_176:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v79, 0x69Bu);
        return v2;
      }
      v5 = v104;
      goto LABEL_12;
    }
    v58 = (CAtlasedImage *)*((_QWORD *)this + v15 + 40);
    if ( v58 )
    {
      CAtlasedImage::DisconnectFromParent(v58);
      v95 = (CBaseObject *)*((_QWORD *)this + v15 + 40);
      if ( v95 )
      {
        CBaseObject::Release(v95);
        *((_QWORD *)this + v15 + 40) = 0LL;
      }
      goto LABEL_24;
    }
LABEL_25:
    ++v14;
    ++v15;
  }
  while ( v14 < 0x16 );
  v26 = 2;
  if ( (_BYTE)v6 )
  {
    IsSheetOfGlass = CTopLevelWindow::IsSheetOfGlass(this);
    v28 = (CAtlasedImage *)*((_QWORD *)this + 40);
    if ( IsSheetOfGlass )
    {
      CAtlasedImage::SetHiddenMargins(v28, 10LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 41), 8LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 42), 9LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 43), 2LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 44), 1LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 45), 6LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 46), 4LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 47), 5LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 49), 10LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 50), 8LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 51), 9LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 52), 2LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 53), 1LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 54), 6LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 55), 4LL);
      CAtlasedImage::SetHiddenMargins(*((_QWORD *)this + 56), 5LL);
    }
    else
    {
      if ( *((_DWORD *)v28 + 16) )
      {
        *((_DWORD *)v28 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v28, 1u, 0x2000u);
      }
      v29 = (CAtlasedImage *)*((_QWORD *)this + 41);
      if ( *((_DWORD *)v29 + 16) )
      {
        *((_DWORD *)v29 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v29, 1u, 0x2000u);
      }
      v30 = (CAtlasedImage *)*((_QWORD *)this + 42);
      if ( *((_DWORD *)v30 + 16) )
      {
        *((_DWORD *)v30 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v30, 1u, 0x2000u);
      }
      v31 = (CAtlasedImage *)*((_QWORD *)this + 43);
      if ( *((_DWORD *)v31 + 16) )
      {
        *((_DWORD *)v31 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v31, 1u, 0x2000u);
      }
      v32 = (CAtlasedImage *)*((_QWORD *)this + 44);
      if ( *((_DWORD *)v32 + 16) )
      {
        *((_DWORD *)v32 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v32, 1u, 0x2000u);
      }
      v33 = (CAtlasedImage *)*((_QWORD *)this + 45);
      if ( *((_DWORD *)v33 + 16) )
      {
        *((_DWORD *)v33 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v33, 1u, 0x2000u);
      }
      v34 = (CAtlasedImage *)*((_QWORD *)this + 46);
      if ( *((_DWORD *)v34 + 16) )
      {
        *((_DWORD *)v34 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v34, 1u, 0x2000u);
      }
      v35 = (CAtlasedImage *)*((_QWORD *)this + 47);
      if ( *((_DWORD *)v35 + 16) )
      {
        *((_DWORD *)v35 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v35, 1u, 0x2000u);
      }
      v36 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( *((_DWORD *)v36 + 16) )
      {
        *((_DWORD *)v36 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v36, 1u, 0x2000u);
      }
      v37 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( *((_DWORD *)v37 + 16) )
      {
        *((_DWORD *)v37 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v37, 1u, 0x2000u);
      }
      v38 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( *((_DWORD *)v38 + 16) )
      {
        *((_DWORD *)v38 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v38, 1u, 0x2000u);
      }
      v39 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( *((_DWORD *)v39 + 16) )
      {
        *((_DWORD *)v39 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v39, 1u, 0x2000u);
      }
      v40 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( *((_DWORD *)v40 + 16) )
      {
        *((_DWORD *)v40 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v40, 1u, 0x2000u);
      }
      v41 = (CAtlasedImage *)*((_QWORD *)this + 54);
      if ( *((_DWORD *)v41 + 16) )
      {
        *((_DWORD *)v41 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v41, 1u, 0x2000u);
      }
      v42 = (CAtlasedImage *)*((_QWORD *)this + 55);
      if ( *((_DWORD *)v42 + 16) )
      {
        *((_DWORD *)v42 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v42, 1u, 0x2000u);
      }
      v43 = (CAtlasedImage *)*((_QWORD *)this + 56);
      if ( *((_DWORD *)v43 + 16) )
      {
        *((_DWORD *)v43 + 16) = 0;
        CAtlasedImage::SetDirtyFlags(v43, 1u, 0x2000u);
      }
    }
  }
  updated = CTopLevelWindow::UpdateButtonVisuals(this, (struct CBitmapSource **)v5);
  v2 = updated;
  if ( updated < 0 )
  {
    v100 = 1772;
    goto LABEL_200;
  }
  if ( (*((_DWORD *)this + 152) & 0x10080) == 0 )
  {
    v91 = (struct CVisual *)*((_QWORD *)this + 68);
    if ( v91 )
    {
      v96 = *((_QWORD *)v91 + 3);
      if ( v96 )
      {
        updated = VisualCollection::Remove((VisualCollection *)(v96 + 32), v91);
        v2 = updated;
        if ( updated < 0 )
        {
          v100 = 1794;
          goto LABEL_200;
        }
        CVisual::SetDirtyFlags(this, 4096);
      }
      v97 = (CBaseObject *)*((_QWORD *)this + 68);
      if ( v97 )
      {
        CBaseObject::Release(v97);
        *((_QWORD *)this + 68) = 0LL;
      }
    }
    v45 = v106;
    goto LABEL_66;
  }
  if ( *((_QWORD *)this + 68) )
    goto LABEL_63;
  updated = CImage::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CImage **)this + 68);
  v2 = updated;
  if ( updated < 0 )
  {
    v100 = 1778;
  }
  else
  {
    updated = VisualCollection::InsertRelative(
                (VisualCollection *)(*((_QWORD *)this + 35) + 32LL),
                *((struct CVisual **)this + 68),
                *((struct CVisual **)this + 37),
                1,
                1);
    v2 = updated;
    if ( updated < 0 )
    {
      v100 = 1779;
    }
    else
    {
      CVisual::SetDirtyFlags(this, 0x20000);
LABEL_63:
      v45 = v106;
      if ( *((char *)this + 608) < 0 )
        v26 = 3;
      *(_DWORD *)(*((_QWORD *)this + 68) + 184LL) = v26;
      CVisual::SetRTLMirror(*((CVisual **)this + 68), v106);
LABEL_66:
      if ( (*((_BYTE *)this + 608) & 8) != 0 )
      {
        v46 = (struct CVisual **)((char *)this + 536);
        if ( *((_QWORD *)this + 67) )
          goto LABEL_68;
        updated = CText::Create(*(struct IDwmChannel **)(*((_QWORD *)this + 2) + 16LL), (struct CText **)this + 67);
        v2 = updated;
        if ( updated < 0 )
        {
          v100 = 1807;
        }
        else
        {
          updated = VisualCollection::InsertRelative(
                      (VisualCollection *)(*((_QWORD *)this + 37) + 32LL),
                      *v46,
                      0LL,
                      1,
                      1);
          v2 = updated;
          if ( updated < 0 )
          {
            v100 = 1810;
          }
          else
          {
            CVisual::SetDirtyFlags(this, 0x10000);
LABEL_68:
            CurrentDefaultColorizationFlags = CTopLevelWindow::GetCurrentDefaultColorizationFlags((__int64)this, &v101);
            WindowColorizationColor = CTopLevelWindow::GetWindowColorizationColor(
                                        (__int64)this,
                                        *CurrentDefaultColorizationFlags | 8u);
            v49 = *v46;
            v50 = WindowColorizationColor;
            v51 = WindowColorizationColor & 0xFFFFFF;
            if ( *((_DWORD *)*v46 + 99) != v51 )
            {
              v93 = *(_QWORD *)v49;
              *((_DWORD *)v49 + 99) = v51;
              v94 = *(void (__fastcall **)(CVisual *, int))(v93 + 24);
              if ( v94 == CVisual::SetDirtyFlags )
                CVisual::SetDirtyFlags(v49, 4096);
              else
                v94(v49, 4096);
            }
            if ( v5 )
            {
              if ( BYTE2(v50) + 5 * BYTE1(v50) + 2 * (unsigned __int8)v50 > 1024 == (unsigned __int8)BYTE2(*((_DWORD *)v5 + 462))
                                                                                  + 5
                                                                                  * (unsigned __int8)BYTE1(*((_DWORD *)v5 + 462))
                                                                                  + 2
                                                                                  * (unsigned __int8)*((_DWORD *)v5 + 462) > 1024 )
              {
                v98 = 292LL;
                if ( BYTE2(v50) + 5 * BYTE1(v50) + 2 * (unsigned __int8)v50 > 1024 )
                  v98 = 317LL;
                CImmersiveColor::GetColor(v98);
              }
              if ( !CTopLevelWindow::TreatAsActiveWindow(this) )
                v52 = BlendColors(v50, v52, 0.40000001);
              v53 = *v46;
              v54 = v52 & 0xFFFFFF;
              if ( v54 != *((_DWORD *)*v46 + 98) )
              {
                v55 = *(_QWORD *)v53;
                *((_DWORD *)v53 + 98) = v54;
                v56 = *(void (__fastcall **)(CVisual *, int))(v55 + 24);
                if ( v56 == CVisual::SetDirtyFlags )
                  CVisual::SetDirtyFlags(v53, 4096);
                else
                  v56(v53, 4096);
              }
            }
            CText::SetScalingFactor(*v46, *(double *)(*((_QWORD *)this + 93) + 288LL));
            CText::SetFont(*v46, (const struct tagLOGFONTW *)(*((_QWORD *)this + 93) + 692LL));
            CVisual::SetRTLMirror(*v46, v45);
            CText::SetRTLReading(*v46, (*((_DWORD *)this + 152) & 0x80000) != 0);
            CText::SetReverseAlignment(*v46, (*((_DWORD *)this + 152) & 0x400000) != 0);
LABEL_77:
            updated = CTopLevelWindow::EnsureClientAreaNode(this);
            v2 = updated;
            if ( updated >= 0 )
              return v2;
            v100 = 1854;
          }
        }
      }
      else
      {
        v90 = (struct CVisual *)*((_QWORD *)this + 67);
        if ( !v90 )
          goto LABEL_77;
        updated = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 37) + 32LL), v90);
        v2 = updated;
        if ( updated >= 0 )
        {
          v99 = (CBaseObject *)*((_QWORD *)this + 67);
          if ( v99 )
          {
            CBaseObject::Release(v99);
            *((_QWORD *)this + 67) = 0LL;
          }
          goto LABEL_77;
        }
        v100 = 1849;
      }
    }
  }
LABEL_200:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v100);
  return v2;
}
