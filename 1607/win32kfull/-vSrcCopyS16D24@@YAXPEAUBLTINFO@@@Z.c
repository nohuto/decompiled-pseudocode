/*
 * XREFs of ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0136030
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C0136400 (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS16D24(struct BLTINFO *a1)
{
  unsigned int v1; // r13d
  __int64 v2; // r15
  unsigned __int16 *v3; // rsi
  __int64 v4; // rbx
  unsigned int (*v5)(struct _XLATEOBJ *, unsigned int); // r14
  unsigned int v6; // eax
  unsigned int v7; // r13d
  unsigned int v8; // ebp
  int v9; // r13d
  unsigned int i; // edi
  unsigned int v11; // r12d
  __int64 v12; // rdx
  int v13; // ebp
  __int64 v14; // rdx
  unsigned int v15; // edi
  __int64 v16; // rdx
  unsigned int v17; // ebp
  __int64 v18; // rdx
  int v19; // ecx
  int j; // edi
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-58h]
  unsigned int v24; // [rsp+24h] [rbp-54h]
  int v25; // [rsp+80h] [rbp+8h]
  int v26; // [rsp+88h] [rbp+10h]
  unsigned int v27; // [rsp+90h] [rbp+18h]
  int v28; // [rsp+98h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(_QWORD *)a1;
  v3 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v4 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v25 = *((_DWORD *)a1 + 8);
  v28 = *((_DWORD *)a1 + 10) - 2 * v1;
  v23 = *((_DWORD *)a1 + 11) - 3 * v1;
  v5 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v6 = v4 & 3;
  if ( v6 > v1 )
    v6 = v1;
  v7 = v1 - v6;
  v24 = v6;
  v8 = v7 >> 2;
  v9 = v7 & 3;
  v27 = v8;
  v26 = v9;
  while ( 1 )
  {
    for ( i = v6; i; --i )
    {
      v22 = ((__int64 (__fastcall *)(__int64, _QWORD))v5)(v2, *v3);
      *(_BYTE *)v4 = v22;
      ++v3;
      *(_BYTE *)(v4 + 1) = BYTE1(v22);
      *(_BYTE *)(v4 + 2) = BYTE2(v22);
      v4 += 3LL;
    }
    v11 = v8;
    if ( v8 )
    {
      do
      {
        v12 = *v3;
        if ( (char *)v5 == (char *)iXlate555ToBGR )
          v13 = ((unsigned int)v12 >> 2) & 7 | (2
                                              * (v12 & 0x380 | (4
                                                              * (v12 & 0x1F | (2
                                                                             * (v12 & 0x7000 | (4
                                                                                              * (v12 & 0x3E0 | (8 * (v12 & 0x7C00))))))))));
        else
          v13 = ((__int64 (__fastcall *)(__int64, __int64))v5)(v2, v12);
        v14 = v3[1];
        if ( (char *)v5 == (char *)iXlate555ToBGR )
          v15 = ((unsigned int)v14 >> 2) & 7 | (2
                                              * (v14 & 0x380 | (4
                                                              * (v14 & 0x1F | (2
                                                                             * (v14 & 0x7000 | (4
                                                                                              * (v14 & 0x3E0 | (8 * (v14 & 0x7C00))))))))));
        else
          v15 = ((__int64 (__fastcall *)(__int64, __int64))v5)(v2, v14);
        *(_DWORD *)v4 = v13 | (v15 << 24);
        v16 = v3[2];
        if ( (char *)v5 == (char *)iXlate555ToBGR )
          v17 = ((unsigned int)v16 >> 2) & 7 | (2
                                              * (v16 & 0x380 | (4
                                                              * (v16 & 0x1F | (2
                                                                             * (v16 & 0x7000 | (4
                                                                                              * (v16 & 0x3E0 | (8 * (v16 & 0x7C00))))))))));
        else
          v17 = ((__int64 (__fastcall *)(__int64, __int64))v5)(v2, v16);
        *(_DWORD *)(v4 + 4) = (v17 << 16) | (v15 >> 8);
        v18 = v3[3];
        if ( (char *)v5 == (char *)iXlate555ToBGR )
          v19 = ((unsigned int)v18 >> 2) & 7 | (2
                                              * (v18 & 0x380 | (4
                                                              * (v18 & 0x1F | (2
                                                                             * (v18 & 0x7000 | (4
                                                                                              * (v18 & 0x3E0 | (8 * (v18 & 0x7C00))))))))));
        else
          v19 = ((__int64 (__fastcall *)(__int64, __int64))v5)(v2, v18);
        v3 += 4;
        *(_DWORD *)(v4 + 8) = HIWORD(v17) | (v19 << 8);
        v4 += 12LL;
        --v11;
      }
      while ( v11 );
      v9 = v26;
      v8 = v27;
    }
    for ( j = v9; j; --j )
    {
      v21 = ((__int64 (__fastcall *)(__int64, _QWORD))v5)(v2, *v3);
      *(_BYTE *)v4 = v21;
      ++v3;
      *(_BYTE *)(v4 + 1) = BYTE1(v21);
      *(_BYTE *)(v4 + 2) = BYTE2(v21);
      v4 += 3LL;
    }
    if ( !--v25 )
      break;
    v3 = (unsigned __int16 *)((char *)v3 + v28);
    v4 += v23;
    v6 = v24;
  }
}
