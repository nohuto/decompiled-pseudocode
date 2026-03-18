/*
 * XREFs of MiCombineIdenticalPages @ 0x14050E19C
 * Callers:
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     MiManagePartition @ 0x14062480C (MiManagePartition.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     MiCombiningInProgress @ 0x140127954 (MiCombiningInProgress.c)
 *     MiCombineAllPhysicalMemory @ 0x140129C30 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x1401E0DFC (MiCombineWorkingSet.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall MiCombineIdenticalPages(__int64 a1, void *a2, char a3, KPROCESSOR_MODE a4, PVOID Object)
{
  _QWORD *v5; // r15
  PVOID v8; // rdi
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // r14
  void *v11; // rcx
  void *v12; // rbx
  int v13; // eax
  int v14; // esi
  int v15[2]; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-29h]
  unsigned __int64 v17; // [rsp+48h] [rbp-21h]
  unsigned __int64 v18; // [rsp+50h] [rbp-19h]
  _QWORD v19[10]; // [rsp+58h] [rbp-11h] BYREF

  v5 = Object;
  *(_QWORD *)v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  *(_QWORD *)Object = 0LL;
  v18 = 0LL;
  if ( dword_1403810EC )
    return -1073741637;
  v8 = 0LL;
  if ( !a2
    || (result = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, a4, &Object, 0LL),
        v8 = Object,
        result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v11 = (void *)(a1 + 5224);
    v12 = &unk_1402FEA58;
    if ( (a3 & 1) == 0 )
      v12 = v11;
    --CurrentThread->KernelApcDisable;
    MiCombiningInProgress((__int64 *)v12, v19, 1);
    if ( (a3 & 2) != 0 )
      v13 = MiCombineWorkingSet(
              (int **)v12,
              (__int64)v8,
              v19,
              (__int64)v15,
              (PEX_SPIN_LOCK)&CurrentThread->ApcState.Process[1].IdealNode[12]);
    else
      v13 = MiCombineAllPhysicalMemory((__int64 *)v12, (__int64)v8, v19, (__int64)v15);
    v14 = v13;
    *v5 = *(_QWORD *)v15;
    _InterlockedIncrement((volatile signed __int32 *)v12 + 94);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 46, v16);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 44, v17);
    _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 45, v18);
    MiCombiningInProgress((__int64 *)v12, v19, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
    if ( v8 )
      ObfDereferenceObject(v8);
    return v14;
  }
  return result;
}
