/*
 * XREFs of ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x1800368D0
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJXZ @ 0x180035920 (-UpdateLayout@CAccent@@UEAAJXZ.c)
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z @ 0x1800367A0 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002ADF0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_ECAtlasedImage@@MEAAPEAXI@Z @ 0x18002AE80 (--_ECAtlasedImage@@MEAAPEAXI@Z.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x18002B710 (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x18002BB74 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180036D78 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowParts(CAccent *this)
{
  int v2; // ebp
  __int64 v3; // rcx
  CAtlasedImage **v4; // r14
  unsigned int v5; // r15d
  const struct tagSIZE **i; // r12
  __int64 v7; // rbx
  void *(__fastcall *v8)(WPF::ProcessHeapImpl *, size_t); // rax
  _DWORD *v9; // rax
  __int64 v10; // rdi
  _DWORD *v11; // rsi
  unsigned int v12; // edx
  unsigned int v13; // eax
  CAtlasedImage **j; // rcx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  CAtlasedImage **v18; // rdx
  CAtlasedImage **v19; // r8
  void (__fastcall *v20)(CVisual *, int); // rax
  int v21; // ebx
  const struct tagSIZE *v22; // rbx
  CAtlasedImage *v23; // rdi
  CBaseObject *v24; // rcx
  CVisual *v25; // rcx
  void (__fastcall *v26)(CVisual *, int); // rax
  CAtlasedImage *v27; // r8
  CVisual *v28; // rbx
  unsigned int v29; // edx
  __int64 v30; // rcx
  __int64 k; // r9
  __int64 v32; // rdx
  void (__fastcall *v33)(CVisual *, int); // rax
  CAtlasedImage *v34; // rcx
  CAtlasedImage *(__fastcall *v35)(CAtlasedImage *, char); // rax
  __int64 v36; // r8
  CAtlasedImage *v37; // rcx
  CAtlasedImage *v38; // rcx
  CAtlasedImage *v39; // rcx
  CAtlasedImage *v40; // rcx
  CAtlasedImage *v41; // rcx
  CAtlasedImage *v42; // rcx
  CAtlasedImage *v43; // rcx
  CAtlasedImage *v44; // rcx
  CAtlasedImage *v46; // [rsp+30h] [rbp-48h]
  __int64 v47; // [rsp+38h] [rbp-40h]
  CAtlasedImage **v48; // [rsp+90h] [rbp+18h] BYREF
  CAtlasedImage *v49; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  v47 = v3;
  v4 = (CAtlasedImage **)((char *)this + 392);
  v46 = 0LL;
  v5 = 0;
  for ( i = (const struct tagSIZE **)(v3 + 1504); ; i += 2 )
  {
    if ( *v4 )
      goto LABEL_22;
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    v8 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
    v9 = v8 == WPF::ProcessHeapImpl::AllocClear
       ? WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x88uLL)
       : (_DWORD *)v8(WPF::g_pProcessHeap, 136LL);
    if ( !v9 )
      break;
    *(_QWORD *)v9 = &CAtlasedImage::`vftable';
    v10 = 0LL;
    v9[2] = 1;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 11) = 0LL;
    v9[8] = 0x7FFFFFFF;
    v9[10] = 0x7FFFFFFF;
    v9[9] = 0x7FFFFFFF;
    v9[11] = 0x7FFFFFFF;
    v9[13] = 0x80000000;
    v9[12] = 0x80000000;
    v9[15] = 0x7FFFFFFF;
    v9[14] = 0x7FFFFFFF;
    v9[17] = -1;
    v9[33] = 22;
    *((_QWORD *)v9 + 13) = v7;
    *v4 = (CAtlasedImage *)v9;
    v9[33] = v5;
    v11 = (_DWORD *)*((_QWORD *)this + 47);
    if ( v46 )
    {
      v12 = v11[72];
      v13 = 0;
      for ( j = (CAtlasedImage **)*((_QWORD *)v11 + 33); v13 < v12; ++j )
      {
        if ( v46 == *j )
          break;
        ++v13;
      }
      if ( v13 == v12 )
      {
        v21 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x5Au);
        v2 = -2147024809;
LABEL_95:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x1C6u);
        return (unsigned int)v2;
      }
      v10 = v13 + 1;
    }
    v49 = *v4;
    if ( (unsigned int)v10 > v11[72] )
    {
      v2 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x1C3u);
    }
    else
    {
      v48 = &v49;
      v15 = DynArrayImpl<0>::Grow((__int64)(v11 + 66), 8u, 1, 0, (unsigned __int64 *)&v48);
      v2 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1CDu);
      }
      else
      {
        ++v11[72];
        v16 = *((_QWORD *)v11 + 33);
        v17 = (unsigned int)(v11[72] - 1);
        if ( (unsigned int)v17 > (unsigned int)v10 )
        {
          v36 = v16 + 8 * v17;
          do
          {
            v17 = (unsigned int)(v17 - 1);
            v36 -= 8LL;
            *(_QWORD *)(v36 + 8) = *(_QWORD *)(v16 + 8 * v17);
          }
          while ( (unsigned int)v17 > (unsigned int)v10 );
        }
        v18 = v48;
        v19 = (CAtlasedImage **)(v16 + 8 * v10);
        if ( v48 >= v19 && (unsigned __int64)v48 < v16 + 8 * ((unsigned __int64)(unsigned int)v11[72] - 1) )
          v18 = ++v48;
        *v19 = *v18;
      }
      if ( v2 >= 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v49 + 2);
        *((_QWORD *)v49 + 10) = v11;
        v20 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v11 + 24LL);
        if ( v20 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags((CVisual *)v11, 0x2000);
        else
          v20((CVisual *)v11, 0x2000);
        goto LABEL_20;
      }
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x73u);
LABEL_20:
    v21 = v2;
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x61u);
      goto LABEL_95;
    }
    v3 = v47;
LABEL_22:
    if ( v3 )
    {
      v22 = *(i - 1);
      if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16) && *i )
        v22 = *i;
    }
    else
    {
      v22 = 0LL;
    }
    v23 = *v4;
    v24 = (CBaseObject *)*((_QWORD *)*v4 + 9);
    if ( v24 != (CBaseObject *)v22 )
    {
      if ( v24 )
        CBaseObject::Release(v24);
      *((_QWORD *)v23 + 9) = v22;
      if ( v22 )
        _InterlockedIncrement((volatile signed __int32 *)&v22[1]);
      *((_DWORD *)v23 + 24) |= 1u;
      v25 = (CVisual *)*((_QWORD *)v23 + 10);
      if ( v25 )
      {
        v26 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v25 + 24LL);
        if ( v26 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v25, 0x2000);
        else
          v26(v25, 0x2000);
      }
    }
    if ( (v5 - 18 > 3 || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 16))
      && v22
      && v5 - 9 > 8
      && CAccent::_IsShadowPartApplicableFromFlags(this, v5) )
    {
      CAtlasedImage::SetSize(*v4, v22 + 3);
      v46 = *v4;
    }
    else
    {
      v27 = *v4;
      v28 = (CVisual *)*((_QWORD *)*v4 + 10);
      if ( v28 )
      {
        v29 = *((_DWORD *)v28 + 72);
        v30 = 0LL;
        for ( k = *((_QWORD *)v28 + 33); (unsigned int)v30 < v29; v30 = (unsigned int)(v30 + 1) )
        {
          if ( v27 == *(CAtlasedImage **)(k + 8 * v30) )
            break;
        }
        if ( (unsigned int)v30 < v29 )
        {
          if ( (unsigned int)v30 < v29 - 1 )
          {
            do
            {
              v32 = (unsigned int)(v30 + 1);
              *(_QWORD *)(k + 8 * v30) = *(_QWORD *)(k + 8 * v32);
              v30 = v32;
            }
            while ( (unsigned int)v32 < *((_DWORD *)v28 + 72) - 1 );
          }
          --*((_DWORD *)v28 + 72);
        }
        *((_QWORD *)v27 + 10) = 0LL;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v27 + 2, 0xFFFFFFFF) == 1 )
          (**(void (__fastcall ***)(CAtlasedImage *, __int64))v27)(v27, 1LL);
        v33 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v28 + 24LL);
        if ( v33 == CVisual::SetDirtyFlags )
          CVisual::SetDirtyFlags(v28, 0x2000);
        else
          ((void (__fastcall *)(CVisual *, __int64, CAtlasedImage *, __int64))v33)(v28, 0x2000LL, v27, k);
      }
      v34 = *v4;
      if ( *v4 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v34 + 2, 0xFFFFFFFF) == 1 && v34 )
        {
          v35 = **(CAtlasedImage *(__fastcall ***)(CAtlasedImage *, char))v34;
          if ( v35 == CAtlasedImage::`vector deleting destructor' )
            CAtlasedImage::`vector deleting destructor'(v34, 1);
          else
            v35(v34, 1);
        }
        *v4 = 0LL;
      }
    }
    ++v5;
    ++v4;
    if ( v5 >= 0x16 )
    {
      v37 = (CAtlasedImage *)*((_QWORD *)this + 49);
      if ( v37 )
        CAtlasedImage::SetHiddenMargins(v37, 0);
      v38 = (CAtlasedImage *)*((_QWORD *)this + 50);
      if ( v38 )
        CAtlasedImage::SetHiddenMargins(v38, 0);
      v39 = (CAtlasedImage *)*((_QWORD *)this + 51);
      if ( v39 )
        CAtlasedImage::SetHiddenMargins(v39, 0);
      v40 = (CAtlasedImage *)*((_QWORD *)this + 52);
      if ( v40 )
        CAtlasedImage::SetHiddenMargins(v40, 0);
      v41 = (CAtlasedImage *)*((_QWORD *)this + 53);
      if ( v41 )
        CAtlasedImage::SetHiddenMargins(v41, 0);
      v42 = (CAtlasedImage *)*((_QWORD *)this + 54);
      if ( v42 )
        CAtlasedImage::SetHiddenMargins(v42, 0);
      v43 = (CAtlasedImage *)*((_QWORD *)this + 55);
      if ( v43 )
        CAtlasedImage::SetHiddenMargins(v43, 0);
      v44 = (CAtlasedImage *)*((_QWORD *)this + 56);
      if ( v44 )
        CAtlasedImage::SetHiddenMargins(v44, 0);
      return (unsigned int)v2;
    }
    v3 = v47;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x95u);
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1BFu);
  return 2147942414LL;
}
