/*
 * XREFs of ACPIBuildProcessDevicePhaseHrv @ 0x1C001FB80
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0013578 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseHrv(__int64 a1)
{
  __int64 v1; // rsi
  __int64 *v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rbp

  v1 = *(_QWORD *)(a1 + 40);
  v3 = AMLIGetNamedChild(*(__int64 **)(v1 + 712), 1448233055);
  v5 = 0;
  *(_DWORD *)(a1 + 32) = 12;
  v6 = (volatile signed __int32 *)v3;
  if ( !v3 )
    goto LABEL_2;
  if ( (*(_BYTE *)(v1 + 912) & 8) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 912), 8uLL);
    v5 = ACPIGet((__int64 *)v1, 1448233055, 537149442, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 584, 0LL);
    *(_DWORD *)(a1 + 32) = 11;
  }
  AMLIDereferenceHandleEx(v6, v4);
  if ( v5 == 259 )
    return 0;
  else
LABEL_2:
    ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
  return v5;
}
