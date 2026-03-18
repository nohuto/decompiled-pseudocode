/*
 * XREFs of KiDisconnectInterruptCommon @ 0x14014B3DC
 * Callers:
 *     KeDisconnectInterrupt @ 0x14014AF94 (KeDisconnectInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402035F8 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiDisconnectInterruptInternal @ 0x14014B4FC (KiDisconnectInterruptInternal.c)
 *     KiReleaseInterruptConnectLock @ 0x140155820 (KiReleaseInterruptConnectLock.c)
 *     KiAcquireInterruptConnectLock @ 0x140155830 (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x14020375C (KiDisconnectSecondaryInterruptInternal.c)
 *     KiSignalWaitDisconnectLock @ 0x140207F08 (KiSignalWaitDisconnectLock.c)
 */

__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  unsigned int v7; // esi
  char v8; // r12
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v13[8]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v14; // [rsp+28h] [rbp-58h] BYREF
  char v15; // [rsp+2Ah] [rbp-56h]
  int v16; // [rsp+2Ch] [rbp-54h]
  _QWORD v17[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h]
  int v20; // [rsp+58h] [rbp-28h]
  _BYTE v21[16]; // [rsp+60h] [rbp-20h] BYREF
  void *retaddr; // [rsp+B8h] [rbp+38h]

  v18[1] = a3;
  v18[0] = 0LL;
  v19 = 0LL;
  v6 = a2;
  v7 = -1073741585;
  v8 = 0;
  if ( *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
  {
    v14 = 1;
    v17[1] = v17;
    v17[0] = v17;
    v18[0] = &v14;
    v15 = 6;
    v16 = 0;
  }
  if ( a1 )
  {
    v9 = (volatile signed __int32 *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    CurrentIrql = KeGetCurrentIrql();
    v10 = 12LL;
    __writecr8(0xCuLL);
    v13[0] = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(v9);
    }
    else if ( _interlockedbittestandset64(v9, 0LL) )
    {
      KxWaitForSpinLockAndAcquire(v9);
    }
  }
  else
  {
    v9 = 0LL;
    KiAcquireInterruptConnectLock(*(unsigned int *)(a2 + 96), v13, v21, a4);
  }
  if ( *(_BYTE *)(v6 + 95) && (*(_DWORD *)(v6 + 104) & 2) == 0 )
  {
    if ( *(_WORD *)(v6 + 102) )
    {
      v20 = 2;
      _InterlockedOr((volatile signed __int32 *)(v6 + 104), 2u);
      v8 = 1;
      *(_QWORD *)(v6 + 144) = v18;
    }
    else
    {
      if ( !a1 )
      {
        v7 = KiDisconnectInterruptInternal(v6, a3);
        goto LABEL_10;
      }
      v7 = KiDisconnectSecondaryInterruptInternal(v6);
    }
  }
  if ( a1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v9, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    __writecr8(v13[0]);
    goto LABEL_11;
  }
LABEL_10:
  LOBYTE(v10) = v13[0];
  KiReleaseInterruptConnectLock(v10, v21);
LABEL_11:
  if ( v18[0] && v8 )
  {
    LOBYTE(a2) = 1;
    KiSignalWaitDisconnectLock(v18[0], a2);
    return (unsigned int)v19;
  }
  return v7;
}
