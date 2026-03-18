/*
 * XREFs of IopSynchronousApiServiceTail @ 0x1404C9698
 * Callers:
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     NtFlushBuffersFileEx @ 0x1404C9430 (NtFlushBuffersFileEx.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140529574 (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopCancelAlertedRequest @ 0x1404F0BD8 (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopSynchronousApiServiceTail(
        unsigned int a1,
        void *a2,
        IRP *a3,
        KPROCESSOR_MODE a4,
        unsigned int *a5,
        _OWORD *a6)
{
  unsigned int v8; // edi

  v8 = a1;
  if ( a1 == 259 )
  {
    if ( KeWaitForSingleObject(a2, Executive, a4, 0, 0LL) == 192 )
      IopCancelAlertedRequest(a2, a3);
    v8 = *a5;
  }
  *a6 = *(_OWORD *)a5;
  ExFreePoolWithTag(a2, 0);
  return v8;
}
