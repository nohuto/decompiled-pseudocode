/*
 * XREFs of KdpWriteCustomBreakpoint @ 0x1401D16D4
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpAddBreakpoint @ 0x1406F602C (KdpAddBreakpoint.c)
 */

__int64 __fastcall KdpWriteCustomBreakpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  LOBYTE(a4) = *(_BYTE *)(a1 + 37);
  LOBYTE(a3) = *(_BYTE *)(a1 + 36);
  v5 = *(_QWORD *)(a1 + 24);
  v10 = a1;
  v6 = *(_QWORD *)(a1 + 16);
  LOWORD(v9) = 56;
  v7 = KdpAddBreakpoint(v6, v5, a3, a4, v9, v10);
  *(_DWORD *)(a1 + 32) = v7;
  *(_DWORD *)(a1 + 8) = v7 == 0 ? 0xC0000001 : 0;
  return ((__int64 (__fastcall *)(__int64, int *, _QWORD, __int128 *))KdSendPacket)(2LL, &v9, 0LL, &KdpContext);
}
