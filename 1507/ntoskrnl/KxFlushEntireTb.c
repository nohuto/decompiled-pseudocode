/*
 * XREFs of KxFlushEntireTb @ 0x14003F924
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     KeFlushEntireTb @ 0x140203DB8 (KeFlushEntireTb.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400425D0 (KiIpiSendRequestEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 */

__int64 __fastcall KxFlushEntireTb(int a1)
{
  bool v1; // al
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned int CurrentPrcb; // r14d
  unsigned int v5; // ebx
  char v6; // cl
  int v7; // esi
  struct _KPRCB *v8; // rbx
  _KPROCESS *Process; // rdx
  unsigned __int16 Count; // r8
  unsigned __int16 Size; // ax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 result; // rax
  signed __int32 v15[8]; // [rsp+0h] [rbp-118h] BYREF
  _WORD v16[2]; // [rsp+40h] [rbp-D8h] BYREF
  int v17; // [rsp+44h] [rbp-D4h]
  _QWORD v18[21]; // [rsp+48h] [rbp-D0h] BYREF

  v1 = 1;
  v2 = 3LL;
  if ( a1 == 1 )
  {
    v2 = 2147483651LL;
  }
  else if ( !a1 )
  {
    v1 = KiKvaShadow == 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = (unsigned int)KeGetCurrentPrcb();
  if ( v1 )
  {
    v5 = 0;
    _m_prefetchw(&KiTbFlushTimeStamp);
    v6 = KiTbFlushTimeStamp;
    v7 = KiTbFlushTimeStamp;
    while ( (v6 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
      v6 = KiTbFlushTimeStamp;
      if ( KiTbFlushTimeStamp - v7 >= 3 || KiTbFlushTimeStamp - v7 >= 2 && (v7 & 1) == 0 )
        goto LABEL_23;
    }
    KiIpiSendRequestEx(CurrentPrcb, 1, 0, 0, 0LL, v2, (__int64)KiFlushCurrentTbWorker, 0LL);
    _InterlockedIncrement(&KiTbFlushTimeStamp);
  }
  else
  {
    _InterlockedOr(v15, 0);
    v8 = KeGetCurrentPrcb();
    v17 = 0;
    Process = v8->CurrentThread->ApcState.Process;
    Count = Process->ActiveProcessors.Count;
    Size = Process->ActiveProcessors.Size;
    v16[0] = Count;
    v16[1] = Size;
    if ( Count )
    {
      memmove(v18, Process->ActiveProcessors.Bitmap, 8LL * Count);
      Count = v16[0];
    }
    v12 = KiProcessorIndexToNumberMappingTable[v8->Number];
    v13 = v12 >> 6;
    if ( Count > (unsigned int)v13 )
      v18[v13] &= ~(1LL << (v12 & 0x3F));
    KiIpiSendRequestEx((_DWORD)v8, 0, (unsigned int)v16, 0, 0LL, v2, (__int64)KiFlushCurrentTbWorker, 0LL);
  }
LABEL_23:
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
