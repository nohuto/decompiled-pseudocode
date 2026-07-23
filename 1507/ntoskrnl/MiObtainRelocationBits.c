/*
 * XREFs of MiObtainRelocationBits @ 0x14046BA68
 * Callers:
 *     MiSelectImageBase @ 0x14046B754 (MiSelectImageBase.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14002D488 (RtlFindClearBitsAndSet.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MiSelectRelocationStartHint @ 0x14046BBA8 (MiSelectRelocationStartHint.c)
 */

__int64 __fastcall MiObtainRelocationBits(PRTL_BITMAP *a1, unsigned __int16 a2, ULONG a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rax
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rdi
  ULONG ClearBitsAndSet; // eax
  ULONG v13; // esi
  _RTL_BITMAP *v14; // rcx
  __int16 v15; // ax
  ULONG v17; // r12d
  ULONG started; // eax
  ULONG v19; // r15d
  _RTL_BITMAP *v20; // rcx
  int v21; // [rsp+68h] [rbp+20h]

  v21 = a4;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_14034E910, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E910, 0LL);
  v11 = v8;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_14034E910, v8, (ULONG_PTR)&qword_14034E910, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet(*a1, a2, a3);
  v13 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1 )
  {
    v14 = a1[1];
    if ( !v14 || (v17 = RtlFindClearBitsAndSet(v14, a2, ClearBitsAndSet), v17 == v13) )
    {
LABEL_7:
      if ( v21 == 1 )
      {
        v19 = a3 - a2;
        RtlClearBits(*a1, v19, a2);
        v20 = a1[1];
        if ( v20 )
          RtlClearBits(v20, v19, a2);
      }
      goto LABEL_8;
    }
    RtlClearBits(*a1, v13, a2);
    if ( v17 != -1 )
      RtlClearBits(a1[1], v17, a2);
    started = MiSelectRelocationStartHint(a1, a2, a3);
    v13 = started;
    if ( started != -1 )
    {
      RtlSetBits(*a1, started, a2);
      RtlSetBits(a1[1], v13, a2);
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14034E910, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_14034E910);
  KeAbPostRelease((ULONG_PTR)&qword_14034E910);
  v15 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v15;
  if ( !v15 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v13;
}
