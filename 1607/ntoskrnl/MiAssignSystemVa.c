/*
 * XREFs of MiAssignSystemVa @ 0x1407AAFAC
 * Callers:
 *     MiAssignTopLevelRanges @ 0x1407AACF4 (MiAssignTopLevelRanges.c)
 * Callees:
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB88 (RtlFindClearBitsAndSet.c)
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 */

__int64 __fastcall MiAssignSystemVa(ULONG NumberToFind, unsigned int a2)
{
  ULONG v4; // ebx
  int v5; // edi
  unsigned __int8 v6; // al
  ULONG ClearBitsAndSet; // eax
  __int64 v8; // rsi
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  BitMapHeader.SizeOfBitMap = 256;
  BitMapHeader.Buffer = (unsigned int *)&unk_140326CF0;
  if ( NumberToFind <= 2 )
  {
    v6 = ExGenRandom(1);
    v5 = 8;
    goto LABEL_5;
  }
  v4 = dword_140326D10;
  v5 = 16;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(&BitMapHeader, NumberToFind, v4);
    v8 = ClearBitsAndSet;
    if ( ClearBitsAndSet == -1 )
      break;
    if ( ClearBitsAndSet == v4 || !v5 )
    {
      dword_140326D10 = (unsigned __int8)(NumberToFind + ClearBitsAndSet + (unsigned int)ExGenRandom(1) % a2);
      return (v8 - 256) << 39;
    }
    --v5;
    RtlClearBits(&BitMapHeader, ClearBitsAndSet, NumberToFind);
    v6 = ExGenRandom(1);
LABEL_5:
    v4 = v6;
  }
  return 0LL;
}
