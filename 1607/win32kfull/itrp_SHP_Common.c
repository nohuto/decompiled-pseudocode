/*
 * XREFs of itrp_SHP_Common @ 0x1C00CDC94
 * Callers:
 *     itrp_SHP @ 0x1C00CF3F0 (itrp_SHP.c)
 *     itrp_SHPIX @ 0x1C00D0490 (itrp_SHPIX.c)
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     IndirectlyDependsOn @ 0x1C00CFDA4 (IndirectlyDependsOn.c)
 */

__int64 __fastcall itrp_SHP_Common(__int64 a1, int a2, char a3, int a4, int a5)
{
  int v5; // r10d
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // r15
  int v9; // r13d
  __int64 v10; // rdi
  int v11; // r11d
  _WORD *v12; // r8
  __int64 v13; // rbx
  unsigned __int16 v14; // ax
  unsigned __int16 v15; // cx
  int v16; // edx
  int v17; // ebp
  int v18; // esi
  int v19; // eax
  __int16 v20; // ax
  __int64 result; // rax
  int v22; // esi
  int v23; // ecx
  __int64 v24; // r8
  int v25; // edx
  __int16 v26; // r8
  bool v27; // zf

  v5 = 0;
  v6 = qword_1C03294B0;
  v7 = a2;
  v8 = qword_1C03294B0;
  v9 = dword_1C0329500 + 1;
  if ( dword_1C0329500 == -1 )
  {
LABEL_23:
    result = a1;
    dword_1C0329500 = v5;
    return result;
  }
  v10 = qword_1C03294E0;
  v11 = 1;
  while ( 1 )
  {
    qword_1C03294C8 -= 4LL;
    v12 = *(_WORD **)(v10 + 344);
    v13 = *(int *)qword_1C03294C8;
    v14 = v12[4];
    v15 = v12[6];
    v16 = v14;
    if ( v14 <= v15 )
      v16 = v15;
    if ( v16 <= v11 )
      v17 = v11;
    else
      v17 = v14 <= v15 ? v15 : v14;
    if ( qword_1C03294D8 == v6 )
      break;
    if ( (int)v13 >= *(_DWORD *)(v10 + 440) || (int)v13 < 0 )
      goto LABEL_56;
    v18 = 4;
LABEL_12:
    v19 = CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND(&LocalGS, v6);
    v5 = 0;
    if ( !v19 )
      goto LABEL_56;
    v20 = *(_WORD *)(v6 + 80);
    v11 = 1;
    if ( v20 >= 1 && v20 <= v17 && (int)v13 >= *(__int16 *)(*(_QWORD *)(v6 + 64) + 2LL * (v20 - 1)) + v18 + 1 )
      goto LABEL_56;
    if ( word_1C0329554 )
    {
      if ( v8 != qword_1C03294D8 && *(_BYTE *)(v10 + 333) == 2 && (*(_BYTE *)(v10 + 452) & 2) != 0 )
      {
        v22 = v7;
        if ( (int)v7 >= 0 )
        {
          v23 = *(__int16 *)(*(_QWORD *)(v8 + 64) + 2LL * (*(__int16 *)(v8 + 80) - 1)) + 5;
          if ( (int)v7 < v23 && (int)v13 < v23 && (_DWORD)v7 != (_DWORD)v13 )
          {
            if ( (unsigned int)IndirectlyDependsOn(v8, (unsigned int)v7, (unsigned int)v13, 100LL) )
            {
              *(_WORD *)(*(_QWORD *)(v8 + 104) + 12 * v13 + 6) |= v11;
              v10 = qword_1C03294E0;
              v6 = qword_1C03294B0;
            }
            else
            {
              v24 = *(_QWORD *)(v8 + 104);
              if ( *(_WORD *)(v24 + 12 * v13) == 0xFFFF )
              {
                v25 = *(__int16 *)(v24 + 12 * v7);
                if ( v25 != -1 )
                {
                  do
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(v8 + 32) + 4LL * v22) != *(_DWORD *)(*(_QWORD *)(v8 + 32) + 4LL * v25) )
                      break;
                    v22 = v25;
                    v25 = *(__int16 *)(v24 + 12LL * v25);
                  }
                  while ( v25 != -1 );
                  v5 = 0;
                }
                *(_WORD *)(v24 + 12 * v13) = v22;
                *(_WORD *)(*(_QWORD *)(v8 + 104) + 12 * v13 + 2) = -1;
                v10 = qword_1C03294E0;
                v6 = qword_1C03294B0;
              }
              v11 = 1;
            }
          }
        }
      }
    }
    if ( a3 == (_BYTE)v5 || (v26 = *(_WORD *)(v10 + 454), (v26 & 0x10) == 0) )
    {
LABEL_18:
      if ( (_WORD)dword_1C03294BC != (_WORD)v5 )
      {
        *(_DWORD *)(*(_QWORD *)v8 + 4 * v13) += a4;
        *(_BYTE *)(*(_QWORD *)(v8 + 72) + v13) |= v11;
        v10 = qword_1C03294E0;
        v6 = qword_1C03294B0;
      }
      if ( HIWORD(dword_1C03294BC) != (_WORD)v5 )
      {
        *(_DWORD *)(*(_QWORD *)(v8 + 8) + 4 * v13) += a5;
        *(_BYTE *)(*(_QWORD *)(v8 + 72) + v13) |= 2u;
        v10 = qword_1C03294E0;
        v6 = qword_1C03294B0;
      }
      goto LABEL_22;
    }
    if ( (*(_BYTE *)(v10 + 452) & 4) != 0 )
    {
      if ( dword_1C03294B8 != __PAIR32__(v5, 0x4000) )
        goto LABEL_22;
      if ( *(_BYTE *)(v10 + 341) != (_BYTE)v5 )
        goto LABEL_18;
      v27 = (!_bittest16(&v26, v5) & *(_BYTE *)(v13 + *(_QWORD *)(v6 + 72)) & (unsigned __int8)v11) == 0;
    }
    else
    {
      if ( dword_1C03294B8 != ((unsigned __int16)v5 | 0x40000000) )
        goto LABEL_22;
      if ( *(_BYTE *)(v10 + 341) != (_BYTE)v5 )
        goto LABEL_18;
      v27 = (!_bittest16(&v26, v11) & (*(_BYTE *)(v13 + *(_QWORD *)(v6 + 72)) >> 1) & (unsigned __int8)v11) == 0;
    }
    if ( !v27 )
      goto LABEL_18;
LABEL_22:
    v9 -= v11;
    if ( !v9 )
      goto LABEL_23;
  }
  if ( (int)v13 < (unsigned __int16)v12[8] && (int)v13 >= 0 )
  {
    v18 = v5;
    goto LABEL_12;
  }
LABEL_56:
  result = qword_1C0329538;
  dword_1C0329530 = 4370;
  return result;
}
