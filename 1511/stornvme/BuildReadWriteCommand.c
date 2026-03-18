/*
 * XREFs of BuildReadWriteCommand @ 0x1C0006328
 * Callers:
 *     ScsiReadWriteRequest @ 0x1C0007DE0 (ScsiReadWriteRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BuildReadWriteCommand(__int64 a1, __int64 a2, unsigned __int8 *a3, int a4, __int64 a5)
{
  _DWORD *v5; // r11
  __int64 v8; // r8
  unsigned int v10; // r8d
  unsigned __int8 v11; // al
  __int64 result; // rax
  int v13; // ecx
  int v14; // [rsp+30h] [rbp+30h]
  int v15; // [rsp+34h] [rbp+34h]

  v5 = (_DWORD *)(a2 + 60);
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v8 = *(unsigned __int8 *)(*(unsigned int *)(a2 + 52) + a2 + 10);
  }
  else
  {
    v8 = *(unsigned __int8 *)(a2 + 7);
    v5 = (_DWORD *)(a2 + 16);
  }
  if ( *a3 != 40 )
  {
    if ( *a3 == 42 )
    {
LABEL_7:
      *(_BYTE *)a5 = 1;
      goto LABEL_10;
    }
    if ( *a3 != 136 )
    {
      if ( *a3 != 138 )
        goto LABEL_10;
      goto LABEL_7;
    }
  }
  *(_BYTE *)a5 = 2;
LABEL_10:
  *(_DWORD *)a5 &= 0xFFFFFCFF;
  *(_DWORD *)(a5 + 4) = v8 + 1;
  *(_QWORD *)(a5 + 16) = 0LL;
  v10 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 8 * v8 + 1176) + 52LL) + *v5 - 1)
      / *(_DWORD *)(*(_QWORD *)(a1 + 8 * v8 + 1176) + 52LL);
  if ( a4 == 16 )
  {
    HIBYTE(v15) = a3[2];
    BYTE2(v15) = a3[3];
    BYTE1(v15) = a3[4];
    BYTE2(v14) = a3[7];
    LOBYTE(v15) = a3[5];
    BYTE1(v14) = a3[8];
    v11 = a3[9];
    HIBYTE(v14) = a3[6];
  }
  else
  {
    HIBYTE(v14) = a3[2];
    BYTE2(v14) = a3[3];
    BYTE1(v14) = a3[4];
    v11 = a3[5];
    v15 = 0;
  }
  LOBYTE(v14) = v11;
  *(_DWORD *)(a5 + 40) = v14;
  *(_WORD *)(a5 + 48) = v10 - 1;
  *(_DWORD *)(a5 + 48) &= 0xC3FFFFFF;
  *(_DWORD *)(a5 + 44) = v15;
  result = *(_DWORD *)(a5 + 48) & 0x3FFFFFFF;
  v13 = result | ((a3[1] & 8) << 27);
  *(_BYTE *)(a5 + 52) = 0;
  *(_QWORD *)(a5 + 56) = 0LL;
  *(_DWORD *)(a5 + 48) = v13;
  return result;
}
