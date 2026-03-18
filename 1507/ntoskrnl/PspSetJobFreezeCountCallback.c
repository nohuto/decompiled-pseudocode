/*
 * XREFs of PspSetJobFreezeCountCallback @ 0x14012CF70
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     ExpTimerPause @ 0x14012C9BC (ExpTimerPause.c)
 *     ExTimerResume @ 0x14012D148 (ExTimerResume.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall PspSetJobFreezeCountCallback(__int64 a1, _DWORD *a2)
{
  int v4; // ecx
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 *v6; // rdi
  unsigned __int64 v7; // r12
  __int64 v8; // r13
  _QWORD *i; // rsi
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned __int8 v13; // r12
  volatile signed __int32 *v14; // rdi
  __int64 v15; // rbp
  _QWORD *j; // rsi
  int v17; // eax
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( (**(_DWORD **)a2 & 1) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 864);
    if ( *(_BYTE *)(*(_QWORD *)a2 + 4LL) )
    {
      if ( !v4 && (*(_DWORD *)(a1 + 1296) & 0x40000) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v6 = (volatile signed __int32 *)(a1 + 1208);
        v7 = MEMORY[0xFFFFF78000000008];
        v8 = MEMORY[0xFFFFF78000000014];
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(a1 + 1208);
        }
        else if ( _interlockedbittestandset64(v6, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 1208));
        }
        for ( i = *(_QWORD **)(a1 + 1216); i != (_QWORD *)(a1 + 1216); i = (_QWORD *)*i )
          ExpTimerPause((__int64)(i - 35), v8, v7);
        ++*(_DWORD *)(a1 + 864);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(a1 + 1208, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
        v10 = CurrentIrql;
LABEL_14:
        __writecr8(v10);
        goto LABEL_15;
      }
      v17 = v4 + 1;
    }
    else
    {
      if ( v4 == 1 && (*(_DWORD *)(a1 + 1296) & 0x40000) != 0 )
      {
        v13 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v14 = (volatile signed __int32 *)(a1 + 1208);
        v15 = MEMORY[0xFFFFF78000000008];
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireSpinLockInstrumented(a1 + 1208);
        }
        else if ( _interlockedbittestandset64(v14, 0LL) )
        {
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 1208));
        }
        for ( j = *(_QWORD **)(a1 + 1216); j != (_QWORD *)(a1 + 1216); j = (_QWORD *)*j )
          ExTimerResume(j, v15);
        --*(_DWORD *)(a1 + 864);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          KiReleaseSpinLockInstrumented(a1 + 1208, retaddr);
        else
          _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
        v10 = v13;
        goto LABEL_14;
      }
      v17 = v4 - 1;
    }
    *(_DWORD *)(a1 + 864) = v17;
  }
LABEL_15:
  if ( (**(_DWORD **)a2 & 4) != 0 )
  {
    if ( *(_BYTE *)(*(_QWORD *)a2 + 5LL) )
      ++*(_DWORD *)(a1 + 872);
    else
      --*(_DWORD *)(a1 + 872);
  }
  v11 = 0;
  if ( *(_DWORD *)(a1 + 872) )
    v11 = 2;
  if ( *(_DWORD *)(a1 + 864) )
    v11 |= 1u;
  a2[2] = v11;
  return 0LL;
}
