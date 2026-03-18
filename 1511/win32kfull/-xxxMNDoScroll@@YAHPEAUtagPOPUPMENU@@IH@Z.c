/*
 * XREFs of ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C0133720
 * Callers:
 *     xxxMNButtonDown @ 0x1C0133690 (xxxMNButtonDown.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     xxxMNDoubleClick @ 0x1C0216AA0 (xxxMNDoubleClick.c)
 * Callees:
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     _SetTimer @ 0x1C01EA450 (_SetTimer.c)
 *     xxxMNSetTop @ 0x1C021738C (xxxMNSetTop.c)
 */

__int64 __fastcall xxxMNDoScroll(struct tagPOPUPMENU *a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  int v7; // r8d

  v4 = a2;
  if ( a2 != -3 && a2 != -4 )
    return 0LL;
  if ( (unsigned int)xxxMNSetTop() )
  {
    if ( a3 )
      v7 = *(_DWORD *)(gpsi + 3992LL);
    else
      v7 = *(_DWORD *)(gpsi + 3992LL) >> 2;
    SetTimer(*((_QWORD *)a1 + 2), v4, v7, 0, 0);
  }
  else if ( !a3 )
  {
    FindTimer(*((_QWORD *)a1 + 2), v4, 0, 1, 0LL);
  }
  return 1LL;
}
