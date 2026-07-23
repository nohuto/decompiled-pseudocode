/*
 * XREFs of LdrResolveDelayLoadsFromDll @ 0x1800C9A30
 * Callers:
 *     <none>
 * Callees:
 *     LdrpGetDelayloadDescriptor @ 0x1800C9A74 (LdrpGetDelayloadDescriptor.c)
 */

NTSTATUS __cdecl LdrResolveDelayLoadsFromDll(PVOID ParentModuleBase, PCSTR TargetDllName, ULONG Flags)
{
  const IMAGE_DELAYLOAD_DESCRIPTOR *DelayloadDescriptor; // rax

  if ( Flags )
    return -1073741811;
  DelayloadDescriptor = (const IMAGE_DELAYLOAD_DESCRIPTOR *)LdrpGetDelayloadDescriptor(ParentModuleBase, TargetDllName);
  if ( DelayloadDescriptor )
    return LdrpResolveDelayLoadDescriptor((char *)ParentModuleBase, DelayloadDescriptor);
  else
    return -1073741515;
}
