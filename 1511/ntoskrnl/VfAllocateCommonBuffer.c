/*
 * XREFs of VfAllocateCommonBuffer @ 0x1406BA514
 * Callers:
 *     <none>
 * Callees:
 *     VF_ASSERT_IRQL @ 0x1406B9EF4 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x1406BD6B0 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1406BD8CC (ViGetRealDmaOperation.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1406BE384 (ViSpecialAllocateCommonBuffer.c)
 */

__int64 __fastcall VfAllocateCommonBuffer(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 RealDmaOperation; // rax
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, __int64); // r14
  __int64 AdapterInformationInternal; // rbx
  __int64 v12; // r9
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  RealDmaOperation = ViGetRealDmaOperation(a1, 16LL);
  LOBYTE(v9) = 1;
  v10 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v9);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(0),
        (result = ViSpecialAllocateCommonBuffer((_DWORD)v10, AdapterInformationInternal, (_DWORD)retaddr, a2, a3, a4)) == 0) )
  {
    LOBYTE(v12) = a4;
    result = v10(a1, a2, a3, v12);
    if ( result )
    {
      if ( AdapterInformationInternal )
        _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 172));
    }
  }
  return result;
}
