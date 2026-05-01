/*
 * XREFs of RmpWnfAllocateAndInitializePendingCallbackList @ 0x18002588C
 * Callers:
 *     RmpActivatorRegister @ 0x180024CB0 (RmpActivatorRegister.c)
 *     ?CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF_STATE_NAME@@PEAPEAUIUnknown@@@Z @ 0x1800256A4 (-CreateRegistrationForWnfStateName@ResourcePolicyEngineServerProxy@ExecutionModel@@IEAAJPEAU_WNF.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpWnfAllocateAndInitializePendingCallbackList(_QWORD *a1)
{
  _QWORD *Heap; // rax
  _QWORD *v3; // rbx
  int v4; // edi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  Heap = RmpAllocateHeap(0x28uLL);
  v3 = Heap;
  if ( Heap )
  {
    v4 = TpAllocWork(&v6, RmpWnfPublishMessageToClientStateNameWorker, Heap, 0LL);
    if ( v4 >= 0 )
    {
      memset_0(v3, 0, 0x28uLL);
      v3[1] = v3;
      *v3 = v3;
      RtlInitializeSRWLock(v3 + 3);
      v3[2] = v6;
      v6 = 0LL;
      *a1 = v3;
      v3 = 0LL;
    }
    if ( v3 )
      RmpFreeHeap(v3);
  }
  else
  {
    v4 = -1073741801;
  }
  if ( v6 )
    TpReleaseWork(v6);
  return (unsigned int)v4;
}
