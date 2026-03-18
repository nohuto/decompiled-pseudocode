/*
 * XREFs of xxxMenuBarCompute @ 0x1C004F804
 * Callers:
 *     xxxCalcMenuBar @ 0x1C004F4AC (xxxCalcMenuBar.c)
 *     xxxCalcClientRect @ 0x1C0094474 (xxxCalcClientRect.c)
 *     xxxPaintMenuBar @ 0x1C00F6114 (xxxPaintMenuBar.c)
 *     xxxMNRecomputeBarIfNeeded @ 0x1C023B1E4 (xxxMNRecomputeBarIfNeeded.c)
 *     xxxDrawMenuBarTemp @ 0x1C0240598 (xxxDrawMenuBarTemp.c)
 *     xxxMenuBarDraw @ 0x1C0241C80 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C004F8C0 (-MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z.c)
 *     xxxMNCompute @ 0x1C0052F0C (xxxMNCompute.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 */

__int64 __fastcall xxxMenuBarCompute(struct tagMENU *a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  int v5; // r12d
  unsigned int v7; // ebx
  int v9; // esi
  __int64 v10; // rcx
  int v11; // edi
  _DWORD *v12; // rcx
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
    v11 = IsDPIDWMSysMet(6LL);
    if ( !v11
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v10 = 0LL)
        : (v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v10) )
    {
      if ( v11
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v14 = 0)
          : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v14) )
      {
        v12 = (_DWORD *)(gpsi + 2680LL);
      }
      else
      {
        v12 = (_DWORD *)(gpsi + 1904LL);
      }
    }
    else
    {
      v12 = (_DWORD *)(gpsi + 2292LL);
    }
    return (unsigned int)(v9 + *v12);
  }
  return v7;
}
