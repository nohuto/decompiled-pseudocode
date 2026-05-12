/*
 * XREFs of RaidAdapterStartMiniport @ 0x1C000802C
 * Callers:
 *     RaidAdapterStartDeviceIrp @ 0x1C0010300 (RaidAdapterStartDeviceIrp.c)
 * Callees:
 *     RaidAdapterReleaseInterruptLock @ 0x1C00057D8 (RaidAdapterReleaseInterruptLock.c)
 *     RaidAdapterAcquireInterruptLock @ 0x1C000595C (RaidAdapterAcquireInterruptLock.c)
 *     RaCallMiniportFindAdapter @ 0x1C0007E88 (RaCallMiniportFindAdapter.c)
 *     InitializeBusesWithVmLunsBitmap @ 0x1C0008198 (InitializeBusesWithVmLunsBitmap.c)
 *     RaidInitializePerfOptsPassive @ 0x1C0008230 (RaidInitializePerfOptsPassive.c)
 *     RaCallMiniportHwInitialize @ 0x1C00082C8 (RaCallMiniportHwInitialize.c)
 *     RaidPreInitializePerfOpts @ 0x1C00082F8 (RaidPreInitializePerfOpts.c)
 *     RaidAdapterConnectInterrupt @ 0x1C0008414 (RaidAdapterConnectInterrupt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012F80 (_guard_dispatch_icall_nop.c)
 *     RaInitializeMiniport @ 0x1C004CD14 (RaInitializeMiniport.c)
 */

__int64 __fastcall RaidAdapterStartMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  PVOID *v4; // rdi
  __int64 result; // rax
  unsigned int v6; // r8d
  __int64 v7; // r9
  const GUID *v8; // rdx
  int v9; // ecx
  bool v10; // zf
  int v11; // eax
  KIRQL v12; // si
  int v13; // edi
  unsigned __int8 (__fastcall *v14)(__int64); // rax
  char v15; // al
  KIRQL v16; // [rsp+30h] [rbp-28h]

  if ( !a2 )
    return 3221225486LL;
  v4 = (PVOID *)(a1 + 296);
  result = RaInitializeMiniport(a1 + 296, a2, a3, a1 + 280);
  if ( (int)result < 0 )
    return result;
  v8 = *(const GUID **)(a1 + 2080);
  *(_BYTE *)(a1 + 4450) = 1;
  result = RaCallMiniportFindAdapter(v4, v8, v6, v7);
  if ( (int)result < 0 )
    return result;
  if ( !*(_DWORD *)(a1 + 744) )
  {
    v15 = *(_BYTE *)(a1 + 448);
    if ( v15 == 2 )
    {
      if ( *(_QWORD *)(a1 + 4368) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4368) = -1LL;
      *(_QWORD *)(a1 + 4384) = 0x100000000LL;
    }
    else
    {
      if ( (unsigned __int8)(v15 - 3) > 1u )
        goto LABEL_5;
      if ( *(_QWORD *)(a1 + 4368) < 0x100000000uLL )
        *(_QWORD *)(a1 + 4368) = -1LL;
      *(_QWORD *)(a1 + 4384) = 0LL;
    }
    *(_QWORD *)(a1 + 4400) = -1LL;
  }
LABEL_5:
  v9 = *(_DWORD *)(a1 + 452);
  v10 = *(_BYTE *)(a1 + 500) == 0;
  *(_DWORD *)(a1 + 688) = v9;
  *(_BYTE *)(a1 + 4450) = v10;
  if ( !v10 )
  {
    v12 = v16;
LABEL_13:
    *(_BYTE *)(a1 + 104) |= 0x10u;
    v13 = RaCallMiniportHwInitialize(v4);
    if ( v13 >= 0 )
      *(_BYTE *)(a1 + 104) |= 1u;
    if ( *(_BYTE *)(a1 + 4450) )
      RaidAdapterReleaseInterruptLock(a1, v12);
    if ( v13 >= 0 )
    {
      v14 = *(unsigned __int8 (__fastcall **)(__int64))(a1 + 4408);
      if ( v14 )
      {
        if ( v14(*(_QWORD *)(a1 + 536) + 16LL) )
        {
LABEL_20:
          *(_BYTE *)(a1 + 104) &= ~0x10u;
          RaidInitializePerfOptsPassive(a1);
          return InitializeBusesWithVmLunsBitmap(a1);
        }
        v13 = -1073741823;
      }
      if ( v13 >= 0 )
        goto LABEL_20;
    }
    return (unsigned int)v13;
  }
  v11 = *(_DWORD *)(a1 + 464);
  *(_BYTE *)(a1 + 107) = 0;
  *(_DWORD *)(a1 + 4416) = v11;
  if ( v11 )
  {
    *(_BYTE *)(a1 + 4448) = 1;
    if ( !v9 )
      v11 = 1;
    *(_DWORD *)(a1 + 4416) = v11;
  }
  result = RaidAdapterConnectInterrupt(a1);
  if ( (int)result >= 0 )
  {
    result = RaidPreInitializePerfOpts(a1);
    if ( (int)result >= 0 )
    {
      v12 = RaidAdapterAcquireInterruptLock(a1);
      *(_BYTE *)(a1 + 107) = 1;
      goto LABEL_13;
    }
  }
  return result;
}
