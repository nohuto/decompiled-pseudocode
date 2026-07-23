/*
 * XREFs of HvpAllocateMap @ 0x1404C6174
 * Callers:
 *     HvpExpandMap @ 0x14047CBA0 (HvpExpandMap.c)
 *     HvpInitMap @ 0x1404C5FEC (HvpInitMap.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 */

char __fastcall HvpAllocateMap(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // ebx
  void *v8; // rax
  void *v9; // rsi
  __int64 v10; // rax

  v5 = a3;
  if ( a4 < 0x400 )
  {
    if ( a3 > a4 )
      return 1;
    while ( 1 )
    {
      v8 = (void *)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 24))(20480LL, 0LL, 959597891LL);
      v9 = v8;
      if ( !v8 )
        break;
      memset(v8, 0, 0x5000uLL);
      v10 = v5++;
      *(_QWORD *)(a2 + 8 * v10) = v9;
      if ( v5 > a4 )
        return 1;
    }
  }
  return 0;
}
