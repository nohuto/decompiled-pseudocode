/*
 * XREFs of _ChildWindowFromPointEx @ 0x1C014B020
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x1C014AFC0 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02342CC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     LayerHitTest @ 0x1C0121450 (LayerHitTest.c)
 */

__int64 __fastcall ChildWindowFromPointEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r9d
  __int64 v14; // r8
  unsigned int v15; // r9d
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp+28h] BYREF

  v22 = a2;
  v4 = a3;
  if ( a1 )
  {
    v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 432);
    if ( (*(_BYTE *)(v6 + 224) & 1) == 0 )
    {
      v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8) + 432);
      if ( (*(_BYTE *)(v10 + 224) & 0x20) == 0
        && (W32GetCurrentThreadDpiAwarenessContext(v10, v9, v11, v12) & 0xF) != (*(_DWORD *)(a1 + 352) & 0xF) )
      {
        TransformPointBetweenCoordinateSpaces(&v22, &v22, a1, 0LL);
      }
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
      v13 = *(_DWORD *)(a1 + 136) - v22;
    else
      v13 = *(_DWORD *)(a1 + 128) + v22;
    HIDWORD(v22) += *(_DWORD *)(a1 + 132);
    LODWORD(v22) = v13;
  }
  v21 = v22;
  if ( !PtInRect((_DWORD *)(a1 + 128), v22) )
    return 0LL;
  v16 = *(_QWORD *)(a1 + 200);
  if ( v16 )
  {
    if ( !(unsigned int)GrePtInRegion(v16, v15, v14) )
      return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 50) & 8) != 0 && (*(_DWORD *)(a1 + 288) & 0x20) == 0 && !LayerHitTest(a1, v22) )
    return 0LL;
  v17 = *(_QWORD *)(a1 + 96);
  if ( !v17 )
    return a1;
  while ( 1 )
  {
    TransformPointBetweenCoordinateSpaces(&v22, &v21, v17, a1);
    if ( (v4 & 1) != 0
      && ((*(_BYTE *)(v17 + 55) & 0x10) == 0
       || (unsigned int)IsWindowDesktopComposed(v17) && (unsigned int)GetWindowCloakState(v17))
      || (v4 & 2) != 0 && (*(_BYTE *)(v17 + 55) & 8) != 0
      || (v4 & 4) != 0 && (*(_BYTE *)(v17 + 48) & 0x20) != 0
      || !PtInRect((_DWORD *)(v17 + 112), v22) )
    {
      goto LABEL_18;
    }
    v20 = *(_QWORD *)(v17 + 200);
    if ( !v20 )
      break;
    if ( (unsigned int)GrePtInRegion(v20, (unsigned int)v22, HIDWORD(v22)) )
    {
      v19 = v22;
      break;
    }
LABEL_18:
    v17 = *(_QWORD *)(v17 + 72);
    if ( !v17 )
      return a1;
  }
  if ( (*(_BYTE *)(v17 + 50) & 8) != 0 && (*(_DWORD *)(a1 + 288) & 0x20) == 0 && !LayerHitTest(v17, v19) )
    goto LABEL_18;
  return v17;
}
