/*
 * XREFs of IopFileObjectRevoked @ 0x1400D16F0
 * Callers:
 *     IopReferenceFileObject @ 0x14007B630 (IopReferenceFileObject.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 * Callees:
 *     IopIsProcessAppContainer @ 0x1400B2774 (IopIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
