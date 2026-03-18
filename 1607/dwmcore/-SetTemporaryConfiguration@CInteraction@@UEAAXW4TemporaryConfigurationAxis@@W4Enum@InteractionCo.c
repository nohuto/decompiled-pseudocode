/*
 * XREFs of ?SetTemporaryConfiguration@CInteraction@@UEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1801457A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x18016F548 (-SetTemporaryConfiguration@CInteractionProcessor@@QEAAXW4TemporaryConfigurationAxis@@W4Enum@Inte.c)
 */

__int64 __fastcall CInteraction::SetTemporaryConfiguration(int a1, int a2, int a3, int a4, int a5)
{
  return CInteractionProcessor::SetTemporaryConfiguration(a1 + 408, a2, a3, a4, a5);
}
