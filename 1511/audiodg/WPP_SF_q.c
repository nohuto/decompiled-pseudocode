/*
 * XREFs of WPP_SF_q @ 0x140027E68
 * Callers:
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006828 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x1400088EC (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x14000D620 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x14000FFE0 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140014D80 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140015E50 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140015F0C (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x140015F7C (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x14002C1F0 (-GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002F0C0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x1400325B0 (-GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z.c)
 *     ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140037B30 (-IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14003C35C (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x14003C41C (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x14003C5EC (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14003C74C (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
