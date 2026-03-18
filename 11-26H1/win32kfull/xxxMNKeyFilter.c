/*
 * XREFs of xxxMNKeyFilter @ 0x1402FC2DC
 * Callers:
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     xxxMNLoop @ 0x14005AD84 (xxxMNLoop.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     xxxMessageBeep @ 0x1401B1154 (xxxMessageBeep.c)
 *     MNPositionSysMenu @ 0x14023E29C (MNPositionSysMenu.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1402DA6FC (xxxMNSwitchToAlternateMenu.c)
 */

void __fastcall xxxMNKeyFilter(__int64 **a1, __int64 a2, unsigned int a3)
{
  int v3; // ebp

  v3 = *(_DWORD *)(a2 + 8);
  if ( (v3 & 8) == 0 )
  {
    if ( (v3 & 4) == 0 )
    {
      if ( !xxxMNStartMenu((__int64)a1, a2, 1) )
        return;
      *(_DWORD *)(a2 + 8) |= 4u;
    }
    if ( a3 )
    {
      if ( a3 == 32
        || a3 == 45
        && (!*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 31LL) & 0xC0) == 0x40) )
      {
        if ( *(_QWORD *)(**a1 + 8) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) == 0 )
        {
          xxxMessageBeep(0LL);
          goto LABEL_19;
        }
        xxxMNCloseHierarchy(**a1, a2);
        if ( (*(_DWORD *)**a1 & 4) == 0 && *(_QWORD *)(**a1 + 48) )
          xxxMNSwitchToAlternateMenu(a1, a2);
        if ( (*(_DWORD *)**a1 & 4) == 0 )
          goto LABEL_19;
        MNPositionSysMenu(*(_QWORD *)(**a1 + 16), *(_QWORD **)(**a1 + 40));
        xxxMNSelectItem(a1, a2, 0);
        xxxMNOpenHierarchy(a1, a2);
        *(_DWORD *)**a1 &= ~0x80u;
      }
      else
      {
        xxxMNChar(a1, a2, a3);
        if ( *(_DWORD *)(**a1 + 80) == -1 )
        {
LABEL_19:
          *(_DWORD *)(a2 + 8) &= ~0x100u;
          if ( (*(_DWORD *)**a1 & 0x80000) == 0 )
            xxxMNCancel(a2, 0, 0, 0LL);
          return;
        }
      }
    }
    else
    {
      xxxMNSelectItem(a1, a2, 0);
    }
    if ( (v3 & 4) == 0 && (*(_DWORD *)(a2 + 8) & 4) != 0 )
      xxxMNLoop((struct tagWND ****)a1, a2, 0LL, 0);
  }
}
