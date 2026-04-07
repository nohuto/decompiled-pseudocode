/*
 * XREFs of ?GetWindowZOrder@CAnimationComponent@@QEAAHXZ @ 0x180010904
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D994 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180029434 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CAnimationComponent::GetWindowZOrder(HWND *this)
{
  struct CWindowData *WindowDataByHwnd; // rax
  unsigned int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // r8
  bool v7; // zf

  if ( *((_DWORD *)this + 15) == 0x80000000 )
  {
    WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                         *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                         this[2]);
    v3 = 0;
    if ( WindowDataByHwnd )
    {
      v4 = *((_QWORD *)WindowDataByHwnd + 46);
      if ( v4 )
      {
        v5 = *(_QWORD *)(v4 + 24);
        if ( v5 )
        {
          if ( *((_BYTE *)this + 120) )
          {
            *((_DWORD *)this + 15) = -5;
          }
          else
          {
            v6 = *(_QWORD **)(v5 + 48);
            v7 = *(_DWORD *)(v5 + 72) == 0;
            if ( *(_DWORD *)(v5 + 72) )
            {
              do
              {
                if ( v4 == *v6 )
                  break;
                ++v3;
                ++v6;
              }
              while ( v3 < *(_DWORD *)(v5 + 72) );
              v7 = v3 == *(_DWORD *)(v5 + 72);
            }
            if ( !v7 )
              *((_DWORD *)this + 15) = v3;
          }
        }
      }
    }
    else
    {
      *((_DWORD *)this + 15) = -10;
    }
  }
  return *((unsigned int *)this + 15);
}
