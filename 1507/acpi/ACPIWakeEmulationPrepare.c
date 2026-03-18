/*
 * XREFs of ACPIWakeEmulationPrepare @ 0x1C007FA20
 * Callers:
 *     ACPIDeviceInitializePowerRequest @ 0x1C000AE8C (ACPIDeviceInitializePowerRequest.c)
 * Callees:
 *     ACPICreateWakeInterruptRegistrationEntries @ 0x1C007F96C (ACPICreateWakeInterruptRegistrationEntries.c)
 */

__int64 __fastcall ACPIWakeEmulationPrepare(__int64 a1)
{
  __int64 v1; // rax
  void *v3; // rdi
  char v4; // bp
  _DWORD *v5; // rcx
  int v6; // ebx
  __int64 v7; // r15
  int v8; // eax
  PVOID PoolWithTag; // rax
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v3 = 0LL;
  v4 = 0;
  v5 = *(_DWORD **)(v1 + 624);
  if ( !v5 || *v5 != 1 )
    goto LABEL_13;
  if ( (*(_DWORD *)(v1 + 904) & 0x100000) == 0 )
    return 0;
  v7 = (__int64)(v5 + 3);
  v11 = 1;
  v3 = (void *)(a1 + 152);
  v8 = ACPICreateWakeInterruptRegistrationEntries((__int64)(v5 + 3), a1, a1 + 152, &v11);
  v6 = v8;
  if ( v8 >= 0 )
    goto LABEL_11;
  if ( v8 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 40 * v11, 0x50706341u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v4 = 1;
    v6 = ACPICreateWakeInterruptRegistrationEntries(v7, a1, (__int64)PoolWithTag, &v11);
  }
  if ( v6 >= 0 )
  {
LABEL_11:
    *(_DWORD *)(a1 + 116) = v11;
    if ( v4 )
      *(_QWORD *)(a1 + 152) = v3;
  }
  else
  {
LABEL_13:
    v6 = -1073741637;
    if ( v3 && v4 )
      ExFreePoolWithTag(v3, 0x50706341u);
  }
  return (unsigned int)v6;
}
