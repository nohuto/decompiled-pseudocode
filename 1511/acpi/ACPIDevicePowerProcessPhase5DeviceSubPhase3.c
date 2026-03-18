/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase3 @ 0x1C000C6C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000C790 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 *     AMLIAsyncEvalObject @ 0x1C00187D8 (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00251C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase3(__int64 a1)
{
  unsigned int v1; // ebp
  _QWORD *v3; // rcx
  __int64 v4; // rsi
  int v5; // edi
  int v6; // eax
  _QWORD v8[6]; // [rsp+30h] [rbp-48h] BYREF

  v1 = 0;
  v3 = *(_QWORD **)(a1 + 40);
  v4 = 0LL;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 6;
  if ( *(_DWORD *)(a1 + 104) != 1 )
    v6 = 8;
  *(_DWORD *)(a1 + 212) = v6;
  if ( (*v3 & 0x8000000000000LL) != 0 )
    goto LABEL_8;
  v4 = AMLIGetNamedChild(v3[88], 1262701663LL);
  if ( !v4 )
  {
    if ( (v5 & 4) != 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 904LL), 0x80uLL);
    }
    else if ( (v5 & 8) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 904LL), 0xFFFFFFFFFFFFFF7FuLL);
    }
    goto LABEL_8;
  }
  memset(v8, 0, 0x28uLL);
  WORD1(v8[0]) = 1;
  if ( (v5 & 4) != 0 )
  {
    v8[2] = 1LL;
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 904LL), 0x80uLL);
    goto LABEL_15;
  }
  if ( (v5 & 8) != 0 )
  {
    v8[2] = 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 904LL), 0xFFFFFFFFFFFFFF7FuLL);
LABEL_15:
    *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v1 = AMLIAsyncEvalObject(v4, 0LL, 1LL, v8, ACPIDeviceCompleteGenericPhase, a1);
    AMLIDereferenceHandleEx(v4);
    v4 = 0LL;
    if ( v1 == 259 )
      return 0LL;
  }
LABEL_8:
  ACPIDeviceCompleteGenericPhase(v4, v1, 0LL, a1);
  return 0LL;
}
