/*
 * XREFs of RtlpHpVsSubsegmentWalk @ 0x18004E288
 * Callers:
 *     RtlpHpSegWalkHeap @ 0x18004DEEC (RtlpHpSegWalkHeap.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x18004BDE8 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpVsSubsegmentWalk(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5, int *a6)
{
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r11
  int v12; // ecx
  _QWORD **v14; // rcx
  _QWORD *i; // rax

  if ( a3 == a2 )
  {
    v14 = (_QWORD **)(a1 + 24);
    for ( i = *v14; i != v14; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)a2 )
        goto LABEL_13;
    }
    if ( i == (_QWORD *)a2 )
    {
LABEL_13:
      v7 = a2 + 48;
      goto LABEL_3;
    }
    return 0LL;
  }
  v7 = 16 * (WORD1(RtlpLFHKey) ^ *(unsigned __int16 *)(a3 - 16 + 2) ^ ((unsigned __int64)(unsigned int)(a3 - 16) >> 16))
     + a3
     - 16;
LABEL_3:
  v8 = a2 + 16 * (*(unsigned __int16 *)(a2 + 32) + 3LL);
  if ( v7 >= v8 )
    return 0LL;
  while ( ((HIDWORD(RtlpLFHKey) ^ HIDWORD(v7) ^ HIDWORD(*(_QWORD *)v7)) & 0xFF0000) == 0
       || (*(_DWORD *)(v7 + 8) & 0x200) != 0 )
  {
    v7 += 16 * (WORD1(RtlpLFHKey) ^ *(unsigned __int16 *)(v7 + 2) ^ ((unsigned __int64)(unsigned int)v7 >> 16));
    if ( v7 >= v8 )
      return 0LL;
  }
  v9 = v7 + 16;
  v10 = RtlpHpVsChunkSize(v7 + 16, v8, a6);
  v12 = *(unsigned __int16 *)(v11 + 2);
  *a4 = v10;
  *a5 = 16 * (WORD1(RtlpLFHKey) ^ WORD1(v11) ^ v12) - v10 - 16;
  return v9;
}
