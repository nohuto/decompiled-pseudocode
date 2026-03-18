/*
 * XREFs of ?vSrcCopyS4D4@@YAXPEAUBLTINFO@@@Z @ 0x140221670
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     <none>
 */

void __fastcall vSrcCopyS4D4(struct BLTINFO *a1)
{
  int v2; // ebp
  _BYTE *v3; // r9
  __int64 v4; // r14
  unsigned __int8 *v5; // rbx
  _BYTE *v6; // r10
  int v7; // ecx
  int v8; // edx
  int v9; // r8d
  unsigned __int8 *v10; // rsi
  int v11; // r11d
  int v12; // r11d
  unsigned __int64 v13; // rax

  v2 = *((_DWORD *)a1 + 8);
  v3 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 1));
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  v5 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + ((__int64)*((int *)a1 + 12) >> 1));
  while ( 1 )
  {
    v6 = v3;
    v7 = *((_DWORD *)a1 + 12);
    v8 = *((_DWORD *)a1 + 14) & 1;
    v9 = *((_DWORD *)a1 + 13) - v7;
    v10 = v5;
    if ( (((unsigned __int8)*((_DWORD *)a1 + 14) ^ (unsigned __int8)v7) & 1) != 0 )
    {
      if ( v8 && v9 )
      {
        v6 = v3 + 1;
        *v3 = *(_BYTE *)(v4 + 4 * ((unsigned __int64)*v5 >> 4)) | *v3 & 0xF0;
        --v9;
      }
      v12 = v9 >> 1;
      while ( --v12 >= 0 )
      {
        *v6++ = *(_BYTE *)(v4 + 4 * ((unsigned __int64)v10[1] >> 4)) | (16 * *(_BYTE *)(v4 + 4LL * (*v10 & 0xF)));
        ++v10;
      }
      if ( (v9 & 1) != 0 )
      {
        v13 = *v10 & 0xF;
LABEL_22:
        *v6 = *v6 & 0xF | (16 * *(_BYTE *)(v4 + 4 * v13));
      }
    }
    else
    {
      if ( v8 && v9 )
      {
        v10 = v5 + 1;
        v6 = v3 + 1;
        *v3 = *(_BYTE *)(v4 + 4LL * (*v5 & 0xF)) | *v3 & 0xF0;
        --v9;
      }
      v11 = v9 >> 1;
      while ( --v11 >= 0 )
      {
        *v6++ = *(_BYTE *)(v4 + 4LL * (*v10 & 0xF)) | (16 * *(_BYTE *)(v4 + 4 * ((unsigned __int64)*v10 >> 4)));
        ++v10;
      }
      if ( (v9 & 1) != 0 )
      {
        v13 = (unsigned __int64)*v10 >> 4;
        goto LABEL_22;
      }
    }
    if ( !--v2 )
      break;
    v5 += *((int *)a1 + 10);
    v3 += *((int *)a1 + 11);
  }
}
