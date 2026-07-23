/*
 * XREFs of MiCombineIdenticalPages @ 0x140663C88
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     MiManagePartition @ 0x140660A88 (MiManagePartition.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiCombiningInProgress @ 0x1401F8460 (MiCombiningInProgress.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 */

NTSTATUS __fastcall MiCombineIdenticalPages(__int64 a1, void *a2, int a3, KPROCESSOR_MODE a4, _QWORD *a5)
{
  NTSTATUS result; // eax
  PVOID v8; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v10; // rbx
  int v11; // eax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+68h] [rbp-98h]
  _QWORD *v20; // [rsp+70h] [rbp-90h]
  int v21; // [rsp+78h] [rbp-88h]
  _QWORD v22[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v23[10]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v25; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v26; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v27; // [rsp+F8h] [rbp-8h]

  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( (a3 & 0xFFFFFFF8) != 0 )
    return -1073741583;
  *a5 = 0LL;
  if ( (dword_1403A9138 & 1) != 0 )
    return -1073741637;
  v8 = 0LL;
  if ( !a2
    || (result = ObReferenceObjectByHandle(a2, 1u, (POBJECT_TYPE)ExEventObjectType, a4, &Object, 0LL),
        v8 = Object,
        result >= 0) )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = a1 + 5856;
    if ( (a3 & 1) != 0 )
      return -1073741637;
    --CurrentThread->KernelApcDisable;
    MiCombiningInProgress((__int64 *)v10, v23, 1);
    v20 = 0LL;
    v21 = 0;
    if ( (a3 & 4) != 0 )
    {
      v22[0] = qword_1403276F8;
      v22[1] = qword_140327700;
      v20 = v22;
      v21 = 2;
    }
    v17[0] = v10;
    v17[2] = v23;
    v17[3] = &v24;
    v17[1] = v8;
    v19 = a3;
    if ( (a3 & 2) != 0 )
    {
      v18 = (__int64)&CurrentThread->ApcState.Process[1].IdealNode[12];
      v11 = MiCombineWorkingSet((__int64)v17);
    }
    else
    {
      v18 = 0LL;
      v11 = MiCombineAllPhysicalMemory((__int64)v17);
    }
    v12 = v11;
    *a5 = v24;
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 376));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 368), v25);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 352), v26);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 360), v27);
    MiCombiningInProgress((__int64 *)v10, v23, 0);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v13, v14, v15);
    if ( v8 )
      ObfDereferenceObject(v8);
    return v12;
  }
  return result;
}
