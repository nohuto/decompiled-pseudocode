/*
 * XREFs of xxxMenuBarCompute @ 0x1C0013EA8
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000FE34 (xxxPaintMenuBar.c)
 *     xxxCalcMenuBar @ 0x1C0013C5C (xxxCalcMenuBar.c)
 *     xxxCalcClientRect @ 0x1C0071278 (xxxCalcClientRect.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B3B4 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxDrawMenuBarTemp @ 0x1C0240734 (xxxDrawMenuBarTemp.c)
 *     xxxMenuBarDraw @ 0x1C0241E10 (xxxMenuBarDraw.c)
 * Callees:
 *     ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C0013F78 (-MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z.c)
 *     xxxMNCompute @ 0x1C0015858 (xxxMNCompute.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 */

__int64 __fastcall xxxMenuBarCompute(struct tagMENU *a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // r12d
  unsigned int v7; // ebx
  int v9; // esi
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  int v14; // ecx
  int v15; // [rsp+70h] [rbp+8h] BYREF

  v5 = a5;
  v7 = 0;
  v15 = 0;
  v9 = xxxMNCompute(a1, a4, a5, (__int64)&v15);
  if ( (*((_DWORD *)a1 + 10) & 1) == 0 )
  {
    if ( v15 )
      v9 = xxxMNCompute(a1, a4, v5, (__int64)&v15);
    MBC_RightJustifyMenu(a1);
  }
  if ( v9 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) == 0 )
      {
LABEL_21:
        v11 = (_DWORD *)(gpsi + 2292LL);
        return (unsigned int)(v9 + *v11);
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(v10)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
    {
      goto LABEL_21;
    }
    if ( (unsigned int)IsDPIDWMSysMet(6LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process() + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
        ? (v14 = 0)
        : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
          v14) )
    {
      v11 = (_DWORD *)(gpsi + 2680LL);
    }
    else
    {
      v11 = (_DWORD *)(gpsi + 1904LL);
    }
    return (unsigned int)(v9 + *v11);
  }
  return v7;
}
