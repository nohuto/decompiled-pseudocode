/*
 * XREFs of itrp_FLIPRGON @ 0x1C00D2720
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00CF110 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPRGON(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r13
  __int64 v3; // r14
  _WORD *v4; // r12
  int v5; // esi
  unsigned __int16 v6; // bp
  int v7; // ebx
  int v8; // eax
  int v9; // edi
  __int16 v10; // ax
  __int64 v11; // rdi
  int v12; // eax
  int v13; // ebp
  _BYTE *v14; // r14
  int i; // ebx
  __int64 result; // rax
  __int64 v17; // [rsp+20h] [rbp-58h]
  __int16 v19; // [rsp+88h] [rbp+10h]
  int v20; // [rsp+90h] [rbp+18h]
  __int64 v21; // [rsp+98h] [rbp+20h]
  int *v22; // [rsp+98h] [rbp+20h]

  v1 = qword_1C03294E0;
  v2 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C03294E0 ^ *(_QWORD *)qword_1C03294E0 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C03294E0 + 424)) != *(_QWORD *)(qword_1C03294E0 + 432)
    || (unsigned __int64)((qword_1C03294C8 - *(_QWORD *)qword_1C03294E0) >> 2) < 2 )
  {
    dword_1C0329530 = 4368;
    return qword_1C0329538;
  }
  v4 = *(_WORD **)(qword_1C03294E0 + 344);
  v21 = qword_1C03294C8 - 4;
  LOWORD(v5) = v4[4];
  v6 = v4[6];
  v7 = *(_DWORD *)(qword_1C03294C8 - 4);
  v8 = (unsigned __int16)v5;
  if ( (unsigned __int16)v5 <= v6 )
    v8 = v6;
  if ( v8 <= 1 )
  {
    v9 = 1;
  }
  else if ( (unsigned __int16)v5 <= v6 )
  {
    v9 = v6;
  }
  else
  {
    v9 = (unsigned __int16)v5;
  }
  v17 = qword_1C03294D8;
  if ( qword_1C03294D8 == LocalGS )
  {
    if ( v7 >= (unsigned __int16)v4[8] || v7 < 0 )
      goto LABEL_37;
    v20 = 0;
  }
  else
  {
    if ( v7 >= *(_DWORD *)(qword_1C03294E0 + 440) || v7 < 0 )
      goto LABEL_37;
    v20 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_37;
  v10 = *(_WORD *)(v2 + 80);
  v19 = v10;
  if ( v10 >= 1 && v10 <= v9 && v7 >= *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v10 - 1)) + v20 + 1 )
    goto LABEL_37;
  v22 = (int *)(v21 - 4);
  v11 = *v22;
  v12 = (unsigned __int16)v5;
  if ( (unsigned __int16)v5 <= v6 )
    v12 = v6;
  if ( v12 <= 1 )
    v5 = 1;
  else
    v5 = (unsigned __int16)v5 <= v6 ? v6 : (unsigned __int16)v5;
  if ( v17 == v2 )
  {
    if ( (int)v11 >= (unsigned __int16)v4[8] || (int)v11 < 0 )
      goto LABEL_37;
    v13 = 0;
  }
  else
  {
    if ( (int)v11 >= *(_DWORD *)(v1 + 440) || (int)v11 < 0 )
      goto LABEL_37;
    v13 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, v2)
    || v19 >= 1 && v19 <= v5 && (int)v11 >= v13 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * (v19 - 1)) + 1 )
  {
LABEL_37:
    dword_1C0329530 = 4370;
    return qword_1C0329538;
  }
  v14 = (_BYTE *)(v11 + v3);
  for ( i = v7 - v11; i >= 0; --i )
    *v14++ |= 1u;
  result = a1;
  qword_1C03294C8 = (__int64)v22;
  return result;
}
