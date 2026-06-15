/*
 * XREFs of ?AddHead@?$TList@UAUDIOPROTOCOLNOTIFY@@@@QEAAPEAXPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x180009F68
 * Callers:
 *     s_tsRegisterAudioProtocolNotification @ 0x180009E70 (s_tsRegisterAudioProtocolNotification.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall TList<AUDIOPROTOCOLNOTIFY>::AddHead(__int64 a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // r8
  _QWORD *result; // rax

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v6 = v5;
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
    return 0LL;
  v6[2] = a2;
  *v6 = *(_QWORD *)a1;
  v6[1] = 0LL;
  if ( *(_QWORD *)a1 )
    *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v6;
  else
    *(_QWORD *)(a1 + 8) = v6;
  ++*(_DWORD *)(a1 + 16);
  result = v6;
  *(_QWORD *)a1 = v6;
  return result;
}
