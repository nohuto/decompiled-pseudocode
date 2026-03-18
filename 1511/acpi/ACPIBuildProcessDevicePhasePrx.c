/*
 * XREFs of ACPIBuildProcessDevicePhasePrx @ 0x1C000BF10
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000C030 (ACPIBuildCompleteMustSucceed.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     AMLIReferenceHandleEx @ 0x1C0016AC0 (AMLIReferenceHandleEx.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0021828 (ACPIBuildDevicePowerNodes.c)
 *     ACPIWriteEventLogEntry @ 0x1C003AFD4 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrx(__int64 a1)
{
  unsigned int v1; // ebp
  ULONG_PTR v2; // r14
  __int64 v3; // rdx
  __int64 v5; // r12
  ULONG_PTR v6; // r15
  __int64 v7; // rbx
  int v8; // edi
  KIRQL v9; // dl
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  ULONG_PTR v13; // rdx
  __int64 v15; // rcx

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 40);
  v3 = (unsigned int)(*(_DWORD *)(a1 + 28) - 19) >> 1;
  v5 = (unsigned int)(v3 + 1);
  v6 = v2 + 8 * v5;
  *(_DWORD *)(a1 + 32) = 2 * v3 + 20;
  if ( *(_QWORD *)(v6 + 400) || *(_QWORD *)(v2 + 8 * v5 + 352) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_12;
    dword_1C005A228 = 0;
    v15 = a1 + 80;
    byte_1C005A22C = 0;
LABEL_19:
    FreeDataBuffs(v15, 1LL);
    goto LABEL_12;
  }
  v7 = *(_QWORD *)(v2 + 704);
  v8 = *(_DWORD *)&aPs0Ps1Ps2[4 * v3];
  v9 = ExAcquireSpinLockShared(&ACPINamespaceLock);
  v10 = *(_QWORD *)(*(_QWORD *)v7 + 24LL);
  v11 = v10;
  if ( v10 )
  {
    while ( v8 != *(_DWORD *)(v11 + 32) )
    {
      v11 = *(_QWORD *)(v11 + 8);
      if ( v11 == v10 )
      {
        v11 = 0LL;
        break;
      }
      if ( !v11 )
        break;
    }
  }
  ExReleaseSpinLockShared(&ACPINamespaceLock, v9);
  if ( v11 )
    AMLIReferenceHandleEx(v11 + 112);
  else
    v12 = 0LL;
  *(_QWORD *)(v6 + 400) = v12;
  v13 = *(_QWORD *)(a1 + 56);
  if ( v13 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_12;
    }
    v1 = ACPIBuildDevicePowerNodes(v2, v13);
    dword_1C005A228 = 0;
    v15 = a1 + 80;
    byte_1C005A22C = 0;
    goto LABEL_19;
  }
LABEL_12:
  ACPIBuildCompleteMustSucceed(0LL);
  return v1;
}
