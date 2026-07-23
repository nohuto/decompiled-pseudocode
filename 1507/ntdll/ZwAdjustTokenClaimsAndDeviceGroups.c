/*
 * XREFs of ZwAdjustTokenClaimsAndDeviceGroups @ 0x180093FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAdjustTokenClaimsAndDeviceGroups(
        HANDLE TokenHandle,
        BOOLEAN UserResetToDefault,
        BOOLEAN DeviceResetToDefault,
        BOOLEAN DeviceGroupsResetToDefault,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION NewUserState,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION NewDeviceState,
        PTOKEN_GROUPS NewDeviceGroupsState,
        ULONG UserBufferLength,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION PreviousUserState,
        ULONG DeviceBufferLength,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION PreviousDeviceState,
        ULONG DeviceGroupsBufferLength,
        PTOKEN_GROUPS PreviousDeviceGroups,
        PULONG UserReturnLength,
        PULONG DeviceReturnLength,
        PULONG DeviceGroupsReturnBufferLength)
{
  NTSTATUS result; // eax

  result = 107;
  __asm { syscall; Low latency system call }
  return result;
}
