/*
 * XREFs of IopRevokeFileObjectForProcess @ 0x1401CA16C
 * Callers:
 *     IopCheckHandleForRevocation @ 0x1401C9E9C (IopCheckHandleForRevocation.c)
 * Callees:
 *     IopSetFileObjectExtensionFlag @ 0x140079F70 (IopSetFileObjectExtensionFlag.c)
 *     IopCancelIrpsInFileObjectList @ 0x1400A1CF8 (IopCancelIrpsInFileObjectList.c)
 */

__int64 __fastcall IopRevokeFileObjectForProcess(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  LOBYTE(a3) = 1;
  if ( (unsigned int)IopSetFileObjectExtensionFlag(a1, 4, a3, a4) == -1073741670 )
    *(_QWORD *)(a1 + 208) = IopRevocationExtension;
  IopCancelIrpsInFileObjectList(a1, a2, 0, 0, 0, 0);
  return IopCancelIrpsInThreadListForCurrentProcess(a1, 0LL);
}
