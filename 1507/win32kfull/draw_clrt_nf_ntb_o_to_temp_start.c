/*
 * XREFs of draw_clrt_nf_ntb_o_to_temp_start @ 0x1C00C3450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 *__fastcall draw_clrt_nf_ntb_o_to_temp_start(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  unsigned int v7; // r13d
  _DWORD *v8; // r15
  unsigned __int8 *result; // rax
  _DWORD *v11; // rbx
  int v12; // esi
  int v13; // ebp
  unsigned int v14; // ecx
  unsigned __int8 *v15; // r13
  unsigned __int8 *v16; // rbx
  int v17; // edi
  unsigned __int8 v18; // cl
  __int64 v19; // r8
  __int64 v20; // rdx
  unsigned int v21; // r11d
  unsigned int v22; // r10d
  unsigned int v23; // r9d
  __int64 v24; // [rsp+48h] [rbp+8h]
  int v25; // [rsp+50h] [rbp+10h]
  __int64 v26; // [rsp+58h] [rbp+18h]
  int v27; // [rsp+60h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v7 = a5;
  v8 = (_DWORD *)(a1 + 20);
  do
  {
    result = *(unsigned __int8 **)(v8 - 3);
    v11 = *(_DWORD **)result;
    v12 = *(_DWORD *)(*(_QWORD *)result + 12LL);
    if ( !v12 )
      goto LABEL_10;
    v13 = v11[2];
    v25 = v13;
    result = (unsigned __int8 *)(a3 + v7 * (__int64)(*v8 + v11[1] - a7) + *v11 + *(v8 - 1) - a4);
    v14 = v7;
    v15 = (unsigned __int8 *)off_1C031B238;
    v16 = (unsigned __int8 *)(v11 + 4);
    v24 = (int)(v14 - v13);
    do
    {
      v17 = v13;
      do
      {
        v18 = *v16;
        if ( !*result )
          goto LABEL_6;
        if ( v18 )
        {
          v19 = 4LL * v18;
          v20 = 4LL * *result;
          v21 = v15[v20] + v15[v19];
          v22 = v15[v19 + 1] + v15[v20 + 1];
          v23 = v15[v19 + 2] + v15[v20 + 2];
          if ( v21 > 6 )
            v21 = 6;
          if ( v22 > 6 )
            v22 = 6;
          if ( v23 > 6 )
            v23 = 6;
          v18 = gajStorage1[49 * v21 + 7 * v22 + v23];
LABEL_6:
          *result = v18;
        }
        ++result;
        ++v16;
        --v17;
      }
      while ( v17 );
      result += v24;
      v13 = v25;
      --v12;
    }
    while ( v12 );
    v7 = a5;
    a4 = v27;
    a3 = v26;
LABEL_10:
    v8 += 6;
    --a2;
  }
  while ( a2 );
  return result;
}
