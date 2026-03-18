/*
 * XREFs of ?vSrcCopyS4D1@@YAXPEAUBLTINFO@@@Z @ 0x1C02C4160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D1(struct BLTINFO *a1)
{
  unsigned int v1; // edi
  char v2; // r8
  int v4; // ebp
  _BYTE *v5; // r11
  __int64 v6; // r15
  unsigned __int8 *v7; // r9
  int v8; // ebx
  _BYTE *v9; // r14
  int v10; // r10d
  unsigned __int8 *v11; // rsi
  char v12; // cl
  unsigned __int64 v13; // rax
  int v14; // r10d

  LOBYTE(v1) = 0;
  v2 = 0;
  v4 = *((_DWORD *)a1 + 8);
  v5 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 3));
  v6 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v7 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  while ( 1 )
  {
    v8 = *((_DWORD *)a1 + 12);
    v9 = v5;
    v10 = *((_DWORD *)a1 + 14);
    v11 = v7;
    if ( (v8 & 1) != 0 )
    {
      LOBYTE(v1) = *v7;
      v11 = v7 + 1;
    }
    if ( (v10 & 7) != 0 )
      v2 = *v5 >> (8 - (v10 & 7));
    if ( v8 != *((_DWORD *)a1 + 13) )
    {
      v12 = v1;
      do
      {
        v2 *= 2;
        if ( (v8 & 1) != 0 )
        {
          v13 = v12 & 0xF;
        }
        else
        {
          v1 = *v11++;
          v12 = v1;
          v13 = (unsigned __int64)v1 >> 4;
        }
        if ( *(_DWORD *)(v6 + 4 * v13) )
          v2 |= 1u;
        LOBYTE(v10) = v10 + 1;
        ++v8;
        if ( (v10 & 7) == 0 )
          *v9++ = v2;
      }
      while ( v8 != *((_DWORD *)a1 + 13) );
    }
    v14 = v10 & 7;
    if ( v14 )
    {
      v1 = 255 >> v14;
      v2 <<= 8 - v14;
      *v9 = *v9 & (255 >> v14) | v2 & ~(255 >> v14);
    }
    if ( !--v4 )
      break;
    v7 += *((int *)a1 + 10);
    v5 += *((int *)a1 + 11);
  }
}
