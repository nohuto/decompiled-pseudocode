/*
 * XREFs of KiInitializeBootStructures @ 0x1403F77B0
 * Callers:
 *     KiSystemStartup @ 0x1403EB010 (KiSystemStartup.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x140021210 (PoEnergyEstimationEnabled.c)
 *     strstr @ 0x140171998 (strstr.c)
 *     atoi @ 0x140171C00 (atoi.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiDetectTsx @ 0x1401FEC6C (KiDetectTsx.c)
 *     ExInitPoolLookasidePointers @ 0x1403F7B80 (ExInitPoolLookasidePointers.c)
 *     KiInitPrcb @ 0x1403F7D4C (KiInitPrcb.c)
 *     KiSetFeatureBits @ 0x1403F80E8 (KiSetFeatureBits.c)
 *     KiInitializeIdt @ 0x140401BAC (KiInitializeIdt.c)
 *     KiGetProcessorSignature @ 0x140402068 (KiGetProcessorSignature.c)
 *     KiEnableKvaShadowing @ 0x1404028EC (KiEnableKvaShadowing.c)
 *     KiInitializeNxSupportDiscard @ 0x1407C3E20 (KiInitializeNxSupportDiscard.c)
 *     InbvDriverInitialize @ 0x1407DB3A8 (InbvDriverInitialize.c)
 *     HvlEnableVsmCalls @ 0x1407E9058 (HvlEnableVsmCalls.c)
 */

