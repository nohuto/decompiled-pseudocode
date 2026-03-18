/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x1400F0A40
 * Callers:
 *     NtQueryInformationThread @ 0x14049C030 (NtQueryInformationThread.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x14003FE30 (KeFlushProcessWriteBuffers.c)
 *     KeUpdateTotalCyclesCurrentThread @ 0x1400F0E94 (KeUpdateTotalCyclesCurrentThread.c)
 *     KiIpiSendPacket @ 0x140129790 (KiIpiSendPacket.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memset @ 0x140195A80 (memset.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  ULONG64 result; // rax
  unsigned __int8 CurrentIrql; // r13
  unsigned int v6; // ebx
  int v7; // r15d
  __int64 v8; // rdi
  volatile signed __int32 *v9; // r14
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  bool v16; // zf
  char v17; // al
  __int64 NextProcessor; // rax
  unsigned int v19; // ebx
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // r8d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v26[21]; // [rsp+38h] [rbp-F0h] BYREF

  if ( Thread == KeGetCurrentThread() )
    return KeUpdateTotalCyclesCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( Thread->ThreadLock );
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = Thread->WaitBlockFill6[68];
      v8 = 0LL;
      v9 = 0LL;
      if ( v7 == 5 )
      {
        v17 = Thread->WaitRegister.Flags & 7;
        if ( v17 == 1 || (unsigned __int8)(v17 - 3) <= 3u )
          goto LABEL_66;
        LOBYTE(v7) = 2;
        goto LABEL_55;
      }
      if ( Thread->WaitBlockFill6[68] == 1 )
        break;
      if ( Thread->WaitBlockFill6[68] == 2 )
      {
LABEL_55:
        NextProcessor = Thread->NextProcessor;
        if ( (int)NextProcessor >= 0 )
        {
          v8 = KiProcessorBlock[NextProcessor];
          v19 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
          {
            do
            {
              if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v19);
            }
            while ( *(_QWORD *)(v8 + 48) );
          }
          v16 = Thread == *(PKTHREAD *)(v8 + 8);
LABEL_50:
          if ( v16 )
            goto LABEL_66;
          goto LABEL_27;
        }
      }
      else
      {
        if ( Thread->WaitBlockFill6[68] != 3 )
          goto LABEL_66;
        v10 = Thread->NextProcessor;
        if ( (int)v10 >= 0 )
        {
          v8 = KiProcessorBlock[v10];
          v11 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
          {
            do
            {
              if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v11);
            }
            while ( *(_QWORD *)(v8 + 48) );
          }
          if ( Thread == *(PKTHREAD *)(v8 + 16) )
            goto LABEL_66;
          if ( Thread->WaitBlockFill6[68] == 3 && Thread->NextProcessor == (_DWORD)v10 )
            __fastfail(0x1Eu);
LABEL_27:
          _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
        }
      }
    }
    v12 = Thread->NextProcessor;
    if ( (int)v12 >= 0 )
    {
      v8 = KiProcessorBlock[v12];
      v15 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 48), 0LL) )
      {
        do
        {
          if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v15);
        }
        while ( *(_QWORD *)(v8 + 48) );
      }
      if ( Thread->WaitBlockFill6[68] != 1 )
        goto LABEL_27;
      v16 = Thread->NextProcessor == (_DWORD)v12;
      goto LABEL_50;
    }
    v13 = (unsigned int)v12;
    LODWORD(v13) = v12 & 0x7FFFFFFF;
    v14 = 0;
    v9 = *(volatile signed __int32 **)(KiProcessorBlock[v13] + 24776);
    while ( _interlockedbittestandset64(v9, 0LL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v14);
      }
      while ( *(_QWORD *)v9 );
    }
    if ( Thread->WaitBlockFill6[68] == 1 && Thread->NextProcessor == (_DWORD)v12 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
  }
LABEL_66:
  if ( (_BYTE)v7 == 2 )
  {
    v20 = Thread->NextProcessor;
    if ( v8 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
    if ( v9 )
      _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    Thread->ThreadLock = 0LL;
    v25 = 1310721LL;
    memset(v26, 0, 0xA0uLL);
    v21 = (unsigned int)KiProcessorIndexToNumberMappingTable[v20] >> 6;
    v22 = KiProcessorIndexToNumberMappingTable[v20] & 0x3F;
    if ( (_DWORD)v21 )
      LOWORD(v25) = v21 + 1;
    v26[v21] |= 1LL << v22;
    __writecr8(0xCuLL);
    KiIpiSendPacket(0, (unsigned int)&v25, (unsigned int)PopPoCoalescinCallback, 0, 0LL, 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    while ( CurrentPrcb->PacketBarrier )
      _mm_pause();
    *CycleTimeStamp = __rdtsc();
    result = Thread->CycleTime;
  }
  else
  {
    if ( Thread->Running )
      KeFlushProcessWriteBuffers(1);
    v24 = __rdtsc();
    *CycleTimeStamp = ((unsigned __int64)HIDWORD(v24) << 32) | (unsigned int)v24;
    result = Thread->CycleTime;
    if ( v8 )
      _InterlockedAnd64((volatile signed __int64 *)(v8 + 48), 0LL);
    if ( v9 )
      _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    Thread->ThreadLock = 0LL;
  }
  __writecr8(CurrentIrql);
  return result;
}
