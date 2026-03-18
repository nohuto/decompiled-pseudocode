/*
 * XREFs of ExfWaitForRundownProtectionRelease @ 0x1400D4A70
 * Callers:
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400D3828 (ExWaitForRundownProtectionRelease.c)
 *     PfSnDeactivateTrace @ 0x1400D76FC (PfSnDeactivateTrace.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130874 (HvSynchronizeAndDropTemporaryBins.c)
 *     PfFbBufferListShutdown @ 0x14015CAC8 (PfFbBufferListShutdown.c)
 *     MiModifiedPageWriter @ 0x140169194 (MiModifiedPageWriter.c)
 *     BgkpDisableConsole @ 0x14017065C (BgkpDisableConsole.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402467D0 (DbgpRemoveDebugPrintCallback.c)
 *     ?SmEmptyQueueToStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x1402517C0 (-SmEmptyQueueToStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z.c)
 *     PfTAccessTracingCleanup @ 0x1403EBF78 (PfTAccessTracingCleanup.c)
 *     PfSnPrefetchSections @ 0x140420658 (PfSnPrefetchSections.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     PfSnPowerBoost @ 0x140458E08 (PfSnPowerBoost.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     PfSnPrefetchScenario @ 0x1404F502C (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404F58F0 (PfSnPrefetchSectionsCleanup.c)
 *     SmKmStoreDelete @ 0x1404FA05C (SmKmStoreDelete.c)
 *     ExpWnfDeleteSubscription @ 0x1405059CC (ExpWnfDeleteSubscription.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 *     ObDestroyHandleRevocationBlock @ 0x14052E61C (ObDestroyHandleRevocationBlock.c)
 *     ExpWnfFreeScopeInstance @ 0x14053EDF0 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfDeleteNameInstance @ 0x14053F340 (ExpWnfDeleteNameInstance.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     ExRegisterHost @ 0x140594978 (ExRegisterHost.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A71BC (PspSetCreateProcessNotifyRoutine.c)
 *     SmKmInitialize @ 0x1405B614C (SmKmInitialize.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     DbgkLkmdUnregisterCallback @ 0x140669C18 (DbgkLkmdUnregisterCallback.c)
 *     ObUnRegisterCallbacks @ 0x1406ACB58 (ObUnRegisterCallbacks.c)
 *     PfpRpShutdown @ 0x1406AFA78 (PfpRpShutdown.c)
 *     PoUnregisterCoalescingCallback @ 0x1406B51D0 (PoUnregisterCoalescingCallback.c)
 *     PsUnregisterMonitorServerSilo @ 0x1406C16A8 (PsUnregisterMonitorServerSilo.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406C60A4 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406C6210 (PsRemoveLoadImageNotifyRoutine.c)
 *     SmcCacheInitialize @ 0x1406DAFB8 (SmcCacheInitialize.c)
 *     SmcCacheRemove @ 0x1406DB278 (SmcCacheRemove.c)
 *     SmcStoreDelete @ 0x1406DBA20 (SmcStoreDelete.c)
 *     ExWaitForCallBacks @ 0x1406EF7C0 (ExWaitForCallBacks.c)
 *     ExUnregisterExtension @ 0x1406F8120 (ExUnregisterExtension.c)
 *     SmcCacheManagerInitialize @ 0x1407DEDAC (SmcCacheManagerInitialize.c)
 *     PfInitializeSuperfetch @ 0x1407DEE3C (PfInitializeSuperfetch.c)
 *     PfpRpInitialize @ 0x1407DF2FC (PfpRpInitialize.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

int __fastcall ExfWaitForRundownProtectionRelease(volatile signed __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  bool v3; // zf
  signed __int32 *v4; // rax
  unsigned int v5; // esi
  bool v6; // di
  int v7; // ebx
  unsigned __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int16 Object; // [rsp+38h] [rbp-30h] BYREF
  char v12; // [rsp+3Ah] [rbp-2Eh]
  int v13; // [rsp+3Ch] [rbp-2Ch]
  _QWORD v14[2]; // [rsp+40h] [rbp-28h] BYREF
  signed __int32 v15[4]; // [rsp+50h] [rbp-18h] BYREF

  v15[0] = 1;
  do
  {
    v2 = a2 >> 1;
    v10 = a2 >> 1;
    v4 = (signed __int32 *)_InterlockedCompareExchange64(a1, (signed __int64)&v10 + 1, a2);
    v3 = a2 == (_QWORD)v4;
    a2 = (unsigned __int64)v4;
  }
  while ( !v3 );
  if ( v2 )
  {
    v5 = 0;
    v6 = KeGetCurrentIrql() < 2u;
    v7 = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
      v7 = ExpSpinCount;
    while ( 1 )
    {
      LODWORD(v4) = v15[0];
      if ( (v15[0] & 1) == 0 )
        return (int)v4;
      if ( v6 )
      {
        if ( !v7 )
        {
          Object = 1;
          v14[1] = v14;
          v14[0] = v14;
          v4 = v15;
          v12 = 6;
          v13 = 0;
          if ( _interlockedbittestandreset(v15, 0) )
            LODWORD(v4) = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          return (int)v4;
        }
        --v7;
LABEL_10:
        _mm_pause();
      }
      else
      {
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          goto LABEL_10;
        HvlNotifyLongSpinWait(v5);
      }
    }
  }
  return (int)v4;
}
