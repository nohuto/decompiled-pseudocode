/*
 * XREFs of PnprQuiesceProcessorDpc @ 0x140400A08
 * Callers:
 *     <none>
 * Callees:
 *     KeSaveExtendedProcessorState @ 0x140124FA8 (KeSaveExtendedProcessorState.c)
 *     KeRestoreExtendedProcessorState @ 0x1401265C0 (KeRestoreExtendedProcessorState.c)
 *     KeRestoreProcessorSpecificFeatures @ 0x14014E950 (KeRestoreProcessorSpecificFeatures.c)
 *     PnprGetStackLimits @ 0x1401FCB00 (PnprGetStackLimits.c)
 *     KeResumeClockTimerSafe @ 0x1401FEA88 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1401FEAC8 (KeSuspendClockTimerSafe.c)
 *     xHalDpMaskLevelTriggeredInterrupts @ 0x1403FB1C0 (xHalDpMaskLevelTriggeredInterrupts.c)
 *     xHalPowerEarlyRestore @ 0x1403FB1C8 (xHalPowerEarlyRestore.c)
 *     xHalDpGetInterruptReplayState @ 0x1403FE26C (xHalDpGetInterruptReplayState.c)
 *     PnprMirrorMarkedPages @ 0x1404006D8 (PnprMirrorMarkedPages.c)
 */

void __fastcall PnprQuiesceProcessorDpc(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // ebp
  int v5; // esi
  SIZE_T v6; // rax
  bool v7; // di
  SIZE_T v8; // rdx
  unsigned int v9; // ecx
  char v10; // al
  unsigned int v11; // eax
  __int64 v12; // r15
  __int64 v13; // r14
  bool v14; // bl
  __int64 v15; // r8
  SIZE_T v16; // r9
  int v17; // eax
  SIZE_T v18; // rcx
  int v19; // eax
  int v20; // eax
  void *v21; // r8
  SIZE_T v22; // rdx
  struct _XSTATE_SAVE XStateSave; // [rsp+20h] [rbp-88h] BYREF
  int v24; // [rsp+A0h] [rbp-8h]
  unsigned int v25; // [rsp+C0h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+C8h] [rbp+20h] BYREF

  v4 = (unsigned int)SystemArgument2;
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
    v7 = (v24 & 0x200) != 0;
    _InterlockedAdd((volatile signed __int32 *)(PnprContext + 192), 1u);
    while ( *(_DWORD *)(PnprContext + 192) < (int)SystemArgument1 )
      _mm_pause();
    v8 = PnprContext;
  }
  if ( (_DWORD)SystemArgument2 )
  {
    if ( (unsigned int)SystemArgument2 < 0x280
      && (v11 = KiProcessorIndexToNumberMappingTable[(unsigned int)SystemArgument2]) != 0 )
    {
      v9 = v11 >> 6;
      v10 = v11 & 0x3F;
    }
    else
    {
      v10 = 0;
      LOWORD(v9) = 0;
    }
  }
  else
  {
    LOWORD(v9) = 0;
    v10 = 0;
  }
  v12 = (unsigned __int16)v9;
  v13 = 1LL << v10;
  if ( ((1LL << v10) & *(_QWORD *)(**(_QWORD **)(v8 + 16) + 8LL * (unsigned __int16)v9)) != 0 )
  {
    if ( *(int *)(v8 + 200) < 1 )
    {
      do
        _mm_pause();
      while ( *(int *)(PnprContext + 200) < 1 );
    }
    KeSuspendClockTimerSafe();
    v14 = 0;
    if ( (MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
      v14 = KeSaveExtendedProcessorState(MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFFFFFCuLL, &XStateSave) >= 0;
    HalGetProcessorIdByNtNumber(v4, &v25);
    v16 = PnprContext;
    if ( (*(_DWORD *)(PnprContext + 10656) & 2) != 0 )
    {
      LOBYTE(v15) = 1;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(PnprContext + 10696))(
        *(_QWORD *)(PnprContext + 10640),
        v25,
        v15);
      v16 = PnprContext;
    }
    if ( (*(_DWORD *)(v16 + 64) & 0x20) != 0 )
      off_1403218A8(*(_QWORD *)(v16 + 10632), &BaseAddress);
    off_140321840();
    if ( (*(_DWORD *)(PnprContext + 10656) & 2) != 0 )
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(PnprContext + 10696))(*(_QWORD *)(PnprContext + 10640), v25, 0LL);
    KeResumeClockTimerSafe();
    if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 && v7 )
      _enable();
    KeRestoreProcessorSpecificFeatures();
    if ( v14 )
      KeRestoreExtendedProcessorState(&XStateSave);
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
    v17 = PnprMirrorMarkedPages();
    v18 = PnprContext;
    if ( v17 < 0 )
    {
      v19 = *(_DWORD *)(PnprContext + 10744);
      if ( !v19 )
        v19 = 2239;
      *(_DWORD *)(PnprContext + 10744) = v19;
      v20 = *(_DWORD *)(v18 + 10748);
      if ( !v20 )
        v20 = 1;
      *(_DWORD *)(v18 + 10748) = v20;
    }
    _InterlockedAdd((volatile signed __int32 *)(v18 + 204), 1u);
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
  v22 = PnprContext;
  if ( (*(_DWORD *)(PnprContext + 64) & 0x20) != 0 )
  {
    while ( *(int *)(PnprContext + 200) < 6 )
      _mm_pause();
    v22 = PnprContext;
    if ( (v13 & *(_QWORD *)(**(_QWORD **)(PnprContext + 16) + 8 * v12)) != 0 )
    {
      off_1403218B0(BaseAddress, PnprContext, v21);
      goto LABEL_55;
    }
    if ( v7 )
    {
      _enable();
LABEL_55:
      v22 = PnprContext;
    }
  }
  _InterlockedAdd((volatile signed __int32 *)(v22 + 188), 1u);
  while ( *(_DWORD *)(PnprContext + 188) < v5 )
    _mm_pause();
}
