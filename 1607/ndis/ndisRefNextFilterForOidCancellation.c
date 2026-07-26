/*
 * XREFs of ndisRefNextFilterForOidCancellation @ 0x1C004835C
 * Callers:
 *     ndisCancelOidRequestInternal @ 0x1C00448D4 (ndisCancelOidRequestInternal.c)
 * Callees:
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 */

__int64 __fastcall ndisRefNextFilterForOidCancellation(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rsi
  KIRQL v7; // r15
  __int64 v8; // rbx
  KSPIN_LOCK *v9; // rcx
  KSPIN_LOCK *v10; // rbp
  __int64 v11; // rdi

  v3 = 0LL;
  if ( a2 )
  {
    v10 = (KSPIN_LOCK *)(a2 + 144);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 144));
    v11 = *(_QWORD *)(a2 + 416);
    *(_QWORD *)(a2 + 152) = KeGetCurrentThread();
    *(_DWORD *)(a2 + 160) = 2306597;
    if ( *(_BYTE *)v11 == 5 )
    {
      *a3 = 0;
      if ( ndisReferenceRef((PKSPIN_LOCK)(v11 + 312), 1u) )
        v3 = v11;
    }
    else
    {
      *a3 = 1;
    }
    *(_QWORD *)(a2 + 152) = 0LL;
    v9 = v10;
    *(_DWORD *)(a2 + 160) = 0;
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v8 = *(_QWORD *)(a1 + 2608);
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2306582;
    if ( *(_BYTE *)v8 == 5 )
    {
      *a3 = 0;
      if ( ndisReferenceRef((PKSPIN_LOCK)(v8 + 312), 1u) )
        v3 = v8;
    }
    else
    {
      *a3 = 1;
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    v9 = (KSPIN_LOCK *)(a1 + 96);
    *(_DWORD *)(a1 + 1856) = 0;
  }
  KeReleaseSpinLock(v9, v7);
  return v3;
}
