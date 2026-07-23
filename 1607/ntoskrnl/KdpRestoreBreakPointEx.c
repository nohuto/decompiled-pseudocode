/*
 * XREFs of KdpRestoreBreakPointEx @ 0x1406F558C
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 *     KdpDeleteBreakpoint @ 0x1406F3704 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpRestoreBreakPointEx(__int64 a1, char **a2)
{
  unsigned int v4; // ecx
  int *v5; // rsi
  unsigned int i; // edi
  int v8; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v9; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+40h] [rbp-B8h]
  _BYTE v11[128]; // [rsp+50h] [rbp-A8h] BYREF

  v10 = a1;
  v4 = *(_DWORD *)(a1 + 16);
  v9 = 56;
  if ( *(unsigned __int16 *)a2 == 4LL * v4
    && (KdpCopyMemoryChunks(a2[1], (__int64)v11, 4 * v4, 0, 4, &v8), v8 == 4LL * *(unsigned int *)(a1 + 16)) )
  {
    *(_DWORD *)(a1 + 8) = 0;
    v5 = (int *)v11;
    for ( i = 0; i < *(_DWORD *)(a1 + 16); ++v5 )
    {
      if ( !KdpDeleteBreakpoint(*v5) )
        *(_DWORD *)(a1 + 8) = -1073741823;
      ++i;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, &v9, a2, &KdpContext);
}
