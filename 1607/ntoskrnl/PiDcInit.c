/*
 * XREFs of PiDcInit @ 0x14079D9B0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x1400C1E1C (RtlInitializeGenericTableAvl.c)
 *     PiDcGenerateConfigNotificationIfContainerRequiresConfiguration @ 0x1404C2DC4 (PiDcGenerateConfigNotificationIfContainerRequiresConfiguration.c)
 *     PiDcInitUpdateProperties @ 0x140577CF8 (PiDcInitUpdateProperties.c)
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
        return (unsigned int)PiDcGenerateConfigNotificationIfContainerRequiresConfiguration((int)L"{00000000-0000-0000-FFFF-FFFFFFFFFFFF}");
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
