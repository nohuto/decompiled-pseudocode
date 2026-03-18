/*
 * XREFs of EtwpTraceFileIo @ 0x14025E55C
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     EtwpFileProvTrace @ 0x14025D960 (EtwpFileProvTrace.c)
 */

__int64 __fastcall EtwpTraceFileIo(
        struct _EVENT_DATA_DESCRIPTOR *a1,
        ULONG a2,
        unsigned int a3,
        __int16 a4,
        const GUID *a5)
{
  int v8; // esi
  __int64 result; // rax

  v8 = (int)a1;
  if ( (dword_1403277E0 & 0x6000000) != 0 )
    EtwpFileProvTrace(a1, a2, a4, a5);
  result = 1102LL;
  if ( a4 != 1102 )
    return (__int64)EtwTraceKernelEvent(v8, a2, a3, a4, 5249283);
  return result;
}
