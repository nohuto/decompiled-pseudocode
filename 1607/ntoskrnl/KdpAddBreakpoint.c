/*
 * XREFs of KdpAddBreakpoint @ 0x1406F602C
 * Callers:
 *     KdpWriteCustomBreakpoint @ 0x1401D16D4 (KdpWriteCustomBreakpoint.c)
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 *     KdpWriteBreakPointEx @ 0x1406F5BD0 (KdpWriteBreakPointEx.c)
 * Callees:
 *     KdpCopyCodeStream @ 0x1406F5FA4 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x1406F61AC (KdpInsertBreakpoint.c)
 */

__int64 __fastcall KdpAddBreakpoint(unsigned __int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  _DWORD *v9; // rbx
  _DWORD *v10; // rax
  unsigned int i; // edx
  int v12; // ecx
  int v13; // eax
  char v14; // di
  int inserted; // eax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  if ( ((unsigned __int8)(a3 - 1) & a3) != 0 || a1 >= 0xFFFF800000000000uLL && (a2 != 204 || a3 != 1 || a4) )
    return 0LL;
  ++KdpBreakpointChangeCount;
  v9 = 0LL;
  v10 = &KdpBreakpointTable;
  for ( i = 0; i < 0x20; ++i )
  {
    v12 = v10[8];
    if ( (v12 & 1) != 0 && *(_QWORD *)v10 == a1 )
    {
      if ( (v12 & 8) == 0 )
        return 0LL;
      v10[8] = v12 & 0xFFFFFFF7;
      return i + 1;
    }
    if ( !v9 && !v12 )
      v9 = v10;
    v10 += 10;
  }
  if ( !v9 )
    return 0LL;
  v13 = KdpCopyCodeStream((char *)(a1 & ~(unsigned __int64)a4), (__int64)v16, a3, 4);
  *(_QWORD *)v9 = a1;
  *((_BYTE *)v9 + 36) = a3;
  *((_BYTE *)v9 + 37) = a4;
  *((_QWORD *)v9 + 2) = a2;
  if ( v13 >= 0 )
  {
    *((_QWORD *)v9 + 3) = v16[0];
    v14 = KdpOweBreakpoint;
    *((_QWORD *)v9 + 1) = KeGetCurrentThread()->ApcState.Process;
    inserted = KdpInsertBreakpoint(v9, v16);
    if ( !inserted )
    {
      KdpOweBreakpoint = v14;
      return 0LL;
    }
    v9[8] = inserted;
  }
  else
  {
    *((_QWORD *)v9 + 1) = KeGetCurrentThread()->ApcState.Process;
    v9[8] = 3;
  }
  return (unsigned int)(((char *)v9 - (char *)&KdpBreakpointTable) / 40) + 1;
}
