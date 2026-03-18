/*
 * XREFs of ACPIBuildProcessThermalZoneDep @ 0x1C0023860
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneDep(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  volatile signed __int32 *v5; // rcx
  __int64 *v6; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  *(_DWORD *)(a1 + 32) = 5;
  if ( (*(_BYTE *)(v1 + 904) & 0x20) != 0 )
    goto LABEL_2;
  v5 = *(volatile signed __int32 **)(a1 + 56);
  if ( v5 )
  {
    AMLIDereferenceHandleEx(v5);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  v6 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1346716767);
  *(_QWORD *)(a1 + 56) = v6;
  if ( v6 )
    v3 = AMLIAsyncEvalObject(v6, (_SLIST_ENTRY *)(a1 + 80), 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
  else
    _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x20uLL);
  if ( v3 != 259 )
LABEL_2:
    ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  else
    return 0;
  return v3;
}
