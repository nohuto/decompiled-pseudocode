/*
 * XREFs of ?vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x14031FA10
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x14013384C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vTransparentCopyS24D16(struct BLTINFO *a1)
{
  int v1; // r13d
  int v3; // esi
  _WORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  _WORD *v7; // r14
  int v8; // r15d
  unsigned __int8 *v9; // r12
  int v10; // eax
  int v11; // edx
  int v12; // [rsp+70h] [rbp+8h]
  __int64 v13; // [rsp+78h] [rbp+10h]
  unsigned int (__fastcall *v14)(struct _XLATEOBJ *, unsigned int); // [rsp+80h] [rbp+18h]
  __int64 v15; // [rsp+88h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v13 = *(_QWORD *)a1;
  v12 = v1;
  v14 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v4 = (_WORD *)(*((_QWORD *)a1 + 2) + 2 * *((_DWORD *)a1 + 14));
  if ( v3 )
  {
    v5 = *((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12) + 1LL;
    do
    {
      --v3;
      v15 = v5;
      v6 = v5;
      v7 = v4;
      v8 = v1;
      if ( v1 )
      {
        v9 = (unsigned __int8 *)v5;
        do
        {
          v10 = *v9;
          --v8;
          v11 = v9[1];
          v9 += 3;
          if ( (*(v9 - 4) | ((v10 | (v11 << 8)) << 8)) != *((_DWORD *)a1 + 37) )
            *v7 = ((__int64 (__fastcall *)(__int64))v14)(v13);
          ++v7;
        }
        while ( v8 );
        v6 = v15;
        v1 = v12;
      }
      v4 = (_WORD *)((char *)v4 + *((int *)a1 + 11));
      v5 = v6 + *((int *)a1 + 10);
    }
    while ( v3 );
  }
}
