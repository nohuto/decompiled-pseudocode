/*
 * XREFs of VidSchiCompleteSignalCommmand @ 0x1C000E84C
 * Callers:
 *     VidSchiSubmitSignalCommand @ 0x1C000EA90 (VidSchiSubmitSignalCommand.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C001EF3C (-VidSchiProcessCrossAdapterSignaledSyncObjects@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 * Callees:
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BE90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C000DF2C (VidSchiReleaseSyncObjectReference.c)
 */

__int64 __fastcall VidSchiCompleteSignalCommmand(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  unsigned int v5; // edi
  char v6; // bp
  __int64 v7; // r14
  unsigned int i; // esi
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 80);
  v4 = *(_QWORD *)(a1 + 776);
  v5 = 0;
  v6 = a2;
  v7 = *(_QWORD *)(v2 + 104);
  if ( v4 )
  {
    *(_QWORD *)(v4 + 784) = *(_QWORD *)(a1 + 784);
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
        VidSchiCompleteSignalSyncObject(*(_QWORD *)(a1 + 8LL * i + 264), a2, (_QWORD *)(a1 + 520 + 8LL * i), v6);
    }
    goto LABEL_6;
  }
  v10 = *(_QWORD *)(a1 + 784);
  if ( v10 )
    *(_QWORD *)(v10 + 776) = *(_QWORD *)(a1 + 776);
  *(_QWORD *)(a1 + 776) = 0LL;
  *(_QWORD *)(a1 + 784) = 0LL;
LABEL_6:
  *(_DWORD *)(a1 + 76) |= 4u;
  if ( (*(_DWORD *)(a1 + 256) & 2) == 0 && *(_DWORD *)(a1 + 260) )
  {
    do
      VidSchiReleaseSyncObjectReference(*(_QWORD *)(a1 + 8LL * v5++ + 264));
    while ( v5 < *(_DWORD *)(a1 + 260) );
  }
  return VidSchiCheckPendingDeviceCommand(v7);
}
