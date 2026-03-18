/*
 * XREFs of ?vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x14031F6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x14013384C (-pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

void __fastcall vTransparentCopyS16D24(struct BLTINFO *a1)
{
  int v2; // ebp
  int v3; // r9d
  __int64 v4; // rdx
  int v5; // edi
  _WORD *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  _WORD *v9; // r12
  int v10; // r15d
  _BYTE *v11; // r14
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-58h]
  int v15; // [rsp+88h] [rbp+10h]
  __int64 v16; // [rsp+90h] [rbp+18h]
  unsigned int (__fastcall *v17)(struct _XLATEOBJ *, unsigned int); // [rsp+98h] [rbp+20h]

  v2 = *((_DWORD *)a1 + 8);
  v16 = *(_QWORD *)a1;
  v15 = *((_DWORD *)a1 + 7);
  v17 = XLATE::pfnXlateBetweenBitfields(*(XLATE **)a1);
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 9) + 128LL);
  if ( v4 )
    v5 = **(_DWORD **)(v4 + 112) | *(_DWORD *)(*(_QWORD *)(v4 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v4 + 112) + 8LL);
  else
    LOWORD(v5) = -1;
  v6 = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  if ( v2 )
  {
    v7 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14) + 2LL;
    do
    {
      --v2;
      v14 = v7;
      v8 = v7;
      v9 = v6;
      v10 = v3;
      if ( v3 )
      {
        v11 = (_BYTE *)v7;
        do
        {
          --v10;
          v12 = (unsigned __int16)(v5 & *v9++);
          if ( v12 != *((_DWORD *)a1 + 37) )
          {
            v13 = ((__int64 (__fastcall *)(__int64))v17)(v16);
            *(v11 - 2) = v13;
            *v11 = BYTE2(v13);
            *(v11 - 1) = BYTE1(v13);
          }
          v11 += 3;
        }
        while ( v10 );
        v8 = v14;
        v3 = v15;
      }
      v6 = (_WORD *)((char *)v6 + *((int *)a1 + 10));
      v7 = v8 + *((int *)a1 + 11);
    }
    while ( v2 );
  }
}
