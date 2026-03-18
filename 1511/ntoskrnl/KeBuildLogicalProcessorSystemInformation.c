/*
 * XREFs of KeBuildLogicalProcessorSystemInformation @ 0x1404AD5FC
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeFindFirstSetLeftGroupAffinity @ 0x1400E7EC0 (KeFindFirstSetLeftGroupAffinity.c)
 */

__int64 __fastcall KeBuildLogicalProcessorSystemInformation(__int16 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int *v4; // r11
  unsigned int v5; // r12d
  __int16 v7; // r10
  unsigned int v8; // r14d
  unsigned int v9; // edi
  unsigned int v10; // r15d
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbp
  unsigned int v15; // ebp
  _QWORD *v16; // r12
  __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // r9d
  unsigned int v21; // eax
  _QWORD *v22; // rbx
  __int64 *v23; // rcx
  __int64 v24; // r8
  bool v25; // al
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+28h] [rbp-50h]
  unsigned int v30; // [rsp+88h] [rbp+10h]

  v27 = 0LL;
  v4 = a4;
  v28 = 0LL;
  v5 = a3;
  v30 = 0;
  v7 = a1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    do
    {
      v11 = KiProcessorBlock[v10];
      v12 = *(unsigned __int8 *)(v11 + 1616);
      if ( (_WORD)v12 == v7 )
      {
        v13 = *(_QWORD *)(v11 + 8 * v12 + 24608);
        v27 = v13;
        LOWORD(v28) = v12;
        if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)&v27) )
        {
          v9 += 32;
          if ( v9 > v5 )
          {
            v8 = -1073741820;
          }
          else
          {
            *(_QWORD *)a2 = v13;
            *(_DWORD *)(a2 + 8) = 3;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_BYTE *)(a2 + 16) = 0;
            a2 += 32LL;
          }
        }
        v14 = *(_QWORD *)(v11 + 24792);
        v27 = v14;
        if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)&v27) )
        {
          v25 = *(_QWORD *)(v11 + 1608) != v14;
          v9 += 32;
          if ( v9 > v5 )
          {
            v8 = -1073741820;
          }
          else
          {
            *(_QWORD *)a2 = v14;
            *(_DWORD *)(a2 + 8) = 0;
            *(_QWORD *)(a2 + 24) = 0LL;
            *(_QWORD *)(a2 + 16) = 0LL;
            *(_BYTE *)(a2 + 16) = v25;
            a2 += 32LL;
          }
        }
        v15 = 0;
        if ( *(_DWORD *)(v11 + 24508) )
        {
          v16 = (_QWORD *)(a2 + 16);
          while ( 1 )
          {
            v17 = *(_QWORD *)(v11 + 1608);
            v18 = v15;
            v19 = *(_QWORD *)(v11 + 8LL * v15 + 24816);
            if ( !v19 )
              goto LABEL_21;
            v27 = *(_QWORD *)(v11 + 8LL * v15 + 24816);
            v17 = v19;
            if ( *(_DWORD *)(v11 + 36) == (unsigned int)KeFindFirstSetLeftGroupAffinity((__int64)&v27) )
              break;
LABEL_9:
            if ( ++v15 >= *(_DWORD *)(v11 + 24508) )
            {
              v10 = v30;
              v5 = a3;
              goto LABEL_11;
            }
          }
          v18 = v15;
LABEL_21:
          v9 += 32;
          if ( v9 > a3 )
          {
            v8 = -1073741820;
          }
          else
          {
            *(_QWORD *)a2 = v17;
            *((_DWORD *)v16 - 2) = 2;
            v16[1] = 0LL;
            a2 += 32LL;
            *v16 = 0LL;
            *v16 = *(_QWORD *)(v11 + 12 * v18 + 24448);
            *((_DWORD *)v16 + 2) = *(_DWORD *)(v11 + 12 * v18 + 24456);
            v16 += 4;
          }
          goto LABEL_9;
        }
LABEL_11:
        v7 = a1;
      }
      v30 = ++v10;
    }
    while ( v10 < (unsigned int)KeNumberProcessors_0 );
    v4 = a4;
  }
  v20 = (unsigned __int16)KeNumberNodes;
  v21 = 0;
  if ( KeNumberNodes )
  {
    v22 = (_QWORD *)(a2 + 16);
    v23 = KeNodeBlock;
    do
    {
      v24 = *(_QWORD *)(*v23 + 136);
      if ( v24 && *(_WORD *)(*v23 + 144) == v7 )
      {
        v9 += 32;
        if ( v9 <= v5 )
        {
          *(v22 - 2) = v24;
          *((_DWORD *)v22 - 2) = 1;
          v22[1] = 0LL;
          *v22 = 0LL;
          *(_DWORD *)v22 = v21;
          v22 += 4;
        }
        else
        {
          v8 = -1073741820;
        }
      }
      ++v21;
      ++v23;
    }
    while ( v21 < v20 );
  }
  *v4 = v9;
  return v8;
}
