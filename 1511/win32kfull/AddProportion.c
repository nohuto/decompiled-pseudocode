/*
 * XREFs of AddProportion @ 0x1C00B7AAC
 * Callers:
 *     itrp_ALIGNRP @ 0x1C00B4C90 (itrp_ALIGNRP.c)
 *     itrp_MDRP @ 0x1C00B5EF0 (itrp_MDRP.c)
 *     itrp_IP @ 0x1C00B65B0 (itrp_IP.c)
 *     itrp_ISECT @ 0x1C00B8460 (itrp_ISECT.c)
 * Callees:
 *     IndirectlyDependsOn @ 0x1C00B7E10 (IndirectlyDependsOn.c)
 */

void __fastcall AddProportion(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  __int16 v6; // si
  __int64 v7; // r10
  int v8; // ecx
  __int64 v9; // r11
  __int16 v10; // ax
  __int16 v11; // cx
  __int64 v12; // rdx
  __int16 v13; // ax
  __int16 v14; // cx
  __int64 v15; // rdx
  unsigned int v16; // ebp
  unsigned int v17; // ebp

  if ( a3 < 0 )
    return;
  v6 = a3;
  v7 = a4;
  v8 = *(__int16 *)(*(_QWORD *)(a2 + 64) + 2LL * *(__int16 *)(a2 + 80) - 2) + 5;
  if ( a3 >= v8 || a5 < 0 || a5 >= v8 || a4 < 0 || a3 == a5 || a3 == a4 || a5 == a4 || a4 >= v8 )
    return;
  v9 = *(_QWORD *)(a2 + 104);
  v10 = *(_WORD *)(v9 + 12LL * a3);
  if ( v10 != -1 )
  {
    v11 = *(_WORD *)(v9 + 12LL * a3 + 2);
    v12 = (unsigned int)v10;
    if ( v11 == -1 )
    {
      if ( (_DWORD)v12 == a4 )
        goto LABEL_30;
    }
    else
    {
      if ( (_DWORD)v12 == a4 )
        goto LABEL_30;
      v16 = v11;
      if ( v11 == a4 || (unsigned int)IndirectlyDependsOn(a2, v12, (unsigned int)a4, 98LL) )
        goto LABEL_30;
      v12 = v16;
    }
    if ( (unsigned int)IndirectlyDependsOn(a2, v12, (unsigned int)v7, 98LL) )
      goto LABEL_30;
  }
  v13 = *(_WORD *)(v9 + 12LL * a5);
  if ( v13 == -1 )
    goto LABEL_18;
  v14 = *(_WORD *)(v9 + 12LL * a5 + 2);
  v15 = (unsigned int)v13;
  if ( v14 == -1 )
  {
    if ( (_DWORD)v15 != (_DWORD)v7 )
      goto LABEL_17;
LABEL_30:
    *(_WORD *)(v9 + 12 * v7 + 6) |= 1u;
    return;
  }
  if ( (_DWORD)v15 == (_DWORD)v7 )
    goto LABEL_30;
  v17 = v14;
  if ( v14 == (_DWORD)v7 || (unsigned int)IndirectlyDependsOn(a2, v15, (unsigned int)v7, 98LL) )
    goto LABEL_30;
  v15 = v17;
LABEL_17:
  if ( (unsigned int)IndirectlyDependsOn(a2, v15, (unsigned int)v7, 98LL) )
    goto LABEL_30;
LABEL_18:
  if ( *(_WORD *)(v9 + 12 * v7) == 0xFFFF && *(_WORD *)(v9 + 12 * v7 + 2) == 0xFFFF )
  {
    *(_WORD *)(v9 + 12 * v7) = v6;
    *(_WORD *)(*(_QWORD *)(a2 + 104) + 12 * v7 + 2) = a5;
  }
}
