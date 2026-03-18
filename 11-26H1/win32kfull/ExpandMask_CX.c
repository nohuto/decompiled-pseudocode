/*
 * XREFs of ExpandMask_CX @ 0x140308B10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpandMask_CX(__int64 a1)
{
  char *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int16 *v4; // r10
  char v5; // al
  char *v6; // r11
  __int64 v7; // rbx
  int v8; // edx
  __int64 result; // rax
  char v10; // cl
  char v11; // cl
  int v12; // [rsp+8h] [rbp+8h]
  int v13; // [rsp+8h] [rbp+8h]
  int v14; // [rsp+8h] [rbp+8h]

  v1 = *(char **)(a1 + 208);
  v2 = *(int *)(a1 + 592);
  v3 = *(_QWORD *)(a1 + 576);
  v4 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 304) + 152LL);
  v5 = *v1;
  v6 = v1 + 1;
  v7 = *(_QWORD *)(a1 + 584);
  v8 = 1;
  v12 = 1;
  BYTE2(v12) = v5;
  result = (unsigned int)(v12 << *(_BYTE *)(a1 + 4));
  v10 = -1;
  v13 = result;
  do
  {
    if ( !--v8 )
    {
      v8 = *v4++;
      if ( BYTE1(v13) )
      {
        v11 = *v6++;
        v14 = 1;
        BYTE2(v14) = v11;
        LODWORD(result) = v14;
      }
      else
      {
        v11 = BYTE2(v13);
      }
      v10 = v11 >> 7;
      result = (unsigned int)(2 * result);
      v13 = result;
    }
    *(_BYTE *)(v3 + 3) = v10;
    v3 += v2;
  }
  while ( v3 != v7 );
  return result;
}
