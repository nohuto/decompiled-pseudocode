/*
 * XREFs of ?UpdateTransition@CDirectTouchVisual@@MEAAJXZ @ 0x180087E40
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180017B34 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?StopDownTimeline@CDirectTouchVisual@@IEAAXXZ @ 0x180048004 (-StopDownTimeline@CDirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180048030 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z @ 0x1800480A4 (-UpdateLocationWithScalar@CDirectTouchVisual@@IEAAJPEBUtagPOINT@@PEBUtagRECT@@M@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
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
  bool v11; // zf
  bool v12; // al
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax

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
      v4 = (float)((float)*(double *)(v3 + 48) * (float)(1.0 - *((float *)this + 82))) + *((float *)this + 82);
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
    *((_BYTE *)this + 384) = 1;
    v11 = (*(_DWORD *)(v10 + 8))-- == 1;
    v12 = CDesktopManager::s_fTimelineDirty;
    if ( v11 )
      v12 = 1;
    *((_QWORD *)this + 46) = 0LL;
    CDesktopManager::s_fTimelineDirty = v12;
  }
  else
  {
    v12 = CDesktopManager::s_fTimelineDirty;
  }
  v13 = *((_QWORD *)this + 47);
  if ( v13 && *(_BYTE *)(v13 + 72) )
  {
    v11 = (*(_DWORD *)(v13 + 8))-- == 1;
    if ( v11 )
      v12 = 1;
    *((_QWORD *)this + 47) = 0LL;
    CDesktopManager::s_fTimelineDirty = v12;
    v14 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    if ( v14 )
      v15 = CTimeline<float>::CTimeline<float>(v14, *((float *)this + 78), 0.0, 1.0, 0);
    else
      v15 = 0LL;
    *((_QWORD *)this + 45) = v15;
  }
  if ( !*((_QWORD *)this + 45) && !*((_QWORD *)this + 46) && !*((_QWORD *)this + 47) )
    CDirectTouchVisual::StopTimer(this);
  return 0LL;
}
