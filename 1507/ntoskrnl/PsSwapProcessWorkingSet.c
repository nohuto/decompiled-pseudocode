/*
 * XREFs of PsSwapProcessWorkingSet @ 0x1406BFCFC
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406A9564 (MmProcessWorkingSetControl.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     PspChangeProcessExecutionState @ 0x14050637C (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PsSwapProcessWorkingSet(char *Object, char a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v7; // ebx
  unsigned __int64 *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r9
  __int64 v11; // rsi
  unsigned int v12; // ebx
  signed __int32 v13; // eax
  unsigned int v14; // ebx
  signed __int32 v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int16 v20; // cx

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)(Object + 728);
  v9 = KeAbPreAcquire((ULONG_PTR)(Object + 728), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v11 = *((_QWORD *)Object + 118);
  if ( v11 )
  {
    ExAcquireResourceSharedLite((PERESOURCE)(v11 + 56), 1u);
    if ( *(_DWORD *)(v11 + 872) )
      v7 = 2;
    if ( *(_DWORD *)(v11 + 864) )
      v7 |= 1u;
  }
  if ( a2 )
    v12 = v7 | 2;
  else
    v12 = v7 & 0xFFFFFFFD;
  v13 = *((_DWORD *)Object + 192);
  v14 = v12 << 28;
  do
  {
    v15 = v13;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)Object + 192, v14 | v13 & 0xCFFFFFFF, v13);
  }
  while ( v13 != v15 );
  if ( v11 )
    ExReleaseResourceLite((PERESOURCE)(v11 + 56));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  v19 = PspChangeProcessExecutionState((_KPROCESS *)Object, v16, v17, v18);
  v20 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v20;
  if ( !v20
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v19;
}
