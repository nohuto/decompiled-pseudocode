/*
 * XREFs of ?vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C012CC40
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C012CD2C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vTransparentCopyS24D32(struct BLTINFO *a1)
{
  int v1; // r13d
  int v3; // ebp
  __int64 v4; // rsi
  _DWORD *v5; // rdi
  int v6; // eax
  int v7; // r12d
  int v8; // edx
  unsigned __int8 *v9; // r15
  _DWORD *v10; // r14
  int v11; // [rsp+78h] [rbp+10h]
  __int64 v12; // [rsp+80h] [rbp+18h]
  unsigned int (*v13)(struct _XLATEOBJ *, unsigned int); // [rsp+88h] [rbp+20h]

  v1 = *((_DWORD *)a1 + 7);
  v3 = *((_DWORD *)a1 + 8);
  v12 = *(_QWORD *)a1;
  v11 = v1;
  v13 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v4 = *((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12);
  v5 = (_DWORD *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  while ( v3 )
  {
    --v3;
    v10 = v5;
    v7 = v1;
    if ( v1 )
    {
      v9 = (unsigned __int8 *)(v4 + 1);
      do
      {
        v6 = *v9;
        --v7;
        v8 = v9[1];
        v9 += 3;
        if ( (*(v9 - 4) | ((v6 | (v8 << 8)) << 8)) != *((_DWORD *)a1 + 37) )
          *v10 = ((__int64 (__fastcall *)(__int64))v13)(v12);
        ++v10;
      }
      while ( v7 );
      v1 = v11;
    }
    v4 += *((int *)a1 + 10);
    v5 = (_DWORD *)((char *)v5 + *((int *)a1 + 11));
  }
}
