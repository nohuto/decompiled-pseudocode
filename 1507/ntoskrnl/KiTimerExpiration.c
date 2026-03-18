/*
 * XREFs of KiTimerExpiration @ 0x14014AA34
 * Callers:
 *     KiTimerExpirationDpc @ 0x14014A938 (KiTimerExpirationDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     KiExpireTimerTable @ 0x14014ABA0 (KiExpireTimerTable.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall KiTimerExpiration(__int64 a1, int a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // r14
  unsigned int v12; // ebx
  int v13; // r14d
  int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // [rsp+40h] [rbp-68h] BYREF
  _QWORD v17[2]; // [rsp+48h] [rbp-60h] BYREF

  v4 = 0LL;
  if ( KiSerializeTimerExpiration )
  {
    if ( !*(_BYTE *)(a1 + 33) )
      return;
    v9 = KiProcessorBlock[0] + 13824;
  }
  else
  {
    v9 = a1 + 13824;
  }
  if ( v9 )
  {
    v10 = *(unsigned int *)(a1 + 26784);
    *(_DWORD *)(a1 + 26784) = ((_BYTE)v10 + 1) & 0xF;
    *(_QWORD *)(a1 + 16 * (v10 + 1658)) = a3;
    *(LARGE_INTEGER *)(a1 + 16 * (v10 + 1658) + 8) = KeQueryPerformanceCounter(0LL);
    v11 = a3 >> 18;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      v16 = a3;
      v17[0] = &v16;
      v17[1] = 8LL;
      EtwTraceKernelEvent((int)v17, 1, 0x40020000u, 0xF50u, 1538);
    }
    v12 = v11 - a2 + 1;
    if ( v12 > 0x100 )
      v4 = (v11 - v12 + 1) << 18;
    do
    {
      if ( v12 <= 0x100 )
      {
        v13 = v12;
        v14 = 256 - v12;
        v4 = a3;
        if ( 256 - v12 > 0x18 )
          v14 = 24;
      }
      else
      {
        v4 += 0x4000000LL;
        v13 = 256;
        v14 = 0;
      }
      KiExpireTimerTable(a1, v9, a2, v13, v14, v4, a4);
      a2 += v13;
      v12 -= v13;
    }
    while ( v12 );
    if ( (*(_BYTE *)(a1 + 11756) & 8) == 0 )
    {
      *(_DWORD *)(a1 + 23336) = 0;
      v15 = *(_DWORD *)(a1 + 23340);
      if ( v15 >= KeTimeIncrement )
        *(_DWORD *)(a1 + 23340) = v15 - KeTimeIncrement;
      else
        *(_DWORD *)(a1 + 23340) = 0;
    }
  }
}
