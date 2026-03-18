/*
 * XREFs of ?vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x140132E00
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x14013384C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vTransparentCopyS32D24(struct BLTINFO *a1)
{
  int v2; // ebp
  unsigned int (*v3)(struct _XLATEOBJ *, unsigned int); // rax
  int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // edi
  _DWORD *v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r13
  _DWORD *v11; // r12
  int v12; // r15d
  _BYTE *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-58h]
  int v17; // [rsp+88h] [rbp+10h]
  __int64 v18; // [rsp+90h] [rbp+18h]
  unsigned int (*v19)(struct _XLATEOBJ *, unsigned int); // [rsp+98h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 8);
  v18 = *(_QWORD *)a1;
  v17 = *((_DWORD *)a1 + 7);
  v3 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v5 = *((_QWORD *)a1 + 9);
  v19 = v3;
  v6 = *(_QWORD *)(v5 + 128);
  if ( v6 || (*(_DWORD *)(v5 + 112) & 0x100) != 0 )
    v7 = **(_DWORD **)(v6 + 112) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v6 + 112) + 8LL);
  else
    v7 = -1;
  v8 = (_DWORD *)(*((_QWORD *)a1 + 1) + 4 * *((_DWORD *)a1 + 12));
  if ( v2 )
  {
    v9 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14) + 2LL;
    do
    {
      --v2;
      v16 = v9;
      v10 = v9;
      v11 = v8;
      v12 = v4;
      if ( v4 )
      {
        v13 = (_BYTE *)v9;
        do
        {
          --v12;
          v14 = *v11++ & (unsigned int)v7;
          if ( (_DWORD)v14 != *((_DWORD *)a1 + 37) )
          {
            v15 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v19)(v18, v14, 0xFFFFFFFFLL);
            *((_WORD *)v13 - 1) = v15;
            *v13 = BYTE2(v15);
          }
          v13 += 3;
        }
        while ( v12 );
        v10 = v16;
        v4 = v17;
      }
      v8 = (_DWORD *)((char *)v8 + *((int *)a1 + 10));
      v9 = v10 + *((int *)a1 + 11);
    }
    while ( v2 );
  }
}
