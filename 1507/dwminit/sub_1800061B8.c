/*
 * XREFs of sub_1800061B8 @ 0x1800061B8
 * Callers:
 *     sub_18000614C @ 0x18000614C (sub_18000614C.c)
 * Callees:
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 *     sub_180005F4C @ 0x180005F4C (sub_180005F4C.c)
 *     sub_180006328 @ 0x180006328 (sub_180006328.c)
 */

__int64 __fastcall sub_1800061B8(__int64 a1, _DWORD *a2, unsigned int a3, int a4)
{
  __int64 v5; // rbp
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // r8
  int v11; // edx
  _QWORD *i; // rcx
  __int64 v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned int v15; // eax

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = *(unsigned int *)(a1 + 52);
    if ( v8 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v8 < 0x30 )
        goto LABEL_8;
      v8 *= 48LL;
    }
    if ( -1LL - v8 >= 8 )
    {
      v9 = malloc(v8 + 8);
      v10 = v9;
      if ( !v9 )
        goto LABEL_18;
      *v9 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v9;
LABEL_9:
      if ( v10 )
      {
        v11 = *(_DWORD *)(a1 + 52);
        for ( i = &v10[6 * (unsigned int)(v11 - 1) + 1]; --v11 >= 0; i -= 6 )
        {
          i[4] = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 64) = i;
        }
        goto LABEL_13;
      }
LABEL_18:
      sub_180006328(2147942414LL);
    }
LABEL_8:
    v10 = 0LL;
    goto LABEL_9;
  }
LABEL_13:
  v13 = *(_QWORD *)(a1 + 64);
  if ( !v13 )
    sub_180006328(2147500037LL);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v13 + 32);
  *(_DWORD *)v13 = *a2;
  *(_DWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v13 + 12) = 0;
  *(_QWORD *)(v13 + 16) = 0LL;
  *(_QWORD *)(v13 + 24) = 0LL;
  *(_DWORD *)(v13 + 40) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v13 + 32) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v13;
  v14 = *(_QWORD *)(a1 + 8);
  if ( v14 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v15 = sub_180005F4C(a1, v14);
    sub_180005E50(a1, v15);
  }
  return v13;
}
