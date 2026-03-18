/*
 * XREFs of MiCombineIdenticalPages @ 0x1406A89D0
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     MiManagePartition @ 0x1406A4074 (MiManagePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 *     MiCombiningInProgress @ 0x1402282C0 (MiCombiningInProgress.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall MiCombineIdenticalPages(__int64 a1, void *a2, char a3, KPROCESSOR_MODE a4, PVOID Object)
{
  _QWORD *v5; // r15
  NTSTATUS result; // eax
  PVOID v9; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v11; // rcx
  _QWORD *v12; // rbx
  int v13; // eax
  int v14; // r14d
  __int16 v15; // ax
  __int64 v16; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-29h]
  unsigned __int64 v18; // [rsp+48h] [rbp-21h]
  unsigned __int64 v19; // [rsp+50h] [rbp-19h]
  _QWORD v20[10]; // [rsp+58h] [rbp-11h] BYREF

  v5 = Object;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  *(_QWORD *)Object = 0LL;
  v19 = 0LL;
  if ( dword_1403D00DC )
    return -1073741637;
  v9 = 0LL;
  if ( !a2
    || (result = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, a4, &Object, 0LL),
        v9 = Object,
        result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = (_QWORD *)(a1 + 4864);
    v12 = qword_14034EF18;
    if ( (a3 & 1) == 0 )
      v12 = v11;
    --CurrentThread->KernelApcDisable;
    MiCombiningInProgress(v12, v20, 1);
    if ( (a3 & 2) != 0 )
      v13 = MiCombineWorkingSet(
              v12,
              (__int64)v9,
              (__int64)v20,
              (__int64)&v16,
              (__int64)&CurrentThread->ApcState.Process[1].IdealNode[8]);
    else
      v13 = MiCombineAllPhysicalMemory(v12, (__int64)v9, (__int64)v20, (__int64)&v16);
    v14 = v13;
    *v5 = v16;
    _InterlockedIncrement((volatile signed __int32 *)v12 + 94);
    _InterlockedExchangeAdd64(v12 + 46, v17);
    _InterlockedExchangeAdd64(v12 + 44, v18);
    _InterlockedExchangeAdd64(v12 + 45, v19);
    MiCombiningInProgress(v12, v20, 0);
    v15 = CurrentThread->KernelApcDisable + 1;
    CurrentThread->KernelApcDisable = v15;
    if ( !v15
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
      && !CurrentThread->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v9 )
      ObfDereferenceObject(v9);
    return v14;
  }
  return result;
}
