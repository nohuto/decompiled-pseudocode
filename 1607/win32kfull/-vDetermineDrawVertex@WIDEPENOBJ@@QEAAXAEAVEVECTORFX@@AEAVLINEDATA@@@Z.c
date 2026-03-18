/*
 * XREFs of ?vDetermineDrawVertex@WIDEPENOBJ@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@@@Z @ 0x1C0012DEC
 * Callers:
 *     ?vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z @ 0x1C00138C8 (-vVecDrawCompute@WIDENER@@AEAAXAEAVLINEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDEPENOBJ::vDetermineDrawVertex(WIDEPENOBJ *this, struct EVECTORFX *a2, struct LINEDATA *a3)
{
  _DWORD *v4; // r10
  __int64 v5; // r8
  BOOL v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rbx
  _DWORD *i; // r11
  _DWORD *v10; // r8
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r10
  bool v15; // sf

  v4 = *(_DWORD **)(*((_QWORD *)this + 1) + 32LL);
  *((_QWORD *)a3 + 1) = v4;
  if ( *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) == *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) )
  {
    v5 = *(int *)a2 * (__int64)(v4[9] - v4[7]) - *((int *)a2 + 1) * (__int64)(v4[8] - v4[6]);
    *((_QWORD *)a3 + 3) = v5;
    v6 = v5 < 0;
    *((_QWORD *)a3 + 4) = -v5;
  }
  else
  {
    while ( 1 )
    {
      v14 = *((_QWORD *)a3 + 1);
      v15 = *(int *)a2 * (__int64)(*(_DWORD *)(v14 + 36) - *(_DWORD *)(v14 + 28))
          - *((int *)a2 + 1) * (__int64)(*(_DWORD *)(v14 + 32) - *(_DWORD *)(v14 + 24)) < 0;
      *((_QWORD *)a3 + 3) = *(int *)a2 * (__int64)(*(_DWORD *)(v14 + 36) - *(_DWORD *)(v14 + 28))
                          - *((int *)a2 + 1) * (__int64)(*(_DWORD *)(v14 + 32) - *(_DWORD *)(v14 + 24));
      v6 = v15;
      v15 = *(int *)a2
          * (__int64)(*(_DWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v14 + 20) - 2) + 36)
                    - *(_DWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v14 + 20) - 2) + 28))
          - *((int *)a2 + 1)
          * (__int64)(*(_DWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v14 + 20) - 2) + 32)
                    - *(_DWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v14 + 20) - 2) + 24)) < 0;
      *((_QWORD *)a3 + 4) = *(int *)a2
                          * (__int64)(*(_DWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v14 + 20) - 2) + 36)
                                    - *(_DWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v14 + 20) - 2) + 28))
                          - *((int *)a2 + 1)
                          * (__int64)(*(_DWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v14 + 20) - 2) + 32)
                                    - *(_DWORD *)(v14 + 8LL * (unsigned int)(*(_DWORD *)(v14 + 20) - 2) + 24));
      if ( v6 != v15 || !*(_QWORD *)v14 )
        break;
      *((_QWORD *)a3 + 1) = *(_QWORD *)v14;
    }
  }
  if ( v6 )
    *(_DWORD *)a3 |= 1u;
  else
    *(_DWORD *)a3 &= ~1u;
  v7 = *((_QWORD *)a3 + 1);
  v8 = v7 + 24;
  for ( i = (_DWORD *)(v7 + 8 * ((unsigned int)(*(_DWORD *)(v7 + 20) - 2) + 3LL)); ; v8 += 8 * (((__int64)i - v8) >> 4) )
  {
    while ( 1 )
    {
      v10 = (_DWORD *)(v8 + 8 * (((__int64)i - v8) >> 4));
      v11 = *(int *)a2 * (__int64)(v10[3] - v10[1]) - *((int *)a2 + 1) * (__int64)(v10[2] - *v10);
      if ( v6 == v11 < 0 )
        break;
      *((_QWORD *)a3 + 4) = v11;
      if ( v10 == (_DWORD *)(v8 + 8) )
      {
        *((_QWORD *)a3 + 2) = v10;
        goto LABEL_9;
      }
      i = (_DWORD *)(v8 + 8 * (((__int64)i - v8) >> 4));
    }
    *((_QWORD *)a3 + 3) = v11;
    if ( i == v10 + 2 )
      break;
  }
  *((_QWORD *)a3 + 2) = i;
LABEL_9:
  v12 = *((_QWORD *)a3 + 3);
  if ( v12 < 0 )
    v12 = -v12;
  *((_QWORD *)a3 + 3) = v12;
  v13 = *((_QWORD *)a3 + 4);
  if ( v13 < 0 )
    v13 = -v13;
  *((_QWORD *)a3 + 4) = v13;
}
