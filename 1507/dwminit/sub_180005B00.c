/*
 * XREFs of sub_180005B00 @ 0x180005B00
 * Callers:
 *     sub_180005AE0 @ 0x180005AE0 (sub_180005AE0.c)
 * Callees:
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 *     sub_180005DB4 @ 0x180005DB4 (sub_180005DB4.c)
 *     sub_180005F4C @ 0x180005F4C (sub_180005F4C.c)
 *     sub_180005FD8 @ 0x180005FD8 (sub_180005FD8.c)
 *     sub_18000603C @ 0x18000603C (sub_18000603C.c)
 */

__int64 __fastcall sub_180005B00(__int64 a1)
{
  __int64 i; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned int v5; // eax
  __int64 result; // rax

  ++*(_DWORD *)(a1 + 48);
  if ( *(_QWORD *)a1 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 16); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * i);
      while ( v3 )
      {
        v4 = v3;
        v3 = *(_QWORD *)(v3 + 32);
        sub_180005FD8(a1, v4);
      }
    }
  }
  sub_180003E20(*(_QWORD *)a1);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v5 = sub_180005F4C(a1, 0LL);
    sub_180005DB4(a1, v5, 0LL);
  }
  result = sub_18000603C(a1);
  --*(_DWORD *)(a1 + 48);
  return result;
}
