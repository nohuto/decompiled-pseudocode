/*
 * XREFs of AlpcpTransferQuotaMessage @ 0x140409210
 * Callers:
 *     AlpcpCancelMessage @ 0x140408B94 (AlpcpCancelMessage.c)
 *     AlpcpCancelMessagesByRequestor @ 0x14040A38C (AlpcpCancelMessagesByRequestor.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     PsTransferProcessQuotaToSharedQuota @ 0x140126B34 (PsTransferProcessQuotaToSharedQuota.c)
 */

void __fastcall AlpcpTransferQuotaMessage(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  PVOID v4; // rcx

  v2 = *(_QWORD *)(a1 + 48);
  if ( v2 && (*(_DWORD *)(a1 + 40) & 0x400) == 0 && !*(_QWORD *)(a1 + 96) )
  {
    v3 = 784LL;
    if ( *(_QWORD *)(a1 + 216) )
      v3 = *(_QWORD *)(a1 + 224) + 784LL;
    *(_QWORD *)(a1 + 48) = PsTransferProcessQuotaToSharedQuota(v2, v3);
    ObfDereferenceObjectWithTag(v4, 0x63706C41u);
    *(_DWORD *)(a1 + 40) |= 0x400u;
  }
}
