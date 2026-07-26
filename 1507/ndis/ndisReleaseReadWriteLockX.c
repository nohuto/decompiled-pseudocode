/*
 * XREFs of ndisReleaseReadWriteLockX @ 0x1C0055ABC
 * Callers:
 *     NdisDprReleaseReadWriteLock @ 0x1C0054F50 (NdisDprReleaseReadWriteLock.c)
 * Callees:
 *     ?ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z @ 0x1C0054DF4 (-ndisReleaseReadLockSharedRefCnt@@YAXPEAU_NDIS_RW_LOCK@@@Z.c)
 */

void __fastcall ndisReleaseReadWriteLockX(PKSPIN_LOCK SpinLock, __int64 a2, char a3)
{
  unsigned int Number; // eax
  KSPIN_LOCK *v6; // rcx
  KIRQL v7; // cl

  switch ( *(_WORD *)a2 )
  {
    case 3:
      if ( ndisMaxNumberOfProcessors > 0x100 )
      {
        ndisReleaseReadLockSharedRefCnt(SpinLock);
      }
      else
      {
        Number = KeGetPcr()->Prcb.Number;
        if ( ndisMaxNumberOfProcessors > 0x40 )
          v6 = (PKSPIN_LOCK)((char *)SpinLock + 4 * Number + 16);
        else
          v6 = &SpinLock[2 * Number + 2];
        --*(_DWORD *)v6;
      }
      *(_WORD *)a2 = 255;
      if ( !a3 )
      {
        v7 = *(_BYTE *)(a2 + 2);
        if ( v7 < 2u )
          KeLowerIrql(v7);
      }
      break;
    case 4:
      *(_WORD *)a2 = 255;
      SpinLock[1] = 0LL;
      if ( a3 )
        KeReleaseSpinLockFromDpcLevel(SpinLock);
      else
        KeReleaseSpinLock(SpinLock, *(_BYTE *)(a2 + 2));
      break;
    case 5:
      SpinLock[1] = 0LL;
      KeReleaseSpinLockFromDpcLevel(SpinLock + 2);
      *(_WORD *)a2 = 255;
      break;
  }
}
