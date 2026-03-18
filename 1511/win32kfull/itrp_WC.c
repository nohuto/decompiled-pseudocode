/*
 * XREFs of itrp_WC @ 0x1C013C8E0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeProject @ 0x1C00B652C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00B7030 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 *     InvokeMovePoint @ 0x1C00B80C8 (InvokeMovePoint.c)
 */

__int64 __fastcall itrp_WC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // esi
  int v5; // r15d
  _WORD *v6; // rdx
  __int64 v7; // rdi
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  int v10; // r9d
  int v11; // ebp
  __int16 v12; // cx
  int v13; // eax

  if ( (qword_1C0323E30 ^ *(_QWORD *)qword_1C0323E30 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323E30 + 424)) != *(_QWORD *)(qword_1C0323E30 + 432)
    || (v2 = qword_1C0323E18, (unsigned __int64)((qword_1C0323E18 - *(_QWORD *)qword_1C0323E30) >> 2) < 2) )
  {
    dword_1C0323E80 = 4368;
    return qword_1C0323E88;
  }
  v3 = qword_1C0323E00;
  v4 = 4;
  qword_1C0323E18 -= 4LL;
  v5 = *(_DWORD *)(v2 - 4);
  qword_1C0323E18 = v2 - 8;
  v6 = *(_WORD **)(qword_1C0323E30 + 344);
  v7 = *(int *)(v2 - 8);
  v8 = v6[4];
  v9 = v6[6];
  v10 = v8;
  if ( v8 <= v9 )
    v10 = v9;
  if ( v10 <= 1 )
  {
    v11 = 1;
  }
  else if ( v8 <= v9 )
  {
    v11 = v9;
  }
  else
  {
    v11 = v8;
  }
  if ( qword_1C0323E28 == qword_1C0323E00 )
  {
    if ( (int)v7 >= (unsigned __int16)v6[8] || (int)v7 < 0 )
      goto LABEL_23;
    v4 = 0;
  }
  else if ( (int)v7 >= *(_DWORD *)(qword_1C0323E30 + 440) || (int)v7 < 0 )
  {
    goto LABEL_23;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C0323E00)
    || (v12 = *(_WORD *)(v3 + 80), v12 >= 1)
    && v12 <= v11
    && (int)v7 >= v4 + *(__int16 *)(*(_QWORD *)(v3 + 64) + 2LL * v12 - 2) + 1 )
  {
LABEL_23:
    dword_1C0323E80 = 4370;
    return qword_1C0323E88;
  }
  v13 = InvokeProject(dword_1C0323E60, *(_DWORD *)(*(_QWORD *)v3 + 4 * v7), *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v7));
  InvokeMovePoint(dword_1C0323E5C, (_QWORD *)v3, v7, v5 - v13);
  if ( v3 == qword_1C0323E28 )
  {
    *(_DWORD *)(*(_QWORD *)(v3 + 16) + 4 * v7) = *(_DWORD *)(*(_QWORD *)v3 + 4 * v7);
    *(_DWORD *)(*(_QWORD *)(v3 + 24) + 4 * v7) = *(_DWORD *)(*(_QWORD *)(v3 + 8) + 4 * v7);
  }
  return a1;
}
