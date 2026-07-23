/*
 * XREFs of VfBuildScatterGatherListEx @ 0x140706B9C
 * Callers:
 *     <none>
 * Callees:
 *     VfReportIssueWithOptions @ 0x140223370 (VfReportIssueWithOptions.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140705CE8 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140705F2C (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140705F98 (VF_ASSERT_IRQL.c)
 *     ViCheckMdlLength @ 0x140708CF0 (ViCheckMdlLength.c)
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x140709AEC (ViHalPreprocessOptions.c)
 */

__int64 __fastcall VfBuildScatterGatherListEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11,
        int a12,
        __int64 a13,
        __int64 a14,
        __int64 a15)
{
  __int64 RealDmaOperation; // rax
  __int64 v20; // rdx
  __int64 AdapterInformationInternal; // rdi
  unsigned int v23; // eax
  int v24; // ebx
  int v25; // eax
  unsigned int v26; // ebx
  __int64 (__fastcall *v27)(__int64, __int64, __int64, __int64, __int64, unsigned int, int, __int64, __int64, char, __int64, int, __int64, __int64, __int64); // [rsp+80h] [rbp-38h]

  RealDmaOperation = ViGetRealDmaOperation(a1, 200LL);
  LOBYTE(v20) = 1;
  v27 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, unsigned int, int, __int64, __int64, char, __int64, int, __int64, __int64, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v20);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    if ( !a4 )
      return 3221225485LL;
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 164));
    _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 168));
    VERIFY_BUFFER_LOCKED(a4);
    v23 = ViCheckMdlLength(a4, a5, a6);
    if ( v23 )
    {
      v24 = v23;
      ViHalPreprocessOptions(
        byte_1402F9914,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v23,
        0LL,
        0LL);
      VfReportIssueWithOptions(230, 36, v24, 0, 0LL, byte_1402F9914);
    }
  }
  v25 = v27(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  v26 = v25;
  if ( AdapterInformationInternal )
  {
    if ( v25 < 0 )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  return v26;
}
