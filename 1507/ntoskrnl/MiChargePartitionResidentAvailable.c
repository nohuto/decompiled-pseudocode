/*
 * XREFs of MiChargePartitionResidentAvailable @ 0x14011A304
 * Callers:
 *     MiProbeLockFrame @ 0x140034AC0 (MiProbeLockFrame.c)
 *     MiLockPageTablePage @ 0x140035180 (MiLockPageTablePage.c)
 *     MiChargeResident @ 0x14003C6D0 (MiChargeResident.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x14008F350 (MiObtainFaultCharges.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiChargePartitionResidentAvailable(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  signed __int64 v5; // r10
  unsigned __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rdi
  unsigned __int32 v9; // eax
  unsigned __int64 v10; // r8
  __int64 v12; // rax
  signed __int64 v13; // r10
  unsigned int v14; // ebx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int CachedResidentAvailable; // eax
  unsigned __int64 v17; // rcx

  if ( a2 + a3 >= a2 || a3 == 0xFFFFFFFFLL )
  {
    v5 = *(_QWORD *)(a1 + 5568);
    v6 = 0LL;
    if ( (__int16 *)a1 == MiSystemPartition && v5 < 1024 )
    {
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v7 = KiProcessorBlock;
        v8 = (unsigned int)KeNumberProcessors_0;
        do
        {
          if ( *(_DWORD *)(*v7 + 24516) != -1 )
          {
            v9 = _InterlockedExchange((volatile __int32 *)(*v7 + 24516), -1);
            if ( v9 != -1 )
              v6 += v9;
          }
          ++v7;
          --v8;
        }
        while ( v8 );
      }
      if ( v6 >= a2 )
      {
        v10 = v6 - a2;
        if ( v10 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), v10);
        return 3LL;
      }
      a2 -= v6;
    }
    if ( v5 > 0 )
    {
      while ( 1 )
      {
        if ( a2 + a3 > v5 && a3 != 0xFFFFFFFFLL )
          goto LABEL_32;
        v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5568), v5 - a2, v5);
        if ( v5 == v12 )
          break;
        v5 = v12;
        if ( v12 <= 0 )
          goto LABEL_21;
      }
      v13 = v5 - a2;
      v14 = (v13 < 1024) + 2;
      if ( (__int16 *)a1 != MiSystemPartition )
        return v14;
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      if ( CachedResidentAvailable == -1 )
      {
        if ( v13 < 2048 )
          return v14;
        _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable, 0, -1);
        CachedResidentAvailable = 0;
      }
      else if ( CachedResidentAvailable >= 0x40 )
      {
        return v14;
      }
      if ( v13 > 1024 )
      {
        v17 = 128 - CachedResidentAvailable;
        if ( v13 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 5568), v13 - v17, v13) )
          MiReturnResidentAvailable(v17);
      }
      return v14;
    }
LABEL_21:
    if ( a3 == 0xFFFFFFFFLL )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), -(__int64)a2);
      return 3LL;
    }
LABEL_32:
    if ( v6 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5568), v6);
  }
  return 0LL;
}
