/*
 * XREFs of ACPIBuildProcessDevicePhaseHrv @ 0x1C000B730
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001B00 (ACPIGet.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000CE88 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000DB40 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHrv(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v5; // rbp

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 1448233055LL);
  v4 = 0;
  *(_DWORD *)(a1 + 32) = 12;
  v5 = v3;
  if ( !v3 )
    goto LABEL_2;
  if ( (*(_BYTE *)(v1 + 904) & 8) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 8uLL);
    v4 = ACPIGet((_QWORD *)v1, 1448233055, 537149442, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 576, 0LL);
    *(_DWORD *)(a1 + 32) = 11;
  }
  AMLIDereferenceHandleEx(v5);
  if ( v4 == 259 )
    return 0;
  else
LABEL_2:
    ACPIBuildCompleteMustSucceed(0LL);
  return v4;
}
