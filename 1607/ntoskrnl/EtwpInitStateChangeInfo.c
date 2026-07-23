/*
 * XREFs of EtwpInitStateChangeInfo @ 0x14054C3D4
 * Callers:
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 * Callees:
 *     PsGetProcessSessionId @ 0x140013CD0 (PsGetProcessSessionId.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall EtwpInitStateChangeInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h]

  memset((void *)a2, 0, 0x5EuLL);
  LODWORD(v5) = *(_DWORD *)(a1 + 744);
  WORD2(v5) = PsGetProcessSessionId(a1);
  WORD3(v5) = MEMORY[0xFFFFF780000002C4];
  *((_QWORD *)&v5 + 1) = *(_QWORD *)(a1 + 776);
  *(_OWORD *)(a2 + 21) = v5;
  *((_QWORD *)&v5 + 1) = *(_QWORD *)(a1 + 1856) | ((unsigned __int64)MEMORY[0xFFFFF780000002C4] << 48);
  *(_OWORD *)(a2 + 2) = v5;
  *(_QWORD *)(a2 + 78) = _InterlockedIncrement64(&EtwpAppStateChangeSequenceNumber);
  result = *(_QWORD *)(a1 + 1856);
  *(_QWORD *)(a2 + 86) = result;
  return result;
}
