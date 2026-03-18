/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0044AB0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIReferenceHandleEx @ 0x1C000E210 (AMLIReferenceHandleEx.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIAsyncEvalObject @ 0x1C0020244 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C002C1C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseDep(__int64 a1)
{
  __int64 v1; // rbx
  _SLIST_ENTRY *v2; // rbp
  unsigned int v4; // esi
  __int64 v5; // rdx
  __int64 *v6; // rbx
  volatile signed __int32 *v7; // rcx
  __int64 *v8; // rcx
  __int64 v9; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (_SLIST_ENTRY *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 5;
  v4 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v6 = AMLIGetNamedChild(*(__int64 **)(v1 + 32), 1346716767);
  if ( !v6 )
    goto LABEL_5;
  v7 = *(volatile signed __int32 **)(a1 + 56);
  if ( v7 )
  {
    AMLIDereferenceHandleEx(v7, v5);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v6;
  AMLIReferenceHandleEx((__int64)v6);
  v4 = AMLIAsyncEvalObject(v8, v2, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
  if ( v4 != 259 )
LABEL_5:
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v6, v4, (__int64)v2, a1);
  if ( v6 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)v6, v9);
  return v4;
}
