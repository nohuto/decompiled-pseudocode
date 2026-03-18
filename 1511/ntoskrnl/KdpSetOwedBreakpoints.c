/*
 * XREFs of KdpSetOwedBreakpoints @ 0x1406ADCE0
 * Callers:
 *     KdSetOwedBreakpoints @ 0x1401C2C34 (KdSetOwedBreakpoints.c)
 * Callees:
 *     KdEnterDebugger @ 0x1406AAC38 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406AAD38 (KdExitDebugger.c)
 *     KdpCopyCodeStream @ 0x1406AD514 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x1406ADA78 (KdpInsertBreakpoint.c)
 *     KdpRemoveBreakpoint @ 0x1406ADC28 (KdpRemoveBreakpoint.c)
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
  bool v8; // si
  unsigned __int8 *v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  int inserted; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  __int64 v15; // [rsp+38h] [rbp+10h] BYREF

  result = &retaddr;
  v15 = 0LL;
  if ( KdpOweBreakpoint )
  {
    v2 = (_KPROCESS **)&unk_1402EA148;
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
      if ( (__int64)v2 >= (__int64)&unk_1402EA648 )
        return (_UNKNOWN **)(unsigned int)KdpBreakpointChangeCount;
    }
    v8 = KdEnterDebugger(0LL);
    KdpOweBreakpoint = 0;
    v9 = (unsigned __int8 *)&unk_1402EA165;
    do
    {
      v10 = *(unsigned int *)(v9 - 5);
      if ( (v10 & 0xA) != 0 )
      {
        v11 = *(_QWORD *)(v9 - 37);
        if ( v11 >= (unsigned __int64)MmSystemRangeStart || *(_KPROCESS **)(v9 - 29) == Process )
        {
          if ( (int)KdpCopyCodeStream((PVOID)(v11 & ~(unsigned __int64)*v9), (__int64)&v15, *(v9 - 1), 4) >= 0 )
          {
            v12 = (__int64)(v9 - 37);
            if ( (*(_DWORD *)(v9 - 5) & 2) != 0 )
            {
              *(_QWORD *)(v9 - 13) = v15;
              inserted = KdpInsertBreakpoint(v12, &v15);
              if ( inserted )
                *(_DWORD *)(v9 - 5) = inserted;
            }
            else
            {
              KdpRemoveBreakpoint(v12, &v15);
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
    while ( (__int64)v9 < (__int64)byte_1402EA665 );
    LOBYTE(v10) = v8;
    return (_UNKNOWN **)KdExitDebugger(v10);
  }
  return result;
}
