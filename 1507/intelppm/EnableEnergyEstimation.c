/*
 * XREFs of EnableEnergyEstimation @ 0x1C0021A5C
 * Callers:
 *     InitializeEnergyEstimation @ 0x1C0021C0C (InitializeEnergyEstimation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00025C0 (memset.c)
 */

__int64 __fastcall EnableEnergyEstimation(union _LARGE_INTEGER *a1)
{
  PVOID PoolWithTag; // rax
  int v3; // ebx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY Affinity; // [rsp+38h] [rbp-30h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+48h] [rbp-20h] BYREF

  KeQueryPerformanceCounter(&PerformanceFrequency);
  a1[40] = PerformanceFrequency;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x78uLL, 0x72637250u);
  a1[39].QuadPart = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x78uLL);
    if ( !dword_1C000DEC4
      || (v3 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, __int64))HalPrivateDispatchTable[72])(
                 a1[7].LowPart,
                 &unk_1C000DEC8,
                 (unsigned int)dword_1C000DEC4,
                 a1[39].QuadPart + 16),
          v3 >= 0) )
    {
      if ( !qword_1C000DB60 )
        return 0;
      KeProcessorGroupAffinity(&Affinity, a1[7].LowPart);
      KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
      v3 = ((__int64 (*)(void))qword_1C000DB60)();
      KeRevertToUserGroupAffinityThread(&PreviousAffinity);
      if ( v3 >= 0 )
        return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v3;
}
