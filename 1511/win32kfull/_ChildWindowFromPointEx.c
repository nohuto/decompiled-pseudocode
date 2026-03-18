/*
 * XREFs of _ChildWindowFromPointEx @ 0x1C01451D0
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x1C0145170 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C023C8CC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     SameCoordinateSpace @ 0x1C0075498 (SameCoordinateSpace.c)
 *     GetWindowCloakState @ 0x1C0075918 (GetWindowCloakState.c)
 *     LayerHitTest @ 0x1C00FE990 (LayerHitTest.c)
 */

__int64 __fastcall ChildWindowFromPointEx(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  int v7; // r9d
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp+28h] BYREF

  v16 = a2;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 224LL) & 1) == 0 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
      if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v5 + 376)) )
        TransformPointBetweenCoordinateSpaces(&v16, &v16, a1, 0LL);
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    if ( (*(_BYTE *)(a1 + 50) & 0x40) != 0 )
      v7 = *(_DWORD *)(a1 + 136) - v16;
    else
      v7 = *(_DWORD *)(a1 + 128) + v16;
    HIDWORD(v16) += *(_DWORD *)(a1 + 132);
    LODWORD(v16) = v7;
  }
  v15 = v16;
  if ( !PtInRect((_DWORD *)(a1 + 128), v16) )
    return 0LL;
  v10 = *(_QWORD *)(a1 + 200);
  if ( v10 )
  {
    if ( !(unsigned int)GrePtInRegion(v10, v9, v8) )
      return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 50) & 8) != 0 && (*(_DWORD *)(a1 + 288) & 0x20) == 0 && !LayerHitTest(a1, v16) )
    return 0LL;
  v11 = *(_QWORD *)(a1 + 96);
  if ( !v11 )
    return a1;
  while ( 1 )
  {
    TransformPointBetweenCoordinateSpaces(&v16, &v15, v11, a1);
    if ( (a3 & 1) != 0
      && ((*(_BYTE *)(v11 + 55) & 0x10) == 0
       || (unsigned int)IsWindowDesktopComposed(v11) && (unsigned int)GetWindowCloakState(v11))
      || (a3 & 2) != 0 && (*(_BYTE *)(v11 + 55) & 8) != 0
      || (a3 & 4) != 0 && (*(_BYTE *)(v11 + 48) & 0x20) != 0
      || !PtInRect((_DWORD *)(v11 + 112), v16) )
    {
      goto LABEL_18;
    }
    v14 = *(_QWORD *)(v11 + 200);
    if ( !v14 )
      break;
    if ( (unsigned int)GrePtInRegion(v14, (unsigned int)v16, HIDWORD(v16)) )
    {
      v13 = v16;
      break;
    }
LABEL_18:
    v11 = *(_QWORD *)(v11 + 72);
    if ( !v11 )
      return a1;
  }
  if ( (*(_BYTE *)(v11 + 50) & 8) != 0 && (*(_DWORD *)(a1 + 288) & 0x20) == 0 && !LayerHitTest(v11, v13) )
    goto LABEL_18;
  return v11;
}
