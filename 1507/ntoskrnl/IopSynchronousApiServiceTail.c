/*
 * XREFs of IopSynchronousApiServiceTail @ 0x140457B28
 * Callers:
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x140459AD0 (NtFlushBuffersFileEx.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
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
