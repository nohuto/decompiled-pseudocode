/*
 * XREFs of itrp_RC @ 0x1C00D09B0
 * Callers:
 *     <none>
 * Callees:
 *     InvokeProject @ 0x1C00CE60C (InvokeProject.c)
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_RC(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdi
  _WORD *v6; // r8
  __int64 v7; // rbx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // cx
  int v10; // edx
  int v11; // esi
  int v12; // ebp
  __int16 v13; // ax
  __int64 v14; // rax
  unsigned int v15; // edx
  int v16; // ecx
  __int64 result; // rax

  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (v4 = qword_1C03294C8, !((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2)) )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  v5 = qword_1C03294B0;
  qword_1C03294C8 -= 4LL;
  v6 = *(_WORD **)(qword_1C03294E0 + 344);
  v7 = *(int *)(v4 - 4);
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
  if ( qword_1C03294D8 == qword_1C03294B0 )
  {
    if ( (int)v7 >= (unsigned __int16)v6[8] || (int)v7 < 0 )
      goto LABEL_24;
    v12 = 0;
  }
  else
  {
    if ( (int)v7 >= *(_DWORD *)(qword_1C03294E0 + 440) || (int)v7 < 0 )
      goto LABEL_24;
    v12 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, qword_1C03294B0)
    || (v13 = *(_WORD *)(v5 + 80), v13 >= 1)
    && v13 <= v11
    && (int)v7 >= v12 + *(__int16 *)(*(_QWORD *)(v5 + 64) + 2LL * (v13 - 1)) + 1 )
  {
LABEL_24:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  if ( (a2 & 1) != 0 )
  {
    v14 = *(_QWORD *)(v5 + 24);
    v15 = *(_DWORD *)(*(_QWORD *)(v5 + 16) + 4 * v7);
    v16 = dword_1C0329514;
  }
  else
  {
    v14 = *(_QWORD *)(v5 + 8);
    v15 = *(_DWORD *)(*(_QWORD *)v5 + 4 * v7);
    v16 = dword_1C0329510;
  }
  *(_DWORD *)qword_1C03294C8 = InvokeProject(v16, v15, *(_DWORD *)(v14 + 4 * v7));
  result = a1;
  qword_1C03294C8 += 4LL;
  return result;
}
