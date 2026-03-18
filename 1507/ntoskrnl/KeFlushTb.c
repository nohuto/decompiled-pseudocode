/*
 * XREFs of KeFlushTb @ 0x140042090
 * Callers:
 *     MiSetSystemCodeProtection @ 0x140023140 (MiSetSystemCodeProtection.c)
 *     MmMapViewInSystemCache @ 0x14003D650 (MmMapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiProtectPool @ 0x14005EFD0 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MiInsertCachedPte @ 0x1400B1C20 (MiInsertCachedPte.c)
 *     MiChangePageAttribute @ 0x1400E5678 (MiChangePageAttribute.c)
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     MiReplaceUltraBit @ 0x1400FC6D4 (MiReplaceUltraBit.c)
 *     MiAttachSession @ 0x140123F38 (MiAttachSession.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14016F234 (MiGetWsAndMakePageTablesNx.c)
 *     MmProtectSystemCacheView @ 0x140217958 (MmProtectSystemCacheView.c)
 *     MiCombiningInProgress @ 0x1402282C0 (MiCombiningInProgress.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 *     NtFreeUserPhysicalPages @ 0x1406A6AD8 (NtFreeUserPhysicalPages.c)
 *     MiSwitchToPfns @ 0x1407C4AD4 (MiSwitchToPfns.c)
 *     MiInitializeTbFlushing @ 0x1407C7E90 (MiInitializeTbFlushing.c)
 *     MiInitializeCacheFlushing @ 0x1407C8714 (MiInitializeCacheFlushing.c)
 * Callees:
 *     KxFlushEntireTb @ 0x14003F924 (KxFlushEntireTb.c)
 *     KiIpiSendRequestEx @ 0x1400425D0 (KiIpiSendRequestEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     HvlFlushAddressSpaceTb @ 0x14017EA3C (HvlFlushAddressSpaceTb.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     VmFlushTb @ 0x14025B4C4 (VmFlushTb.c)
 *     ExFlushTb @ 0x140264FB0 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(int a1, int a2)
{
  bool v3; // bp
  unsigned int v4; // ebx
  unsigned __int8 v5; // si
  int v6; // ecx
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r15
  char v10; // cl
  int v11; // edi
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdx
  unsigned __int16 Count; // cx
  _WORD *v16; // r8
  unsigned int v17; // r9d
  __int64 v18; // rax
  _BYTE *v19; // rdx
  int v20; // edx
  unsigned int v21; // edi
  char v22; // cl
  int v23; // esi
  _KTHREAD *v24; // rax
  _KPROCESS *v25; // rdx
  unsigned __int16 v26; // cx
  unsigned int v27; // edi
  char v28; // cl
  int v29; // esi
  unsigned __int8 v30; // bl
  signed __int32 v31[8]; // [rsp+0h] [rbp-1C8h] BYREF
  _WORD v32[2]; // [rsp+40h] [rbp-188h] BYREF
  int v33; // [rsp+44h] [rbp-184h]
  _BYTE v34[168]; // [rsp+48h] [rbp-180h] BYREF
  _WORD v35[2]; // [rsp+F0h] [rbp-D8h] BYREF
  int v36; // [rsp+F4h] [rbp-D4h]
  _BYTE v37[168]; // [rsp+F8h] [rbp-D0h] BYREF

  v3 = a1 == 1 && KeGetCurrentThread()->ApcState.Process->SecurePid;
  if ( (HvlEnlightenments & 6) != 0 && ((HvlEnlightenments & 2) != 0 || (unsigned int)KeNumberProcessors_0 > 1) )
  {
    if ( KiKvaShadow )
    {
      if ( !a1 || a1 == 2 )
      {
        v4 = 0;
        v5 = 0;
        goto LABEL_20;
      }
    }
    else if ( a1 )
    {
      v6 = a1 - 1;
      if ( v6 )
      {
        if ( v6 != 1 )
          goto LABEL_19;
        v7 = 0LL;
      }
      else
      {
        v7 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      }
      v5 = 0;
      goto LABEL_17;
    }
LABEL_19:
    v4 = 0;
    v5 = 1;
LABEL_20:
    v7 = 0LL;
    if ( (unsigned int)(a1 - 1) > 1 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      _m_prefetchw(&KiTbFlushTimeStamp);
      v10 = KiTbFlushTimeStamp;
      v11 = KiTbFlushTimeStamp;
      while ( (v10 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
      {
        if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v4);
        v10 = KiTbFlushTimeStamp;
        if ( KiTbFlushTimeStamp - v11 >= 3 || KiTbFlushTimeStamp - v11 >= 2 && (v11 & 1) == 0 )
          goto LABEL_76;
      }
      HvlFlushAddressSpaceTb(0LL, 0LL, v5, v3);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
      goto LABEL_76;
    }
LABEL_17:
    result = HvlFlushAddressSpaceTb(v7, 0LL, v5, v3);
    goto LABEL_79;
  }
  if ( KiKvaShadow )
  {
    if ( !a1 || a1 == 2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      CurrentPrcb = KeGetCurrentPrcb();
      if ( !a2 )
      {
        _InterlockedOr(v31, 0);
        CurrentThread = CurrentPrcb->CurrentThread;
        v33 = 0;
        Process = CurrentThread->ApcState.Process;
        Count = Process->ActiveProcessors.Count;
        LOWORD(CurrentThread) = Process->ActiveProcessors.Size;
        v32[0] = Count;
        v32[1] = (_WORD)CurrentThread;
        if ( Count )
        {
          memmove(v34, Process->ActiveProcessors.Bitmap, 8LL * Count);
          Count = v32[0];
        }
        v16 = v32;
        v17 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
        if ( Count <= v17 >> 6 )
          goto LABEL_43;
        v18 = v17 >> 6;
        v19 = v34;
LABEL_42:
        *(_QWORD *)&v19[8 * v18] &= ~(1LL << (v17 & 0x3F));
LABEL_43:
        v20 = 0;
LABEL_44:
        KiIpiSendRequestEx((_DWORD)CurrentPrcb, v20, (_DWORD)v16, 0, 0LL, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
LABEL_76:
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        goto LABEL_79;
      }
      LODWORD(v16) = 0;
      v20 = 1;
      if ( !KiKvaShadow )
        goto LABEL_44;
      v21 = 0;
      _m_prefetchw(&KiTbFlushTimeStamp);
      v22 = KiTbFlushTimeStamp;
      v23 = KiTbFlushTimeStamp;
      while ( (v22 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
      {
        if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v21);
        v22 = KiTbFlushTimeStamp;
        if ( KiTbFlushTimeStamp - v23 >= 3 || KiTbFlushTimeStamp - v23 >= 2 && (v23 & 1) == 0 )
          goto LABEL_76;
      }
LABEL_77:
      KiIpiSendRequestEx((_DWORD)CurrentPrcb, 1, 0, 0, 0LL, 1LL, (__int64)KiFlushProcessTbWorker, 0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_79;
    }
  }
  else if ( a1 && a1 <= 2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( !a2 )
    {
      _InterlockedOr(v31, 0);
      v24 = CurrentPrcb->CurrentThread;
      v36 = 0;
      v25 = v24->ApcState.Process;
      v26 = v25->ActiveProcessors.Count;
      LOWORD(v24) = v25->ActiveProcessors.Size;
      v35[0] = v26;
      v35[1] = (_WORD)v24;
      if ( v26 )
      {
        memmove(v37, v25->ActiveProcessors.Bitmap, 8LL * v26);
        v26 = v35[0];
      }
      v16 = v35;
      v17 = KiProcessorIndexToNumberMappingTable[CurrentPrcb->Number];
      if ( v26 <= v17 >> 6 )
        goto LABEL_43;
      v18 = v17 >> 6;
      v19 = v37;
      goto LABEL_42;
    }
    LODWORD(v16) = 0;
    v20 = 1;
    if ( !KiKvaShadow )
      goto LABEL_44;
    v27 = 0;
    _m_prefetchw(&KiTbFlushTimeStamp);
    v28 = KiTbFlushTimeStamp;
    v29 = KiTbFlushTimeStamp;
    while ( (v28 & 1) != 0 || _interlockedbittestandset(&KiTbFlushTimeStamp, 0) )
    {
      if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v27);
      v28 = KiTbFlushTimeStamp;
      if ( KiTbFlushTimeStamp - v29 >= 3 || KiTbFlushTimeStamp - v29 >= 2 && (v29 & 1) == 0 )
        goto LABEL_76;
    }
    goto LABEL_77;
  }
  result = KxFlushEntireTb(a2);
LABEL_79:
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL);
  if ( ExTbFlushActive )
  {
    v30 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    ExFlushTb(0LL, 0LL, (unsigned int)a1);
    result = v30;
    __writecr8(v30);
  }
  return result;
}
