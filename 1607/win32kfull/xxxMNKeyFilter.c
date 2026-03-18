/*
 * XREFs of xxxMNKeyFilter @ 0x1C02354DC
 * Callers:
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 * Callees:
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     xxxMNLoop @ 0x1C0141414 (xxxMNLoop.c)
 *     xxxMessageBeep @ 0x1C0152DE0 (xxxMessageBeep.c)
 *     MNPositionSysMenu @ 0x1C01F46E8 (MNPositionSysMenu.c)
 *     xxxMNChar @ 0x1C020F234 (xxxMNChar.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0210154 (xxxMNSwitchToAlternateMenu.c)
 */

__int64 __fastcall xxxMNKeyFilter(struct tagPOPUPMENU *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  int v7; // ebp

  result = *(unsigned int *)(a2 + 8);
  v7 = (*(_DWORD *)(a2 + 8) >> 2) & 1;
  if ( (result & 8) == 0 )
  {
    if ( !v7 )
    {
      result = xxxMNStartMenu((unsigned __int8 *)a1, a2, 1LL, a4);
      if ( !(_DWORD)result )
        return result;
      *(_DWORD *)(a2 + 8) |= 4u;
    }
    if ( a3 )
    {
      if ( a3 == 32 || a3 == 45 && (*(_BYTE *)(*((_QWORD *)a1 + 1) + 55LL) & 0xC0) == 0x40 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 1) + 54LL) & 8) == 0 )
        {
          result = xxxMessageBeep(0LL);
          goto LABEL_17;
        }
        xxxMNCloseHierarchy((unsigned int *)a1, a2);
        if ( (*(_DWORD *)a1 & 4) == 0 && *((_QWORD *)a1 + 6) )
          xxxMNSwitchToAlternateMenu((unsigned __int8 *)a1, a2);
        result = *(unsigned int *)a1;
        if ( (result & 4) == 0 )
          goto LABEL_17;
        MNPositionSysMenu(*((_QWORD *)a1 + 2), *((_QWORD *)a1 + 5));
        xxxMNSelectItem(a1, a2, 0);
        result = xxxMNOpenHierarchy(a1, a2);
        *(_DWORD *)a1 &= ~0x80u;
      }
      else
      {
        result = xxxMNChar((__int64)a1, a2, a3);
        if ( *((_DWORD *)a1 + 20) == -1 )
        {
LABEL_17:
          *(_DWORD *)(a2 + 8) &= ~0x100u;
          if ( (*(_DWORD *)a1 & 0x80000) == 0 )
            return xxxMNCancel(a2, 0, 0, 0LL);
          return result;
        }
      }
    }
    else
    {
      result = xxxMNSelectItem(a1, a2, 0);
    }
    if ( !v7 )
    {
      result = *(unsigned int *)(a2 + 8);
      if ( (result & 4) != 0 )
        return xxxMNLoop((int *)a1, a2, 0LL, 0);
    }
  }
  return result;
}
