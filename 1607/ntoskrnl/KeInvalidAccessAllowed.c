/*
 * XREFs of KeInvalidAccessAllowed @ 0x1400A542C
 * Callers:
 *     MiSystemFault @ 0x14001BFF0 (MiSystemFault.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiAllowGuardFault @ 0x1400A53D8 (MiAllowGuardFault.c)
 *     MiValidFault @ 0x1400E6250 (MiValidFault.c)
 *     MiResolveMappedFileFault @ 0x1400E68A0 (MiResolveMappedFileFault.c)
 *     MiRaisedIrqlFault @ 0x1401EFAC0 (MiRaisedIrqlFault.c)
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
