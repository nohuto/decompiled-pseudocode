/*
 * XREFs of MiCfgEliminateZeroPages @ 0x1404A2F40
 * Callers:
 *     MiCopyToCfgBitMap @ 0x14042E0B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14042E520 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiGetPteAddress @ 0x14002B5E4 (MiGetPteAddress.c)
 *     MiConvertAndFlushWsleVas @ 0x14008FF58 (MiConvertAndFlushWsleVas.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCfgEliminateZeroPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rbx
  __int64 result; // rax
  unsigned int v7; // r9d
  __int64 v8; // rsi
  unsigned __int64 i; // rdi
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  _DWORD v12[40]; // [rsp+50h] [rbp-C8h] BYREF

  v4 = (_QWORD *)a2;
  v12[0] = 0;
  result = MiGetPteAddress(a2);
  v8 = result;
  for ( i = a3 >> 12; i; --i )
  {
    v10 = v4;
    v11 = v4 + 511;
    do
    {
      result = *v10 | *v11;
      if ( result )
        break;
      ++v10;
      --v11;
    }
    while ( v10 <= v11 );
    if ( v10 > v11 )
    {
      result = v7;
      *(_QWORD *)&v12[2 * v7 + 2] = v4;
      v7 = v12[0] + 1;
      v12[0] = v7;
      if ( v7 == 19 )
      {
        result = MiConvertAndFlushWsleVas(a1, v12);
        v7 = 0;
        v12[0] = 0;
      }
    }
    v8 += 8LL;
    v4 += 512;
  }
  if ( v7 )
    return MiConvertAndFlushWsleVas(a1, v12);
  return result;
}
