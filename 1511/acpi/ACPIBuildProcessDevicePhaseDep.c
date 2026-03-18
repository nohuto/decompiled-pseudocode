/*
 * XREFs of ACPIBuildProcessDevicePhaseDep @ 0x1C000B490
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseDep(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // ebx
  __int64 v5; // rcx
  __int64 v6; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0;
  memset((void *)(a1 + 80), 0, 0x28uLL);
  if ( (*(_BYTE *)(v1 + 904) & 0x20) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( v5 )
    {
      AMLIDereferenceHandleEx(v5);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v6 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1346716767LL);
    *(_QWORD *)(a1 + 56) = v6;
    if ( v6 )
      v3 = AMLIAsyncEvalObject(v6, a1 + 80, 0LL, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x20uLL);
  }
  *(_DWORD *)(a1 + 32) = 5;
  if ( v3 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
