/*
 * XREFs of KdpRemoveBreakpoint @ 0x1406F635C
 * Callers:
 *     KdpLowWriteContent @ 0x1406F62A4 (KdpLowWriteContent.c)
 *     KdpSetOwedBreakpoints @ 0x1406F640C (KdpSetOwedBreakpoints.c)
 * Callees:
 *     KdpWriteInstructionBuffer @ 0x1401D1B88 (KdpWriteInstructionBuffer.c)
 *     KdpCopyCodeStream @ 0x1406F5FA4 (KdpCopyCodeStream.c)
 */

__int64 __fastcall KdpRemoveBreakpoint(__int64 a1, _BYTE *a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  int v5; // ecx
  int v7; // eax

  KdpWriteInstructionBuffer(a2, *(_QWORD *)(a1 + 24), *(_BYTE *)(a1 + 36));
  v5 = KdpCopyCodeStream(
         (char *)(v3 & ~(unsigned __int64)*(unsigned __int8 *)(a1 + 37)),
         v4,
         *(unsigned __int8 *)(a1 + 36),
         5);
  if ( v5 < 0 )
    return 0LL;
  v7 = *(_DWORD *)(a1 + 32);
  if ( (v7 & 4) != 0 )
    *(_DWORD *)(a1 + 32) = v7 | 5;
  else
    *(_DWORD *)(a1 + 32) = 0;
  if ( v5 == 259 )
    *(_DWORD *)(a1 + 32) |= 9u;
  return 1LL;
}
