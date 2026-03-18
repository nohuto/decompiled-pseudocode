/*
 * XREFs of KeStartProfile @ 0x140204D70
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14054A9EC (EtwpEnableKernelTrace.c)
 *     NtStartProfile @ 0x1406FA0A8 (NtStartProfile.c)
 *     KiInitializeCacheErrataSupport @ 0x1407FB13C (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140014408 (KeQueryMaximumProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x140156B40 (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiStartProfileTarget @ 0x1402050C0 (KiStartProfileTarget.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char __fastcall KeStartProfile(ULONG_PTR a1)
{
  SIZE_T v2; // rbx
  PVOID PoolWithTag; // rax
  ULONG_PTR Context[26]; // [rsp+20h] [rbp-89h] BYREF

  memset(Context, 0, 0xC8uLL);
  HIDWORD(Context[1]) = KeNumberProcessors_0;
  LODWORD(Context[1]) = KeNumberProcessors_0;
  Context[2] = 1310721LL;
  Context[0] = a1;
  memset(&Context[3], 0, 0xA0uLL);
  v2 = 4 * KeQueryMaximumProcessorCountEx(0xFFFFu) + 196;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x666F7250u);
  Context[23] = (ULONG_PTR)PoolWithTag;
  if ( !PoolWithTag )
    return 1;
  memset(PoolWithTag, 0, v2);
  if ( (unsigned int)KeNumberProcessors_0 <= 1 )
    KiStartProfileTarget((ULONG_PTR)Context);
  else
    KeIpiGenericCall(KiStartProfileTarget, (ULONG_PTR)Context);
  if ( Context[23] )
    ExFreePoolWithTag((PVOID)Context[23], 0x666F7250u);
  return Context[24];
}
