/*
 * XREFs of ?Cleanup_PermanentStoreOperation@Internal@ExecutionModel@@YAXPEAX@Z @ 0x180048AFC
 * Callers:
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 * Callees:
 *     <none>
 */

void __fastcall ExecutionModel::Internal::Cleanup_PermanentStoreOperation(ExecutionModel::Internal *this, void *a2)
{
  NTSTATUS v2; // eax
  DWORD v3; // eax

  LOBYTE(a2) = 1;
  v2 = NtRollbackTransaction(this, a2);
  if ( v2 < 0 )
  {
    v3 = RtlNtStatusToDosError(v2);
    SetLastError(v3);
  }
}
