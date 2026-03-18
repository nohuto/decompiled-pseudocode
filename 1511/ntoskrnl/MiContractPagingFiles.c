/*
 * XREFs of MiContractPagingFiles @ 0x14001BDC8
 * Callers:
 *     MmDeleteProcessAddressSpace @ 0x1403E6E18 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiOkToShrinkPageFiles @ 0x14001BE3C (MiOkToShrinkPageFiles.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeReleaseSemaphoreEx @ 0x14007A6F0 (KeReleaseSemaphoreEx.c)
 */

void __fastcall MiContractPagingFiles(__int64 a1)
{
  unsigned int v2; // r8d
  unsigned int v3; // ecx
  __int64 v4; // r9
  _QWORD *v5; // rdx
  KIRQL v6; // dl
  __int64 v7; // rcx
  _QWORD *v8; // r8
  int v9; // r9d

  if ( (unsigned int)MiOkToShrinkPageFiles(*(_QWORD *)(a1 + 5960), *(_QWORD *)(a1 + 6120)) )
  {
    v2 = *(_DWORD *)(a1 + 5720);
    v3 = 0;
    if ( v2 )
    {
      v4 = a1 + 5728;
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
      v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1536));
      if ( *(_QWORD *)(a1 + 472) == -1LL )
      {
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1536), v6);
      }
      else
      {
        *(_QWORD *)(a1 + 440) = 0LL;
        *(_QWORD *)(a1 + 472) = -1LL;
        v7 = a1 + 448;
        *(_QWORD *)(a1 + 464) = a1;
        *(_BYTE *)(a1 + 529) = 1;
        v8 = *(_QWORD **)(a1 + 1312);
        *(_QWORD *)(a1 + 448) = a1 + 1304;
        *(_QWORD *)(a1 + 456) = v8;
        if ( *v8 != a1 + 1304 )
          __fastfail(3u);
        *v8 = v7;
        *(_QWORD *)(a1 + 1312) = v7;
        ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1536), v6);
        KeReleaseSemaphoreEx(a1 + 1272, 0, 1, v9, 0);
      }
    }
  }
}
