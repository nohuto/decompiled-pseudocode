/*
 * XREFs of KeFlushMultipleRangeTb @ 0x14017E0D8
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MmProtectSystemCacheView @ 0x140217958 (MmProtectSystemCacheView.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400425D0 (KiIpiSendRequestEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     VmFlushTb @ 0x14025B4C4 (VmFlushTb.c)
 *     ExFlushTb @ 0x140264FB0 (ExFlushTb.c)
 *     HvlFlushRangeListTb @ 0x140270884 (HvlFlushRangeListTb.c)
 */

__int64 __fastcall KeFlushMultipleRangeTb(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  unsigned int v6; // edi
  __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rcx
  volatile _KAFFINITY_EX *p_ActiveProcessors; // r10
  __int64 result; // rax
  unsigned int v12; // r15d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rbx
  _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdx
  unsigned __int16 Count; // cx
  _WORD *v18; // r10
  unsigned int v19; // r8d
  __int64 v20; // rdx
  unsigned __int8 v21; // bl
  signed __int32 v22[8]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v24; // [rsp+48h] [rbp-B8h]
  unsigned int v25; // [rsp+4Ch] [rbp-B4h]
  _WORD v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v27; // [rsp+54h] [rbp-ACh]
  _QWORD v28[21]; // [rsp+58h] [rbp-A8h] BYREF

  v4 = a1;
  v6 = a3;
  v7 = 1LL;
  if ( (_DWORD)a3 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid )
  {
    LOBYTE(a3) = 1;
    goto LABEL_7;
  }
  LOBYTE(a3) = 0;
  if ( (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || (unsigned int)KeNumberProcessors_0 > 1) )
  {
LABEL_7:
    if ( KiKvaShadow )
    {
      if ( !v6 )
      {
LABEL_11:
        LOBYTE(v7) = 0;
        goto LABEL_12;
      }
      v8 = v6 - 1;
      if ( v6 == 1 )
      {
LABEL_12:
        v9 = 0LL;
LABEL_13:
        if ( (_DWORD)a4 )
          p_ActiveProcessors = 0LL;
        else
          p_ActiveProcessors = &KeGetCurrentThread()->ApcState.Process->ActiveProcessors;
        LOBYTE(a4) = a3;
        LOBYTE(a3) = v7;
        result = HvlFlushRangeListTb(v9, p_ActiveProcessors, a3, a4, v4, a2);
        goto LABEL_30;
      }
    }
    else
    {
      if ( !v6 )
        goto LABEL_12;
      v8 = v6 - 1;
      if ( v6 == 1 )
      {
        LOBYTE(v7) = 0;
        v9 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
        goto LABEL_13;
      }
    }
    if ( v8 == 1 )
      goto LABEL_11;
    goto LABEL_12;
  }
  v23 = a2;
  v24 = a1;
  v12 = 4;
  v25 = v6;
  if ( (_DWORD)a4 == 1 )
    v12 = -2147483644;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_DWORD)a4 )
  {
    v18 = 0LL;
  }
  else
  {
    _InterlockedOr(v22, 0);
    CurrentThread = CurrentPrcb->CurrentThread;
    v27 = 0;
    Process = CurrentThread->ApcState.Process;
    Count = Process->ActiveProcessors.Count;
    LOWORD(CurrentThread) = Process->ActiveProcessors.Size;
    v26[0] = Count;
    v26[1] = (_WORD)CurrentThread;
    if ( Count )
    {
      memmove(v28, Process->ActiveProcessors.Bitmap, 8LL * Count);
      Count = v26[0];
    }
    v18 = v26;
    v19 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
    v20 = v19 >> 6;
    if ( Count > (unsigned int)v20 )
      v28[v20] &= ~(1LL << (v19 & 0x3F));
    v7 = 0LL;
  }
  KiIpiSendRequestEx(
    (__int64)CurrentPrcb,
    v7,
    v18,
    (int)&v23,
    v4,
    v12,
    (__int64 (__fastcall *)(__int64, __int64))KiFlushRangeWorker,
    (__int64)&v23);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_30:
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v4, a2);
  if ( ExTbFlushActive )
  {
    v21 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb((unsigned int)v4, a2, v6);
    result = v21;
    __writecr8(v21);
  }
  return result;
}
