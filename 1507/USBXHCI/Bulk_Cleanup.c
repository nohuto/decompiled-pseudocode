/*
 * XREFs of Bulk_Cleanup @ 0x1C0029700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DDD @ 0x1C0006A1C (WPP_RECORDER_SF_DDD.c)
 *     Bulk_DoesDriverOwnRequests @ 0x1C0029B8C (Bulk_DoesDriverOwnRequests.c)
 */

void __fastcall Bulk_Cleanup(__int64 a1)
{
  int v2; // [rsp+28h] [rbp-20h]
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+38h] [rbp-10h]

  *(_BYTE *)(a1 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  if ( (unsigned __int8)Bulk_DoesDriverOwnRequests(a1) )
  {
    v4 = *(_DWORD *)(a1 + 64);
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
    v2 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    WPP_RECORDER_SF_DDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 64LL),
      2u,
      0xDu,
      0xAu,
      (__int64)&WPP_3b622249e4c15df141300e65bf8740b4_Traceguids,
      v2,
      v3,
      v4);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 88), *(_BYTE *)(a1 + 96));
}
