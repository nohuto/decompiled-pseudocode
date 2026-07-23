/*
 * XREFs of KdpInsertBreakpoint @ 0x1406F61AC
 * Callers:
 *     KdpAddBreakpoint @ 0x1406F602C (KdpAddBreakpoint.c)
 *     KdpLowRestoreBreakpoint @ 0x1406F620C (KdpLowRestoreBreakpoint.c)
 *     KdpSetOwedBreakpoints @ 0x1406F640C (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpWriteInstructionBuffer @ 0x1401D1B88 (KdpWriteInstructionBuffer.c)
 *     KdpCopyCodeStream @ 0x1406F5FA4 (KdpCopyCodeStream.c)
 */

__int64 __fastcall KdpInsertBreakpoint(__int64 a1, _BYTE *a2)
{
  int v2; // ebx
  __int64 v3; // r10
  __int64 v4; // rax
  __int64 v5; // r11
  int v6; // eax

  v2 = 0;
  KdpWriteInstructionBuffer(a2, *(_QWORD *)(a1 + 16), *(_BYTE *)(a1 + 36));
  v6 = KdpCopyCodeStream(
         (char *)(v4 & ~(unsigned __int64)*(unsigned __int8 *)(v3 + 37)),
         v5,
         *(unsigned __int8 *)(v3 + 36),
         5);
  if ( v6 < 0 )
    return 0LL;
  if ( v6 == 259 )
    v2 = 2;
  return v2 | 1u;
}
