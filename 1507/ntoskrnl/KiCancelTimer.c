/*
 * XREFs of KiCancelTimer @ 0x140066B50
 * Callers:
 *     KiSuspendThread @ 0x14000CA68 (KiSuspendThread.c)
 *     ExpCancelTimer @ 0x140066750 (ExpCancelTimer.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KeSetTimerEx @ 0x140066890 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1400669A0 (KeSetTimer.c)
 *     KiSetTimerEx @ 0x140068414 (KiSetTimerEx.c)
 *     KeCancelTimerInternal @ 0x14012CA88 (KeCancelTimerInternal.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiCancelTimer(__int64 a1, char a2)
{
  unsigned __int8 v4; // di
  unsigned int v5; // esi
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  volatile signed __int32 *v8; // rsi
  unsigned int v9; // r12d
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // r14d
  volatile signed __int32 *v15; // rcx
  int v16; // eax
  unsigned int v18; // esi
  __int64 v19; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v20[2]; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v5 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
      while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      break;
    v6 = *(unsigned __int8 *)(a1 + 2);
    v7 = KiProcessorBlock[*(unsigned int *)(a1 + 56)] + 13824;
    v8 = (volatile signed __int32 *)(v7 + 32 * (v6 + 16));
    v9 = 0;
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v9);
      }
      while ( *(_QWORD *)v8 );
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
        *(_DWORD *)(32 * (v6 + 16) + v7 + 28) = -1;
        v13 = qword_1403D2238[2 * *(unsigned __int8 *)(v7 - 12208)];
        if ( KiSerializeTimerExpiration )
        {
          v14 = v6 & 0x3F;
          v15 = (volatile signed __int32 *)(v13 + 8 * (v12 >> 6));
        }
        else
        {
          v14 = *(unsigned __int8 *)(v7 - 12207);
          v15 = (volatile signed __int32 *)((v12 << 6) + v13);
        }
        _interlockedbittestandreset64(v15, v14);
      }
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
      v16 = 0x40000000;
      if ( a2 )
        v16 = 1073741952;
LABEL_15:
      _InterlockedAnd((volatile signed __int32 *)a1, ~v16);
      v4 = 1;
      goto LABEL_16;
    }
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v7 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F)), 0LL) )
    {
      v16 = -16777216;
      if ( a2 )
        v16 = -16777088;
      goto LABEL_15;
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v18 = 0;
    while ( *(char *)(a1 + 3) < 0 )
    {
      if ( (++v18 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v18);
    }
  }
  if ( a2 )
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_16:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v4 )
  {
    v19 = a1;
    v20[0] = &v19;
    v20[1] = 8LL;
    EtwTraceKernelEvent((int)v20, 1, 0x40020000u, 0xF55u, 1538);
  }
  return v4;
}
