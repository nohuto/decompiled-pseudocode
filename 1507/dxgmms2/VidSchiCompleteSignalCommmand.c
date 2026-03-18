/*
 * XREFs of VidSchiCompleteSignalCommmand @ 0x1C00019A0
 * Callers:
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C0002690 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0003470 (VidSchiSubmitSignalCommand.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0012C90 (-VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C00058B4 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0005914 (VidSchiCompleteSignalSyncObject.c)
 */

__int64 __fastcall VidSchiCompleteSignalCommmand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  char v8; // bp
  __int64 v9; // r14
  unsigned int i; // esi
  __int64 v12; // rcx

  v4 = *(_QWORD *)(a1 + 80);
  v6 = *(_QWORD *)(a1 + 776);
  v7 = 0;
  v8 = a2;
  v9 = *(_QWORD *)(v4 + 104);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 784) = *(_QWORD *)(a1 + 784);
  }
  else if ( !*(_QWORD *)(a1 + 784) )
  {
    if ( (*(_DWORD *)(a1 + 256) & 2) != 0 )
    {
      KeSetEvent(*(PRKEVENT *)(a1 + 520), 0, 0);
      ObfDereferenceObject(*(PVOID *)(a1 + 520));
      *(_QWORD *)(a1 + 520) = 0LL;
    }
    else
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 260); ++i )
      {
        LOBYTE(a4) = v8;
        VidSchiCompleteSignalSyncObject(*(_QWORD *)(a1 + 8LL * i + 264), a2, a1 + 520 + 8LL * i, a4);
      }
    }
    goto LABEL_6;
  }
  v12 = *(_QWORD *)(a1 + 784);
  if ( v12 )
    *(_QWORD *)(v12 + 776) = *(_QWORD *)(a1 + 776);
  *(_QWORD *)(a1 + 776) = 0LL;
  *(_QWORD *)(a1 + 784) = 0LL;
LABEL_6:
  *(_DWORD *)(a1 + 76) |= 4u;
  if ( (*(_DWORD *)(a1 + 256) & 2) == 0 && *(_DWORD *)(a1 + 260) )
  {
    do
      VidSchiReleaseSyncObjectReference(*(_QWORD *)(a1 + 8LL * v7++ + 264));
    while ( v7 < *(_DWORD *)(a1 + 260) );
  }
  return VidSchiCheckPendingDeviceCommand(v9);
}
