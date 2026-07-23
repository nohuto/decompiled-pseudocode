/*
 * XREFs of KdpWriteBreakPointEx @ 0x1406F5BD0
 * Callers:
 *     KdpSendWaitContinue @ 0x1406F2744 (KdpSendWaitContinue.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KdpCopyMemoryChunks @ 0x1406F2BA0 (KdpCopyMemoryChunks.c)
 *     KdpDeleteBreakpoint @ 0x1406F3704 (KdpDeleteBreakpoint.c)
 *     KdpAddBreakpoint @ 0x1406F602C (KdpAddBreakpoint.c)
 */

__int64 __fastcall KdpWriteBreakPointEx(_DWORD *a1, char **a2)
{
  unsigned int v4; // ecx
  __int64 v5; // r8
  unsigned int v6; // r14d
  int *v7; // rdi
  unsigned int v8; // r14d
  _BYTE *i; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-E0h]
  __int64 v13; // [rsp+28h] [rbp-D8h]
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v15; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD *v16; // [rsp+40h] [rbp-C0h]
  _BYTE v17[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v18; // [rsp+58h] [rbp-A8h] BYREF

  v16 = a1;
  v4 = a1[4];
  v15 = 56;
  if ( *(unsigned __int16 *)a2 == 16LL * v4
    && (KdpCopyMemoryChunks(a2[1], (__int64)v17, 16 * v4, 0, 4, &v14), v14 == 16LL * (unsigned int)a1[4]) )
  {
    a1[2] = 0;
    v6 = 0;
    if ( a1[4] )
    {
      v7 = (int *)&v18;
      do
      {
        if ( *v7 )
        {
          if ( !KdpDeleteBreakpoint(*v7) )
            a1[2] = -1073741823;
          *v7 = 0;
        }
        ++v6;
        v7 += 4;
      }
      while ( v6 < a1[4] );
    }
    v8 = 0;
    for ( i = v17; v8 < a1[4]; i += 16 )
    {
      if ( *(_QWORD *)i )
      {
        LOBYTE(v5) = 1;
        v10 = KdpAddBreakpoint(*(_QWORD *)i, 204LL, v5, 0LL, v12, v13);
        *((_DWORD *)i + 2) = v10;
        if ( !v10 )
          a1[2] = -1073741823;
      }
      ++v8;
    }
    KdpCopyMemoryChunks(a2[1], (__int64)v17, 16 * a1[4], 0, 5, &v14);
    KdSendPacket(2LL, &v15, a2, &KdpContext);
    return (unsigned int)a1[5];
  }
  else
  {
    a1[2] = -1073741823;
    KdSendPacket(2LL, &v15, a2, &KdpContext);
    return (unsigned int)a1[2];
  }
}
