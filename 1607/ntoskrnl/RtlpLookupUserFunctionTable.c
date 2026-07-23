/*
 * XREFs of RtlpLookupUserFunctionTable @ 0x1400ABEF0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x140050EE0 (RtlpLookupFunctionEntryForStackWalks.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlCaptureImageExceptionValues @ 0x140082E38 (RtlCaptureImageExceptionValues.c)
 *     RtlpLookupUserFunctionTableInverted @ 0x1400AC0A0 (RtlpLookupUserFunctionTableInverted.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     MmGetImageBase @ 0x1404B4CD8 (MmGetImageBase.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall RtlpLookupUserFunctionTable(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  volatile signed __int64 *v7; // rsi
  __int64 v8; // r14
  int v9; // edx
  _DWORD *v10; // r11
  int v11; // r10d
  int v12; // r9d
  _DWORD *v13; // r8
  __int64 v14; // r14
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned __int64 v17; // rcx
  void *v18; // rsi
  int v19; // eax
  unsigned __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22[14]; // [rsp+28h] [rbp-70h] BYREF
  unsigned __int64 v23; // [rsp+B0h] [rbp+18h] BYREF
  void *v24; // [rsp+B8h] [rbp+20h] BYREF

  result = RtlpLookupUserFunctionTableInverted();
  v23 = result;
  if ( result )
    return result;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->Process;
  if ( Process[2].Affinity.Bitmap[18] )
  {
    --CurrentThread->SpecialApcDisable;
    v7 = (volatile signed __int64 *)&Process[2].Affinity.Bitmap[19];
    v8 = KeAbPreAcquire((ULONG_PTR)&Process[2].Affinity.Bitmap[19], 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[2].Affinity.Bitmap[19], 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(&Process[2].Affinity.Bitmap[19], v8, &Process[2].Affinity.Bitmap[19]);
    v9 = 1;
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    v10 = (_DWORD *)Process[2].Affinity.Bitmap[18];
    if ( v10 )
    {
      if ( *v10 != 1 )
      {
        v11 = *v10 - 1;
        while ( v11 >= v9 )
        {
          v12 = (v9 + v11) >> 1;
          v13 = &v10[4 * v12 + 4 + 2 * v12];
          if ( a1 < *((_QWORD *)v13 + 1) )
          {
            if ( !v12 )
              break;
            v11 = v12 - 1;
          }
          else
          {
            if ( a1 < *((_QWORD *)v13 + 1) + (unsigned __int64)(unsigned int)v13[4] )
              goto LABEL_13;
            v9 = v12 + 1;
          }
        }
      }
      v13 = 0LL;
LABEL_13:
      if ( v13 )
      {
        v14 = *(_QWORD *)v13;
        *(_QWORD *)(a2 + 8) = *((_QWORD *)v13 + 1);
        *(_DWORD *)(a2 + 16) = v13[4];
        if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(&Process[2].Affinity.Bitmap[19]);
        KeAbPostRelease((ULONG_PTR)&Process[2].Affinity.Bitmap[19]);
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
        v15 = *(_QWORD *)(v14 + 16);
        v23 = v15;
        *(_QWORD *)a2 = v15;
        v16 = 12 * *(_DWORD *)(v14 + 84);
        *(_DWORD *)(a2 + 20) = v16;
        if ( v16 )
        {
          if ( (v15 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v17 = v15 + v16;
          if ( v17 > 0x7FFFFFFF0000LL || v17 < v15 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        return v23;
      }
    }
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(&Process[2].Affinity.Bitmap[19]);
    KeAbPostRelease((ULONG_PTR)&Process[2].Affinity.Bitmap[19]);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( (int)MmGetImageBase(a1, &v24, v22) >= 0 )
  {
    v18 = v24;
    RtlCaptureImageExceptionValues(v24, &v23, (ULONG *)(a2 + 20));
    v20 = v23;
    if ( v23 )
    {
      v21 = *(_DWORD *)(a2 + 20);
      if ( v21 && v21 == 12 * (v21 / 0xCuLL) )
      {
        if ( (v23 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v21 + v23 > 0x7FFFFFFF0000LL || v21 + v23 < v23 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      else
      {
        v20 = 0LL;
        v23 = 0LL;
      }
    }
    v19 = v22[0];
  }
  else
  {
    v18 = 0LL;
    v19 = 0;
    v20 = v23;
  }
  *(_QWORD *)(a2 + 8) = v18;
  *(_DWORD *)(a2 + 16) = v19;
  *(_QWORD *)a2 = v20;
  if ( !v20 )
    *(_DWORD *)(a2 + 20) = 0;
  return v20;
}
