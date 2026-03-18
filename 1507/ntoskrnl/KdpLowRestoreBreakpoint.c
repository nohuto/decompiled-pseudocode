/*
 * XREFs of KdpLowRestoreBreakpoint @ 0x14072DB24
 * Callers:
 *     KdpRestoreAllBreakpoints @ 0x14072DCE4 (KdpRestoreAllBreakpoints.c)
 * Callees:
 *     KdpIsBreakpoint @ 0x1401FE9B4 (KdpIsBreakpoint.c)
 *     KdpCopyCodeStream @ 0x14072D560 (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x14072DAC4 (KdpInsertBreakpoint.c)
 */

char __fastcall KdpLowRestoreBreakpoint(unsigned int a1)
{
  char *v1; // rbx
  int v2; // ecx
  int inserted; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = 0LL;
  ++KdpBreakpointChangeCount;
  v1 = (char *)&KdpBreakpointTable + 40 * a1;
  v2 = *((_DWORD *)v1 + 8);
  if ( (v2 & 8) != 0 )
  {
    *((_DWORD *)v1 + 8) = v2 & 0xFFFFFFF7;
  }
  else if ( (v2 & 0x10) != 0 || (unsigned int)KdpIsBreakpoint((__int64)v1, v1 + 24) != 1 )
  {
    if ( (int)KdpCopyCodeStream(
                (PVOID)(*(_QWORD *)v1 & ~(unsigned __int64)(unsigned __int8)v1[37]),
                (__int64)&v5,
                (unsigned __int8)v1[36],
                4) < 0
      || (inserted = KdpInsertBreakpoint((__int64)v1, &v5)) == 0 )
    {
      *((_DWORD *)v1 + 8) |= 2u;
      return 0;
    }
    *((_DWORD *)v1 + 8) ^= (*((_DWORD *)v1 + 8) ^ inserted) & 2;
  }
  return 1;
}
