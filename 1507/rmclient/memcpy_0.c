/*
 * XREFs of memcpy_0 @ 0x180008DEC
 * Callers:
 *     QueryTransientObjectSecurityDescriptor @ 0x180001850 (QueryTransientObjectSecurityDescriptor.c)
 *     ?DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConfig@@@Z @ 0x180007FE0 (-DeepCopyGameConfigToRpcGameConfig@Internal@ExecutionModel@@YAJPEBUGameConfig@2@PEAU_RpcGameConf.c)
 *     RmpClientWnfSubscriptionWorker @ 0x18000E880 (RmpClientWnfSubscriptionWorker.c)
 *     ?LocalStringToRpcString@Internal@ExecutionModel@@YAJQEBGPEAPEAG@Z @ 0x180010CCC (-LocalStringToRpcString@Internal@ExecutionModel@@YAJQEBGPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
