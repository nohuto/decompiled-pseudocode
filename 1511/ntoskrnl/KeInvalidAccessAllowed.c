/*
 * XREFs of KeInvalidAccessAllowed @ 0x1400E5FF0
 * Callers:
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiValidFault @ 0x140070910 (MiValidFault.c)
 *     MiResolveMappedFileFault @ 0x1400AA7A0 (MiResolveMappedFileFault.c)
 *     MiAllowGuardFault @ 0x1400E5F90 (MiAllowGuardFault.c)
 *     MiRaisedIrqlFault @ 0x140116C70 (MiRaisedIrqlFault.c)
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
