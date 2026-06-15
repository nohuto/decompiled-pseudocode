/*
 * XREFs of ?TsSessionDeleteNotify@@YAJPEAVTSSession@@PEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180009968
 * Callers:
 *     TS_AudioProtocolNotifyRundown @ 0x180007298 (TS_AudioProtocolNotifyRundown.c)
 *     s_tsUnregisterAudioProtocolNotification @ 0x180009890 (s_tsUnregisterAudioProtocolNotification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TsSessionDeleteNotify(struct TSSession *a1, struct AUDIOPROTOCOLNOTIFY *a2)
{
  _QWORD *v2; // rax
  unsigned int v4; // edi
  _QWORD **v5; // rbx
  __int64 *v6; // rcx
  struct AUDIOPROTOCOLNOTIFY *v7; // rsi
  __int64 v8; // rax
  _QWORD *v9; // rax
  HANDLE ProcessHeap; // rax
  HANDLE v11; // rax

  v2 = (_QWORD *)*((_QWORD *)a1 + 2);
  v4 = 0;
  do
  {
    v5 = (_QWORD **)v2;
    v6 = v2;
    if ( !v2 )
      return 1168;
    v7 = (struct AUDIOPROTOCOLNOTIFY *)v2[2];
    v2 = (_QWORD *)*v2;
  }
  while ( v7 != a2 );
  if ( !v6 )
    return 1168;
  v8 = *v6;
  if ( v6 == *((__int64 **)a1 + 2) )
    *((_QWORD *)a1 + 2) = v8;
  else
    *v5[1] = v8;
  v9 = v5[1];
  if ( v5 == *((_QWORD ***)a1 + 3) )
    *((_QWORD *)a1 + 3) = v9;
  else
    (*v5)[1] = v9;
  --*((_DWORD *)a1 + 8);
  *v5 = 0LL;
  v5[1] = 0LL;
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v5);
  v11 = GetProcessHeap();
  HeapFree(v11, 0, v7);
  return v4;
}
