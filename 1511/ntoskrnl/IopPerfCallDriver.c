/*
 * XREFs of IopPerfCallDriver @ 0x1401BC6F0
 * Callers:
 *     IovCallDriver @ 0x1406B4C6C (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1406B5390 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1406B5404 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     IopfCallDriver @ 0x140077C84 (IopfCallDriver.c)
 *     IopAllocateIrpExtension @ 0x14010536C (IopAllocateIrpExtension.c)
 *     IopIrpHasValidCombinationOfExtensionTypes @ 0x1401BC5A0 (IopIrpHasValidCombinationOfExtensionTypes.c)
 *     IopPerfLogCallEvent @ 0x1401BCB38 (IopPerfLogCallEvent.c)
 *     IopPerfLogCallReturnEvent @ 0x1401BCC00 (IopPerfLogCallReturnEvent.c)
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
        *((_QWORD *)IrpExtension + 4) = MEMORY[0xFFFFF78000000014];
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
