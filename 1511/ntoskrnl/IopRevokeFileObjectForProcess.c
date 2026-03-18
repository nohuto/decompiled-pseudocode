/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x1401BC334
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1401BC064 (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x1400CC2B8 (IopSetFileObjectExtensionFlag.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400CC5B4 (IopCancelIrpsInFileObjectList.c)
 */

__int64 __fastcall IopRevokeFileObjectForProcess(__int64 a1, int a2)
{
  if ( (unsigned int)IopSetFileObjectExtensionFlag(a1, 4, 1) == -1073741670 )
    *(_QWORD *)(a1 + 208) = IopRevocationExtension;
  IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 0, 0);
  return IopCancelIrpsInThreadListForCurrentProcess(a1, 0LL);
}
