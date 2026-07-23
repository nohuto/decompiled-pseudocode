/*
 * XREFs of SeCreateClientSecurityEx @ 0x140481510
 * Callers:
 *     AlpcpImpersonateMessage @ 0x140479ED0 (AlpcpImpersonateMessage.c)
 *     AlpcpExposeTokenAttribute @ 0x14047F1D0 (AlpcpExposeTokenAttribute.c)
 *     AlpcpGetEffectiveTokenMessage @ 0x14053048C (AlpcpGetEffectiveTokenMessage.c)
 * Callees:
 *     SepReconcileTrustSidWithProcessProtection @ 0x140044D50 (SepReconcileTrustSidWithProcessProtection.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObFastReferenceObjectLocked @ 0x140085588 (ObFastReferenceObjectLocked.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PsIsHostSilo @ 0x14013A210 (PsIsHostSilo.c)
 *     SepCreateClientSecurityEx @ 0x140481870 (SepCreateClientSecurityEx.c)
 *     SepUpdateSiloInClientSecurity @ 0x1406D5084 (SepUpdateSiloInClientSecurity.c)
 */

__int64 __fastcall SeCreateClientSecurityEx(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // rbp
  int v9; // r12d
  PSID *v10; // rdi
  __int64 v11; // r9
  int v12; // r14d
  char v13; // r15
  __int64 result; // rax
  int updated; // ebp
  unsigned __int64 *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // r9
  signed __int64 *v19; // rcx
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rdi
  __int64 v23; // r9
  __int16 v24; // ax
  void *CurrentServerSilo; // rbx
  char v26[8]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27; // [rsp+68h] [rbp-60h] BYREF
  __int64 v28; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *v29; // [rsp+78h] [rbp-50h]
  int v30; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v31; // [rsp+D8h] [rbp+10h]

  v31 = a2;
  CurrentThread = KeGetCurrentThread();
  v26[0] = 0;
  v27 = 0LL;
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1724) & 8) != 0 )
  {
    v28 = *(_QWORD *)(a1 + 544);
    v29 = KeGetCurrentThread();
    --v29->KernelApcDisable;
    v16 = (unsigned __int64 *)(a1 + 1704);
    v17 = KeAbPreAcquire(a1 + 1704, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v16, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v16, v17, (ULONG_PTR)v16, v18);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    if ( (*(_DWORD *)(a1 + 1724) & 8) != 0 )
    {
      v10 = (PSID *)(*(_QWORD *)(a1 + 1624) & 0xFFFFFFFFFFFFFFF8uLL);
      ObfReferenceObject(v10);
      v9 = *(_DWORD *)(a1 + 1624) & 3;
      v13 = (*(_BYTE *)(a1 + 1624) & 4) != 0;
      LOBYTE(v30) = *(_BYTE *)(v28 + 1714);
    }
    else
    {
      v13 = v30;
      v10 = 0LL;
      v9 = v30;
    }
    v19 = (signed __int64 *)(a1 + 1704);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1704), 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared(v19);
      v19 = (signed __int64 *)(a1 + 1704);
    }
    KeAbPostRelease((ULONG_PTR)v19);
    v20 = v29;
    v21 = v29->KernelApcDisable + 1;
    v29->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v10 )
    {
      v12 = 2;
      goto LABEL_7;
    }
  }
  else
  {
    v9 = v30;
  }
  v10 = (PSID *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v10 )
  {
    --CurrentThread->KernelApcDisable;
    v22 = KeAbPreAcquire((ULONG_PTR)&Process[1], 0LL, 0LL, v11);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)&Process[1], v22, (ULONG_PTR)&Process[1], v23);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
    v10 = (PSID *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
    KeAbPostRelease((ULONG_PTR)&Process[1]);
    v24 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v24;
    if ( !v24
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  v12 = 1;
  LOBYTE(v30) = BYTE2(Process[2].ReadyListHead.Blink);
  v13 = 0;
LABEL_7:
  SepReconcileTrustSidWithProcessProtection(v10[138], &v30, v26, &v27);
  result = SepCreateClientSecurityEx((_DWORD)v10, v31, a3, v12, v13, v9, 1, a1, v26[0], v27, a4);
  updated = result;
  if ( (int)result < 0 || !*(_BYTE *)(a4 + 8) )
  {
    ObfDereferenceObject(v10);
    return (unsigned int)updated;
  }
  if ( *(PEPROCESS *)(a1 + 544) == PsInitialSystemProcess )
  {
    CurrentServerSilo = (void *)PsGetCurrentServerSilo();
    if ( !PsIsHostSilo((__int64)CurrentServerSilo) )
    {
      updated = SepUpdateSiloInClientSecurity(a4, CurrentServerSilo);
      if ( updated < 0 )
        ObfDereferenceObject(v10);
    }
    if ( CurrentServerSilo )
      PspDereferenceSiloObject(CurrentServerSilo);
    return (unsigned int)updated;
  }
  return result;
}
