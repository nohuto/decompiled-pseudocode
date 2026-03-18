/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C00232B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C790 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase3(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbp
  __int64 v4; // rcx
  __int64 *v5; // rax
  unsigned int v6; // edi
  volatile signed __int32 *v7; // rsi

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 6;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  if ( (*v1 & 0x200000000000000LL) != 0 )
    v4 = *(_QWORD *)(v1[22] + 704LL);
  else
    v4 = v1[88];
  v5 = (__int64 *)AMLIGetNamedChild(v4, 1096045407);
  v6 = 0;
  v7 = (volatile signed __int32 *)v5;
  if ( v5 )
  {
    if ( *(_WORD *)(*v5 + 58) == 8 )
      *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v6 = AMLIAsyncEvalObject(v5, (_SLIST_ENTRY *)v2, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
    AMLIDereferenceHandleEx(v7);
  }
  else
  {
    *(_WORD *)(v2 + 2) = 1;
    *(_QWORD *)(v2 + 16) = 1LL;
  }
  if ( v6 != 259 )
    ACPIDeviceCompleteGenericPhase(0LL, v6, 0LL, a1);
  return v6;
}
