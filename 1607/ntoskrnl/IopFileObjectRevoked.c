/*
 * XREFs of IopFileObjectRevoked @ 0x1400CF590
 * Callers:
 *     IopReferenceFileObject @ 0x14007B6B0 (IopReferenceFileObject.c)
 *     BuildQueryDirectoryIrp @ 0x1404F0410 (BuildQueryDirectoryIrp.c)
 * Callees:
 *     IopIsProcessAppContainer @ 0x1400B06B4 (IopIsProcessAppContainer.c)
 */

bool __fastcall IopFileObjectRevoked(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 208);
  return v1 && (*v1 & 4) != 0 && IopIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
}
