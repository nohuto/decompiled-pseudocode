/*
 * XREFs of ?vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x140133390
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x14013384C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vSrcCopyS24D16(struct BLTINFO *a1)
{
  unsigned int v1; // esi
  XLATE *v2; // r14
  int v3; // ebp
  _WORD *v4; // rdi
  int v5; // r12d
  unsigned __int8 *v6; // rbx
  int v7; // r13d
  unsigned int (*v8)(struct _XLATEOBJ *, unsigned int); // r13
  unsigned int v9; // r15d
  int v10; // ecx
  unsigned int v11; // eax
  char v12; // r9
  unsigned __int64 v13; // r8
  int v14; // eax
  int v15; // edx
  unsigned int v16; // eax
  char v17; // r9
  unsigned __int64 v18; // r8
  int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // eax
  int v22; // [rsp+60h] [rbp+8h]
  unsigned int (*i)(struct _XLATEOBJ *, unsigned int); // [rsp+68h] [rbp+10h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATE **)a1;
  v3 = *((_DWORD *)a1 + 8);
  v4 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  v5 = *((_DWORD *)a1 + 10) - 3 * v1;
  v6 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v7 = *((_DWORD *)a1 + 11) - 2 * v1;
  v22 = v7;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 40LL) + 24LL) & 8) == 0 )
  {
LABEL_2:
    v8 = XLATE::pfnXlateBetweenBitfields(v2);
    for ( i = v8; ; v8 = i )
    {
      v9 = v1;
      do
      {
        *v4 = ((__int64 (__fastcall *)(XLATE *, _QWORD))v8)(v2, *v6 | (*(unsigned __int16 *)(v6 + 1) << 8));
        v6 += 3;
        ++v4;
        --v9;
      }
      while ( v9 );
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (_WORD *)((char *)v4 + v22);
    }
    return;
  }
  v10 = *(_DWORD *)(*((_QWORD *)v2 + 6) + 24LL);
  if ( (v10 & 0x400000) != 0 )
  {
    while ( 1 )
    {
      v16 = v1;
      if ( ((unsigned __int8)v4 & 2) != 0 )
      {
        v16 = v1 - 1;
        *v4++ = (*v6 >> 3) | (8 * (v6[1] & 0xFC | (32 * (v6[2] & 0xF8))));
        v6 += 3;
      }
      v17 = v16 - 2;
      if ( (int)(v16 - 2) >= 0 )
      {
        v18 = (unsigned __int64)v16 >> 1;
        do
        {
          v19 = v6[2] & 0xF8 | ((v6[4] & 0xFC) << 11);
          v20 = (8 * (v6[1] | ((v6[3] | (v6[5] << 11)) << 10))) & 0xF81F07E0;
          v21 = *v6;
          v6 += 6;
          *(_DWORD *)v4 = (v21 >> 3) | (v19 << 8) | v20;
          v4 += 2;
          --v18;
        }
        while ( v18 );
      }
      if ( (v17 & 1) != 0 )
      {
        *v4++ = (*v6 >> 3) | (8 * (v6[1] & 0xFC | (32 * (v6[2] & 0xF8))));
        v6 += 3;
      }
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (_WORD *)((char *)v4 + v7);
    }
  }
  else
  {
    if ( (v10 & 0x200000) == 0 )
      goto LABEL_2;
    while ( 1 )
    {
      v11 = v1;
      if ( ((unsigned __int8)v4 & 2) != 0 )
      {
        v11 = v1 - 1;
        *v4++ = (*v6 >> 3) | (4 * (v6[1] & 0xF8 | (32 * (v6[2] & 0xF8))));
        v6 += 3;
      }
      v12 = v11 - 2;
      if ( (int)(v11 - 2) >= 0 )
      {
        v13 = (unsigned __int64)v11 >> 1;
        do
        {
          v14 = *v6 >> 3;
          v15 = 4
              * ((v6[1] | (v6[5] << 21)) & 0x1F07C0F8 | (32 * (((v6[3] & 0xF8) << 6) | (v6[2] | (v6[4] << 11)) & 0x7C0F8)));
          v6 += 6;
          *(_DWORD *)v4 = v14 | v15;
          v4 += 2;
          --v13;
        }
        while ( v13 );
      }
      if ( (v12 & 1) != 0 )
      {
        *v4++ = (*v6 >> 3) | (4 * (v6[1] & 0xF8 | (32 * (v6[2] & 0xF8))));
        v6 += 3;
      }
      if ( !--v3 )
        break;
      v6 += v5;
      v4 = (_WORD *)((char *)v4 + v7);
    }
  }
}
