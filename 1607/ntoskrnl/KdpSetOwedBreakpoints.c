/*
 * XREFs of KdpSetOwedBreakpoints @ 0x1406F640C
 * Callers:
 *     KdSetOwedBreakpoints @ 0x1401D1B14 (KdSetOwedBreakpoints.c)
 * Callees:
 *     KdEnterDebugger @ 0x1406F23D0 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1406F24D0 (KdExitDebugger.c)
 *     KdpCopyCodeStream @ 0x1406F5FA4 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x1406F61AC (KdpInsertBreakpoint.c)
 *     KdpRemoveBreakpoint @ 0x1406F635C (KdpRemoveBreakpoint.c)
 */

void __fastcall KdpSetOwedBreakpoints(__int64 a1)
{
  _KPROCESS **v1; // rdx
  unsigned __int64 v2; // r8
  _KPROCESS *Process; // rbp
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r9
  char v7; // si
  unsigned __int8 *v8; // rbx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  int inserted; // eax
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0LL;
  if ( KdpOweBreakpoint )
  {
    v1 = (_KPROCESS **)&unk_14030F6A8;
    v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    while ( 1 )
    {
      if ( ((_DWORD)v1[3] & 0xA) != 0 )
      {
        v4 = (unsigned __int64)*(v1 - 1);
        if ( v4 >= 0xFFFF800000000000uLL || *v1 == Process )
        {
          v5 = v4 & ~(unsigned __int64)*((unsigned __int8 *)v1 + 29);
          if ( v5 >= v2 && v5 < v2 + 4096 )
            break;
          v6 = v5 + *((unsigned __int8 *)v1 + 28);
          if ( v6 >= v5 && v6 > v2 && v6 <= v2 + 4096 )
            break;
        }
      }
      v1 += 5;
      if ( (__int64)v1 >= (__int64)&unk_14030FBA8 )
        return;
    }
    v7 = KdEnterDebugger(0LL);
    KdpOweBreakpoint = 0;
    v8 = (unsigned __int8 *)&unk_14030F6C5;
    do
    {
      if ( (*(_DWORD *)(v8 - 5) & 0xA) != 0 )
      {
        v9 = *(_QWORD *)(v8 - 37);
        if ( v9 >= 0xFFFF800000000000uLL || *(_KPROCESS **)(v8 - 29) == Process )
        {
          if ( (int)KdpCopyCodeStream((char *)(v9 & ~(unsigned __int64)*v8), (__int64)&v12, *(v8 - 1), 4) >= 0 )
          {
            v10 = (__int64)(v8 - 37);
            if ( (*(_DWORD *)(v8 - 5) & 2) != 0 )
            {
              *(_QWORD *)(v8 - 13) = v12;
              inserted = KdpInsertBreakpoint(v10, &v12);
              if ( inserted )
                *(_DWORD *)(v8 - 5) = inserted;
            }
            else
            {
              KdpRemoveBreakpoint(v10, &v12);
            }
          }
        }
        else
        {
          KdpOweBreakpoint = 1;
        }
      }
      v8 += 40;
    }
    while ( (__int64)v8 < (__int64)byte_14030FBC5 );
    KdExitDebugger(v7);
  }
}
