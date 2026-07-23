/*
 * XREFs of VfMapTransferEx @ 0x140707E98
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140705D74 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140705F2C (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140706010 (VF_ASSERT_MAX_IRQL.c)
 *     ViCheckAdapterBuffers @ 0x140708C48 (ViCheckAdapterBuffers.c)
 *     ViCheckMdlLength @ 0x140708CF0 (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfMapTransferEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int *a6,
        char a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rbp
  __int64 AdapterInformationInternal; // rdi
  unsigned int v16; // eax
  int v17; // ebx
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, __int64, int, unsigned int *, char, __int64, int, __int64, __int64); // rax
  int v19; // eax
  unsigned int v20; // ebx

  v11 = a2;
  LOBYTE(a2) = 1;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, a2);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_MAX_IRQL();
    VERIFY_BUFFER_LOCKED(v11);
    ViCheckAdapterBuffers(AdapterInformationInternal);
    v16 = ViCheckMdlLength(v11, a4, *a6);
    if ( v16 )
    {
      v17 = v16;
      ViHalPreprocessOptions(
        byte_1402F9918,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v16,
        0LL,
        0LL);
      VfReportIssueWithOptions(230, 36, v17, 0, 0LL, byte_1402F9918);
    }
  }
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, unsigned int *, char, __int64, int, __int64, __int64))ViGetRealDmaOperation(a1, 184LL);
  v19 = RealDmaOperation(a1, v11, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  v20 = v19;
  if ( AdapterInformationInternal && v19 >= 0 )
    INCREASE_MAPPED_TRANSFER_BYTE_COUNT(AdapterInformationInternal, *a6, 1);
  return v20;
}
