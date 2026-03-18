/*
 * XREFs of ShrinkMask_CX @ 0x140308F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShrinkMask_CX(__int64 a1)
{
  unsigned __int8 *v1; // rdx
  __int64 v2; // rdi
  __int64 v3; // r9
  unsigned __int16 *v4; // r10
  char *v5; // r11
  __int64 v6; // rbx
  char v7; // cl
  __int64 result; // rax
  int v9; // r8d
  char v10; // dl
  char v11; // cl
  int v12; // [rsp+8h] [rbp+8h]
  int v13; // [rsp+8h] [rbp+8h]
  int v14; // [rsp+8h] [rbp+8h]

  v1 = *(unsigned __int8 **)(a1 + 208);
  v2 = *(int *)(a1 + 592);
  v3 = *(_QWORD *)(a1 + 576);
  v4 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 304) + 152LL);
  v5 = (char *)(v1 + 1);
  v6 = *(_QWORD *)(a1 + 584);
  v7 = *(_BYTE *)(a1 + 4);
  LOWORD(v12) = 1;
  HIWORD(v12) = *v1;
  result = (unsigned int)(v12 << v7);
  v13 = v12 << v7;
  do
  {
    v9 = *v4;
    v10 = 0;
    ++v4;
    while ( v9 )
    {
      --v9;
      if ( BYTE1(result) )
      {
        v11 = *v5++;
        v14 = 1;
        BYTE2(v14) = v11;
        LODWORD(result) = v14;
      }
      else
      {
        v11 = BYTE2(v13);
      }
      v10 |= v11;
      result = (unsigned int)(2 * result);
      BYTE2(v13) = BYTE2(result);
    }
    *(_BYTE *)(v3 + 3) = v10 >> 7;
    v3 += v2;
  }
  while ( v3 != v6 );
  return result;
}
