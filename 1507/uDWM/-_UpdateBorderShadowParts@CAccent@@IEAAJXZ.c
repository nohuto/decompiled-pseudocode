/*
 * XREFs of ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180035DD0
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x180035CA0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x180036960 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180028470 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x180028500 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x180028DB0 (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800292D4 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ??0CAtlasedImage@@IEAA@XZ @ 0x1800293DC (--0CAtlasedImage@@IEAA@XZ.c)
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x1800361DC (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?InsertAt@?$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z @ 0x18003713C (-InsertAt@-$DynArray@PEAVCAtlasedImage@@$0A@@@QEAAJAEBQEAVCAtlasedImage@@I@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowParts(CAccent *this, __int64 a2, __int64 a3)
{
  int v3; // ebp
  CAtlasedImage *v4; // r12
  unsigned int v5; // r15d
  CAtlasedImage **v6; // r14
  __int64 v7; // rax
  const struct tagSIZE **v8; // r13
  void *(__fastcall *v9)(WPF::ProcessHeapImpl *, size_t); // r9
  __int64 v10; // rsi
  void *(__fastcall *v11)(WPF::ProcessHeapImpl *, size_t); // rdi
  CAtlasedImage *v12; // rax
  CAtlasedImage *v13; // rax
  CVisual *v14; // rbx
  unsigned int v15; // edx
  unsigned int v16; // ecx
  CAtlasedImage **i; // rax
  int v18; // eax
  void (__fastcall *v19)(CVisual *, int); // rdi
  int v20; // ebx
  const struct tagSIZE *v21; // rbx
  CAtlasedImage *v22; // rdi
  CBaseObject *v23; // rcx
  CVisual *v24; // rdi
  void (__fastcall *v25)(CVisual *, int); // rsi
  CAtlasedImage *v26; // rdi
  CVisual *v27; // rsi
  unsigned int v28; // edx
  __int64 v29; // rcx
  __int64 j; // r8
  void (__fastcall *v31)(CVisual *, int); // rbx
  CAtlasedImage *v32; // rbx
  CAtlasedImage *(__fastcall *v33)(CAtlasedImage *, char); // rdi
  __int64 v34; // rdx
  CAtlasedImage *v35; // rcx
  CAtlasedImage *v36; // rcx
  CAtlasedImage *v37; // rcx
  CAtlasedImage *v38; // rcx
  CAtlasedImage *v39; // rcx
  CAtlasedImage *v40; // rcx
  CAtlasedImage *v41; // rcx
  CAtlasedImage **v43; // [rsp+30h] [rbp-58h]
  CAccent *v44; // [rsp+90h] [rbp+8h]
  CAtlasedImage *v45; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v46; // [rsp+A8h] [rbp+20h]

  v44 = this;
  v3 = 0;
  v43 = (CAtlasedImage **)((char *)this + 392);
  v4 = 0LL;
  v5 = 0;
  v6 = (CAtlasedImage **)((char *)this + 392);
  v7 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  v46 = v7;
  v8 = (const struct tagSIZE **)(v7 + 792);
  while ( 1 )
  {
    v9 = WPF::ProcessHeapImpl::AllocClear;
    if ( *v6 )
      goto LABEL_17;
    v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v11 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    v12 = v11 == WPF::ProcessHeapImpl::AllocClear
        ? (CAtlasedImage *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL)
        : (CAtlasedImage *)((__int64 (__fastcall *)(WPF::ProcessHeapImpl *, __int64, __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *, size_t)))v11)(
                             WPF::g_pProcessHeap,
                             136LL,
                             a3,
                             WPF::ProcessHeapImpl::AllocClear);
    if ( !v12 )
      break;
    v13 = CAtlasedImage::CAtlasedImage(v12);
    if ( !v13 )
      break;
    *((_QWORD *)v13 + 13) = v10;
    *v6 = v13;
    *((_DWORD *)v13 + 33) = v5;
    v14 = (CVisual *)*((_QWORD *)v44 + 47);
    if ( v4 )
    {
      v15 = *((_DWORD *)v14 + 72);
      v16 = 0;
      for ( i = (CAtlasedImage **)*((_QWORD *)v14 + 33); v16 < v15; ++i )
      {
        if ( v4 == *i )
          break;
        ++v16;
      }
      if ( v16 == v15 )
      {
        v20 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x5Au);
        v3 = -2147024809;
LABEL_84:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v20, 0x1CAu);
        return (unsigned int)v3;
      }
    }
    v45 = *v6;
    v18 = DynArray<CAtlasedImage *,0>::InsertAt((char *)v14 + 264, &v45);
    v3 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v18, 0x73u);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)v45 + 2);
      *((_QWORD *)v45 + 10) = v14;
      v19 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v14 + 24LL);
      if ( v19 == CVisual::SetDirtyFlags )
        CVisual::SetDirtyFlags(v14, 0x2000);
      else
        v19(v14, 0x2000);
    }
    v20 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v3, 0x61u);
      goto LABEL_84;
    }
    v7 = v46;
LABEL_17:
    if ( v7 )
    {
      v21 = *(v8 - 1);
      if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) && *v8 )
        v21 = *v8;
    }
    else
    {
      v21 = 0LL;
    }
    v22 = *v6;
    v23 = (CBaseObject *)*((_QWORD *)*v6 + 9);
    if ( v23 != (CBaseObject *)v21 )
    {
      if ( v23 )
        CBaseObject::Release(v23);
      *((_QWORD *)v22 + 9) = v21;
      if ( v21 )
        _InterlockedIncrement((volatile signed __int32 *)&v21[1]);
      *((_DWORD *)v22 + 24) |= 1u;
      v24 = (CVisual *)*((_QWORD *)v22 + 10);
      if ( v24 )
      {
        v25 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v24 + 24LL);
        if ( v25 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v24, 0x2000);
        else
          ((void (__fastcall *)(CVisual *, __int64, __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *, size_t)))v25)(
            v24,
            0x2000LL,
            a3,
            v9);
      }
    }
    if ( (v5 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16))
      && v21
      && v5 - 9 > 8
      && CAccent::_IsShadowPartApplicableFromFlags(v44, v5) )
    {
      CAtlasedImage::SetSize(*v6, v21 + 3);
      v4 = *v6;
    }
    else
    {
      v26 = *v6;
      v27 = (CVisual *)*((_QWORD *)*v6 + 10);
      if ( v27 )
      {
        v28 = *((_DWORD *)v27 + 72);
        v29 = 0LL;
        for ( j = *((_QWORD *)v27 + 33); (unsigned int)v29 < v28; v29 = (unsigned int)(v29 + 1) )
        {
          if ( v26 == *(CAtlasedImage **)(j + 8 * v29) )
            break;
        }
        if ( (unsigned int)v29 < v28 )
        {
          if ( (unsigned int)v29 < v28 - 1 )
          {
            do
            {
              v34 = (unsigned int)(v29 + 1);
              *(_QWORD *)(j + 8 * v29) = *(_QWORD *)(j + 8 * v34);
              v29 = v34;
            }
            while ( (unsigned int)v34 < *((_DWORD *)v27 + 72) - 1 );
          }
          --*((_DWORD *)v27 + 72);
        }
        *((_QWORD *)v26 + 10) = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v26 + 2, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(CAtlasedImage *, __int64, __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *, size_t)))v26)(
            v26,
            1LL,
            j,
            v9);
        v31 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v27 + 24LL);
        if ( v31 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v27, 0x2000);
        else
          ((void (__fastcall *)(CVisual *, __int64, __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *, size_t)))v31)(
            v27,
            0x2000LL,
            j,
            v9);
      }
      v32 = *v6;
      if ( *v6 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v32 + 2, 0xFFFFFFFF) == 1 && v32 )
        {
          v33 = **(CAtlasedImage *(__fastcall ***)(CAtlasedImage *, char))v32;
          if ( v33 == CAtlasedImage::`vector deleting destructor' )
            CAtlasedImage::`vector deleting destructor'(v32, 1);
          else
            ((void (__fastcall *)(CAtlasedImage *, __int64, __int64, void *(__fastcall *)(WPF::ProcessHeapImpl *, size_t)))v33)(
              v32,
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
      if ( *v43 )
        CAtlasedImage::SetHiddenMargins(*v43, 0);
      v35 = (CAtlasedImage *)*((_QWORD *)v44 + 50);
      if ( v35 )
        CAtlasedImage::SetHiddenMargins(v35, 0);
      v36 = (CAtlasedImage *)*((_QWORD *)v44 + 51);
      if ( v36 )
        CAtlasedImage::SetHiddenMargins(v36, 0);
      v37 = (CAtlasedImage *)*((_QWORD *)v44 + 52);
      if ( v37 )
        CAtlasedImage::SetHiddenMargins(v37, 0);
      v38 = (CAtlasedImage *)*((_QWORD *)v44 + 53);
      if ( v38 )
        CAtlasedImage::SetHiddenMargins(v38, 0);
      v39 = (CAtlasedImage *)*((_QWORD *)v44 + 54);
      if ( v39 )
        CAtlasedImage::SetHiddenMargins(v39, 0);
      v40 = (CAtlasedImage *)*((_QWORD *)v44 + 55);
      if ( v40 )
        CAtlasedImage::SetHiddenMargins(v40, 0);
      v41 = (CAtlasedImage *)*((_QWORD *)v44 + 56);
      if ( v41 )
        CAtlasedImage::SetHiddenMargins(v41, 0);
      return (unsigned int)v3;
    }
    this = v44;
    v7 = v46;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x95u);
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x1C3u);
  return 2147942414LL;
}
