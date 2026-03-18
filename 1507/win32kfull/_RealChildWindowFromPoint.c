/*
 * XREFs of _RealChildWindowFromPoint @ 0x1C023BFBC
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x1C021EF00 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GetWindowCloakState @ 0x1C0065D00 (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     SameCoordinateSpace @ 0x1C00855C8 (SameCoordinateSpace.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 */

__int64 __fastcall RealChildWindowFromPoint(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 CurrentProcessWin32Process; // rax
  int v5; // r9d
  __int64 v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp+28h] BYREF

  v14 = a2;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 440) + 224LL) & 1) == 0 )
    {
      v3 = *(_QWORD *)(a1 + 16);
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0x100000000000000LL);
      if ( !(unsigned int)SameCoordinateSpace(CurrentProcessWin32Process, *(_QWORD *)(v3 + 384)) )
        TransformPointBetweenCoordinateSpaces(&v14, &v14, a1, 0LL);
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    v5 = *(_DWORD *)(a1 + 128) + v14;
    HIDWORD(v14) += *(_DWORD *)(a1 + 132);
    LODWORD(v14) = v5;
  }
  if ( !PtInRect((_DWORD *)(a1 + 128), v14) )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 200);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, v7, v6) )
      return 0LL;
  }
  v9 = *(_QWORD *)(a1 + 96);
  v10 = 0LL;
  v13 = v14;
  if ( !v9 )
    return a1;
  do
  {
    if ( (*(_BYTE *)(v9 + 55) & 0x10) != 0
      && (!(unsigned int)IsWindowDesktopComposed(v9) || !(unsigned int)GetWindowCloakState(v9)) )
    {
      TransformPointBetweenCoordinateSpaces(&v14, &v13, v9, a1);
      if ( PtInRect((_DWORD *)(v9 + 112), v14) )
      {
        v11 = *(_QWORD *)(v9 + 200);
        if ( !v11 || (unsigned int)GrePtInRegion(v11, (unsigned int)v14, HIDWORD(v14)) )
        {
          if ( *(_WORD *)(gpsi + 852LL) != *(_WORD *)(*(_QWORD *)(v9 + 152) + 10LL) || (*(_BYTE *)(v9 + 52) & 0xF) != 7 )
            return v9;
          v10 = v9;
        }
      }
    }
    v9 = *(_QWORD *)(v9 + 72);
  }
  while ( v9 );
  if ( !v10 )
    return a1;
  return v10;
}
