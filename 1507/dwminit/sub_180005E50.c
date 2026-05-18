/*
 * XREFs of sub_180005E50 @ 0x180005E50
 * Callers:
 *     sub_180005FD8 @ 0x180005FD8 (sub_180005FD8.c)
 *     sub_1800061B8 @ 0x1800061B8 (sub_1800061B8.c)
 * Callees:
 *     sub_180003DD8 @ 0x180003DD8 (sub_180003DD8.c)
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 *     sub_180005DB4 @ 0x180005DB4 (sub_180005DB4.c)
 *     sub_180005F4C @ 0x180005F4C (sub_180005F4C.c)
 *     sub_180006080 @ 0x180006080 (sub_180006080.c)
 *     sub_180006328 @ 0x180006328 (sub_180006328.c)
 *     memset @ 0x180007606 (memset.c)
 */

void __fastcall sub_180005E50(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 i; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  __int64 v9; // rdx

  v2 = a2;
  if ( !a2 )
    v2 = sub_180005F4C(a1, *(_QWORD *)(a1 + 8));
  if ( v2 != *(_DWORD *)(a1 + 16) )
  {
    if ( *(_QWORD *)a1 )
    {
      v4 = (_QWORD *)sub_180003DD8(saturated_mul(v2, 8uLL));
      v5 = v4;
      if ( !v4 )
        sub_180006328(2147942414LL);
      memset(v4, 0, 8LL * v2);
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
      {
        v7 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
        if ( v7 )
        {
          do
          {
            v8 = *(_QWORD *)(v7 + 32);
            v9 = *(_DWORD *)(v7 + 40) % v2;
            *(_QWORD *)(v7 + 32) = v5[v9];
            v5[(unsigned int)v9] = v7;
            v7 = v8;
          }
          while ( v8 );
        }
      }
      sub_180003E20(*(_QWORD *)a1);
      *(_QWORD *)a1 = v5;
      *(_DWORD *)(a1 + 16) = v2;
      sub_180006080(a1);
    }
    else
    {
      sub_180005DB4(a1, v2, 0);
    }
  }
}
