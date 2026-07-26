/*
 * XREFs of ndisMBeginNormalMode @ 0x1C001FFD8
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisMBeginNormalMode(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // al
  bool v4; // zf

  v1 = (KSPIN_LOCK *)(a1 + 3216);
  *(_BYTE *)(a1 + 1995) = 0;
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 3216));
  v4 = *(_DWORD *)(a1 + 3208) == 1;
  *(_QWORD *)(a1 + 3224) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 3232) = 3604720;
  if ( v4 )
  {
    *(_BYTE *)(a1 + 2673) = 0;
    *(_QWORD *)(a1 + 2144) = &ndisMIndicateReceiveNblsWithThrottling;
  }
  else
  {
    *(_BYTE *)(a1 + 2673) = 1;
    *(_QWORD *)(a1 + 2144) = ndisMDispatchReceiveNetBufferLists;
  }
  *(_QWORD *)(a1 + 3224) = 0LL;
  *(_DWORD *)(a1 + 3232) = 0;
  *(_QWORD *)(a1 + 2152) = ndisMDispatchReceiveNetBufferLists;
  KeReleaseSpinLock(v1, v3);
}
