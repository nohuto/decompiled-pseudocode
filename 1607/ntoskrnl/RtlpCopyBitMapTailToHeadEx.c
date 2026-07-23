/*
 * XREFs of RtlpCopyBitMapTailToHeadEx @ 0x14021322C
 * Callers:
 *     RtlCopyBitMapEx @ 0x140211E90 (RtlCopyBitMapEx.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

_BYTE *__fastcall RtlpCopyBitMapTailToHeadEx(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  size_t v4; // r8
  _BYTE *result; // rax

  v4 = a4 >> 3;
  result = (_BYTE *)(a4 & 7);
  if ( (a4 & 7) != 0 )
  {
    result = *(_BYTE **)(a1 + 8);
    *(_BYTE *)(v4 + *(_QWORD *)(a2 + 8)) = ((1 << (a4 & 7)) - 1) & result[v4] | *(_BYTE *)(v4 + *(_QWORD *)(a2 + 8)) & ~((1 << (a4 & 7)) - 1);
  }
  if ( v4 )
    return memmove(*(void **)(a2 + 8), *(const void **)(a1 + 8), v4);
  return result;
}
