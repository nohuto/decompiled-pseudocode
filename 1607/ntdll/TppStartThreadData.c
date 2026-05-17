/*
 * XREFs of TppStartThreadData @ 0x18003B370
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003A1C0 (RtlpTpWorkCallback.c)
 *     TppExecuteWaitCallback @ 0x18003AD54 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18003AEA0 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003B1A0 (TppIopExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x18007E570 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x18007FD40 (RtlpTpWaitCallback.c)
 *     TppSimplepExecuteCallback @ 0x180081170 (TppSimplepExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180084260 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800965A0 (RtlpTpIoCallback.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall TppStartThreadData(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *result; // rax
  _DWORD *ThreadPoolData; // r10
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // r8
  _QWORD *v11; // r9

  result = NtCurrentTeb();
  ThreadPoolData = result->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v8 = ThreadPoolData[3];
    ++*((_QWORD *)ThreadPoolData + 2);
    v9 = ((_BYTE)v8 - 1) & 1;
    ThreadPoolData[3] = v9;
    v10 = 8LL * v9;
    v11 = &ThreadPoolData[v10 + 8];
    *(_QWORD *)&ThreadPoolData[v10 + 10] = a3;
    *(_QWORD *)&ThreadPoolData[v10 + 12] = a4;
    *v11 = a2;
    result = (struct _TEB *)MEMORY[0x7FFE03B0];
    *(_QWORD *)&ThreadPoolData[v10 + 14] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    *a1 = v11;
  }
  else
  {
    *a1 = 0LL;
  }
  return result;
}
