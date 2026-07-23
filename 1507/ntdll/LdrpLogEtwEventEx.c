/*
 * XREFs of LdrpLogEtwEventEx @ 0x1800BD3DC
 * Callers:
 *     LdrpLogDllStateEx2 @ 0x180036BEC (LdrpLogDllStateEx2.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 *     LdrpEventAddUnicodeString @ 0x1800BCF8C (LdrpEventAddUnicodeString.c)
 */

int __fastcall LdrpLogEtwEventEx(
        __int16 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6)
{
  unsigned int v8; // edi
  _WORD *Heap; // rax
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-50h] BYREF
  _BYTE Fields[6]; // [rsp+28h] [rbp-48h] BYREF
  __int16 v14; // [rsp+2Eh] [rbp-42h]
  __int64 v15; // [rsp+48h] [rbp-28h]
  __int16 v16; // [rsp+50h] [rbp-20h]
  PVOID BaseAddress; // [rsp+58h] [rbp-18h]

  BaseAddress = 0LL;
  v8 = *a6 + 4 + *a5;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
  BaseAddress = Heap;
  if ( Heap )
  {
    v14 = a1;
    if ( a2 != -1 )
    {
      v15 = a2;
      v16 = 0;
      LdrpEventAddUnicodeString((__int64)a5, Heap, v8, &v12);
      v10 = v12 + 8;
      LdrpEventAddUnicodeString((__int64)a6, (_WORD *)BaseAddress + ((unsigned __int64)v12 >> 1), v8 - v12, &v12);
      NtTraceEvent((HANDLE)MEMORY[0x7FFE0384], 0x402u, v10 + v12, Fields);
      LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    }
  }
  return (int)Heap;
}
