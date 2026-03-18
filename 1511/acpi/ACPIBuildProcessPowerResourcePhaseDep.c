/*
 * XREFs of ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0035D40
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessPowerResourcePhaseDep(__int64 a1)
{
  __int64 v1; // rbx
  _SLIST_ENTRY *v2; // rbp
  unsigned int v4; // esi
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rcx
  __int64 *v7; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (_SLIST_ENTRY *)(a1 + 80);
  *(_DWORD *)(a1 + 32) = 5;
  v4 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  v5 = (volatile signed __int32 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 32), 1346716767);
  if ( !v5 )
    goto LABEL_5;
  v6 = *(volatile signed __int32 **)(a1 + 56);
  if ( v6 )
  {
    AMLIDereferenceHandleEx(v6);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v5;
  AMLIReferenceHandleEx((__int64)v5);
  v4 = AMLIAsyncEvalObject(v7, v2, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
  if ( v4 != 259 )
LABEL_5:
    ACPIBuildCompleteMustSucceed((ULONG_PTR)v5, v4, (__int64)v2, a1);
  if ( v5 )
    AMLIDereferenceHandleEx(v5);
  return v4;
}
