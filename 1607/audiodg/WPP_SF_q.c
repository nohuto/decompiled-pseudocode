/*
 * XREFs of WPP_SF_q @ 0x14002B2DC
 * Callers:
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x140006120 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140008F20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000A200 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000AD40 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ??1CPipeInstance@@QEAA@XZ @ 0x14000B620 (--1CPipeInstance@@QEAA@XZ.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140012174 (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140012620 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140013520 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x14001518C (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x14001521C (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z @ 0x14002AC30 (-GetFrequencyForOffload@CSystemAudioDeviceSharedBase@@UEAAJPEA_K@Z.c)
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14002D8E0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 *     ?GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z @ 0x14002F690 (-GetFrequencyForOffload@CAudioDeviceGraph@@UEAAJPEA_K@Z.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x140032A50 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x140032B14 (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140032CEC (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x140032E54 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 *     ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140036C00 (-IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
