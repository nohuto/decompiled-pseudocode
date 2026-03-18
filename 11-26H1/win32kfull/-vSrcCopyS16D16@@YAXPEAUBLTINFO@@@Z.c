/*
 * XREFs of ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x14022D910
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x14013384C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vSrcCopyS16D16(struct BLTINFO *a1)
{
  unsigned int v1; // r12d
  XLATE *v2; // r14
  int v3; // r13d
  int v4; // ebp
  _WORD *v5; // rdi
  _WORD *v6; // rbx
  int v7; // r9d
  __int64 v8; // rcx
  int v9; // r13d
  int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // edx
  unsigned __int64 v14; // r8
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // r8d
  unsigned int v18; // eax
  int v19; // r8d
  unsigned __int64 v20; // r9
  int v21; // ecx
  unsigned int v22; // edx
  unsigned int (__fastcall *v23)(struct _XLATEOBJ *, unsigned int); // r15
  unsigned int v24; // esi
  int v25; // [rsp+60h] [rbp+8h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATE **)a1;
  v3 = *((_DWORD *)a1 + 10);
  v4 = *((_DWORD *)a1 + 8);
  v5 = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v6 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  v7 = *((_DWORD *)a1 + 11) - 2 * v1;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v9 = v3 - 2 * v1;
  v25 = v7;
  v10 = *(_DWORD *)(*((_QWORD *)v2 + 5) + 24LL);
  if ( (v10 & 0x200000) != 0 && _bittest((const signed __int32 *)(v8 + 24), 0x16u) )
  {
    while ( 1 )
    {
      v17 = v1;
      if ( ((unsigned __int8)v6 & 2) != 0 )
      {
        v17 = v1 - 1;
        *v6++ = *v5 & 0x1F | (2 * (*v5 & 0xFFE0)) | (*v5 >> 4) & 0x20;
        ++v5;
      }
      v18 = v17;
      v19 = v17 - 2;
      if ( v19 >= 0 )
      {
        v20 = (unsigned __int64)v18 >> 1;
        do
        {
          v21 = *(_DWORD *)v5 & 0x1F001F;
          v22 = (2 * (*(_DWORD *)v5 & 0xFFE07FE0)) | (*(_DWORD *)v5 >> 4) & 0x200020;
          v5 += 2;
          *(_DWORD *)v6 = v21 | v22;
          v6 += 2;
          --v20;
        }
        while ( v20 );
        v7 = v25;
      }
      if ( (v19 & 1) != 0 )
      {
        *v6++ = *v5 & 0x1F | (2 * (*v5 & 0xFFE0)) | (*v5 >> 4) & 0x20;
        ++v5;
      }
      if ( !--v4 )
        break;
      v5 = (_WORD *)((char *)v5 + v9);
      v6 = (_WORD *)((char *)v6 + v7);
    }
  }
  else if ( (v10 & 0x400000) != 0 && _bittest((const signed __int32 *)(v8 + 24), 0x15u) )
  {
    while ( 1 )
    {
      v11 = v1;
      if ( ((unsigned __int8)v6 & 2) != 0 )
      {
        v11 = v1 - 1;
        *v6++ = *v5 & 0x1F | (*v5 >> 1) & 0x7FE0;
        ++v5;
      }
      v12 = v11;
      v13 = v11 - 2;
      if ( v13 >= 0 )
      {
        v14 = (unsigned __int64)v12 >> 1;
        do
        {
          v15 = *(_DWORD *)v5 & 0x1F001F;
          v16 = (*(_DWORD *)v5 >> 1) & 0x7FE07FE0;
          v5 += 2;
          *(_DWORD *)v6 = v15 | v16;
          v6 += 2;
          --v14;
        }
        while ( v14 );
      }
      if ( (v13 & 1) != 0 )
      {
        *v6++ = *v5 & 0x1F | (*v5 >> 1) & 0x7FE0;
        ++v5;
      }
      if ( !--v4 )
        break;
      v5 = (_WORD *)((char *)v5 + v9);
      v6 = (_WORD *)((char *)v6 + v7);
    }
  }
  else
  {
    v23 = XLATE::pfnXlateBetweenBitfields(v2);
    while ( 1 )
    {
      v24 = v1;
      do
      {
        *v6++ = v23((struct _XLATEOBJ *)v2, (unsigned __int16)*v5++);
        --v24;
      }
      while ( v24 );
      if ( !--v4 )
        break;
      v5 = (_WORD *)((char *)v5 + v9);
      v6 = (_WORD *)((char *)v6 + v25);
    }
  }
}
