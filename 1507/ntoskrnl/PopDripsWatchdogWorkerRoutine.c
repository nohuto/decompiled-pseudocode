/*
 * XREFs of PopDripsWatchdogWorkerRoutine @ 0x1406BD240
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14023C8F0 (PopAccumulateNonActivatedCpuTime.c)
 *     PopBatteryCapacityToRate @ 0x14023D170 (PopBatteryCapacityToRate.c)
 *     PpmConvertTimeTo @ 0x14023FA4C (PpmConvertTimeTo.c)
 *     PopAcquireDripsWatchdogLock @ 0x1406BCF40 (PopAcquireDripsWatchdogLock.c)
 *     PopDripsWatchdogTakeAction @ 0x1406BD01C (PopDripsWatchdogTakeAction.c)
 *     PopSetDripsWatchdog @ 0x1406BD4C4 (PopSetDripsWatchdog.c)
 */

void __fastcall PopDripsWatchdogWorkerRoutine(__int64 a1)
{
  struct _KTHREAD *v2; // rcx
  __int16 v3; // ax
  int v4; // r12d
  int v5; // esi
  unsigned __int64 v6; // r15
  char v7; // r13
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned int v13; // ecx
  int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v18; // ax
  __int64 v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]
  __int64 v21; // [rsp+50h] [rbp-10h]

  PopAcquireDripsWatchdogLock();
  if ( qword_140357130 )
  {
    v4 = *(_DWORD *)(a1 + 80);
    v5 = v4 - *(_DWORD *)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 72) - *(_QWORD *)(a1 + 16);
    v7 = *(_BYTE *)(a1 + 4);
    v8 = *(_QWORD *)(a1 + 40);
    v19 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    if ( v5 )
      v9 = *(_QWORD *)(a1 + 32);
    else
      v9 = *(_QWORD *)(a1 + 24);
    v10 = v8 - *(_QWORD *)(a1 + 32);
    v11 = (v8 - v9) / 0x2710uLL;
    LODWORD(v19) = v11;
    HIDWORD(v19) = v10 / 0x2710;
    if ( !v5 )
    {
      v12 = 1000LL * (unsigned int)v11;
      if ( !v12 || (unk_14032E9D4 & 0x40000000) != 0 || (v13 = *(_DWORD *)(a1 + 12), DWORD1(xmmword_14032E9C0) >= v13) )
        v14 = 0;
      else
        v14 = PopBatteryCapacityToRate(v13 - DWORD1(xmmword_14032E9C0), v12);
      LODWORD(v21) = v14;
    }
    PopAccumulateNonActivatedCpuTime(0, (_QWORD *)(a1 + 48), (_QWORD *)(a1 + 56));
    LODWORD(v20) = PpmConvertTimeTo(*(_QWORD *)(a1 + 56), 0x3E8uLL);
    if ( v5 )
    {
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 8) = v4;
      *(_QWORD *)(a1 + 24) = v8;
      *(_DWORD *)(a1 + 12) = DWORD1(xmmword_14032E9C0);
    }
    *(_QWORD *)(a1 + 32) = v8;
    PopSetDripsWatchdog();
    _InterlockedExchange((volatile __int32 *)(a1 + 360), 0);
    ExReleaseResourceLite(&stru_140357168);
    CurrentThread = KeGetCurrentThread();
    v18 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    BYTE4(v21) = byte_140353810 & 1;
    HIDWORD(v20) = (unsigned int)(100 * v20) / HIDWORD(v19);
    if ( (PoDebug & 2) != 0 )
      DbgPrint(
        "%s: %u DRIPS transitions spanned %u of the past %u sec along with %u mW energy drain; %u ms non-activated CPU ti"
        "me over the past %u ms\n",
        "PopDripsWatchdogWorkerRoutine",
        v5,
        v6 / 0xF4240,
        (unsigned int)v19 / 0x3E8,
        v21,
        v20,
        HIDWORD(v19));
    if ( !v5 && !qword_1403537D8 )
      PopDripsWatchdogTakeAction((int *)&v19, v7, v15, v16);
  }
  else
  {
    ExReleaseResourceLite(&stru_140357168);
    v2 = KeGetCurrentThread();
    v3 = v2->KernelApcDisable + 1;
    v2->KernelApcDisable = v3;
    if ( !v3
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v2->ApcState.ApcListHead[0].Flink != &v2->152
      && !v2->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
