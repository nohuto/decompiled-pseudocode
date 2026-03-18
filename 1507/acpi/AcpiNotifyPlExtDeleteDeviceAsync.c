/*
 * XREFs of AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C003F9F0
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceSync @ 0x1C003FB0C (AcpiNotifyPlExtDeleteDeviceSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0023B40 (memset.c)
 *     AcpiCreateDiscoveryDeleteParameters @ 0x1C003F5F0 (AcpiCreateDiscoveryDeleteParameters.c)
 *     AcpiNotifyDiscoverDeleteMainCompletion @ 0x1C003F930 (AcpiNotifyDiscoverDeleteMainCompletion.c)
 */

__int64 __fastcall AcpiNotifyPlExtDeleteDeviceAsync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rdi
  int v10; // eax
  unsigned int *v11; // rsi
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  if ( qword_1C0059648 && (*((unsigned __int8 (**)(void))&xmmword_1C0059650 + 1))() )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x4E706341u);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x48uLL);
      v9[1] = v9;
      *v9 = v9;
      v9[4] = a2;
      v9[5] = AcpiInterpreterPausedSignalEventCallback;
      v9[6] = a4;
      v9[2] = a1;
      v10 = AcpiCreateDiscoveryDeleteParameters(v9, 0, &P);
      v11 = (unsigned int *)P;
      v7 = v10;
      if ( v10 >= 0 )
      {
        v7 = ((__int64 (__fastcall *)(PVOID))xmmword_1C0059650)(P);
        if ( v7 == 259 )
          return v7;
        AcpiNotifyDiscoverDeleteMainCompletion(v11);
        v7 = 259;
      }
      if ( v7 != 259 )
      {
        ExFreePoolWithTag(v9, 0x4E706341u);
        if ( v11 )
          ExFreePoolWithTag(v11, 0x4E706341u);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return v7;
}
