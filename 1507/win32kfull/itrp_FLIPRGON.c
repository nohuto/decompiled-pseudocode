/*
 * XREFs of itrp_FLIPRGON @ 0x1C0113B80
 * Callers:
 *     <none>
 * Callees:
 *     CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND @ 0x1C00BE900 (CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND.c)
 */

__int64 __fastcall itrp_FLIPRGON(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // r13
  __int64 v3; // r14
  int v4; // edi
  _WORD *v5; // rcx
  int v6; // esi
  unsigned __int16 v7; // bp
  int v8; // eax
  int v9; // ebx
  __int16 v10; // r12
  __int64 v11; // rbx
  int v12; // eax
  int v13; // ebp
  _BYTE *v14; // r14
  int i; // edi
  __int64 result; // rax
  _WORD *v17; // [rsp+20h] [rbp-58h]
  int v19; // [rsp+88h] [rbp+10h]
  __int64 v20; // [rsp+90h] [rbp+18h]
  int *v21; // [rsp+90h] [rbp+18h]
  __int64 v22; // [rsp+98h] [rbp+20h]

  v1 = qword_1C0323160;
  v2 = LocalGS;
  v3 = *(_QWORD *)(LocalGS + 48);
  if ( (qword_1C0323160 ^ *(_QWORD *)qword_1C0323160 ^ MEMORY[0xFFFFF78000000330] ^ *(_QWORD *)(qword_1C0323160 + 424)) != *(_QWORD *)(qword_1C0323160 + 432)
    || (unsigned __int64)((qword_1C0323148 - *(_QWORD *)qword_1C0323160) >> 2) < 2 )
  {
    dword_1C03231B0 = 4368;
    return qword_1C03231B8;
  }
  v20 = qword_1C0323148 - 4;
  v4 = *(_DWORD *)(qword_1C0323148 - 4);
  v5 = *(_WORD **)(qword_1C0323160 + 344);
  v17 = v5;
  LOWORD(v6) = v5[4];
  v7 = v5[6];
  v8 = (unsigned __int16)v6;
  if ( (unsigned __int16)v6 <= v7 )
    v8 = v7;
  if ( v8 <= 1 )
  {
    v9 = 1;
  }
  else if ( (unsigned __int16)v6 <= v7 )
  {
    v9 = v7;
  }
  else
  {
    v9 = (unsigned __int16)v6;
  }
  v22 = qword_1C0323158;
  if ( qword_1C0323158 == LocalGS )
  {
    if ( v4 >= (unsigned __int16)v5[8] || v4 < 0 )
      goto LABEL_37;
    v19 = 0;
  }
  else
  {
    if ( v4 >= *(_DWORD *)(qword_1C0323160 + 440) || v4 < 0 )
      goto LABEL_37;
    v19 = 4;
  }
  if ( !(unsigned int)CHECK_ELEMENT_EP_PTR_ALLOW_OUTOF_BOUND((__int64)&LocalGS, LocalGS) )
    goto LABEL_37;
  v10 = *(_WORD *)(v2 + 80);
  if ( v10 >= 1 && v10 <= v9 && v4 >= *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * v10 - 2) + v19 + 1 )
    goto LABEL_37;
  v21 = (int *)(v20 - 4);
  v11 = *v21;
  v12 = (unsigned __int16)v6;
  if ( (unsigned __int16)v6 <= v7 )
    v12 = v7;
  if ( v12 <= 1 )
    v6 = 1;
  else
    v6 = (unsigned __int16)v6 <= v7 ? v7 : (unsigned __int16)v6;
  if ( v22 == v2 )
  {
    if ( (int)v11 >= (unsigned __int16)v17[8] || (int)v11 < 0 )
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
    || v10 >= 1 && v10 <= v6 && (int)v11 >= v13 + *(__int16 *)(*(_QWORD *)(v2 + 64) + 2LL * v10 - 2) + 1 )
  {
LABEL_37:
    dword_1C03231B0 = 4370;
    return qword_1C03231B8;
  }
  v14 = (_BYTE *)(v11 + v3);
  for ( i = v4 - v11; i >= 0; --i )
    *v14++ |= 1u;
  result = a1;
  qword_1C0323148 = (__int64)v21;
  return result;
}
