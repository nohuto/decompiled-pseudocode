/*
 * XREFs of RmpClientWnfMessageQueueWorker @ 0x180002270
 * Callers:
 *     <none>
 * Callees:
 *     ?ResourceSetCallbackThunk@ResourcePolicyEngineProxy@ExecutionModel@@KAXPEAU_RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD@@PEAX@Z @ 0x180002360 (-ResourceSetCallbackThunk@ResourcePolicyEngineProxy@ExecutionModel@@KAXPEAU_RM_WNF_LEGACY_RESOUR.c)
 *     _guard_check_icall_nop @ 0x180009170 (_guard_check_icall_nop.c)
 */

__int64 __fastcall RmpClientWnfMessageQueueWorker(__int64 a1, __int64 a2)
{
  __int64 **v3; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rax
  int v6; // ecx
  void (__fastcall *v7)(struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *, ExecutionModel::ResourcePolicyEngineProxy *); // r12

  RtlAcquireSRWLockExclusive(a2 + 32);
  v3 = (__int64 **)(a2 + 16);
  while ( *v3 != (__int64 *)v3 )
  {
    v4 = *v3;
    v5 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v3 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v3;
    RtlReleaseSRWLockExclusive(a2 + 32);
    v6 = *((_DWORD *)v4 + 5);
    if ( v6 == 2 )
    {
      v7 = *(void (__fastcall **)(struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *, ExecutionModel::ResourcePolicyEngineProxy *))(a2 + 56);
      if ( v7 == ExecutionModel::ResourcePolicyEngineProxy::ResourceSetCallbackThunk )
        ExecutionModel::ResourcePolicyEngineProxy::ResourceSetCallbackThunk(
          (struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *)((char *)v4 + 36),
          *(ExecutionModel::ResourcePolicyEngineProxy **)(a2 + 8));
      else
        v7(
          (struct _RM_WNF_LEGACY_RESOURCE_SET_CALLBACK_PAYLOAD *)((char *)v4 + 36),
          *(ExecutionModel::ResourcePolicyEngineProxy **)(a2 + 8));
    }
    else if ( v6 )
    {
      if ( v6 == 1 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(a2 + 48))(*((unsigned int *)v4 + 6), *(__int64 *)((char *)v4 + 28));
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(a2 + 40))(*((unsigned int *)v4 + 6), *(__int64 *)((char *)v4 + 28));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    RtlAcquireSRWLockExclusive(a2 + 32);
  }
  *(_BYTE *)(a2 + 80) = 0;
  return RtlReleaseSRWLockExclusive(a2 + 32);
}
