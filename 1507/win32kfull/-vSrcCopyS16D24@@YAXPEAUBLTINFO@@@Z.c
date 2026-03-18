/*
 * XREFs of ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0101A20
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C0101C9C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSrcCopyS16D24(struct BLTINFO *a1)
{
  unsigned int v1; // r14d
  __int64 v2; // r13
  unsigned __int16 *v3; // rbp
  __int64 v4; // rsi
  unsigned int v5; // r15d
  unsigned int (*v6)(struct _XLATEOBJ *, unsigned int); // rdi
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  int v9; // r14d
  unsigned int i; // ebx
  unsigned int v11; // r15d
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  int v15; // eax
  int j; // ebx
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-58h]
  unsigned int (*v20)(struct _XLATEOBJ *, unsigned int); // [rsp+28h] [rbp-50h]
  int v21; // [rsp+80h] [rbp+8h]
  unsigned int v22; // [rsp+90h] [rbp+18h]
  int v23; // [rsp+98h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(_QWORD *)a1;
  v3 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v4 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v21 = *((_DWORD *)a1 + 8);
  v23 = *((_DWORD *)a1 + 10) - 2 * v1;
  v19 = *((_DWORD *)a1 + 11) - 3 * v1;
  v20 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v5 = v4 & 3;
  v6 = v20;
  if ( v5 > v1 )
    v5 = v1;
  v7 = v1 - v5;
  v22 = v5;
  v8 = v7 >> 2;
  v9 = v7 & 3;
  while ( 1 )
  {
    for ( i = v5; i; --i )
    {
      v18 = ((__int64 (__fastcall *)(__int64, _QWORD))v6)(v2, *v3);
      *(_BYTE *)v4 = v18;
      ++v3;
      *(_BYTE *)(v4 + 1) = BYTE1(v18);
      *(_BYTE *)(v4 + 2) = BYTE2(v18);
      v4 += 3LL;
    }
    if ( v8 )
    {
      v11 = v8;
      do
      {
        v12 = ((__int64 (__fastcall *)(__int64, _QWORD))v6)(v2, *v3);
        v13 = ((__int64 (__fastcall *)(__int64, _QWORD))v6)(v2, v3[1]);
        *(_DWORD *)v4 = v12 | (v13 << 24);
        v14 = ((__int64 (__fastcall *)(__int64, _QWORD))v20)(v2, v3[2]);
        *(_DWORD *)(v4 + 4) = (v14 << 16) | (v13 >> 8);
        v6 = v20;
        v15 = ((__int64 (__fastcall *)(__int64, _QWORD))v20)(v2, v3[3]);
        v3 += 4;
        *(_DWORD *)(v4 + 8) = HIWORD(v14) | (v15 << 8);
        v4 += 12LL;
        --v11;
      }
      while ( v11 );
      v5 = v22;
    }
    for ( j = v9; j; --j )
    {
      v17 = ((__int64 (__fastcall *)(__int64, _QWORD))v6)(v2, *v3);
      *(_BYTE *)v4 = v17;
      ++v3;
      *(_BYTE *)(v4 + 1) = BYTE1(v17);
      *(_BYTE *)(v4 + 2) = BYTE2(v17);
      v4 += 3LL;
    }
    if ( !--v21 )
      break;
    v3 = (unsigned __int16 *)((char *)v3 + v23);
    v4 += v19;
  }
}
