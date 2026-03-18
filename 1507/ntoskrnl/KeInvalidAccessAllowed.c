/*
 * XREFs of KeInvalidAccessAllowed @ 0x140111530
 * Callers:
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiResolveMappedFileFault @ 0x14005D550 (MiResolveMappedFileFault.c)
 *     MiSystemFault @ 0x14007DA70 (MiSystemFault.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiResolveProtoPteFault @ 0x1400C5730 (MiResolveProtoPteFault.c)
 *     MiAllowGuardFault @ 0x1401114C4 (MiAllowGuardFault.c)
 *     MiRaisedIrqlFault @ 0x140223EF8 (MiRaisedIrqlFault.c)
 * Callees:
 *     <none>
 */

char __fastcall KeInvalidAccessAllowed(__int64 a1)
{
  char result; // al
  int v2; // edx
  void *v3; // rdx

  result = 0;
  if ( a1 )
  {
    v2 = *(unsigned __int16 *)(a1 + 368);
    switch ( v2 )
    {
      case 51:
        v3 = (void *)KeUserPopEntrySListFault;
        break;
      case 16:
        v3 = &ExpInterlockedPopEntrySListFault;
        break;
      case 35:
        v3 = (void *)KeUserPopEntrySListFaultWow64;
        break;
      default:
        return 0;
    }
    if ( *(void **)(a1 + 360) == v3 )
      return 1;
  }
  return result;
}
