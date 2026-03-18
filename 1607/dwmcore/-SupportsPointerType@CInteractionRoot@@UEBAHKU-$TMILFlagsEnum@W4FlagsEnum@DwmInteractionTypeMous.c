/*
 * XREFs of ?SupportsPointerType@CInteractionRoot@@UEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x1801724B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x18000DCD8 (-SupportsPointerType@CInteractionProcessor@@QEBAHKU-$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTyp.c)
 */

__int64 __fastcall CInteractionRoot::SupportsPointerType(__int64 a1, unsigned int a2)
{
  return CInteractionProcessor::SupportsPointerType(a1 + 32, a2);
}
