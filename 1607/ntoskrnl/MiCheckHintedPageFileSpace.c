/*
 * XREFs of MiCheckHintedPageFileSpace @ 0x1400B4A18
 * Callers:
 *     MiFindFreePageFileSpace @ 0x1400B4424 (MiFindFreePageFileSpace.c)
 * Callees:
 *     RtlLengthCurrentClearRunForward @ 0x14001A510 (RtlLengthCurrentClearRunForward.c)
 */

__int64 __fastcall MiCheckHintedPageFileSpace(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 result; // rax
  unsigned int v10; // eax

  v4 = a2;
  v6 = *(_QWORD *)(a1 + 112);
  if ( _bittest64(*(const signed __int64 **)(v6 + 32), v4) )
    return 0LL;
  if ( _bittest64(*(const signed __int64 **)(v6 + 16), v4) )
    return 0LL;
  v10 = RtlLengthCurrentClearRunForward(v6 + 24, v4, a3);
  if ( v10 != a3 && (a4 & 0x40) == 0 )
    return 0LL;
  result = RtlLengthCurrentClearRunForward(*(_QWORD *)(a1 + 112) + 8LL, v4, v10);
  if ( (_DWORD)result != a3 && (a4 & 0x40) == 0 )
    return 0LL;
  return result;
}
