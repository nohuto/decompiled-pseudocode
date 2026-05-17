/*
 * XREFs of RtlpHpVsSubsegmentWalk @ 0x1800F376C
 * Callers:
 *     RtlpHpSegWalkHeap @ 0x1800F1664 (RtlpHpSegWalkHeap.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x180065AD4 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpVsSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, int *a6)
{
  _QWORD **v7; // rcx
  _QWORD *i; // rax
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  int v13; // eax
  __int64 v14; // r11
  int v15; // ecx

  if ( a3 == a2 )
  {
    v7 = (_QWORD **)(a1 + 24);
    for ( i = *v7; i != v7; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)a2 )
        goto LABEL_7;
    }
    if ( i != (_QWORD *)a2 )
      return 0LL;
LABEL_7:
    v9 = a2 + 48;
  }
  else
  {
    v9 = 16
       * (WORD1(RtlpLFHKey) ^ *(unsigned __int16 *)(a3 - 16 + 2) ^ ((unsigned __int64)(unsigned int)(a3 - 16) >> 16))
       + a3
       - 16;
  }
  v10 = a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL);
  if ( v9 >= v10 )
    return 0LL;
  while ( ((HIDWORD(RtlpLFHKey) ^ HIDWORD(v9) ^ HIDWORD(*(_QWORD *)v9)) & 0xFF0000) == 0
       || (*(_DWORD *)(v9 + 8) & 0x200) != 0 )
  {
    v9 += 16 * (WORD1(RtlpLFHKey) ^ *(unsigned __int16 *)(v9 + 2) ^ ((unsigned __int64)(unsigned int)v9 >> 16));
    if ( v9 >= v10 )
      return 0LL;
  }
  v11 = v9 + 16;
  v13 = RtlpHpVsChunkSize(v9 + 16, v10, a6);
  v15 = *(unsigned __int16 *)(v14 + 2);
  *a4 = v13;
  *a5 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v14) ^ v15) - v13 - 16;
  return v11;
}
