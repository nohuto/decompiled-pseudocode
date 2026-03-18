/*
 * XREFs of ?vSrcCopyS4D4@@YAXPEAUBLTINFO@@@Z @ 0x1C02C1730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D4(struct BLTINFO *a1)
{
  int v2; // ebp
  _BYTE *v3; // r8
  __int64 v4; // r14
  unsigned __int8 *v5; // r10
  int v6; // ecx
  _BYTE *v7; // rbx
  int v8; // edx
  unsigned __int8 *v9; // rsi
  int v10; // r11d
  int v11; // edi
  unsigned __int64 v12; // rax
  int v13; // edi

  v2 = *((_DWORD *)a1 + 8);
  v3 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 1));
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  while ( 1 )
  {
    v6 = *((_DWORD *)a1 + 12);
    v7 = v3;
    v8 = *((_DWORD *)a1 + 14);
    v9 = v5;
    v10 = *((_DWORD *)a1 + 13) - v6;
    if ( (((unsigned __int8)v6 ^ *((_BYTE *)a1 + 56)) & 1) != 0 )
    {
      if ( (v8 & 1) != 0 && v10 )
      {
        v7 = v3 + 1;
        *v3 = *v3 & 0xF0 | *(_BYTE *)(v4 + 4 * ((unsigned __int64)*v5 >> 4));
        --v10;
      }
      v11 = v10 >> 1;
      while ( --v11 >= 0 )
      {
        *v7++ = *(_BYTE *)(v4 + 4 * ((unsigned __int64)v9[1] >> 4)) | (16 * *(_BYTE *)(v4 + 4LL * (*v9 & 0xF)));
        ++v9;
      }
      if ( (v10 & 1) != 0 )
      {
        v12 = *v9 & 0xF;
LABEL_19:
        *v7 = *v7 & 0xF | (16 * *(_BYTE *)(v4 + 4 * v12));
      }
    }
    else
    {
      if ( (v8 & 1) != 0 && v10 )
      {
        v9 = v5 + 1;
        v7 = v3 + 1;
        *v3 = *v3 & 0xF0 | *(_BYTE *)(v4 + 4LL * (*v5 & 0xF));
        --v10;
      }
      v13 = v10 >> 1;
      while ( --v13 >= 0 )
      {
        *v7++ = *(_BYTE *)(v4 + 4LL * (*v9 & 0xF)) | (16 * *(_BYTE *)(v4 + 4 * ((unsigned __int64)*v9 >> 4)));
        ++v9;
      }
      if ( (v10 & 1) != 0 )
      {
        v12 = (unsigned __int64)*v9 >> 4;
        goto LABEL_19;
      }
    }
    if ( !--v2 )
      break;
    v5 += *((int *)a1 + 10);
    v3 += *((int *)a1 + 11);
  }
}
