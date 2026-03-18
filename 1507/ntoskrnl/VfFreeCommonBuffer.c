/*
 * XREFs of VfFreeCommonBuffer @ 0x14073BB9C
 * Callers:
 *     <none>
 * Callees:
 *     DECREMENT_COMMON_BUFFERS @ 0x14073A1E8 (DECREMENT_COMMON_BUFFERS.c)
 *     VF_ASSERT_IRQL @ 0x14073A528 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 *     ViHalFreeDomainCommonBuffer @ 0x14073E6DC (ViHalFreeDomainCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14073F328 (ViSpecialFreeCommonBuffer.c)
 */

void __fastcall VfFreeCommonBuffer(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  __int64 RealDmaOperation; // rax
  __int64 v9; // rdx
  void (__fastcall *v10)(__int64, _QWORD, __int64, __int64, char); // rbp
  __int64 AdapterInformationInternal; // rbx
  char v12; // al
  char v13; // r14
  char v14; // di
  __int64 v15; // r9
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF

  v16 = a3;
  RealDmaOperation = ViGetRealDmaOperation(a1, 24LL);
  LOBYTE(v9) = 1;
  v10 = (void (__fastcall *)(__int64, _QWORD, __int64, __int64, char))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v9);
  v12 = ViHalFreeDomainCommonBuffer(&v16);
  v13 = a5;
  v14 = v12;
  if ( !AdapterInformationInternal
    || v12
    || (VF_ASSERT_IRQL(0),
        LOBYTE(v15) = v13,
        !(unsigned int)ViSpecialFreeCommonBuffer(v10, AdapterInformationInternal, a4, v15)) )
  {
    v10(a1, a2, v16, a4, v13);
    if ( AdapterInformationInternal )
    {
      if ( !v14 )
        DECREMENT_COMMON_BUFFERS(AdapterInformationInternal);
    }
  }
}
