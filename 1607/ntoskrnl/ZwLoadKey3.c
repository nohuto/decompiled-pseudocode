/*
 * XREFs of ZwLoadKey3 @ 0x14015DA30
 * Callers:
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKey3(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        PCM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TargetKey);
}
