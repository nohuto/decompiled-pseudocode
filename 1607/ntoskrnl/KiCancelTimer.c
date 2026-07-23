/*
 * XREFs of KiCancelTimer @ 0x140057BD0
 * Callers:
 *     KiSetTimerEx @ 0x140006F70 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x140055D50 (KeSetTimerEx.c)
 *     KeCancelTimerInternal @ 0x1400ACEF0 (KeCancelTimerInternal.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     KiSuspendThread @ 0x1400C7874 (KiSuspendThread.c)
 *     ExpCancelTimer @ 0x1400EC064 (ExpCancelTimer.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, char a2)
{
  unsigned __int8 v2; // di
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // r15
  volatile signed __int32 *v9; // r14
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // ebp
  volatile signed __int32 *v15; // rcx
  int v16; // eax
  int v17; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+34h] [rbp-54h] BYREF
  int v19; // [rsp+38h] [rbp-50h] BYREF
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v21[2]; // [rsp+48h] [rbp-40h] BYREF

  v2 = 0;
  while ( 1 )
  {
    v17 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v17);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v6 = *(unsigned __int8 *)(a1 + 2);
    v7 = *(unsigned int *)(a1 + 56);
    v18 = 0;
    v8 = KiProcessorBlock[v7] + 13824;
    v9 = (volatile signed __int32 *)(v8 + 32 * (v6 + 16));
    while ( _interlockedbittestandset64(v9, 0LL) )
    {
      do
        KeYieldProcessorEx(&v18);
      while ( *(_QWORD *)v9 );
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v10 = *(_QWORD **)(a1 + 32);
      v11 = *(_QWORD **)(a1 + 40);
      v12 = v6;
      if ( v10[1] != a1 + 32 || *v11 != a1 + 32 )
        __fastfail(3u);
      *v11 = v10;
      v10[1] = v11;
      if ( v11 == v10 )
      {
        *(_DWORD *)(32 * (v6 + 16) + v8 + 28) = -1;
        v13 = qword_1403AB288[2 * *(unsigned __int8 *)(v8 - 12208)];
        if ( KiSerializeTimerExpiration )
        {
          v14 = v6 & 0x3F;
          v15 = (volatile signed __int32 *)(v13 + 8 * (v12 >> 6));
        }
        else
        {
          v14 = *(unsigned __int8 *)(v8 - 12207);
          v15 = (volatile signed __int32 *)((v12 << 6) + v13);
        }
        _interlockedbittestandreset64(v15, v14);
      }
      _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
      v16 = 0x40000000;
      if ( a2 )
        v16 = 1073741952;
LABEL_19:
      _InterlockedAnd((volatile signed __int32 *)a1, ~v16);
      v2 = 1;
      goto LABEL_6;
    }
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v8 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v16 = -16777216;
      if ( a2 )
        v16 = -16777088;
      goto LABEL_19;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v19 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v19);
  }
  if ( a2 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_6:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v2 )
  {
    v20 = a1;
    v21[0] = &v20;
    v21[1] = 8LL;
    EtwTraceKernelEvent((int)v21, 1, 0x40020000u, 3925, 1538);
  }
  return v2;
}
