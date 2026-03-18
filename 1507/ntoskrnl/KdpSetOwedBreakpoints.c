/*
 * XREFs of KdpSetOwedBreakpoints @ 0x14072DD2C
 * Callers:
 *     KdSetOwedBreakpoints @ 0x1401FE994 (KdSetOwedBreakpoints.c)
 * Callees:
 *     KdEnterDebugger @ 0x14072AC78 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x14072AD78 (KdExitDebugger.c)
 *     KdpCopyCodeStream @ 0x14072D560 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x14072DAC4 (KdpInsertBreakpoint.c)
 *     KdpRemoveBreakpoint @ 0x14072DC74 (KdpRemoveBreakpoint.c)
 */

_UNKNOWN **__fastcall KdpSetOwedBreakpoints(__int64 a1)
{
  _UNKNOWN **result; // rax
  _KPROCESS **v2; // rdx
  unsigned __int64 v3; // r8
  _KPROCESS *Process; // rbp
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // r9
  char v8; // si
  unsigned __int8 *v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  int inserted; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  result = &retaddr;
  v14 = 0LL;
  if ( KdpOweBreakpoint )
  {
    v2 = (_KPROCESS **)&unk_14033A5C8;
    v3 = a1 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    while ( 1 )
    {
      if ( ((_DWORD)v2[3] & 0xA) != 0 )
      {
        v5 = (unsigned __int64)*(v2 - 1);
        if ( v5 >= (unsigned __int64)MmSystemRangeStart || *v2 == Process )
        {
          v6 = v5 & ~(unsigned __int64)*((unsigned __int8 *)v2 + 29);
          if ( v6 >= v3 && v6 < v3 + 4096 )
            break;
          v7 = v6 + *((unsigned __int8 *)v2 + 28);
          if ( v7 >= v6 && v7 > v3 && v7 <= v3 + 4096 )
            break;
        }
      }
      v2 += 5;
      if ( (__int64)v2 >= (__int64)&unk_14033AAC8 )
        return (_UNKNOWN **)(unsigned int)KdpBreakpointChangeCount;
    }
    v8 = KdEnterDebugger(0LL);
    KdpOweBreakpoint = 0;
    v9 = (unsigned __int8 *)&unk_14033A5E5;
    do
    {
      if ( (*(_DWORD *)(v9 - 5) & 0xA) != 0 )
      {
        v10 = *(_QWORD *)(v9 - 37);
        if ( v10 >= (unsigned __int64)MmSystemRangeStart || *(_KPROCESS **)(v9 - 29) == Process )
        {
          if ( (int)KdpCopyCodeStream((PVOID)(v10 & ~(unsigned __int64)*v9), (__int64)&v14, *(v9 - 1), 4) >= 0 )
          {
            v11 = (__int64)(v9 - 37);
            if ( (*(_DWORD *)(v9 - 5) & 2) != 0 )
            {
              *(_QWORD *)(v9 - 13) = v14;
              inserted = KdpInsertBreakpoint(v11, &v14);
              if ( inserted )
                *(_DWORD *)(v9 - 5) = inserted;
            }
            else
            {
              KdpRemoveBreakpoint(v11, &v14);
            }
          }
        }
        else
        {
          KdpOweBreakpoint = 1;
        }
      }
      v9 += 40;
    }
    while ( (__int64)v9 < (__int64)byte_14033AAE5 );
    return (_UNKNOWN **)KdExitDebugger(v8);
  }
  return result;
}
