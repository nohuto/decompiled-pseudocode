/*
 * XREFs of MiScrubNodeLargePages @ 0x140664BE4
 * Callers:
 *     MiScrubNode @ 0x1401FE48C (MiScrubNode.c)
 * Callees:
 *     MiScrubNodeLargePageList @ 0x1401FBAD4 (MiScrubNodeLargePageList.c)
 */

__int64 __fastcall MiScrubNodeLargePages(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 *v4; // r11
  __int64 v5; // r13
  unsigned __int64 v6; // r12
  _QWORD *v7; // r10
  __int64 v8; // rbx
  __int64 result; // rax
  unsigned __int64 v10; // r8
  int v11; // ebp
  unsigned int v12; // r15d
  __int64 v13; // rdx
  _QWORD *v14; // rsi
  __int64 v15; // rax
  bool v16; // zf
  int v17; // r14d
  int v18; // edi
  __int64 i; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // [rsp+50h] [rbp-78h] BYREF
  unsigned __int64 v24; // [rsp+58h] [rbp-70h]
  __int64 v25; // [rsp+60h] [rbp-68h]
  __int64 v26; // [rsp+68h] [rbp-60h]
  __int64 v27; // [rsp+70h] [rbp-58h]
  __int64 v28; // [rsp+78h] [rbp-50h]
  __int64 v32; // [rsp+E8h] [rbp+20h]

  v32 = a4;
  v4 = MiLargePageSizes;
  v5 = *(_QWORD *)(a2 + 48) + 2184LL * a3;
  v6 = 0LL;
  v7 = (_QWORD *)v5;
  v8 = 3LL;
  do
  {
    result = *v7 + v7[1];
    if ( result )
    {
      result *= *v4;
      v6 += result;
    }
    v7 += 2;
    ++v4;
    --v8;
  }
  while ( v8 );
  if ( v6 )
  {
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    v24 = 0LL;
    v13 = 0LL;
    v14 = (_QWORD *)v5;
    v27 = 0LL;
    do
    {
      v15 = v14[1];
      v16 = *v14 + v15 == 0;
      result = *v14 + v15;
      v23 = result;
      if ( !v16 )
      {
        v17 = 0;
        result = 0LL;
        v26 = 0LL;
        do
        {
          v18 = 1;
          for ( i = 1LL; ; --i )
          {
            v25 = i;
            if ( !v18 && !v11 )
            {
              _InterlockedIncrement(&dword_1403277C8);
              v11 = 1;
            }
            v20 = 0;
            if ( MmNumberOfChannels )
            {
              v21 = i + 2 * (v13 + result);
              v28 = v21;
              do
              {
                v22 = (_QWORD *)(v5 + 16 * (v20 + 4 * v21 + 3));
                if ( (_QWORD *)*v22 != v22 )
                {
                  v23 = v6 - v10;
                  result = MiScrubNodeLargePageList(a2, a3, v12, v17, v18, v20, (unsigned __int64 *)&v23, a1, a4);
                  v10 = v23 + v24;
                  v24 = v10;
                  if ( v10 >= v6 || !(_DWORD)result )
                    goto LABEL_25;
                  a4 = v32;
                }
                v21 = v28;
                ++v20;
              }
              while ( v20 < MmNumberOfChannels );
              i = v25;
              result = v26;
              v13 = v27;
            }
            if ( !v18 )
              break;
            --v18;
          }
          ++result;
          ++v17;
          v26 = result;
        }
        while ( v17 <= 1 );
      }
      v13 += 2LL;
      ++v12;
      v14 += 2;
      v27 = v13;
    }
    while ( v12 < 3 );
LABEL_25:
    if ( v11 == 1 )
      _InterlockedDecrement(&dword_1403277C8);
  }
  return result;
}
