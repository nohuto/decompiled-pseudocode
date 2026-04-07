/*
 * XREFs of ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x180099630
 * Callers:
 *     <none>
 * Callees:
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x180098A94 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x180098FD0 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x180098FEC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateTransition(CTouchPressHoldVisual *this)
{
  __int64 v1; // rax
  bool v3; // zf
  char v4; // cl
  __int64 v5; // rdx
  bool v6; // al
  __int64 v7; // rdx
  float v8; // xmm2_4
  float v9; // xmm1_4
  bool v10; // al
  __int64 v11; // rax
  bool v12; // al

  v1 = *((_QWORD *)this + 40);
  if ( v1 && (*((float *)this + 78) = *(double *)(v1 + 48), *(_BYTE *)(v1 + 72)) )
  {
    v3 = (*(_DWORD *)(v1 + 8))-- == 1;
    v4 = CDesktopManager::s_fTimelineDirty;
    if ( v3 )
      v4 = 1;
    *((_QWORD *)this + 40) = 0LL;
    CDesktopManager::s_fTimelineDirty = v4;
  }
  else
  {
    v4 = CDesktopManager::s_fTimelineDirty;
  }
  v5 = *((_QWORD *)this + 42);
  if ( v5 )
  {
    *((_DWORD *)this + 77) = (int)(float)*(double *)(v5 + 48);
    if ( *(_BYTE *)(v5 + 72) )
    {
      v3 = (*(_DWORD *)(v5 + 8))-- == 1;
      v6 = v4;
      if ( v3 )
        v6 = 1;
      *((_QWORD *)this + 42) = 0LL;
      v4 = v6;
      CDesktopManager::s_fTimelineDirty = v6;
    }
  }
  v7 = *((_QWORD *)this + 41);
  if ( v7 )
  {
    v8 = *(double *)(v7 + 48);
    v9 = (float)*((int *)this + 74) * v8;
    *((_DWORD *)this + 75) = (int)(float)((float)*((int *)this + 73) * v8);
    *((_DWORD *)this + 76) = (int)v9;
    if ( *(_BYTE *)(v7 + 72) )
    {
      v3 = (*(_DWORD *)(v7 + 8))-- == 1;
      v10 = v4;
      if ( v3 )
        v10 = 1;
      *((_QWORD *)this + 41) = 0LL;
      v4 = v10;
      CDesktopManager::s_fTimelineDirty = v10;
    }
  }
  v11 = *((_QWORD *)this + 43);
  if ( !v11 )
    goto LABEL_22;
  if ( *(_BYTE *)(v11 + 72) )
  {
    *((_DWORD *)this + 78) = 0;
    v3 = (*(_DWORD *)(v11 + 8))-- == 1;
    v12 = v4;
    if ( v3 )
      v12 = 1;
    *((_QWORD *)this + 43) = 0LL;
    CDesktopManager::s_fTimelineDirty = v12;
LABEL_22:
    CTouchPressHoldVisual::UpdateOpacityAndLocation(this);
  }
  if ( !*((_QWORD *)this + 40) && !*((_QWORD *)this + 41) && !*((_QWORD *)this + 42) && !*((_QWORD *)this + 43) )
  {
    CTouchPressHoldVisual::SetETWAnimation((__int64)this, 0);
    CTouchPressHoldVisual::StopTimer(this);
  }
  return 0LL;
}
