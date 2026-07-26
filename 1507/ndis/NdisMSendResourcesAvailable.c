/*
 * XREFs of NdisMSendResourcesAvailable @ 0x1C004E5E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisMQueueWorkItem @ 0x1C005A5AC (ndisMQueueWorkItem.c)
 */

void __fastcall NdisMSendResourcesAvailable(__int64 a1)
{
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_q(0x1Au, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  *(_DWORD *)(a1 + 120) |= 0x400000u;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  if ( *(_QWORD *)(a1 + 144) )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 1508659;
    ndisMQueueWorkItem(a1, 1LL);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
  }
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_q(0x1Bu, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1);
}
