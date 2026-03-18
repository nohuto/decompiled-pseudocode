/*
 * XREFs of MiCfgEliminateZeroPages @ 0x140493590
 * Callers:
 *     MiCopyToCfgBitMap @ 0x1404163B0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140416800 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiConvertAndFlushWsleVas @ 0x1400D05B4 (MiConvertAndFlushWsleVas.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiCfgEliminateZeroPages(volatile LONG *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rbx
  unsigned int v6; // edi
  __int64 result; // rax
  __int64 v8; // r14
  unsigned __int64 i; // rsi
  _QWORD *v10; // r8
  _QWORD *v11; // rdx
  unsigned int v12[40]; // [rsp+50h] [rbp-C8h] BYREF

  v4 = (_QWORD *)a2;
  v6 = 0;
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
      result = v6;
      *(_QWORD *)&v12[2 * v6 + 2] = v4;
      v6 = v12[0] + 1;
      v12[0] = v6;
      if ( v6 == 19 )
      {
        result = MiConvertAndFlushWsleVas(a1, v12);
        v6 = 0;
        v12[0] = 0;
      }
    }
    v8 += 8LL;
    v4 += 512;
  }
  if ( v6 )
    return MiConvertAndFlushWsleVas(a1, v12);
  return result;
}
