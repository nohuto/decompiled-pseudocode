/*
 * XREFs of MiChargePartitionResidentAvailable @ 0x1400E30F8
 * Callers:
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiObtainFaultCharges @ 0x1400634F0 (MiObtainFaultCharges.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiProbeLockFrame @ 0x1400A7C30 (MiProbeLockFrame.c)
 *     MiLockPageTablePage @ 0x1400A81C0 (MiLockPageTablePage.c)
 *     MiChargeResident @ 0x1400AA260 (MiChargeResident.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiChargePartitionResidentAvailable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  signed __int64 v5; // r11
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  signed __int64 v8; // r11
  unsigned int v9; // r10d
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int CachedResidentAvailable; // eax
  unsigned __int64 v13; // rcx
  __int64 *v14; // rcx
  __int64 v15; // rdi
  unsigned __int32 v16; // eax
  unsigned __int64 v17; // r8

  if ( a2 + a3 >= a2 || a3 == 0xFFFFFFFFLL )
  {
    v5 = *(_QWORD *)(a1 + 5952);
    v6 = 0LL;
    if ( v5 < 1024 && (int *)a1 == MiSystemPartition )
    {
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v14 = KiProcessorBlock;
        v15 = (unsigned int)KeNumberProcessors_0;
        do
        {
          if ( *(_DWORD *)(*v14 + 24516) != -1 )
          {
            v16 = _InterlockedExchange((volatile __int32 *)(*v14 + 24516), -1);
            if ( v16 != -1 )
              v6 += v16;
          }
          ++v14;
          --v15;
        }
        while ( v15 );
      }
      if ( v6 >= a2 )
      {
        v17 = v6 - a2;
        if ( v17 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), v17);
        return 3LL;
      }
      a2 -= v6;
    }
    if ( v5 <= 0 )
    {
LABEL_35:
      if ( a3 != 0xFFFFFFFFLL )
      {
LABEL_36:
        ++dword_1402FED70;
        if ( (MiAllocationDebug & 2) != 0 )
          __debugbreak();
        if ( v6 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), v6);
        return 0LL;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5952), -(__int64)a2);
      return 3LL;
    }
    while ( 1 )
    {
      if ( a2 + a3 > v5 && a3 != 0xFFFFFFFFLL )
        goto LABEL_36;
      v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5952), v5 - a2, v5);
      if ( v5 == v7 )
        break;
      v5 = v7;
      if ( v7 <= 0 )
        goto LABEL_35;
    }
    v8 = v5 - a2;
    v9 = (v8 < 1024) + 2;
    if ( (int *)a1 == MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable == -1 )
      {
        if ( v8 < 2048 )
          return v9;
        _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable, 0, -1);
        CachedResidentAvailable = 0;
      }
      else if ( CachedResidentAvailable >= 0x40 )
      {
        return v9;
      }
      if ( v8 > 1024 )
      {
        v13 = 128 - CachedResidentAvailable;
        if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5952), v8 - v13, v8) )
          MiReturnResidentAvailable(v13);
      }
    }
    return v9;
  }
  ++dword_1402FED6C;
  if ( (MiAllocationDebug & 2) != 0 )
    __debugbreak();
  return 0LL;
}
