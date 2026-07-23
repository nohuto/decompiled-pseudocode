/*
 * XREFs of EtwpFlushBuffer @ 0x140491DBC
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1404F3420 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpPrepareHeader @ 0x140491E78 (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToLogfile @ 0x140491EFC (EtwpFlushBufferToLogfile.c)
 *     EtwpFlushBufferToRealtime @ 0x140492064 (EtwpFlushBufferToRealtime.c)
 *     EtwpSendSessionNotification @ 0x140494084 (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  int v4; // edi
  char v7; // bp

  v3 = -1073741823;
  v4 = -1073741823;
  v7 = a3 & 1;
  if ( (unsigned int)EtwpPrepareHeader() == -2147483614 && !v7 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 816) & 8) != 0 )
  {
    v3 = EtwpFlushBufferToRealtime(a1, a2);
    if ( v3 < 0 )
      EtwpSendSessionNotification(a1, 4LL);
  }
  if ( *(_QWORD *)(a1 + 800) )
  {
    v4 = EtwpFlushBufferToLogfile(a1, a2);
    if ( v4 < 0 )
      EtwpSendSessionNotification(a1, 3LL);
  }
  if ( v3 < 0 && v4 < 0 )
    return (unsigned int)v4;
  else
    return 0LL;
}
