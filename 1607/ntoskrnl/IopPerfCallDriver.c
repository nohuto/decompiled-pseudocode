/*
 * XREFs of IopPerfCallDriver @ 0x1401CA708
 * Callers:
 *     IovCallDriver @ 0x140700AD4 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1407011F8 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x14070126C (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     IopAllocateIrpExtension @ 0x14008E634 (IopAllocateIrpExtension.c)
 *     IopfCallDriver @ 0x1400EBC60 (IopfCallDriver.c)
 *     ObfReferenceObjectWithTag @ 0x1400EE4F0 (ObfReferenceObjectWithTag.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1401CA5B8 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x1401CAB50 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1401CAC18 (IopPerfLogCallReturnEvent.c)
 */

__int64 __fastcall IopPerfCallDriver(PVOID Object, ULONG_PTR a2)
{
  _WORD *IrpExtension; // rcx
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebp

  if ( (IopPerfStatus & 2) != 0 )
  {
    if ( IopIrpHasValidCombinationOfExtensionTypes(a2, 1) )
    {
      IrpExtension = IopAllocateIrpExtension(a2, 1);
      if ( IrpExtension )
        *((_QWORD *)IrpExtension + 5) = MEMORY[0xFFFFF78000000014];
    }
  }
  if ( (IopPerfStatus & 1) != 0 )
  {
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v5 = _InterlockedIncrement(&IopPerfDriverUniqueMatchId);
    IopPerfLogCallEvent(*((_QWORD *)Object + 1), a2, v5);
    v6 = IopfCallDriver((__int64)Object, a2);
    IopPerfLogCallReturnEvent(a2, v5);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  else
  {
    return (unsigned int)IopfCallDriver((__int64)Object, a2);
  }
  return v6;
}
