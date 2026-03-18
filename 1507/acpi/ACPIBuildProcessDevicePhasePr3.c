/*
 * XREFs of ACPIBuildProcessDevicePhasePr3 @ 0x1C000B980
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BB30 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0021010 (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0022548 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIWriteEventLogEntry @ 0x1C003AC44 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePr3(__int64 a1)
{
  ULONG_PTR v1; // rdi
  __int64 v2; // rsi
  unsigned int v3; // ebp
  __int64 v5; // rax
  ULONG_PTR v6; // rdx
  unsigned int v7; // edx
  ULONG_PTR v8; // rcx
  __int64 v10; // rcx
  unsigned int v11; // eax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  v3 = 0;
  if ( *(_QWORD *)(v1 + 432) || *(_QWORD *)(v1 + 384) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_6;
    dword_1C005A218 = 0;
    byte_1C005A21C = 0;
LABEL_24:
    FreeDataBuffs(v2, 1LL);
    goto LABEL_6;
  }
  v5 = AMLIGetNamedChild(*(_QWORD *)(v1 + 704), 861098079LL);
  *(_QWORD *)(v1 + 432) = v5;
  if ( !v5 )
    *(_QWORD *)(v1 + 432) = *(_QWORD *)(v1 + 424);
  v6 = *(_QWORD *)(a1 + 56);
  if ( v6 )
  {
    if ( *(_WORD *)(v2 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_6;
    }
    v11 = ACPIBuildDevicePowerNodes(v1, v6);
    dword_1C005A218 = 0;
    v3 = v11;
    byte_1C005A21C = 0;
    goto LABEL_24;
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 28) = 5;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
  if ( (*(_DWORD *)(v1 + 904) & 0x400040) == 0 )
  {
    v7 = 0;
    v8 = v1 + 352;
    while ( !*(_QWORD *)v8 || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 8LL) + 96LL) )
    {
      ++v7;
      v8 += 8LL;
      if ( v7 > 4 )
        goto LABEL_11;
    }
    _InterlockedOr64((volatile signed __int64 *)(v1 + 904), 0x400000uLL);
    *(_DWORD *)(a1 + 20) |= 0x20u;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
LABEL_11:
  if ( (*(_BYTE *)v1 & 2) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 56);
    if ( v10 )
      AMLIDereferenceHandleEx(v10);
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_DWORD *)(a1 + 32) = 31;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 30;
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
