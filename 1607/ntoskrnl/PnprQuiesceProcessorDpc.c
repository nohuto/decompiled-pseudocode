/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x1403DC538
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140071E68 (KeGetProcessorNumberFromIndex.c)
 *     KeRestoreExtendedAndSupervisorState @ 0x140083914 (KeRestoreExtendedAndSupervisorState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x140083B40 (KeSaveExtendedAndSupervisorState.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x140114744 (KeRestoreProcessorSpecificFeatures.c)
 *     PnprGetStackLimits @ 0x1401D02B8 (PnprGetStackLimits.c)
 *     KeResumeClockTimerSafe @ 0x1401D22E4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1401D231C (KeSuspendClockTimerSafe.c)
 *     xHalPowerEarlyRestore @ 0x1403D6AEC (xHalPowerEarlyRestore.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403D6AF0 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     xHalDpGetInterruptReplayState @ 0x1403D9ECC (xHalDpGetInterruptReplayState.c)
 *     PnprMirrorMarkedPages @ 0x1403DC208 (PnprMirrorMarkedPages.c)
 */

void __fastcall PnprQuiesceProcessorDpc(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // r14d
  int v5; // esi
  SIZE_T v6; // rax
  bool v7; // di
  SIZE_T v8; // rbx
  __int64 Group; // r15
  __int64 v10; // rbp
  bool v11; // bl
  __int64 v12; // r8
  SIZE_T v13; // r9
  int v14; // eax
  SIZE_T v15; // rcx
  int v16; // eax
  int v17; // eax
  void *v18; // r8
  SIZE_T v19; // rdx
  PVOID v20[16]; // [rsp+20h] [rbp-88h] BYREF
  int v21; // [rsp+A0h] [rbp-8h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v23; // [rsp+C0h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+20h] BYREF

  v4 = (unsigned int)SystemArgument2;
  ProcNumber = 0;
  v5 = (int)SystemArgument1;
  BaseAddress = 0LL;
  v6 = PnprContext;
  *DeferredContext = 1;
  v7 = 1;
  _InterlockedAdd((volatile signed __int32 *)(v6 + 184), 1u);
  while ( *(_DWORD *)(PnprContext + 184) < (int)SystemArgument1 )
    _mm_pause();
  v8 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    _disable();
    v7 = (v21 & 0x200) != 0;
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)SystemArgument1 )
      _mm_pause();
    v8 = PnprContext;
  }
  KeGetProcessorNumberFromIndex((ULONG)SystemArgument2, &ProcNumber);
  Group = ProcNumber.Group;
  v10 = 1LL << ProcNumber.Number;
  if ( ((1LL << ProcNumber.Number) & *(_QWORD *)(**(_QWORD **)(v8 + 16) + 8LL * ProcNumber.Group)) != 0 )
  {
    if ( *(int *)(v8 + 200) < 1 )
    {
      do
        _mm_pause();
      while ( *(int *)(PnprContext + 200) < 1 );
    }
    KeSuspendClockTimerSafe();
    v11 = 0;
    if ( ((MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      v11 = (int)KeSaveExtendedAndSupervisorState(
                   (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & 0xFFFFFFFFFFFFFFFCuLL,
                   v20) >= 0;
    HalGetProcessorIdByNtNumber(v4, &v23);
    v13 = PnprContext;
    if ( (*(_DWORD *)(PnprContext + 10656) & 2) != 0 )
    {
      LOBYTE(v12) = 1;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(PnprContext + 10696))(
        *(_QWORD *)(PnprContext + 10640),
        v23,
        v12);
      v13 = PnprContext;
    }
    if ( (*(_DWORD *)(v13 + 64) & 0x20) != 0 )
      off_1402F23F8(*(_QWORD *)(v13 + 10632), &BaseAddress);
    off_1402F2390();
    if ( (*(_DWORD *)(PnprContext + 10656) & 2) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(PnprContext + 10696))(*(_QWORD *)(PnprContext + 10640), v23, 0LL);
    KeResumeClockTimerSafe();
    if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v7 )
      _enable();
    KeRestoreProcessorSpecificFeatures();
    if ( v11 )
      KeRestoreExtendedAndSupervisorState((__int64)v20);
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
    v8 = PnprContext;
  }
  if ( *(_DWORD *)(*(_QWORD *)(v8 + 24) + 4LL) && (*(_DWORD *)(v8 + 64) & 8) == 0 )
  {
    if ( *(int *)(v8 + 200) < 2 )
    {
      do
        _mm_pause();
      while ( *(int *)(PnprContext + 200) < 2 );
    }
    v14 = PnprMirrorMarkedPages();
    v15 = PnprContext;
    if ( v14 < 0 )
    {
      v16 = *(_DWORD *)(PnprContext + 10744);
      if ( !v16 )
        v16 = 2241;
      *(_DWORD *)(PnprContext + 10744) = v16;
      v17 = *(_DWORD *)(v15 + 10748);
      if ( !v17 )
        v17 = 1;
      *(_DWORD *)(v15 + 10748) = v17;
    }
    _InterlockedAdd((volatile signed __int32 *)(v15 + 204), 1u);
    v8 = PnprContext;
  }
  if ( *(int *)(v8 + 200) < 4 )
  {
    do
      _mm_pause();
    while ( *(int *)(PnprContext + 200) < 4 );
  }
  PnprGetStackLimits((char **)(PnprContext + 216 + 8LL * v4), (unsigned __int64 *)(PnprContext + 5336 + 8LL * v4));
  _InterlockedAdd((volatile signed __int32 *)(PnprContext + 204), 1u);
  while ( *(int *)(PnprContext + 200) < 5 )
    _mm_pause();
  v19 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    while ( *(int *)(PnprContext + 200) < 6 )
      _mm_pause();
    v19 = PnprContext;
    if ( (v10 & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8 * Group)) != 0 )
    {
      off_1402F2400(BaseAddress, PnprContext, v18);
      goto LABEL_49;
    }
    if ( v7 )
    {
      _enable();
LABEL_49:
      v19 = PnprContext;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(v19 + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
