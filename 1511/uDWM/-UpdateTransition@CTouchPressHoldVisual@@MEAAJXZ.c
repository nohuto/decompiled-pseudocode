/*
 * XREFs of ?UpdateTransition@CTouchPressHoldVisual@@MEAAJXZ @ 0x18009CA30
 * Callers:
 *     <none>
 * Callees:
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x18009BD74 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopTimer@CTouchPressHoldVisual@@MEAAJXZ @ 0x18009C390 (-StopTimer@CTouchPressHoldVisual@@MEAAJXZ.c)
 *     ?UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ @ 0x18009C3AC (-UpdateOpacityAndLocation@CTouchPressHoldVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchPressHoldVisual::UpdateTransition(CTouchPressHoldVisual *this)
{
  __int64 v1; // rax
  char v3; // cl
  __int64 v4; // rdx
  bool v5; // al
  __int64 v6; // rdx
  float v7; // xmm2_4
  float v8; // xmm1_4
  bool v9; // al
  __int64 v10; // rdx
  bool v11; // al

  v1 = *((_QWORD *)this + 40);
  if ( v1 && (*((float *)this + 78) = *(double *)(v1 + 48), *(_BYTE *)(v1 + 72)) )
  {
    --*(_DWORD *)(v1 + 8);
    v3 = CDesktopManager::s_fTimelineDirty;
    if ( !*(_DWORD *)(v1 + 8) )
      v3 = 1;
    *((_QWORD *)this + 40) = 0LL;
    CDesktopManager::s_fTimelineDirty = v3;
  }
  else
  {
    v3 = CDesktopManager::s_fTimelineDirty;
  }
  v4 = *((_QWORD *)this + 42);
  if ( v4 )
  {
    *((_DWORD *)this + 77) = (int)(float)*(double *)(v4 + 48);
    if ( *(_BYTE *)(v4 + 72) )
    {
      --*(_DWORD *)(v4 + 8);
      v5 = v3;
      if ( !*(_DWORD *)(v4 + 8) )
        v5 = 1;
      *((_QWORD *)this + 42) = 0LL;
      v3 = v5;
      CDesktopManager::s_fTimelineDirty = v5;
    }
  }
  v6 = *((_QWORD *)this + 41);
  if ( v6 )
  {
    v7 = *(double *)(v6 + 48);
    v8 = (float)*((int *)this + 74) * v7;
    *((_DWORD *)this + 75) = (int)(float)((float)*((int *)this + 73) * v7);
    *((_DWORD *)this + 76) = (int)v8;
    if ( *(_BYTE *)(v6 + 72) )
    {
      --*(_DWORD *)(v6 + 8);
      v9 = v3;
      if ( !*(_DWORD *)(v6 + 8) )
        v9 = 1;
      *((_QWORD *)this + 41) = 0LL;
      v3 = v9;
      CDesktopManager::s_fTimelineDirty = v9;
    }
  }
  v10 = *((_QWORD *)this + 43);
  if ( !v10 )
    goto LABEL_22;
  if ( *(_BYTE *)(v10 + 72) )
  {
    *((_DWORD *)this + 78) = 0;
    --*(_DWORD *)(v10 + 8);
    v11 = v3;
    if ( !*(_DWORD *)(v10 + 8) )
      v11 = 1;
    *((_QWORD *)this + 43) = 0LL;
    CDesktopManager::s_fTimelineDirty = v11;
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
