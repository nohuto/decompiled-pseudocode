/*
 * XREFs of ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180014970
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x180014840 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x1800155F0 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180014E38 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002B0D0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002B500 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x18002BDC0 (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x18002C2E4 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowParts(CAccent *this, __int64 a2, __int64 a3)
{
  int v3; // ebp
  CAtlasedImage *v4; // r12
  unsigned int v5; // r15d
  CAtlasedImage **v6; // r14
  __int64 v7; // rax
  const struct tagSIZE **v8; // r13
  void *(*v9)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // r9
  __int64 v10; // rsi
  void *(*v11)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rdi
  _DWORD *v12; // rax
  unsigned int v13; // edi
  _DWORD *v14; // rsi
  unsigned int v15; // ecx
  CAtlasedImage **v16; // rax
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  struct CSecondaryWindowRepresentation *v20; // rdx
  struct CSecondaryWindowRepresentation *v21; // r8
  void (__fastcall *v22)(CVisual *__hidden, unsigned int); // rbx
  int v23; // ebx
  const struct tagSIZE *v24; // rbx
  CAtlasedImage *v25; // rdi
  CBaseObject *v26; // rcx
  CVisual *v27; // rdi
  void (__fastcall *v28)(CVisual *__hidden, unsigned int); // rsi
  CAtlasedImage *v29; // rdi
  CVisual *v30; // rsi
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 i; // r8
  __int64 v34; // rdx
  void (__fastcall *v35)(CVisual *__hidden, unsigned int); // rbx
  CAtlasedImage *v36; // rbx
  void *(__fastcall *v37)(CAtlasedImage *__hidden, unsigned int); // rdi
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v47; // [rsp+30h] [rbp-58h]
  _QWORD *v48; // [rsp+38h] [rbp-50h]
  CAccent *v49; // [rsp+90h] [rbp+8h]
  struct CSecondaryWindowRepresentation *v50; // [rsp+A0h] [rbp+18h] BYREF
  CAtlasedImage *v51; // [rsp+A8h] [rbp+20h] BYREF

  v49 = this;
  v3 = 0;
  v48 = (_QWORD *)((char *)this + 392);
  v4 = 0LL;
  v5 = 0;
  v6 = (CAtlasedImage **)((char *)this + 392);
  v7 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  v47 = v7;
  v8 = (const struct tagSIZE **)(v7 + 1496);
  while ( 1 )
  {
    v9 = WPF::ProcessHeapImpl::AllocClear;
    if ( *v6 )
      goto LABEL_22;
    v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v11 = *(void *(**)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    v12 = v11 == WPF::ProcessHeapImpl::AllocClear
        ? WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL)
        : (_DWORD *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64, __int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v11)(
                      WPF::g_pProcessHeap,
                      136LL,
                      a3,
                      WPF::ProcessHeapImpl::AllocClear);
    if ( !v12 )
      break;
    v12[2] = 1;
    *(_QWORD *)v12 = &CAtlasedImage::`vftable';
    *((_QWORD *)v12 + 9) = 0LL;
    v13 = 0;
    *((_QWORD *)v12 + 11) = 0LL;
    v12[8] = 0x7FFFFFFF;
    v12[10] = 0x7FFFFFFF;
    v12[9] = 0x7FFFFFFF;
    v12[11] = 0x7FFFFFFF;
    v12[13] = 0x80000000;
    v12[12] = 0x80000000;
    v12[15] = 0x7FFFFFFF;
    v12[14] = 0x7FFFFFFF;
    v12[17] = -1;
    v12[33] = 22;
    *((_QWORD *)v12 + 13) = v10;
    *v6 = (CAtlasedImage *)v12;
    v12[33] = v5;
    v14 = (_DWORD *)*((_QWORD *)v49 + 47);
    if ( v4 )
    {
      v15 = v14[72];
      v16 = (CAtlasedImage **)*((_QWORD *)v14 + 33);
      if ( v15 )
      {
        do
        {
          if ( v4 == *v16 )
            break;
          ++v13;
          ++v16;
        }
        while ( v13 < v15 );
      }
      if ( v13 == v15 )
      {
        v23 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x5Au);
        v3 = -2147024809;
LABEL_95:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x1DAu);
        return (unsigned int)v3;
      }
      ++v13;
    }
    v51 = *v6;
    if ( v13 > v14[72] )
    {
      v3 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x1C3u);
    }
    else
    {
      v50 = (struct CSecondaryWindowRepresentation *)&v51;
      v17 = DynArrayImpl<0>::Grow((int)v14 + 264, 8, 1, 0, (__int64)&v50);
      v3 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x1CDu);
      }
      else
      {
        ++v14[72];
        v18 = *((_QWORD *)v14 + 33);
        v19 = (unsigned int)(v14[72] - 1);
        if ( (unsigned int)v19 > v13 )
        {
          v38 = v18 + 8 * v19;
          do
          {
            v19 = (unsigned int)(v19 - 1);
            v38 -= 8LL;
            *(_QWORD *)(v38 + 8) = *(_QWORD *)(v18 + 8 * v19);
          }
          while ( (unsigned int)v19 > v13 );
        }
        v20 = v50;
        v21 = (struct CSecondaryWindowRepresentation *)(v18 + 8LL * v13);
        if ( v50 >= v21 && (unsigned __int64)v50 < v18 + 8 * ((unsigned __int64)(unsigned int)v14[72] - 1) )
        {
          v20 = (struct CSecondaryWindowRepresentation *)((char *)v50 + 8);
          v50 = (struct CSecondaryWindowRepresentation *)((char *)v50 + 8);
        }
        *(_QWORD *)v21 = *(_QWORD *)v20;
      }
      if ( v3 >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v51 + 2);
        *((_QWORD *)v51 + 10) = v14;
        v22 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v14 + 24LL);
        if ( v22 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags((CVisual *)v14, 0x2000u);
        else
          v22((CVisual *)v14, 0x2000u);
        goto LABEL_20;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x73u);
LABEL_20:
    v23 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x61u);
      goto LABEL_95;
    }
    v7 = v47;
LABEL_22:
    if ( v7 )
    {
      v24 = *(v8 - 1);
      if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) && *v8 )
        v24 = *v8;
    }
    else
    {
      v24 = 0LL;
    }
    v25 = *v6;
    v26 = (CBaseObject *)*((_QWORD *)*v6 + 9);
    if ( v26 != (CBaseObject *)v24 )
    {
      if ( v26 )
        CBaseObject::Release(v26);
      *((_QWORD *)v25 + 9) = v24;
      if ( v24 )
        _InterlockedIncrement((volatile signed __int32 *)&v24[1]);
      *((_DWORD *)v25 + 24) |= 1u;
      v27 = (CVisual *)*((_QWORD *)v25 + 10);
      if ( v27 )
      {
        v28 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v27 + 24LL);
        if ( v28 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v27, 0x2000u);
        else
          ((void (__fastcall *)(CVisual *, __int64, __int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v28)(
            v27,
            0x2000LL,
            a3,
            v9);
      }
    }
    if ( (v5 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16))
      && v24
      && v5 - 9 > 8
      && CAccent::_IsShadowPartApplicableFromFlags(v49, v5) )
    {
      CAtlasedImage::SetSize(*v6, v24 + 3);
      v4 = *v6;
    }
    else
    {
      v29 = *v6;
      v30 = (CVisual *)*((_QWORD *)*v6 + 10);
      if ( v30 )
      {
        v31 = *((_DWORD *)v30 + 72);
        v32 = 0LL;
        for ( i = *((_QWORD *)v30 + 33); (unsigned int)v32 < v31; v32 = (unsigned int)(v32 + 1) )
        {
          if ( v29 == *(CAtlasedImage **)(i + 8 * v32) )
            break;
        }
        if ( (unsigned int)v32 < v31 )
        {
          if ( (unsigned int)v32 < v31 - 1 )
          {
            do
            {
              v34 = (unsigned int)(v32 + 1);
              *(_QWORD *)(i + 8 * v32) = *(_QWORD *)(i + 8 * v34);
              v32 = v34;
            }
            while ( (unsigned int)v34 < *((_DWORD *)v30 + 72) - 1 );
          }
          --*((_DWORD *)v30 + 72);
        }
        *((_QWORD *)v29 + 10) = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v29 + 2, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(CAtlasedImage *, __int64, __int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v29)(
            v29,
            1LL,
            i,
            v9);
        v35 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v30 + 24LL);
        if ( v35 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v30, 0x2000u);
        else
          ((void (__fastcall *)(CVisual *, __int64, __int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v35)(
            v30,
            0x2000LL,
            i,
            v9);
      }
      v36 = *v6;
      if ( *v6 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v36 + 2, 0xFFFFFFFF) == 1 && v36 )
        {
          v37 = **(void *(__fastcall ***)(CAtlasedImage *__hidden, unsigned int))v36;
          if ( v37 == CAtlasedImage::`vector deleting destructor' )
            CAtlasedImage::`vector deleting destructor'(v36, 1u);
          else
            ((void (__fastcall *)(CAtlasedImage *, __int64, __int64, void *(*)(WPF::ProcessHeapImpl *__hidden, unsigned __int64)))v37)(
              v36,
              1LL,
              a3,
              v9);
        }
        *v6 = 0LL;
      }
    }
    ++v5;
    ++v6;
    v8 += 2;
    if ( v5 >= 0x16 )
    {
      if ( *v48 )
        CAtlasedImage::SetHiddenMargins(*v48, 0LL, a3, v9);
      v39 = *((_QWORD *)v49 + 50);
      if ( v39 )
        CAtlasedImage::SetHiddenMargins(v39, 0LL, a3, v9);
      v40 = *((_QWORD *)v49 + 51);
      if ( v40 )
        CAtlasedImage::SetHiddenMargins(v40, 0LL, a3, v9);
      v41 = *((_QWORD *)v49 + 52);
      if ( v41 )
        CAtlasedImage::SetHiddenMargins(v41, 0LL, a3, v9);
      v42 = *((_QWORD *)v49 + 53);
      if ( v42 )
        CAtlasedImage::SetHiddenMargins(v42, 0LL, a3, v9);
      v43 = *((_QWORD *)v49 + 54);
      if ( v43 )
        CAtlasedImage::SetHiddenMargins(v43, 0LL, a3, v9);
      v44 = *((_QWORD *)v49 + 55);
      if ( v44 )
        CAtlasedImage::SetHiddenMargins(v44, 0LL, a3, v9);
      v45 = *((_QWORD *)v49 + 56);
      if ( v45 )
        CAtlasedImage::SetHiddenMargins(v45, 0LL, a3, v9);
      return (unsigned int)v3;
    }
    this = v49;
    v7 = v47;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x95u);
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1D3u);
  return 2147942414LL;
}
