/*
 * XREFs of KiTimerExpiration @ 0x1401240E8
 * Callers:
 *     KiTimerExpirationDpc @ 0x140124018 (KiTimerExpirationDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KiExpireTimerTable @ 0x140124234 (KiExpireTimerTable.c)
 *     KiSelectActiveTimerTable @ 0x14012AB58 (KiSelectActiveTimerTable.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KiTimerExpiration(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // r14d
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r12d
  __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned int v15; // ebx
  int v16; // ebp
  int v17; // eax
  unsigned __int64 v18; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 *v19; // [rsp+48h] [rbp-60h] BYREF
  int v20; // [rsp+50h] [rbp-58h]
  int v21; // [rsp+54h] [rbp-54h]

  v4 = a2;
  LOBYTE(a2) = 1;
  result = KiSelectActiveTimerTable(a1, a2);
  v11 = result;
  if ( result )
  {
    v12 = *(unsigned int *)(v9 + 26912);
    *(_DWORD *)(a1 + 26912) = ((_BYTE)v12 + 1) & 0xF;
    *(_QWORD *)(a1 + 16 * (v12 + 1666)) = v10;
    *(LARGE_INTEGER *)(a1 + 16 * (v12 + 1666) + 8) = KeQueryPerformanceCounter(0LL);
    v13 = a3 >> 18;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    {
      v21 = 0;
      v19 = &v18;
      v18 = a3;
      v20 = 8;
      EtwTraceKernelEvent((int)&v19, 1, 0x40020000u, 3920, 1538);
    }
    v14 = 0LL;
    v15 = v13 - v4 + 1;
    if ( v15 > 0x100 )
      v14 = (v13 - v15 + 1) << 18;
    do
    {
      if ( v15 <= 0x100 )
      {
        v16 = v15;
        v17 = 256 - v15;
        v14 = a3;
        if ( 256 - v15 > 0x18 )
          v17 = 24;
      }
      else
      {
        v14 += 0x4000000LL;
        v16 = 256;
        v17 = 0;
      }
      result = KiExpireTimerTable(a1, v11, v4, v16, v17, v14, a4);
      v4 += v16;
      v15 -= v16;
    }
    while ( v15 );
    if ( (*(_BYTE *)(a1 + 11756) & 8) == 0 )
    {
      *(_DWORD *)(a1 + 23336) = 0;
      result = *(unsigned int *)(a1 + 23340);
      if ( (unsigned int)result >= KeTimeIncrement )
      {
        result = (unsigned int)(result - KeTimeIncrement);
        *(_DWORD *)(a1 + 23340) = result;
      }
      else
      {
        *(_DWORD *)(a1 + 23340) = 0;
      }
    }
  }
  return result;
}
