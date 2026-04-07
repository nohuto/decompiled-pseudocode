/*
 * XREFs of ?_UpdateAnimatedProperties@CThumbnailVisual@@AEAAJK@Z @ 0x1800130E0
 * Callers:
 *     ?UpdateProperties@CThumbnailVisual@@QEAAJK@Z @ 0x180014204 (-UpdateProperties@CThumbnailVisual@@QEAAJK@Z.c)
 * Callees:
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x180012F30 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z @ 0x18009A25C (-StartAnimation@CThumbnailTransition@@QEAAJPEAVCThumbnailAnimatedVisual@@H@Z.c)
 *     ?StopAnimation@CThumbnailTransition@@QEAAXXZ @ 0x18009A394 (-StopAnimation@CThumbnailTransition@@QEAAXXZ.c)
 */

__int64 __fastcall CThumbnailVisual::_UpdateAnimatedProperties(CThumbnailVisual *this, int a2)
{
  __int64 v2; // rax
  int v3; // r15d
  int started; // ebp
  CThumbnailTransition *v6; // rcx
  CThumbnailTransition *v8; // rcx
  int v9; // r14d
  int v10; // r12d
  int v11; // r13d
  __int64 v12; // rax
  int v13; // r8d
  __int64 v14; // r9
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rax
  float v18; // xmm0_4
  CThumbnailTransition *v19; // rcx
  CBaseObject *v20; // rcx

  v2 = *((_QWORD *)this + 44);
  v3 = a2 & 0x30000;
  started = -2147467259;
  if ( !v2 || !v3 )
  {
    v6 = (CThumbnailTransition *)*((_QWORD *)this + 56);
    if ( !v6 )
      return (unsigned int)started;
    CThumbnailTransition::StopAnimation(v6);
    started = 0;
    goto LABEL_27;
  }
  v8 = (CThumbnailTransition *)*((_QWORD *)this + 56);
  v9 = 1;
  v10 = *(_DWORD *)(v2 + 40);
  v11 = *(_DWORD *)(v2 + 44);
  if ( v8 )
  {
    *((_BYTE *)this + 457) = 1;
    CThumbnailTransition::StopAnimation(v8);
  }
  started = -2147024882;
  v12 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          40LL);
  if ( v12 )
  {
    *(_DWORD *)(v12 + 8) = 1;
    *(_QWORD *)v12 = &CThumbnailTransition::`vftable'{for `CBaseObject'};
    *(_QWORD *)(v12 + 16) = &CThumbnailTransition::`vftable'{for `IAnimationListener'};
    *(_QWORD *)(v12 + 24) = 0LL;
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 56) = v12;
  if ( v12 )
  {
    SetRect(
      (LPRECT)this + 17,
      *((_DWORD *)this + 26),
      *((_DWORD *)this + 27),
      *((_DWORD *)this + 26) + *((_DWORD *)this + 28),
      *((_DWORD *)this + 27) + *((_DWORD *)this + 29));
    v14 = *((_QWORD *)this + 44);
    if ( (*(_BYTE *)(v14 + 36) & 1) != 0 )
    {
      v15 = *(_DWORD *)(v14 + 52) - *(_DWORD *)(v14 + 44);
      if ( v15 < 0 )
        v15 = 0;
      v16 = *(_DWORD *)(v14 + 48) - *(_DWORD *)(v14 + 40);
      if ( v16 < 0 )
        v16 = 0;
      SetRect((LPRECT)this + 18, v10, v11, v16 + v10, v11 + v15);
    }
    else
    {
      *((_OWORD *)this + 18) = *((_OWORD *)this + 17);
    }
    v17 = *((_QWORD *)this + 44);
    if ( v3 == 0x20000 )
      v9 = 4;
    v18 = *((double *)this + 22);
    *((_DWORD *)this + 76) = v9;
    *((float *)this + 77) = v18;
    if ( (*(_BYTE *)(v17 + 36) & 4) != 0 )
      v18 = (double)*(unsigned __int8 *)(v17 + 72) / 255.0;
    v19 = (CThumbnailTransition *)*((_QWORD *)this + 56);
    *((float *)this + 78) = v18;
    *((_BYTE *)this + 458) = 0;
    started = CThumbnailTransition::StartAnimation(v19, this, v13);
    if ( started >= 0 )
      goto LABEL_28;
    v20 = (CBaseObject *)*((_QWORD *)this + 56);
    if ( v20 )
    {
      CBaseObject::Release(v20);
      *((_QWORD *)this + 56) = 0LL;
    }
    *((_BYTE *)this + 457) = 0;
LABEL_27:
    if ( started < 0 )
      return (unsigned int)started;
LABEL_28:
    CThumbnailVisual::SetDirtyFlags(this, 4096);
  }
  return (unsigned int)started;
}
