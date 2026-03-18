/*
 * XREFs of MiCfgEliminateZeroPages @ 0x140520CD0
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiConvertAndFlushWsleVas @ 0x1401076E8 (MiConvertAndFlushWsleVas.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCfgEliminateZeroPages(volatile signed __int32 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rbx
  unsigned int v5; // r9d
  __int64 result; // rax
  __int64 v7; // rsi
  unsigned __int64 i; // rdi
  _QWORD *v9; // r8
  _QWORD *v10; // rdx
  unsigned int v11[40]; // [rsp+50h] [rbp-C8h] BYREF

  v3 = (_QWORD *)a2;
  v5 = 0;
  v11[0] = 0;
  result = 0x98000000000LL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = a3 >> 12; i; --i )
  {
    v9 = v3;
    v10 = v3 + 511;
    do
    {
      result = *v9 | *v10;
      if ( result )
        break;
      ++v9;
      --v10;
    }
    while ( v9 <= v10 );
    if ( v9 > v10 )
    {
      result = v5;
      *(_QWORD *)&v11[2 * v5 + 2] = v3;
      v5 = v11[0] + 1;
      v11[0] = v5;
      if ( v5 == 19 )
      {
        result = MiConvertAndFlushWsleVas(a1, v11);
        v5 = 0;
        v11[0] = 0;
      }
    }
    v7 += 8LL;
    v3 += 512;
  }
  if ( v5 )
    return MiConvertAndFlushWsleVas(a1, v11);
  return result;
}
