/*
 * XREFs of RtlFxToFnFrame @ 0x1400F4680
 * Callers:
 *     RtlpWow64CtxFromAmd64 @ 0x1404FC85C (RtlpWow64CtxFromAmd64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFxToFnFrame(_DWORD *a1, unsigned __int16 *a2)
{
  __int64 v4; // rsi
  unsigned __int16 *v5; // r10
  _DWORD *v6; // r9
  unsigned __int16 v7; // cx
  char v8; // di
  unsigned int v9; // edx
  __int16 v10; // cx
  __int64 result; // rax
  __int16 v12; // r8

  *a1 = *a2;
  a1[1] = a2[1];
  v4 = 8LL;
  a1[3] = *((_DWORD *)a2 + 2);
  v5 = a2 + 16;
  v6 = a1 + 7;
  a1[4] = a2[6] | (a2[3] << 16);
  a1[5] = *((_DWORD *)a2 + 4);
  a1[6] = a2[10];
  v7 = 0;
  v8 = *((_BYTE *)a2 + 4);
  v9 = 7 - ((a2[1] >> 11) & 7);
  do
  {
    *(_QWORD *)v6 = *(_QWORD *)v5;
    v10 = 4 * v7;
    *((_WORD *)v6 + 4) = v5[4];
    if ( v8 < 0 )
    {
      v7 = v10 | 2;
      v12 = a2[8 * v9 + 20] & 0x7FFF;
      if ( v12 )
      {
        if ( v12 != 0x7FFF && *(__int64 *)&a2[8 * v9 + 16] < 0 )
          v7 &= 0xFFFCu;
      }
      else if ( !*(_QWORD *)&a2[8 * v9 + 16] )
      {
        v7 = v7 & 0xFFFC | 1;
      }
    }
    else
    {
      v7 = v10 | 3;
    }
    v8 *= 2;
    v6 = (_DWORD *)((char *)v6 + 10);
    v5 += 8;
    v9 = ((_BYTE)v9 - 1) & 7;
    --v4;
  }
  while ( v4 );
  result = v7;
  a1[2] = v7;
  return result;
}
