/*
 * XREFs of VidSchiCompleteSignalCommmand @ 0x1C000E044
 * Callers:
 *     VidSchiSubmitSignalCommand @ 0x1C000E1C0 (VidSchiSubmitSignalCommand.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0021790 (-VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000AA90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000D0F4 (VidSchiReleaseSyncObjectReference.c)
 */

void __fastcall VidSchiCompleteSignalCommmand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  unsigned int v7; // edi
  char v8; // bp
  _QWORD *v9; // r14
  unsigned int i; // esi
  __int64 v11; // rcx

  v4 = *(_QWORD *)(a1 + 88);
  v6 = *(_QWORD *)(a1 + 784);
  v7 = 0;
  v8 = a2;
  v9 = *(_QWORD **)(v4 + 104);
  if ( v6 )
  {
    *(_QWORD *)(v6 + 792) = *(_QWORD *)(a1 + 792);
  }
  else if ( !*(_QWORD *)(a1 + 792) )
  {
    if ( (*(_DWORD *)(a1 + 264) & 2) != 0 )
    {
      KeSetEvent(*(PRKEVENT *)(a1 + 528), 0, 0);
      ObfDereferenceObject(*(PVOID *)(a1 + 528));
      *(_QWORD *)(a1 + 528) = 0LL;
    }
    else
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 268); ++i )
      {
        LOBYTE(a4) = v8;
        VidSchiCompleteSignalSyncObject(*(_QWORD *)(a1 + 8LL * i + 272), a2, (_QWORD *)(a1 + 528 + 8LL * i), a4);
      }
    }
    goto LABEL_6;
  }
  v11 = *(_QWORD *)(a1 + 792);
  if ( v11 )
    *(_QWORD *)(v11 + 784) = *(_QWORD *)(a1 + 784);
  *(_QWORD *)(a1 + 784) = 0LL;
  *(_QWORD *)(a1 + 792) = 0LL;
LABEL_6:
  *(_DWORD *)(a1 + 80) |= 4u;
  if ( (*(_DWORD *)(a1 + 264) & 2) == 0 && *(_DWORD *)(a1 + 268) )
  {
    do
      VidSchiReleaseSyncObjectReference(*(_QWORD *)(a1 + 8LL * v7++ + 272));
    while ( v7 < *(_DWORD *)(a1 + 268) );
  }
  VidSchiCheckPendingDeviceCommand(v9);
}
