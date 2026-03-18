/*
 * XREFs of EtwpFlushBuffer @ 0x1404CACEC
 * Callers:
 *     EtwpFlushActiveBuffers @ 0x140471024 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpPrepareHeader @ 0x1404CAD9C (EtwpPrepareHeader.c)
 *     EtwpFlushBufferToRealtime @ 0x1404CAE18 (EtwpFlushBufferToRealtime.c)
 *     EtwpFlushBufferToLogfile @ 0x1404CB248 (EtwpFlushBufferToLogfile.c)
 *     EtwpSendSessionNotification @ 0x1404CC658 (EtwpSendSessionNotification.c)
 */

__int64 __fastcall EtwpFlushBuffer(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  int v4; // edi
  char v7; // bp
  int v8; // eax
  int v10; // eax

  v3 = -1073741823;
  v4 = -1073741823;
  v7 = a3 & 1;
  if ( (unsigned int)EtwpPrepareHeader(a1, a2, a3) == -2147483614 && !v7 )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 832) & 8) != 0 )
  {
    v8 = EtwpFlushBufferToRealtime(a1, a2);
    v3 = v8;
    if ( v8 < 0 )
      EtwpSendSessionNotification(a1, 4LL, (unsigned int)v8);
  }
  if ( *(_QWORD *)(a1 + 816) )
  {
    v10 = EtwpFlushBufferToLogfile(a1, a2);
    v4 = v10;
    if ( v10 < 0 )
      EtwpSendSessionNotification(a1, 3LL, (unsigned int)v10);
  }
  if ( v3 >= 0 || v4 >= 0 )
    return 0LL;
  else
    return (unsigned int)v4;
}
