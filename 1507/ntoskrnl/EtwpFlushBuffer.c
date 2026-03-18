/*
 * XREFs of EtwpFlushBuffer @ 0x1404A1FE0
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x1404A1BD0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpSendSessionNotification @ 0x14040F37C (EtwpSendSessionNotification.c)
 *     EtwpPrepareHeader @ 0x1404A2090 (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToRealtime @ 0x1404A218C (EtwpFlushBufferToRealtime.c)
 *     EtwpFlushBufferToLogfile @ 0x14054B75C (EtwpFlushBufferToLogfile.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, char a3)
{
  int v3; // esi
  int v4; // edi
  char v7; // bp
  signed int v8; // eax
  signed int v10; // eax

  v3 = -1073741823;
  v4 = -1073741823;
  v7 = a3 & 1;
  if ( (unsigned int)EtwpPrepareHeader() == -2147483614 && !v7 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 832) & 8) != 0 )
  {
    v8 = EtwpFlushBufferToRealtime(a1, a2);
    v3 = v8;
    if ( v8 < 0 )
      EtwpSendSessionNotification(a1, 4u, v8);
  }
  if ( *(_QWORD *)(a1 + 816) )
  {
    v10 = EtwpFlushBufferToLogfile(a1, a2);
    v4 = v10;
    if ( v10 < 0 )
      EtwpSendSessionNotification(a1, 3u, v10);
  }
  if ( v3 >= 0 || v4 >= 0 )
    return 0LL;
  else
    return (unsigned int)v4;
}
