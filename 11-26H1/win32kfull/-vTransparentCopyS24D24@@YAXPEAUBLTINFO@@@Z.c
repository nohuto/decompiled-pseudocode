/*
 * XREFs of ?vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x14031FB10
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x14013384C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vTransparentCopyS24D24(struct BLTINFO *a1)
{
  int v1; // r13d
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r12
  int v8; // r14d
  _BYTE *v9; // rsi
  unsigned __int8 *v10; // rbp
  int v11; // eax
  int v12; // edx
  __int64 v13; // rax
  int v14; // [rsp+70h] [rbp+8h]
  __int64 v15; // [rsp+78h] [rbp+10h]
  unsigned int (__fastcall *v16)(struct _XLATEOBJ *, unsigned int); // [rsp+80h] [rbp+18h]
  __int64 v17; // [rsp+88h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v15 = *(_QWORD *)a1;
  v14 = v1;
  v16 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  if ( v3 )
  {
    v4 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14) + 2LL;
    v5 = *((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12) + 1LL;
    do
    {
      --v3;
      v17 = v5;
      v6 = v5;
      v7 = v4;
      v8 = v1;
      if ( v1 )
      {
        v9 = (_BYTE *)v4;
        v10 = (unsigned __int8 *)v5;
        do
        {
          v11 = *v10;
          --v8;
          v12 = v10[1];
          v10 += 3;
          if ( (*(v10 - 4) | ((v11 | (v12 << 8)) << 8)) != *((_DWORD *)a1 + 37) )
          {
            v13 = ((__int64 (__fastcall *)(__int64))v16)(v15);
            *(v9 - 2) = v13;
            *v9 = BYTE2(v13);
            *(v9 - 1) = BYTE1(v13);
          }
          v9 += 3;
        }
        while ( v8 );
        v6 = v17;
        v1 = v14;
      }
      v4 = v7 + *((int *)a1 + 11);
      v5 = v6 + *((int *)a1 + 10);
    }
    while ( v3 );
  }
}
