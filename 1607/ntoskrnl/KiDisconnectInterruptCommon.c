/*
 * XREFs of KiDisconnectInterruptCommon @ 0x140124828
 * Callers:
 *     KeDisconnectInterrupt @ 0x1401243CC (KeDisconnectInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1401D5A04 (KiDisconnectSecondaryInterrupt.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KiDisconnectInterruptInternal @ 0x14012494C (KiDisconnectInterruptInternal.c)
 *     KiReleaseInterruptConnectLock @ 0x14012D81C (KiReleaseInterruptConnectLock.c)
 *     KiAcquireInterruptConnectLock @ 0x14012D82C (KiAcquireInterruptConnectLock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiDisconnectSecondaryInterruptInternal @ 0x1401D5ACC (KiDisconnectSecondaryInterruptInternal.c)
 *     KiSignalWaitDisconnectLock @ 0x1401D8B38 (KiSignalWaitDisconnectLock.c)
 */

__int64 __fastcall KiDisconnectInterruptCommon(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edi
  char v8; // r12
  KSPIN_LOCK *v9; // r14
  __int64 v10; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v12; // rdx
  unsigned __int8 v14[8]; // [rsp+20h] [rbp-60h] BYREF
  __int16 v15; // [rsp+28h] [rbp-58h] BYREF
  char v16; // [rsp+2Ah] [rbp-56h]
  int v17; // [rsp+2Ch] [rbp-54h]
  _QWORD v18[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  int v21; // [rsp+58h] [rbp-28h]
  _BYTE v22[16]; // [rsp+60h] [rbp-20h] BYREF

  v19[1] = a3;
  v19[0] = 0LL;
  v20 = 0LL;
  v7 = -1073741585;
  v8 = 0;
  if ( *(struct _KTHREAD **)(a2 + 152) != KeGetCurrentThread() )
  {
    v15 = 1;
    v18[1] = v18;
    v18[0] = v18;
    v19[0] = &v15;
    v16 = 6;
    v17 = 0;
  }
  if ( a1 )
  {
    v9 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    v14[0] = CurrentIrql;
    KxAcquireSpinLock(v9);
  }
  else
  {
    v9 = 0LL;
    KiAcquireInterruptConnectLock(*(unsigned int *)(a2 + 96), v14, v22, a4);
    CurrentIrql = v14[0];
  }
  if ( *(_BYTE *)(a2 + 95) && (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    if ( *(_WORD *)(a2 + 102) )
    {
      v21 = 2;
      _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
      CurrentIrql = v14[0];
      *(_QWORD *)(a2 + 144) = v19;
      v8 = 1;
    }
    else
    {
      if ( !a1 )
      {
        v7 = KiDisconnectInterruptInternal(a2, a3);
        goto LABEL_10;
      }
      v7 = KiDisconnectSecondaryInterruptInternal(a2);
    }
  }
  if ( a1 )
  {
    KxReleaseSpinLock(v9);
    __writecr8(CurrentIrql);
    goto LABEL_11;
  }
LABEL_10:
  LOBYTE(v10) = CurrentIrql;
  KiReleaseInterruptConnectLock(v10, v22);
LABEL_11:
  if ( v19[0] && v8 )
  {
    LOBYTE(v12) = 1;
    KiSignalWaitDisconnectLock(v19[0], v12);
    return (unsigned int)v20;
  }
  return v7;
}
