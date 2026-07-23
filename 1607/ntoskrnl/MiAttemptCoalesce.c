/*
 * XREFs of MiAttemptCoalesce @ 0x1400BE530
 * Callers:
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     MiAdjustPteBins @ 0x1400BCBFC (MiAdjustPteBins.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x1400BE660 (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1400DD7C0 (RtlInterlockedSetClearRunEx.c)
 */

unsigned __int64 __fastcall MiAttemptCoalesce(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r8
  _QWORD *v13; // r9
  _QWORD *v14; // r8

  v4 = 512LL;
  if ( (*(_DWORD *)(a1 + 24) & 4) != 0 )
    v4 = 32LL;
  v5 = v4 - 1;
  result = v4 + a2;
  v7 = a2 & ~(v4 - 1);
  v8 = (~(v4 - 1) & (v4 + a2 + a3 - 1)) - v7;
  if ( v8 )
  {
    v9 = -(__int64)v7;
    do
    {
      v10 = v7 + v5;
      if ( v7 + v5 < *(_QWORD *)a1 )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = (_QWORD *)(v11 + 8 * (v7 >> 6));
        v13 = (_QWORD *)(v11 + 8 * (v10 >> 6));
        if ( v12 == v13 )
        {
          if ( ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v4) << v7) & *v12) == 0 )
            goto LABEL_11;
        }
        else if ( ((-1LL << v7) & *v12) == 0 )
        {
          v14 = v12 + 1;
          if ( v14 != v13 )
          {
            while ( !*v14 )
            {
              if ( ++v14 == v13 )
                goto LABEL_10;
            }
            goto LABEL_8;
          }
LABEL_10:
          if ( ((0xFFFFFFFFFFFFFFFFuLL >> (-1 - (unsigned __int8)v10)) & *v14) == 0 )
          {
LABEL_11:
            if ( (unsigned int)RtlInterlockedSetClearRunEx(a1, v7, v4) == 1 )
              MiReturnSystemPtes(a1, v7, v4, 0LL);
          }
        }
      }
LABEL_8:
      v7 += v4;
      result = v9 + v7;
    }
    while ( v9 + v7 < v8 );
  }
  return result;
}
