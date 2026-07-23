/*
 * XREFs of HvlWheaInUsePageOfflineNotificationCallback @ 0x1401BAC10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall HvlWheaInUsePageOfflineNotificationCallback(
        PFN_NUMBER Page,
        BOOLEAN PlatformDirected,
        BOOLEAN Poisoned,
        PVOID Context)
{
  char v4; // bl
  struct _WHEA_RECOVERY_CONTEXT v6; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  if ( !Poisoned )
  {
    v6.MemoryError.Address = Page << 12;
    v6.PartitionId = 0LL;
    v6.VpIndex = 0;
    v6.MemoryError.Consumed = 0;
    *(_DWORD *)&v6.MemoryError.ErrorCode = 0x1000000;
    return HvlpWheaErrorNotificationCallback(&v6, PlatformDirected, 0) >= 0;
  }
  return v4;
}
