/*
 * XREFs of KeInvalidAccessAllowed @ 0x1400A39A4
 * Callers:
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiAllowGuardFault @ 0x1400A3950 (MiAllowGuardFault.c)
 *     MiValidFault @ 0x1400E40F0 (MiValidFault.c)
 *     MiResolveMappedFileFault @ 0x1400E4740 (MiResolveMappedFileFault.c)
 *     MiRaisedIrqlFault @ 0x1401EF8EC (MiRaisedIrqlFault.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeInvalidAccessAllowed(__int64 a1)
{
  int v1; // eax
  void *v2; // rdx

  if ( a1 )
  {
    v1 = *(unsigned __int16 *)(a1 + 368);
    if ( v1 == 16 )
    {
      v2 = &ExpInterlockedPopEntrySListFault;
      return *(_QWORD *)(a1 + 360) == (_QWORD)v2;
    }
    if ( v1 == 51 )
    {
      v2 = (void *)KeUserPopEntrySListFault;
      return *(_QWORD *)(a1 + 360) == (_QWORD)v2;
    }
  }
  return 0;
}
