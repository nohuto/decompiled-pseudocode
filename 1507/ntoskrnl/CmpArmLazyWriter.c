/*
 * XREFs of CmpArmLazyWriter @ 0x140062190
 * Callers:
 *     CmpEnableLazyFlush @ 0x1400D2744 (CmpEnableLazyFlush.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     HvMarkBaseBlockDirty @ 0x1405C267C (HvMarkBaseBlockDirty.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x1400662B0 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

void __fastcall CmpArmLazyWriter(int a1, unsigned __int64 *a2, char a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  volatile signed __int32 *v7; // rdi
  unsigned __int8 CurrentIrql; // bp
  unsigned __int64 v9; // rax
  int v10; // eax
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  ULONG v13; // r9d
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !CmpWorkerDataInitialized || CmpHoldLazyFlush )
    return;
  v4 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  if ( a2 )
  {
    v5 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * a1 + 45) + v4;
    if ( *a2 < v5 )
      v5 = *a2;
  }
  else if ( a3 )
  {
    v5 = v4 + 20000000;
  }
  else
  {
    v5 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * a1 + 45) + v4;
  }
  v6 = 192LL * a1;
  v7 = (volatile signed __int32 *)((char *)&CmpLazyWriterData + v6 + 152);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((char *)&CmpLazyWriterData + 192 * a1 + 152);
  }
  else if ( _interlockedbittestandset64(v7, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((char *)&CmpLazyWriterData + 192 * a1 + 152);
  }
  v9 = *(_QWORD *)((char *)&CmpLazyWriterData + v6 + 168) & 7LL;
  if ( v9 <= 3 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      if ( a3 && KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v6)) )
        goto LABEL_28;
    }
    else
    {
      if ( !(_DWORD)v9 )
      {
LABEL_28:
        v11 = 1LL;
LABEL_21:
        *(_QWORD *)((char *)&CmpLazyWriterData + v6 + 168) = v11;
        if ( v11 == 1 )
        {
          if ( a3 )
          {
            v12 = -20000000LL;
            v13 = 1000;
          }
          else
          {
            v13 = *(_DWORD *)((char *)&CmpLazyWriterData + v6 + 184);
            v12 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v6 + 180);
          }
          KeSetCoalescableTimer(
            (struct _KTIMER *)((char *)&CmpLazyWriterData + v6),
            (LARGE_INTEGER)v12,
            0,
            v13,
            (PKDPC)((char *)&CmpLazyWriterData + v6 + 64));
        }
        goto LABEL_12;
      }
      v10 = v9 - 2;
      if ( !v10 || v10 == 1 && v5 < (*(_QWORD *)((char *)&CmpLazyWriterData + v6 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        v11 = v5 & 0xFFFFFFFFFFFFFFF8uLL | 3;
        goto LABEL_21;
      }
    }
  }
LABEL_12:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v7, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
  __writecr8(CurrentIrql);
}
