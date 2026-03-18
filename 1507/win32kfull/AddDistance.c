/*
 * XREFs of AddDistance @ 0x1C00BF504
 * Callers:
 *     itrp_MSIRP @ 0x1C00BB560 (itrp_MSIRP.c)
 *     itrp_ALIGNRP @ 0x1C00BC0A0 (itrp_ALIGNRP.c)
 *     itrp_MDRP @ 0x1C00BD810 (itrp_MDRP.c)
 *     itrp_MIRP @ 0x1C00BE9A0 (itrp_MIRP.c)
 * Callees:
 *     IndirectlyDependsOn @ 0x1C00BF6B0 (IndirectlyDependsOn.c)
 */

void __fastcall AddDistance(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v6; // r11d
  __int64 v7; // r10
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int16 v11; // ax
  __int16 v12; // cx
  __int64 v13; // rdx
  __int64 v14; // rdx
  int i; // r8d
  __int64 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // ebp

  if ( a3 < 0 )
    return;
  v6 = a3;
  v7 = a4;
  v8 = *(__int16 *)(*(_QWORD *)(a2 + 64) + 2LL * *(__int16 *)(a2 + 80) - 2) + 5;
  if ( a3 >= v8 || a4 < 0 || a3 == a4 || a4 >= v8 )
    return;
  v9 = *(_QWORD *)(a2 + 104);
  v10 = 3LL * a3;
  v11 = *(_WORD *)(v9 + 12LL * a3);
  if ( v11 == -1 )
    goto LABEL_10;
  v12 = *(_WORD *)(v9 + 12LL * a3 + 2);
  v13 = (unsigned int)v11;
  if ( v12 == -1 )
  {
    if ( (_DWORD)v13 == a4 )
      goto LABEL_28;
  }
  else
  {
    if ( (_DWORD)v13 == a4 )
      goto LABEL_28;
    v18 = v12;
    if ( v12 == a4 || (unsigned int)IndirectlyDependsOn(a2, v13, (unsigned int)a4, 98LL) )
      goto LABEL_28;
    v13 = v18;
  }
  if ( !(unsigned int)IndirectlyDependsOn(a2, v13, (unsigned int)v7, 98LL) )
  {
LABEL_10:
    v14 = 12 * v7;
    if ( *(_WORD *)(12 * v7 + v9) == 0xFFFF )
    {
      for ( i = *(__int16 *)(v9 + 4 * v10); i != -1; i = *(__int16 *)(v9 + 12LL * i) )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * v6) != *(_DWORD *)(*(_QWORD *)(a2 + 32) + 4LL * i) )
          break;
        v6 = i;
      }
      *(_WORD *)(v14 + v9) = v6;
      *(_WORD *)(*(_QWORD *)(a2 + 104) + v14 + 2) = -1;
    }
    goto LABEL_14;
  }
LABEL_28:
  v14 = 12 * v7;
  *(_WORD *)(12 * v7 + v9 + 6) |= 1u;
LABEL_14:
  if ( a5 == 1 )
  {
    v16 = *(_QWORD *)(a2 + 104);
    if ( *(_WORD *)(v16 + 12LL * v6 + 4) == 0xFFFF && *(__int16 *)(v14 + v16 + 4) != v6 )
    {
      v17 = *(__int16 *)(v16 + 12LL * v6);
      if ( (_DWORD)v17 != -1 && *(__int16 *)(v16 + 12 * v17 + 4) == v6 )
        *(_WORD *)(v14 + v16 + 6) |= 1u;
      else
        *(_WORD *)(v16 + 12LL * v6 + 4) = v7;
    }
  }
}
