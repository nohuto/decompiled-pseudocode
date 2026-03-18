/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x14012BCFC
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x14001F200 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x14012BD40 (RtlpLookupUserFunctionTableInverted.c)
 *     RtlCaptureImageExceptionValues @ 0x1401533B4 (RtlCaptureImageExceptionValues.c)
 *     MmGetImageBase @ 0x140466584 (MmGetImageBase.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r13
  volatile signed __int64 *v8; // rsi
  __int64 v9; // r9
  __int64 v10; // r15
  int v11; // edx
  _DWORD *v12; // r11
  int v13; // r10d
  int v14; // r9d
  _DWORD *v15; // r8
  __int64 v16; // r15
  __int16 v17; // ax
  ULONG64 v18; // rdx
  unsigned int v19; // eax
  ULONG64 v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rsi
  int v23; // eax
  unsigned __int64 v24; // r8
  unsigned int v25; // eax
  __int64 v26[14]; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+20h] BYREF

  result = RtlpLookupUserFunctionTableInverted();
  v27 = result;
  if ( result )
    return result;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( Process[2].Affinity.Bitmap[15] )
  {
    --CurrentThread->SpecialApcDisable;
    v8 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[16];
    v10 = KeAbPreAcquire((ULONG_PTR)&Process[2].Affinity.Bitmap[16], 0LL, 0LL, v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[2].Affinity.Bitmap[16], 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&Process[2].Affinity.Bitmap[16], v10, (ULONG_PTR)&Process[2].Affinity.Bitmap[16], v9);
    v11 = 1;
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v12 = (_DWORD *)Process[2].Affinity.Bitmap[15];
    if ( v12 )
    {
      if ( *v12 != 1 )
      {
        v13 = *v12 - 1;
        while ( v13 >= v11 )
        {
          v14 = (v11 + v13) >> 1;
          v15 = &v12[4 * v14 + 4 + 2 * v14];
          if ( a1 >= *((_QWORD *)v15 + 1) )
          {
            if ( a1 < *((_QWORD *)v15 + 1) + (unsigned __int64)(unsigned int)v15[4] )
              goto LABEL_17;
            v11 = v14 + 1;
          }
          else
          {
            if ( !v14 )
              break;
            v13 = v14 - 1;
          }
        }
      }
      v15 = 0LL;
LABEL_17:
      if ( v15 )
      {
        v16 = *(_QWORD *)v15;
        *(_QWORD *)(a2 + 8) = *((_QWORD *)v15 + 1);
        *(_DWORD *)(a2 + 16) = v15[4];
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)&Process[2].Affinity.Bitmap[16]);
        KeAbPostRelease((ULONG_PTR)&Process[2].Affinity.Bitmap[16]);
        v17 = CurrentThread->SpecialApcDisable + 1;
        CurrentThread->SpecialApcDisable = v17;
        if ( !v17
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery();
        }
        v18 = *(_QWORD *)(v16 + 16);
        v27 = v18;
        *(_QWORD *)a2 = v18;
        v19 = 12 * *(_DWORD *)(v16 + 84);
        *(_DWORD *)(a2 + 20) = v19;
        if ( v19 )
        {
          if ( (v18 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v20 = v18 + v19;
          if ( v20 > MmUserProbeAddress || v20 < v18 )
            *(_BYTE *)MmUserProbeAddress = 0;
        }
        return v27;
      }
    }
    if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&Process[2].Affinity.Bitmap[16]);
    KeAbPostRelease((ULONG_PTR)&Process[2].Affinity.Bitmap[16]);
    v21 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( (int)MmGetImageBase(a1, &v28, v26) >= 0 )
  {
    v22 = v28;
    RtlCaptureImageExceptionValues(v28, &v27, a2 + 20);
    v24 = v27;
    if ( v27 )
    {
      v25 = *(_DWORD *)(a2 + 20);
      if ( v25 && v25 == 12 * (v25 / 0xCuLL) )
      {
        if ( (v27 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v25 + v27 > MmUserProbeAddress || v25 + v27 < v27 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      else
      {
        v24 = 0LL;
        v27 = 0LL;
      }
    }
    v23 = v26[0];
  }
  else
  {
    v22 = 0LL;
    v23 = 0;
    v24 = v27;
  }
  *(_QWORD *)(a2 + 8) = v22;
  *(_DWORD *)(a2 + 16) = v23;
  *(_QWORD *)a2 = v24;
  if ( !v24 )
    *(_DWORD *)(a2 + 20) = 0;
  return v24;
}
