/*
 * XREFs of ViWdBeforeCancelIrp @ 0x14074B004
 * Callers:
 *     IovCancelIrp @ 0x14073508C (IovCancelIrp.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ViWdInsertSortIrp @ 0x14074B0D8 (ViWdInsertSortIrp.c)
 */

void __fastcall ViWdBeforeCancelIrp(__int64 *a1)
{
  __int16 v1; // di
  unsigned int v3; // esi
  __int64 *v4; // rcx
  __int64 **v5; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = VfWdCancelTimeoutTicks;
  if ( VfWdCancelTimeoutTicks )
  {
    ++ViWdCancelIrpCount;
    v3 = VfWdCancelTimeoutTicks + ViWdTickCount;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&VfWdIrpListLock);
    }
    else if ( _interlockedbittestandset64((volatile signed __int32 *)&VfWdIrpListLock, 0LL) )
    {
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&VfWdIrpListLock);
    }
    if ( *((_BYTE *)a1 + 28) )
    {
      if ( *((_DWORD *)a1 + 6) <= v3 )
        goto LABEL_12;
      v4 = (__int64 *)*a1;
      v5 = (__int64 **)a1[1];
      if ( *(__int64 **)(*a1 + 8) != a1 || *v5 != a1 )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
      --ViWdIrpListLength;
    }
    *((_DWORD *)a1 + 6) = v3;
    *((_WORD *)a1 + 15) = v1;
    ViWdInsertSortIrp(a1);
LABEL_12:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&VfWdIrpListLock, retaddr);
    else
      _InterlockedAnd64(&VfWdIrpListLock, 0LL);
  }
}
