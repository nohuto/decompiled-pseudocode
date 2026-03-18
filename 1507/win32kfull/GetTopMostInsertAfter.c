/*
 * XREFs of GetTopMostInsertAfter @ 0x1C01C39FC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0083EC8 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 */

__int64 __fastcall GetTopMostInsertAfter(__int64 a1)
{
  PVOID v1; // rax
  __int64 DesktopWindow; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 i; // rcx

  if ( (((*(_WORD *)(a1 + 66) & 0x3FFF) - 668) & 0xFFFB) != 0
    && gptiCurrent != gHardErrorHandler
    && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 12LL) & 0x200000) == 0 )
  {
    v1 = *(PVOID *)(gptiCurrent + 416LL);
    if ( v1 != grpdeskLogon && v1 == *(PVOID *)(gHardErrorHandler + 416LL) )
    {
      DesktopWindow = GetDesktopWindow(a1);
      if ( DesktopWindow == v3 )
      {
        for ( i = *(_QWORD *)(v3 + 96); i && (*(_BYTE *)(i + 48) & 8) != 0; i = *(_QWORD *)(i + 72) )
        {
          if ( v4 == *(_QWORD *)(i + 16) )
            return i;
        }
      }
    }
  }
  return 0LL;
}
