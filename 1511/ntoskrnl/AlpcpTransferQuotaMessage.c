/*
 * XREFs of AlpcpTransferQuotaMessage @ 0x140481BA4
 * Callers:
 *     AlpcpCancelMessagesByRequestor @ 0x14047F6F8 (AlpcpCancelMessagesByRequestor.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PsTransferProcessQuotaToSharedQuota @ 0x1401178CC (PsTransferProcessQuotaToSharedQuota.c)
 */

void __fastcall AlpcpTransferQuotaMessage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  PVOID v4; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 && (*(_DWORD *)(a1 + 40) & 0x400) == 0 && !*(_QWORD *)(a1 + 96) )
  {
    v3 = 776LL;
    if ( *(_QWORD *)(a1 + 208) )
      v3 = *(_QWORD *)(a1 + 216) + 776LL;
    *(_QWORD *)(a1 + 48) = PsTransferProcessQuotaToSharedQuota(v2, v3);
    ObfDereferenceObjectWithTag(v4, 0x63706C41u);
    *(_DWORD *)(a1 + 40) |= 0x400u;
  }
}
