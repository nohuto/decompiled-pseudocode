/*
 * XREFs of PspJobIoRateVolumeEntryRemoveAll @ 0x14010C410
 * Callers:
 *     PspJobIoRateControlDisable @ 0x14051A458 (PspJobIoRateControlDisable.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     PspIoRateEntryVolumeDelete @ 0x14020F688 (PspIoRateEntryVolumeDelete.c)
 */

void __fastcall PspJobIoRateVolumeEntryRemoveAll(__int64 a1, __int64 a2)
{
  volatile LONG *v2; // rsi
  KIRQL v5; // al
  _QWORD *v6; // r8
  KIRQL v7; // bp
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // rbx

  v2 = (volatile LONG *)(a1 + 1448);
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1448));
  v6 = *(_QWORD **)(a1 + 1456);
  v7 = v5;
  if ( v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( *v6 )
        {
          v8 = v6;
          v6 = (_QWORD *)*v6;
          *v8 = 0LL;
        }
        if ( !v6[1] )
          break;
        v9 = v6;
        v6 = (_QWORD *)v6[1];
        v9[1] = 0LL;
      }
      v10 = v6[2];
      PspIoRateEntryVolumeDelete(v6, a2);
      v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v11 )
        break;
      v6 = (_QWORD *)v11;
    }
  }
  *(_QWORD *)(a1 + 1456) = 0LL;
  *(_QWORD *)(a1 + 1464) = 0LL;
  ExReleaseSpinLockExclusive(v2, v7);
}
