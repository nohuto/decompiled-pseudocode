/*
 * XREFs of ?xxxMNDoScroll@@YAHPEAUtagPOPUPMENU@@IH@Z @ 0x1C014052C
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     xxxMNButtonDown @ 0x1C013ED74 (xxxMNButtonDown.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     xxxMNDoubleClick @ 0x1C020F63C (xxxMNDoubleClick.c)
 * Callees:
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
 *     _SetTimer @ 0x1C01E0CD0 (_SetTimer.c)
 *     xxxMNSetTop @ 0x1C020FF28 (xxxMNSetTop.c)
 */

__int64 __fastcall xxxMNDoScroll(struct tagPOPUPMENU *a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  int v6; // edx
  __int64 v8; // rdx
  int v9; // r8d

  v4 = a2;
  v6 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 120LL);
  if ( (_DWORD)v4 == -3 )
  {
    v8 = (unsigned int)(v6 - 1);
  }
  else
  {
    if ( (_DWORD)v4 != -4 )
      return 0LL;
    v8 = (unsigned int)(v6 + 1);
  }
  if ( (unsigned int)xxxMNSetTop(a1, v8) )
  {
    if ( a3 )
      v9 = *(_DWORD *)(gpsi + 5384LL);
    else
      v9 = *(_DWORD *)(gpsi + 5384LL) >> 2;
    SetTimer(*((_QWORD *)a1 + 2), v4, v9, 0, 0);
  }
  else if ( !a3 )
  {
    FindTimer(*((_QWORD *)a1 + 2), v4, 0, 1, 0LL);
  }
  return 1LL;
}
