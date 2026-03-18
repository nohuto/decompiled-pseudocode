/*
 * XREFs of KiInitializeBootStructures @ 0x1403A770C
 * Callers:
 *     KiSystemStartup @ 0x14039C010 (KiSystemStartup.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x14002D424 (PoEnergyEstimationEnabled.c)
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     strstr @ 0x140143918 (strstr.c)
 *     atoi @ 0x140143B80 (atoi.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExInitPoolLookasidePointers @ 0x1403A7A48 (ExInitPoolLookasidePointers.c)
 *     KiInitPrcb @ 0x1403A7C1C (KiInitPrcb.c)
 *     KiSetFeatureBits @ 0x1403A7FB8 (KiSetFeatureBits.c)
 *     KiInitializeIdt @ 0x1403B134C (KiInitializeIdt.c)
 *     KiEnableKvaShadowing @ 0x1403B186C (KiEnableKvaShadowing.c)
 *     KiInitializeNxSupportDiscard @ 0x14075A4A0 (KiInitializeNxSupportDiscard.c)
 *     InbvDriverInitialize @ 0x140767874 (InbvDriverInitialize.c)
 *     HvlEnableVsmCalls @ 0x1407724D0 (HvlEnableVsmCalls.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Number; // rbp
  unsigned int v5; // ecx
  __int64 v6; // rax
  _KTHREAD *v7; // rsi
  __int64 v8; // rax
  bool v9; // zf
  _KIDTENTRY64 *IdtBase; // rcx
  __int64 v11; // rdx
  const char *v12; // rcx
  char *v13; // rax
  char v14; // cl
  int v15; // eax
  void (__fastcall *v16)(); // rsi
  void (__fastcall *v17)(); // r15

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  *(_DWORD *)&Pcr->MajorVersion = 65537;
  *(_DWORD *)&CurrentPrcb->MinorVersion = 65537;
  CurrentPrcb->BuildType = 0;
  Number = Pcr->Prcb.Number;
  if ( !(_DWORD)Number )
  {
    v5 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL);
    *(_QWORD *)(a1 + 144) = &KiInitialProcess;
    *(_QWORD *)(a1 + 152) = &KiInitialThread;
    LODWORD(KeKernelStackSize) = *(_DWORD *)(a1 + 160);
    v6 = *(_QWORD *)(a1 + 128);
    KiFeatureSettings = (v5 >> 11) & 0x3F;
    CurrentPrcb->IsrStack = (void *)(v6 + 28672);
  }
  CurrentPrcb->SharedReadyQueue = &CurrentPrcb->LocalSharedReadyQueue;
  v7 = *(_KTHREAD **)(a1 + 152);
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = v7;
  CurrentPrcb->IdleThread = v7;
  if ( !(_DWORD)Number || PoEnergyEstimationEnabled() )
    _interlockedbittestandset(&v7->Header.Lock, 0x15u);
  v7->ApcState.Process = *(_KPROCESS **)(a1 + 144);
  v7->ApcState.ApcListHead[0].Blink = v7->ApcState.ApcListHead;
  v7->ApcState.ApcListHead[0].Flink = v7->ApcState.ApcListHead;
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v8 = *(_QWORD *)(a1 + 128) - 80LL;
  *(_QWORD *)(v8 + 40) = &KiDispatchInterruptContinue;
  v9 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v8;
  if ( v9 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  if ( !(_DWORD)Number )
  {
    v11 = *(_QWORD *)(a1 + 240);
    if ( (*(_DWORD *)(v11 + 116) & 8) != 0 )
      KiBootDebuggerActive = 1;
    if ( (*(_DWORD *)(v11 + 116) & 0x100) != 0 )
      KiSystemCallSelector = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(0xFFFFFFFFLL, a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v12 = *(const char **)(a1 + 216);
    if ( v12 )
    {
      v13 = strstr(v12, "GROUPSIZE");
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = *v13;
          if ( !*v13 || v14 == 32 || (unsigned __int8)(v14 - 48) <= 9u )
            break;
          ++v13;
        }
        v15 = atoi(v13);
        KiMaximumGroupSize = v15;
        if ( (unsigned int)(v15 - 1) > 0x3F || ((v15 - 1) & v15) != 0 )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard();
  HalInitializeProcessor((unsigned int)Number, a1);
  KiSetFeatureBits(CurrentPrcb);
  v16 = (void (__fastcall *)())KiSystemCall32;
  v17 = (void (__fastcall *)())KiSystemCall64;
  if ( !CurrentPrcb->Number )
    KiEnableKvaShadowing(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763]);
  if ( KiKvaShadow )
  {
    v16 = (void (__fastcall *)())KiSystemCall32Shadow;
    v17 = (void (__fastcall *)())KiSystemCall64Shadow;
    if ( CurrentPrcb->CpuVendor == 1 )
    {
      v16 = KiSystemCall32AmdShadow;
      v17 = KiSystemCall64AmdShadow;
    }
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v16);
  __writemsr(0xC0000082, (unsigned __int64)v17);
  __writemsr(0xC0000084, 0x4700uLL);
  KiInitPrcb(CurrentPrcb, (unsigned int)Number);
  ExInitPoolLookasidePointers();
  if ( !(_DWORD)Number )
  {
    dword_1403825B4 = 0;
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0[0] = 1;
    KeActiveProcessors[0] = 1310721;
    memset(qword_1403825B8, 0, sizeof(qword_1403825B8));
    KeAddProcessorAffinityEx(KeActiveProcessors, 0);
    HvlEnableVsmCalls(a1);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
