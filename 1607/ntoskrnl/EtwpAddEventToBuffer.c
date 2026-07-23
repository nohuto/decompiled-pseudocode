/*
 * XREFs of EtwpAddEventToBuffer @ 0x140493A94
 * Callers:
 *     EtwpAddDebugInfoEvents @ 0x14049393C (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1406A6750 (EtwpAddBinaryInfoEvents.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

__int64 __fastcall EtwpAddEventToBuffer(
        __int64 a1,
        __int16 a2,
        _QWORD *a3,
        const void *a4,
        unsigned int Size,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int v8; // r10d
  __int64 v9; // rax
  __int64 v10; // rcx

  v8 = (Size + 23) & 0xFFFFFFF8;
  *a7 = v8;
  if ( v8 > a6 )
    return 3221225507LL;
  v9 = *(unsigned int *)(a1 + 48);
  v10 = v9 + a1;
  *(_DWORD *)(a1 + 48) = v8 + v9;
  *(_WORD *)(v10 + 6) = a2;
  *(_WORD *)(v10 + 4) = Size + 16;
  *(_DWORD *)v10 = -1072627710;
  *(_QWORD *)(v10 + 8) = *a3;
  memmove((void *)(v10 + 16), a4, Size);
  return 0LL;
}
