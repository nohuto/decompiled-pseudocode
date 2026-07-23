/*
 * XREFs of MiContractPagingFiles @ 0x140075FBC
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiOkToShrinkPageFiles @ 0x140076084 (MiOkToShrinkPageFiles.c)
 *     MiQueuePageFileExtension @ 0x1401EEB64 (MiQueuePageFileExtension.c)
 */

void __fastcall MiContractPagingFiles(__int64 a1)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx
  __int64 v4; // r9
  _QWORD *v5; // rdx
  KIRQL v6; // al
  __int64 v7; // r8

  if ( (unsigned int)MiOkToShrinkPageFiles(*(_QWORD *)(a1 + 7208), *(_QWORD *)(a1 + 7336)) )
  {
    v2 = *(_DWORD *)(a1 + 6296);
    v3 = 0;
    if ( v2 )
    {
      v4 = a1 + 6304;
      do
      {
        v5 = *(_QWORD **)v4;
        if ( (*(_BYTE *)(*(_QWORD *)v4 + 204LL) & 0x50) == 0 && *v5 != v5[2] && v5[3] > 0x4000uLL )
          break;
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < v2 );
    }
    if ( v3 != v2 )
    {
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1664));
      if ( *(_QWORD *)(a1 + 472) == -1LL )
      {
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1664), v6);
      }
      else
      {
        *(_QWORD *)(a1 + 440) = 0LL;
        LOBYTE(v7) = v6;
        *(_BYTE *)(a1 + 519) |= 0x10u;
        *(_QWORD *)(a1 + 472) = -1LL;
        *(_QWORD *)(a1 + 464) = a1;
        MiQueuePageFileExtension(a1 + 440, 0LL, v7);
      }
    }
  }
}
