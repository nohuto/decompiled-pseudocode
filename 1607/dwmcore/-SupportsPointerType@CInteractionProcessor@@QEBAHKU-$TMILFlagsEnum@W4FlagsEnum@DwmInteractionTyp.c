/*
 * XREFs of ?SupportsPointerType@CInteractionProcessor@@QEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x18000DCD8
 * Callers:
 *     ?SupportsPointerType@CInteraction@@UEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x18000D9C0 (-SupportsPointerType@CInteraction@@UEBAHKU-$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePri.c)
 *     ?SupportsPointerType@CInteractionRoot@@UEBAHKU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x1801724B0 (-SupportsPointerType@CInteractionRoot@@UEBAHKU-$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMous.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousePrimitiveType@@@@W4SupportedTypeOption@@@Z @ 0x18000DCFC (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@U-$TMILFlagsEnum@W4FlagsEnum@DwmIn.c)
 *     _anonymous_namespace_::ConvertToInputType @ 0x18000DE7C (_anonymous_namespace_--ConvertToInputType.c)
 */

__int64 __fastcall CInteractionProcessor::SupportsPointerType(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  __int64 v3; // r10

  v2 = anonymous_namespace_::ConvertToInputType(a2);
  return CInteractionProcessor::SupportsPointerType(v3, v2);
}
