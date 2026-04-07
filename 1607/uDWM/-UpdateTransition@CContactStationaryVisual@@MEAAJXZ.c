/*
 * XREFs of ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18004ED20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x18001F090 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180020C8C (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180020CC0 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x180039B20 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x18006F5D0 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     Template_q @ 0x180075A2C (Template_q.c)
 */

__int64 __fastcall CContactStationaryVisual::UpdateTransition(CContactStationaryVisual *this)
{
  int v2; // ecx
  unsigned int v3; // eax
  struct tagSIZE *v4; // rbx
  float v5; // xmm0_4
  int v6; // ecx
  __int64 cx; // kr00_8
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  bool v12; // zf
  char v13; // al
  _QWORD *v14; // rax
  double v15; // xmm1_8
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  int v21; // edx

  if ( !*((_QWORD *)this + 43) )
  {
    if ( (*((_BYTE *)this + 332) & 1) != 0 )
    {
      v2 = *((_DWORD *)this + 98);
      v3 = (int)(float)((float)*(double *)(*((_QWORD *)this + 42) + 48LL) * (float)v2);
      if ( v3 >= v2 )
        v3 = v2 - 1;
      CImage::SetBitmapSource(*((CImage **)this + 44), *(struct CBitmapSource **)(*((_QWORD *)this + 46) + 8LL * v3));
    }
    if ( (*((_BYTE *)this + 332) & 2) != 0 )
      CVisual::SetOpacity(
        this,
        fmaxf(
          (float)((float)(*((float *)this + 79) - *((float *)this + 78))
                * (float)*(double *)(*((_QWORD *)this + 42) + 48LL))
        + *((float *)this + 78),
          0.0));
    if ( (*((_BYTE *)this + 332) & 8) != 0 )
    {
      v4 = (struct tagSIZE *)((char *)this + 360);
      v17 = *((float *)this + 80);
      v18 = *((float *)this + 81);
      v19 = *(double *)(*((_QWORD *)this + 42) + 48LL);
      *((_QWORD *)this + 45) = *(_QWORD *)(**((_QWORD **)this + 46) + 24LL);
      v20 = (float)((float)(v18 - v17) * v19) + v17;
      v6 = (int)(float)((float)*((int *)this + 90) * v20);
      if ( v6 < 1 )
        v6 = 1;
      v21 = (int)(float)((float)*((int *)this + 91) * v20);
      if ( v21 < 1 )
        v21 = 1;
      *((_DWORD *)this + 91) = v21;
    }
    else
    {
      if ( (*((_DWORD *)this + 83) & 4) == 0 )
        goto LABEL_15;
      v4 = (struct tagSIZE *)((char *)this + 360);
      v5 = *(double *)(*((_QWORD *)this + 42) + 48LL);
      v6 = (int)(float)((float)((float)((float)(*((float *)this + 81) - *((float *)this + 80)) * v5)
                              + *((float *)this + 80))
                      * (float)*((int *)this + 72));
      if ( v6 < 1 )
        v6 = 1;
      *((_DWORD *)this + 91) = v6;
    }
    v4->cx = v6;
    CVisual::SetSize(*((struct tagSIZE **)this + 44), v4);
    cx = v4->cx;
    v8 = *((_DWORD *)this + 71) - *((_DWORD *)this + 91) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 44), *((_DWORD *)this + 70) - cx / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 44), v8);
    goto LABEL_15;
  }
  CVisual::SetOpacity(this, 0.0);
LABEL_15:
  v9 = *((_QWORD *)this + 42);
  if ( v9 )
  {
    if ( *(_BYTE *)(v9 + 72) )
    {
      CContactStationaryVisual::Stop(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v10, &UdwmContactStationaryVisual_End, *((unsigned int *)this + 100));
    }
  }
  v11 = *((_QWORD *)this + 43);
  if ( v11 && (*(_BYTE *)(v11 + 72) || (float)*(double *)(v11 + 48) == 1.0) )
  {
    v12 = (*(_DWORD *)(v11 + 8))-- == 1;
    v13 = CDesktopManager::s_fTimelineDirty;
    if ( v12 )
      v13 = 1;
    *((_QWORD *)this + 43) = 0LL;
    CDesktopManager::s_fTimelineDirty = v13;
    v14 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                      WPF::g_pProcessHeap,
                      80LL);
    if ( v14 )
      v14 = CTimeline<float>::CTimeline<float>((__int64)v14, *((float *)this + 75), 0.0, 1.0, *((_DWORD *)this + 82));
    *((_QWORD *)this + 42) = v14;
    if ( (*((_BYTE *)this + 332) & 2) != 0 )
      v15 = *((float *)this + 78);
    else
      v15 = DOUBLE_1_0;
    CVisual::SetOpacity(this, v15);
  }
  return 0LL;
}
