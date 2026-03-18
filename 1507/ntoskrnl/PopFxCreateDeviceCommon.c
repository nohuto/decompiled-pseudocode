/*
 * XREFs of PopFxCreateDeviceCommon @ 0x140166F8C
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x140243010 (PopFxAcpiRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 * Callees:
 *     IoInitializeRemoveLockEx @ 0x140158C94 (IoInitializeRemoveLockEx.c)
 *     PopFxDuplicateUniqueId @ 0x14016711C (PopFxDuplicateUniqueId.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PopFxCreateDeviceCommon(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  int v6; // edi
  char *PoolWithTag; // rax
  char *v8; // rbx
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF

  P[0] = 0LL;
  P[1] = 0LL;
  v6 = PopFxDuplicateUniqueId(a1, P);
  if ( v6 >= 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x278uLL, 0x4D584650u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x278uLL);
      *((_OWORD *)v8 + 12) = *(_OWORD *)P;
      *((_QWORD *)v8 + 1) = v8;
      *(_QWORD *)v8 = v8;
      *((_QWORD *)v8 + 23) = v8 + 176;
      *((_QWORD *)v8 + 22) = v8 + 176;
      *((_WORD *)v8 + 268) = 0;
      v8[538] = 6;
      *((_DWORD *)v8 + 135) = 1;
      *((_QWORD *)v8 + 69) = v8 + 544;
      *((_QWORD *)v8 + 68) = v8 + 544;
      *((_QWORD *)v8 + 41) = 0LL;
      *((_QWORD *)v8 + 42) = 0LL;
      v8[336] = 9;
      *((_QWORD *)v8 + 44) = v8 + 344;
      *((_QWORD *)v8 + 43) = v8 + 344;
      *((_QWORD *)v8 + 45) = 0LL;
      *((_QWORD *)v8 + 49) = 0LL;
      *((_QWORD *)v8 + 53) = PopFxIdleTimeoutDpcRoutine;
      *((_DWORD *)v8 + 100) = 275;
      *((_QWORD *)v8 + 54) = v8;
      *((_QWORD *)v8 + 57) = 0LL;
      *((_QWORD *)v8 + 52) = 0LL;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 208), 0x4D584650u, 0, 0, 0x20u);
      *((_QWORD *)v8 + 37) = v8;
      *((_QWORD *)v8 + 36) = PopFxDeviceWork;
      *((_QWORD *)v8 + 34) = 0LL;
      IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 240), 0x4D584650u, 0, 0, 0x20u);
      *((_DWORD *)v8 + 154) = a4;
      *a5 = v8;
      return (unsigned int)v6;
    }
    v6 = -1073741670;
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x4D584650u);
  return (unsigned int)v6;
}
