/*
 * XREFs of KiCancelTimer @ 0x1400916F0
 * Callers:
 *     KiSuspendThread @ 0x140030EF4 (KiSuspendThread.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeSetTimerEx @ 0x140091400 (KeSetTimerEx.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeSetTimer @ 0x140091530 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x1400E78B8 (KiSetTimerEx.c)
 *     KeCancelTimerInternal @ 0x1400EE4FC (KeCancelTimerInternal.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // di
  char v4; // bp
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  volatile signed __int32 *v10; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  unsigned __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r14d
  volatile signed __int32 *v17; // rcx
  int v18; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+34h] [rbp-54h] BYREF
  int v20; // [rsp+38h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0;
  v4 = a2;
  while ( 1 )
  {
    v19 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
        KeYieldProcessorEx(&v19, a2, a3);
      while ( (*(_DWORD *)a1 & 0x80u) != 0 );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v7 = *(unsigned __int8 *)(a1 + 2);
    v8 = *(unsigned int *)(a1 + 56);
    v20 = 0;
    v9 = KiProcessorBlock[v8] + 13824;
    v10 = (volatile signed __int32 *)(v9 + 32 * (v7 + 16));
    while ( _interlockedbittestandset64(v10, 0LL) )
    {
      do
        KeYieldProcessorEx(&v20, a2, a3);
      while ( *(_QWORD *)v10 );
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v11 = *(_QWORD **)(a1 + 32);
      v12 = *(_QWORD **)(a1 + 40);
      v13 = v7;
      if ( v11[1] != a1 + 32 || *v12 != a1 + 32 )
        __fastfail(3u);
      *v12 = v11;
      v11[1] = v12;
      if ( v12 == v11 )
      {
        *(_DWORD *)(32 * (v7 + 16) + v9 + 28) = -1;
        v15 = qword_140383178[2 * *(unsigned __int8 *)(v9 - 12208)];
        if ( KiSerializeTimerExpiration )
        {
          v16 = v7 & 0x3F;
          v17 = (volatile signed __int32 *)(v15 + 8 * (v13 >> 6));
        }
        else
        {
          v16 = *(unsigned __int8 *)(v9 - 12207);
          v17 = (volatile signed __int32 *)((v13 << 6) + v15);
        }
        _interlockedbittestandreset64(v17, v16);
      }
      _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
      v14 = 0x40000000;
      if ( v4 )
        v14 = 1073741952;
LABEL_16:
      _InterlockedAnd((volatile signed __int32 *)a1, ~v14);
      v3 = 1;
      goto LABEL_6;
    }
    _InterlockedAnd64((volatile signed __int64 *)v10, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v9 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v14 = -16777216;
      if ( v4 )
        v14 = -16777088;
      goto LABEL_16;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v18 = 0;
    while ( *(char *)(a1 + 3) < 0 )
      KeYieldProcessorEx(&v18, a2, a3);
  }
  if ( v4 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_6:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v3 )
  {
    v21 = a1;
    v22[0] = &v21;
    v22[1] = 8LL;
    EtwTraceKernelEvent((int)v22, 1, 0x40020000u, 0xF55u, 1538);
  }
  return v3;
}
