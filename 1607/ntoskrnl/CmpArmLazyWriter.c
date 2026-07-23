/*
 * XREFs of CmpArmLazyWriter @ 0x1400EDFB0
 * Callers:
 *     CmpEnableLazyFlush @ 0x140132070 (CmpEnableLazyFlush.c)
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     HvMarkBaseBlockDirty @ 0x140564B90 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x1400EDA80 (KeSetCoalescableTimer.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 */

void __fastcall CmpArmLazyWriter(__int64 a1, __int64 a2, char a3)
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
  ULONG v14; // r9d
  __int64 v15; // rdx

  v4 = (int)a1;
  if ( CmpWorkerDataInitialized && !CmpHoldLazyFlush )
  {
    LOBYTE(a1) = 1;
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
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
          v15 = -20000000LL;
          v14 = 1000;
        }
        else
        {
          v14 = *(_DWORD *)((char *)&CmpLazyWriterData + v8 + 184);
          v15 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v8 + 180);
        }
        KeSetCoalescableTimer(
          (struct _KTIMER *)((char *)&CmpLazyWriterData + v8),
          (LARGE_INTEGER)v15,
          0,
          v14,
          (PKDPC)((char *)&CmpLazyWriterData + v8 + 64));
      }
    }
LABEL_10:
    KeReleaseSpinLock((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v8 + 152), v9);
  }
}