__int64 __fastcall KiInitializeBootStructures(__int64 a1)
{
  KPCR *Pcr; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 Number; // rbp
  __int64 v5; // rcx
  _KTHREAD *v6; // rdi
  __int64 v7; // rax
  bool v8; // zf
  _KIDTENTRY64 *IdtBase; // rcx
  const char *v10; // rcx
  char *v11; // rax
  char v12; // cl
  int v13; // eax
  __int64 (__fastcall *v14)(); // rdi
  __int64 (__fastcall *v15)(); // r15
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rcx
  char v20; // [rsp+60h] [rbp+8h] BYREF
  __int16 v21; // [rsp+68h] [rbp+10h] BYREF
  __int16 v22; // [rsp+70h] [rbp+18h] BYREF

  Pcr = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  *(_DWORD *)&Pcr->MajorVersion = 65537;
  *(_DWORD *)&CurrentPrcb->MinorVersion = 65537;
  CurrentPrcb->BuildType = 0;
  Number = Pcr->Prcb.Number;
  if ( !(_DWORD)Number )
  {
    v5 = *(_QWORD *)(a1 + 240);
    KiFeatureSettings = *(_DWORD *)(v5 + 2544);
    KiFeatureSimulations = (*(_DWORD *)(v5 + 116) >> 17) & 0x3F;
    *(_QWORD *)(a1 + 144) = &KiInitialProcess;
    *(_QWORD *)(a1 + 152) = &KiInitialThread;
    LODWORD(KeKernelStackSize) = *(_DWORD *)(a1 + 160);
    CurrentPrcb->IsrStack = (void *)(*(_QWORD *)(a1 + 128) + 28672LL);
  }
  CurrentPrcb->SharedReadyQueue = &CurrentPrcb->LocalSharedReadyQueue;
  v6 = *(_KTHREAD **)(a1 + 152);
  CurrentPrcb->NextThread = 0LL;
  CurrentPrcb->CurrentThread = v6;
  CurrentPrcb->IdleThread = v6;
  if ( !(_DWORD)Number || PoEnergyEstimationEnabled() )
    _interlockedbittestandset(&v6->Header.Lock, 0x15u);
  v6->ApcState.Process = *(_KPROCESS **)(a1 + 144);
  v6->ApcState.ApcListHead[0].Blink = v6->ApcState.ApcListHead;
  v6->ApcState.ApcListHead[0].Flink = v6->ApcState.ApcListHead;
  KiProcessorBlock[Number] = (__int64)CurrentPrcb;
  v7 = *(_QWORD *)(a1 + 128) - 80LL;
  *(_QWORD *)(v7 + 40) = &KiDispatchInterruptContinue;
  v8 = CurrentPrcb->Context == 0LL;
  CurrentPrcb->DpcStack = (void *)v7;
  if ( v8 )
  {
    CurrentPrcb->ContextFlagsInit = 1048587;
    CurrentPrcb->Context = &CurrentPrcb->ProcessorState.ContextFrame;
  }
  IdtBase = Pcr->IdtBase;
  if ( !(_DWORD)Number )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 116LL) & 8) != 0 )
      KiBootDebuggerActive = 1;
    KiInitializeIdt(IdtBase, 0LL);
    HalInitializeBios(0xFFFFFFFFLL, a1);
    InbvDriverInitialize(0xFFFFFFFFLL, a1, 0LL);
    v10 = *(const char **)(a1 + 216);
    if ( v10 )
    {
      v11 = strstr(v10, "GROUPSIZE");
      if ( v11 )
      {
        while ( 1 )
        {
          v12 = *v11;
          if ( !*v11 || v12 == 32 || (unsigned __int8)(v12 - 48) <= 9u )
            break;
          ++v11;
        }
        v13 = atoi(v11);
        KiMaximumGroupSize = v13;
        if ( (unsigned int)(v13 - 1) > 0x3F || ((v13 - 1) & v13) != 0 )
          KiMaximumGroupSize = 64;
      }
    }
  }
  *((_WORD *)Pcr->NtTib.StackBase + 51) = 104;
  if ( !KeGetPcr()->Prcb.Number )
    KiInitializeNxSupportDiscard();
  KiGetProcessorSignature(&CurrentPrcb->CpuVendor, &v20, &v21, &v22);
  CurrentPrcb->CpuType = v20;
  CurrentPrcb->CpuStep = v22 | (v21 << 8);
  CurrentPrcb->CpuID = 1;
  HalInitializeProcessor((unsigned int)Number, a1);
  KiSetFeatureBits(CurrentPrcb);
  v14 = KiSystemCall32;
  v15 = (__int64 (__fastcall *)())KiSystemCall64;
  if ( !CurrentPrcb->Number )
    KiEnableKvaShadowing(CurrentPrcb, &Pcr->NtTib.ExceptionList[-763]);
  if ( KiKvaShadow )
  {
    v14 = KiSystemCall32Shadow;
    v15 = KiSystemCall64Shadow;
  }
  if ( !CurrentPrcb->Number )
    KiTsxSupportedAtBoot = KiDetectTsx();
  if ( CurrentPrcb->MsrIa32TsxCtrl )
    __writemsr(0x122u, CurrentPrcb->MsrIa32TsxCtrl);
  if ( !CurrentPrcb->Number )
  {
    v16 = KiDebugTrapIndex;
    KiDebugTraps[KiDebugTrapIndex] = (__int64)v15;
    v17 = (unsigned int)(v16 + 1);
    KiDebugTraps[v17] = (__int64)v14;
    KiDebugTrapIndex = v17 + 1;
  }
  __writemsr(0xC0000081, 0x23001000000000uLL);
  __writemsr(0xC0000083, (unsigned __int64)v14);
  __writemsr(0xC0000082, (unsigned __int64)v15);
  __writemsr(0xC0000084, 0x4700uLL);
  KiInitPrcb(CurrentPrcb, (unsigned int)Number);
  ExInitPoolLookasidePointers();
  if ( !(_DWORD)Number )
  {
    dword_1403D15E4 = 0;
    LODWORD(KeNumberProcessors_0) = 1;
    KeNumberProcessorsGroup0[0] = 1;
    KeActiveProcessors[0] = 1310721;
    memset(qword_1403D15E8, 0, sizeof(qword_1403D15E8));
    v18 = (unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6;
    if ( (_DWORD)v18 )
      LOWORD(KeActiveProcessors[0]) = v18 + 1;
    qword_1403D15E8[(unsigned int)v18] = qword_1403D15E8[v18] | (1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F));
    HvlEnableVsmCalls(a1);
  }
  return KiSaveInitialProcessorControlState((__int64)&CurrentPrcb->ProcessorState);
}
