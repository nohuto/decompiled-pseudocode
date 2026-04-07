/*
 * XREFs of ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x180087D60
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x18001AC50 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180046DC8 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180046E00 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x180046E74 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CDirectTouchVisual::UpdateTransition(CDirectTouchVisual *this)
{
  float v2; // xmm7_4
  __int64 v3; // rax
  float v4; // xmm6_4
  float v5; // xmm4_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // cl
  bool v12; // zf
  __int64 v13; // rdx
  bool v14; // al
  __int64 v15; // rax
  _QWORD *v16; // rax

  v2 = FLOAT_1_0;
  if ( *((_QWORD *)this + 47) )
  {
LABEL_15:
    v4 = 0.0;
    goto LABEL_16;
  }
  v3 = *((_QWORD *)this + 45);
  if ( !v3 )
  {
    if ( (*((_BYTE *)this + 352) & 8) != 0 )
    {
      v4 = FLOAT_1_0;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(v3 + 72) )
  {
    if ( (*((_BYTE *)this + 352) & 1) != 0 )
    {
      v4 = (float)((float)(1.0 - *((float *)this + 82)) * (float)*(double *)(v3 + 48)) + *((float *)this + 82);
      goto LABEL_9;
    }
LABEL_8:
    v4 = 0.0;
    goto LABEL_9;
  }
  if ( (*((_BYTE *)this + 352) & 8) == 0 )
    goto LABEL_8;
  v4 = FLOAT_1_0;
LABEL_9:
  v5 = *((float *)this + 79);
  v6 = *(double *)(v3 + 48);
  if ( v5 < v6 )
    v7 = (float)((float)((float)(v6 - v5) / *((float *)this + 80))
               * (float)(*((float *)this + 86) - *((float *)this + 85)))
       + *((float *)this + 85);
  else
    v7 = (float)((float)(*((float *)this + 85) - *((float *)this + 84)) * (float)(v6 / v5)) + *((float *)this + 84);
  CDirectTouchVisual::UpdateLocationWithScalar(
    this,
    (const struct tagPOINT *)this + 35,
    (const struct tagRECT *)this + 18,
    v7);
LABEL_16:
  v8 = *((_QWORD *)this + 46);
  if ( v8 )
  {
    v2 = *(double *)(v8 + 48);
  }
  else if ( *((_BYTE *)this + 384) )
  {
    v2 = 0.0;
  }
  CVisual::SetOpacity(this, (float)(v2 * v4));
  v9 = *((_QWORD *)this + 45);
  if ( v9 && *(_BYTE *)(v9 + 72) )
    CDirectTouchVisual::StopDownTimeline(this);
  v10 = *((_QWORD *)this + 46);
  if ( v10 && *(_BYTE *)(v10 + 72) )
  {
    v11 = CDesktopManager::s_fTimelineDirty;
    *((_BYTE *)this + 384) = 1;
    v12 = --*(_DWORD *)(v10 + 8) == 0;
    *((_QWORD *)this + 46) = 0LL;
    if ( v12 )
      v11 = 1;
    CDesktopManager::s_fTimelineDirty = v11;
  }
  else
  {
    v11 = CDesktopManager::s_fTimelineDirty;
  }
  v13 = *((_QWORD *)this + 47);
  if ( v13 && *(_BYTE *)(v13 + 72) )
  {
    --*(_DWORD *)(v13 + 8);
    v14 = v11;
    if ( !*(_DWORD *)(v13 + 8) )
      v14 = 1;
    *((_QWORD *)this + 47) = 0LL;
    CDesktopManager::s_fTimelineDirty = v14;
    v15 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    if ( v15 )
      v16 = CTimeline<float>::CTimeline<float>(v15, *((float *)this + 78), 0.0, 1.0, 0);
    else
      v16 = 0LL;
    *((_QWORD *)this + 45) = v16;
  }
  if ( !*((_QWORD *)this + 45) && !*((_QWORD *)this + 46) && !*((_QWORD *)this + 47) )
    CDirectTouchVisual::StopTimer(this);
  return 0LL;
}
