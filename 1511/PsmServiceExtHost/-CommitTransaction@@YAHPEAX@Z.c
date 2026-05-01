/*
 * XREFs of ?CommitTransaction@@YAHPEAX@Z @ 0x18004B818
 * Callers:
 *     ?RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z @ 0x18004A598 (-RemoveFromPermanentStore@Internal@ExecutionModel@@YAJPEBGAEAVRegistryKey@Common@@10@Z.c)
 *     ?SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConfig@2@_N@Z @ 0x18004AB30 (-SerializeToPermanentStore@Internal@ExecutionModel@@YAJAEAVRegistryKey@Common@@0PEBGPEBUGameConf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CommitTransaction(void *a1, __int64 a2)
{
  NTSTATUS v2; // eax
  DWORD v3; // eax

  LOBYTE(a2) = 1;
  v2 = NtCommitTransaction(a1, a2);
  if ( v2 >= 0 )
    return 1LL;
  v3 = RtlNtStatusToDosError(v2);
  SetLastError(v3);
  return 0LL;
}
