/*
 * XREFs of PsGetMonitorContextServerSilo @ 0x1400C82E0
 * Callers:
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     SepRmDispatchDataToLsa @ 0x1400D513C (SepRmDispatchDataToLsa.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 *     ExpWnfAllocateNextPersistentNameSequence @ 0x1403B4F34 (ExpWnfAllocateNextPersistentNameSequence.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x1403E10D0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfGenerateStateName @ 0x1403E295C (ExpWnfGenerateStateName.c)
 *     ObDereferenceDeviceMap @ 0x1403E3C30 (ObDereferenceDeviceMap.c)
 *     ExpWnfDeleteScopeById @ 0x1403E3D80 (ExpWnfDeleteScopeById.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpGetShadowDirectory @ 0x14041CE20 (ObpGetShadowDirectory.c)
 *     ObpReferenceDeviceMap @ 0x14041CF70 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x14041D1A0 (ObQueryDeviceMapInformation.c)
 *     ObfDereferenceDeviceMap @ 0x14041D3D4 (ObfDereferenceDeviceMap.c)
 *     ObSetCurrentProcessDeviceMap @ 0x1404A7A38 (ObSetCurrentProcessDeviceMap.c)
 *     ObSetDirectoryDeviceMap @ 0x1404A7D9C (ObSetDirectoryDeviceMap.c)
 *     NtCreatePrivateNamespace @ 0x1404A9DC8 (NtCreatePrivateNamespace.c)
 *     ObpRegisterPrivateNamespace @ 0x1404AA07C (ObpRegisterPrivateNamespace.c)
 *     NtOpenPrivateNamespace @ 0x1404AA1A0 (NtOpenPrivateNamespace.c)
 *     ObpRemoveNamespaceFromTable @ 0x1404AE154 (ObpRemoveNamespaceFromTable.c)
 *     ObpCreateSymbolicLinkName @ 0x1404BAF58 (ObpCreateSymbolicLinkName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404C094C (ExpWnfEnumerateScopeInstances.c)
 *     ObpDeleteSymbolicLinkName @ 0x1404C4630 (ObpDeleteSymbolicLinkName.c)
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 *     SepRmLsaConnectRequest @ 0x14053C6C0 (SepRmLsaConnectRequest.c)
 *     CmLockKcbForWrite @ 0x140541740 (CmLockKcbForWrite.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140542750 (ObIsDosDeviceLocallyMapped.c)
 *     ObSetDeviceMap @ 0x140545400 (ObSetDeviceMap.c)
 *     PspNotifyServerSiloTermination @ 0x1406406EC (PspNotifyServerSiloTermination.c)
 *     PspUnregisterMonitorDeferred @ 0x140640C04 (PspUnregisterMonitorDeferred.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PsGetMonitorContextServerSilo(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // rbp
  _QWORD *v5; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  char v7; // cl
  _QWORD *v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v11; // rax

  v3 = *(unsigned int *)(a1 + 104);
  v5 = a2;
  if ( a2 == (_QWORD *)-1LL )
  {
    CurrentThread = KeGetCurrentThread();
    if ( *(_QWORD *)&CurrentThread[1].WaitBlockFill11[160] == -3LL )
    {
      v5 = (_QWORD *)CurrentThread->Process[1].Affinity.Bitmap[16];
      if ( !v5 )
        goto LABEL_7;
      do
      {
        if ( v5[156] )
          break;
        v5 = (_QWORD *)v5[133];
      }
      while ( v5 );
    }
    else
    {
      v5 = *(_QWORD **)&CurrentThread[1].WaitBlockFill11[160];
    }
    if ( v5 )
    {
      while ( 1 )
      {
        v11 = v5[156];
        if ( *(_QWORD *)(v11 + 136) )
          break;
        v5 = *(_QWORD **)(v11 + 128);
        if ( !v5 )
          goto LABEL_8;
      }
      ObfReferenceObjectWithTag(v5, 0x746C6644u);
      goto LABEL_8;
    }
LABEL_7:
    v5 = 0LL;
LABEL_8:
    v7 = 1;
    goto LABEL_9;
  }
  v7 = 0;
LABEL_9:
  if ( v5 )
    v8 = *(_QWORD **)(v5[156] + 136LL);
  else
    v8 = &InfrastructureSiloGlobals;
  if ( v7 && v5 )
    ObfDereferenceObject(v5);
  v9 = *(_QWORD *)(v8[8] + 8 * v3) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 24));
    *a3 = v9 + 128;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    return 3221226021LL;
  }
}
