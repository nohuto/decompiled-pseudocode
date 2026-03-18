/*
 * XREFs of CmpArmLazyWriter @ 0x140038EB0
 * Callers:
 *     CmpEnableLazyFlush @ 0x140126C94 (CmpEnableLazyFlush.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     HvMarkBaseBlockDirty @ 0x1404C1D94 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     KxReleaseSpinLock @ 0x1400775A0 (KxReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x140091250 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 */

void __fastcall CmpArmLazyWriter(int a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 *v6; // r11
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  KIRQL v9; // r14
  unsigned __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  unsigned __int64 v13; // rbx
  __int64 v14; // rdx
  ULONG v15; // r9d

  v4 = a1;
  if ( CmpWorkerDataInitialized && !CmpHoldLazyFlush )
  {
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( v6 )
    {
      v7 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * v4 + 45) + UnbiasedInterruptTime;
      if ( *v6 < v7 )
        v7 = *v6;
    }
    else if ( a3 )
    {
      v7 = UnbiasedInterruptTime + 20000000;
    }
    else
    {
      v7 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * v4 + 45) + UnbiasedInterruptTime;
    }
    v8 = 192 * v4;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v8 + 152));
    v10 = *(_QWORD *)((char *)&CmpLazyWriterData + v8 + 168) & 7LL;
    if ( v10 > 3 )
      goto LABEL_10;
    if ( !(_DWORD)v10 )
      goto LABEL_23;
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( !v12 || v12 == 1 && v7 < (*(_QWORD *)((char *)&CmpLazyWriterData + v8 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        v13 = v7 & 0xFFFFFFFFFFFFFFF8uLL | 3;
        goto LABEL_16;
      }
    }
    else if ( a3 && KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v8)) )
    {
LABEL_23:
      v13 = 1LL;
LABEL_16:
      *(_QWORD *)((char *)&CmpLazyWriterData + v8 + 168) = v13;
      if ( v13 == 1 )
      {
        if ( a3 )
        {
          v14 = -20000000LL;
          v15 = 1000;
        }
        else
        {
          v15 = *(_DWORD *)((char *)&CmpLazyWriterData + v8 + 184);
          v14 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v8 + 180);
        }
        KeSetCoalescableTimer(
          (struct _KTIMER *)((char *)&CmpLazyWriterData + v8),
          (LARGE_INTEGER)v14,
          0,
          v15,
          (PKDPC)((char *)&CmpLazyWriterData + v8 + 64));
      }
    }
LABEL_10:
    KxReleaseSpinLock((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v8 + 152));
    __writecr8(v9);
  }
}
