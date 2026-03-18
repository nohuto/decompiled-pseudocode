/*
 * XREFs of PiDcInit @ 0x14079D9B0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400C3F7C (RtlInitializeGenericTableAvl.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404DF7C0 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcInitUpdateProperties @ 0x1405777B8 (PiDcInitUpdateProperties.c)
 */

__int64 __fastcall PiDcInit(int a1)
{
  int inited; // ebx

  inited = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      inited = PiDcInitUpdateProperties();
      if ( inited >= 0 )
        return (unsigned int)PiDcGenerateConfigNotificationIfContainerRequiresConfiguration((__int64)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
    }
  }
  else
  {
    RtlInitializeGenericTableAvl(
      &PiDcUpdateProperties,
      (PRTL_AVL_COMPARE_ROUTINE)PiDcCompareDevPropKeys,
      (PRTL_AVL_ALLOCATE_ROUTINE)PiDcAllocateGenericTableEntry,
      (PRTL_AVL_FREE_ROUTINE)PiDcFreeGenericTableEntry,
      0LL);
  }
  return (unsigned int)inited;
}
