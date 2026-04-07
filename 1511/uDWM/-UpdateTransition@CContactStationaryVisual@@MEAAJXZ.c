/*
 * XREFs of ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18004E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x18001AC50 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180021DA0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180023E90 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023EDC (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003C890 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     ?Stop@CContactStationaryVisual@@UEAAXXZ @ 0x18006F5F0 (-Stop@CContactStationaryVisual@@UEAAXXZ.c)
 *     Template_q @ 0x18007CFB4 (Template_q.c)
 */

__int64 __fastcall CContactStationaryVisual::UpdateTransition(CContactStationaryVisual *this)
{
  int v2; // ecx
  unsigned int v3; // eax
  float v4; // xmm2_4
  struct tagSIZE *v5; // rbx
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm2_4
  int v10; // ecx
  int v11; // edx
  float v12; // xmm0_4
  LONG cx; // kr00_4
  int v14; // ebx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  char v18; // al
  _QWORD *v19; // rax
  double v20; // xmm1_8

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
    {
      v4 = (float)((float)(*((float *)this + 79) - *((float *)this + 78))
                 * (float)*(double *)(*((_QWORD *)this + 42) + 48LL))
         + *((float *)this + 78);
      if ( v4 < 0.0 )
        v4 = 0.0;
      CVisual::SetOpacity(this, v4);
    }
    if ( (*((_BYTE *)this + 332) & 8) != 0 )
    {
      v5 = (struct tagSIZE *)((char *)this + 360);
      v6 = *((float *)this + 80);
      v7 = *((float *)this + 81);
      v8 = *(double *)(*((_QWORD *)this + 42) + 48LL);
      *((_QWORD *)this + 45) = *(_QWORD *)(**((_QWORD **)this + 46) + 24LL);
      v9 = (float)((float)(v7 - v6) * v8) + v6;
      v10 = (int)(float)((float)*((int *)this + 90) * v9);
      if ( v10 < 1 )
        v10 = 1;
      v11 = (int)(float)((float)*((int *)this + 91) * v9);
      if ( v11 < 1 )
        v11 = 1;
      *((_DWORD *)this + 91) = v11;
    }
    else
    {
      if ( (*((_DWORD *)this + 83) & 4) == 0 )
        goto LABEL_22;
      v5 = (struct tagSIZE *)((char *)this + 360);
      v12 = *(double *)(*((_QWORD *)this + 42) + 48LL);
      v10 = (int)(float)((float)((float)((float)(*((float *)this + 81) - *((float *)this + 80)) * v12)
                               + *((float *)this + 80))
                       * (float)*((int *)this + 72));
      if ( v10 < 1 )
        v10 = 1;
      *((_DWORD *)this + 91) = v10;
    }
    v5->cx = v10;
    CVisual::SetSize(*((struct tagSIZE **)this + 44), v5);
    cx = v5->cx;
    v14 = *((_DWORD *)this + 71) - *((_DWORD *)this + 91) / 2;
    CVisual::SetInsetFromParentLeft(*((CVisual **)this + 44), *((_DWORD *)this + 70) - cx / 2);
    CVisual::SetInsetFromParentTop(*((CVisual **)this + 44), v14);
    goto LABEL_22;
  }
  CVisual::SetOpacity(this, 0.0);
LABEL_22:
  v15 = *((_QWORD *)this + 42);
  if ( v15 )
  {
    if ( *(_BYTE *)(v15 + 72) )
    {
      CContactStationaryVisual::Stop(this);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        Template_q(v16, &UdwmContactStationaryVisual_End, *((unsigned int *)this + 100));
    }
  }
  v17 = *((_QWORD *)this + 43);
  if ( v17 && (*(_BYTE *)(v17 + 72) || (float)*(double *)(v17 + 48) == 1.0) )
  {
    --*(_DWORD *)(v17 + 8);
    v18 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v17 + 8) )
      v18 = 1;
    *((_QWORD *)this + 43) = 0LL;
    CDesktopManager::s_fTimelineDirty = v18;
    v19 = (_QWORD *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                      WPF::g_pProcessHeap,
                      80LL);
    if ( v19 )
      v19 = CTimeline<float>::CTimeline<float>((__int64)v19, *((float *)this + 75), 0.0, 1.0, *((_DWORD *)this + 82));
    *((_QWORD *)this + 42) = v19;
    if ( (*((_BYTE *)this + 332) & 2) != 0 )
      v20 = *((float *)this + 78);
    else
      v20 = DOUBLE_1_0;
    CVisual::SetOpacity(this, v20);
  }
  return 0LL;
}
