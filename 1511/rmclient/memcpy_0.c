/*
 * XREFs of memcpy_0 @ 0x1800095E0
 * Callers:
 *     RmpClientWnfSubscriptionWorker @ 0x180001130 (RmpClientWnfSubscriptionWorker.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x180006030 (QueryTransientObjectSecurityDescriptor.c)
 *     ?LocalStringToRpcString@Internal@ExecutionModel@@YAJQEBGPEAPEAG@Z @ 0x180011A94 (-LocalStringToRpcString@Internal@ExecutionModel@@YAJQEBGPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memcpy_0(void *a1, const void *Src, size_t Size)
{
  return memcpy(a1, Src, Size);
}
