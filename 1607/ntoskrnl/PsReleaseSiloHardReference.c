/*
 * XREFs of PsReleaseSiloHardReference @ 0x14020F62C
 * Callers:
 *     IopDeleteFileObjectExtension @ 0x1400998A0 (IopDeleteFileObjectExtension.c)
 *     IopCloseFileObjectExtension @ 0x1400A49D4 (IopCloseFileObjectExtension.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14046B43C (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PspHardDereferenceSiloWorker @ 0x14020F654 (PspHardDereferenceSiloWorker.c)
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
