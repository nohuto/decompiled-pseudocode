/*
 * XREFs of KeStartProfile @ 0x1401C7CFC
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1404B8278 (EtwpEnableKernelTrace.c)
 *     NtStartProfile @ 0x1406758E4 (NtStartProfile.c)
 *     KiInitializeCacheErrataSupport @ 0x1407849C4 (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     KeIpiGenericCall @ 0x14012568C (KeIpiGenericCall.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiStartProfileTarget @ 0x1401C8114 (KiStartProfileTarget.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
