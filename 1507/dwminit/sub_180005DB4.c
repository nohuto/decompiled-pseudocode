/*
 * XREFs of sub_180005DB4 @ 0x180005DB4
 * Callers:
 *     sub_180005B00 @ 0x180005B00 (sub_180005B00.c)
 *     sub_180005E50 @ 0x180005E50 (sub_180005E50.c)
 *     sub_18000614C @ 0x18000614C (sub_18000614C.c)
 * Callees:
 *     sub_180003DD8 @ 0x180003DD8 (sub_180003DD8.c)
 *     sub_180003E20 @ 0x180003E20 (sub_180003E20.c)
 *     sub_180006080 @ 0x180006080 (sub_180006080.c)
 *     memset @ 0x180007606 (memset.c)
 */

char __fastcall sub_180005DB4(__int64 a1, unsigned int a2, char a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  void *v8; // rax

  v4 = a2;
  v5 = *(_QWORD *)a1;
  if ( v5 )
  {
    sub_180003E20(v5);
    *(_QWORD *)a1 = 0LL;
  }
  if ( a3 )
  {
    v8 = (void *)sub_180003DD8(saturated_mul(v4, 8uLL));
    *(_QWORD *)a1 = v8;
    if ( !v8 )
      return 0;
    memset(v8, 0, 8 * v4);
  }
  *(_DWORD *)(a1 + 16) = v4;
  sub_180006080(a1);
  return 1;
}
