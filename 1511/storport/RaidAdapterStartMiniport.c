/*
 * XREFs of RaidAdapterStartMiniport @ 0x1C0012798
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0011F28 (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00068A8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C0006A2C (RaidAdapterAcquireInterruptLock.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0012908 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C00129A0 (RaidInitializePerfOptsPassive.c)
 *     RaCallMiniportHwInitialize @ 0x1C0012A38 (RaCallMiniportHwInitialize.c)
 *     RaidPreInitializePerfOpts @ 0x1C0012A68 (RaidPreInitializePerfOpts.c)
 *     RaidAdapterConnectInterrupt @ 0x1C0012B84 (RaidAdapterConnectInterrupt.c)
 *     RaCallMiniportFindAdapter @ 0x1C0012FA0 (RaCallMiniportFindAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015B60 (_guard_dispatch_icall_nop.c)
 *     RaInitializeMiniport @ 0x1C0053C94 (RaInitializeMiniport.c)
 */

__int64 __fastcall RaidAdapterStartMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // ecx
  bool v8; // zf
  int v9; // eax
  KIRQL v10; // si
  int v11; // edi
  unsigned __int8 (__fastcall *v12)(__int64); // rax
  char v13; // al
  KIRQL v14; // [rsp+30h] [rbp-28h]

  if ( !a2 )
    return 3221225486LL;
  v4 = a1 + 296;
  result = RaInitializeMiniport(a1 + 296, a2, a3, a1 + 280);
  if ( (int)result < 0 )
    return result;
  v6 = *(_QWORD *)(a1 + 2080);
  *(_BYTE *)(a1 + 4450) = 1;
  result = RaCallMiniportFindAdapter(v4, v6);
  *(_BYTE *)(a1 + 109) |= 0x20u;
  if ( (int)result < 0 )
    return result;
  if ( !*(_DWORD *)(a1 + 744) )
  {
    v13 = *(_BYTE *)(a1 + 448);
    if ( v13 == 2 )
    {
      if ( *(_QWORD *)(a1 + 4368) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4368) = -1LL;
      *(_QWORD *)(a1 + 4384) = 0x100000000LL;
    }
    else
    {
      if ( (unsigned __int8)(v13 - 3) > 1u )
        goto LABEL_5;
      if ( *(_QWORD *)(a1 + 4368) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4368) = -1LL;
      *(_QWORD *)(a1 + 4384) = 0LL;
    }
    *(_QWORD *)(a1 + 4400) = -1LL;
  }
LABEL_5:
  v7 = *(_DWORD *)(a1 + 452);
  v8 = *(_BYTE *)(a1 + 500) == 0;
  *(_DWORD *)(a1 + 688) = v7;
  *(_BYTE *)(a1 + 4450) = v8;
  if ( !v8 )
  {
    v10 = v14;
LABEL_13:
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v11 = RaCallMiniportHwInitialize(v4);
    if ( v11 >= 0 )
      *(_BYTE *)(a1 + 104) |= 1u;
    if ( *(_BYTE *)(a1 + 4450) )
      RaidAdapterReleaseInterruptLock(a1, v10);
    if ( v11 >= 0 )
    {
      v12 = *(unsigned __int8 (__fastcall **)(__int64))(a1 + 4408);
      if ( v12 )
      {
        if ( v12(*(_QWORD *)(a1 + 536) + 16LL) )
        {
LABEL_20:
          *(_BYTE *)(a1 + 104) &= ~0x10u;
          RaidInitializePerfOptsPassive(a1);
          return InitializeBusesWithVmLunsBitmap(a1);
        }
        v11 = -1073741823;
      }
      if ( v11 >= 0 )
        goto LABEL_20;
    }
    return (unsigned int)v11;
  }
  v9 = *(_DWORD *)(a1 + 464);
  *(_BYTE *)(a1 + 107) = 0;
  *(_DWORD *)(a1 + 4416) = v9;
  if ( v9 )
  {
    *(_BYTE *)(a1 + 4448) = 1;
    if ( !v7 )
      v9 = 1;
    *(_DWORD *)(a1 + 4416) = v9;
  }
  result = RaidAdapterConnectInterrupt(a1);
  if ( (int)result >= 0 )
  {
    result = RaidPreInitializePerfOpts(a1);
    if ( (int)result >= 0 )
    {
      v10 = RaidAdapterAcquireInterruptLock(a1);
      *(_BYTE *)(a1 + 107) = 1;
      goto LABEL_13;
    }
  }
  return result;
}
