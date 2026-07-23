/*
 * XREFs of PsQueryProcessPageFileQuota @ 0x140581F8C
 * Callers:
 *     MiLogCommitRequestFailed @ 0x1401ECC60 (MiLogCommitRequestFailed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsQueryProcessPageFileQuota(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v3; // r9

  v3 = *(_QWORD *)(a1 + 1040);
  *a2 = *(_QWORD *)(v3 + 320);
  *a3 = *(_QWORD *)(v3 + 256);
  return 0LL;
}
