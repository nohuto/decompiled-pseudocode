/*
 * XREFs of PsReleaseSiloHardReference @ 0x14020F458
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1400990A0 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x1400A30E0 (IopCloseFileObjectExtension.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14046A30C (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x14020F480 (PspHardDereferenceSiloWorker.c)
 */

LONG_PTR __fastcall PsReleaseSiloHardReference(PVOID Object)
{
  LONG_PTR result; // rax

  if ( Object )
  {
    PspHardDereferenceSiloWorker();
    return ObfDereferenceObjectWithTag(Object, 0x486C6953u);
  }
  return result;
}
