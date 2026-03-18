/*
 * XREFs of FsRtlInitializeEofLock @ 0x1400E2BE8
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

_QWORD *__fastcall FsRtlInitializeEofLock(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  memset(a1, 0, 0x28uLL);
  a1[3] = a2;
  result = a1 + 1;
  a1[2] = a1 + 1;
  a1[1] = a1 + 1;
  return result;
}
