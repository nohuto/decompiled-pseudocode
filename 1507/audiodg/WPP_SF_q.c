/*
 * XREFs of WPP_SF_q @ 0x140027518
 * Callers:
 *     ?Cleanup@CPipeInstance@@AEAAXXZ @ 0x140005860 (-Cleanup@CPipeInstance@@AEAAXXZ.c)
 *     ?DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ @ 0x140005C20 (-DeactivateAPOsAndRemoveConnections@CPipeInstance@@QEAAXXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140007170 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x140007C90 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 *     ?StopStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E250 (-StopStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?StartStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z @ 0x14000E340 (-StartStreamGroup@CSystemAudioDeviceSharedNew@@UEAAJPEAUIStreamGroupInternal@@@Z.c)
 *     ?Cleanup@CAudioDeviceGraph@@AEAAXXZ @ 0x14000EDF8 (-Cleanup@CAudioDeviceGraph@@AEAAXXZ.c)
 *     ?PreMessageLoop@CAudioDGModule@@QEAAJH@Z @ 0x140014C0C (-PreMessageLoop@CAudioDGModule@@QEAAJH@Z.c)
 *     ?ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ @ 0x140015BC0 (-ProcessingComplete@CCrossProcessBaseServerEndpoint@@UEAAXXZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140016540 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTUnlockMemory@@YAJPEAX_K@Z @ 0x1400165B0 (-AERTUnlockMemory@@YAJPEAX_K@Z.c)
 *     ?AERTDestroyZoneHeap@@YAXPEAX@Z @ 0x140016640 (-AERTDestroyZoneHeap@@YAXPEAX@Z.c)
 *     ?AERTMemoryShutdown@@YAJXZ @ 0x140017CC4 (-AERTMemoryShutdown@@YAJXZ.c)
 *     ?AERTDestroyHeap@@YAXPEAX@Z @ 0x140017DDC (-AERTDestroyHeap@@YAXPEAX@Z.c)
 *     ?IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ @ 0x140037990 (-IsProperlyInitialized@CCrossProcessBaseServerEndpoint@@MEAAJXZ.c)
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14003CE24 (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     ?AERTUnlockZoneHeap@@YAJPEAX@Z @ 0x14003D004 (-AERTUnlockZoneHeap@@YAJPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_q(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
