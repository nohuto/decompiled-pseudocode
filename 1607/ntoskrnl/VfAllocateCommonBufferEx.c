/*
 * XREFs of VfAllocateCommonBufferEx @ 0x14070665C
 * Callers:
 *     <none>
 * Callees:
 *     ViGetAdapterInformationInternal @ 0x140709738 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x140709954 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfAllocateCommonBufferEx(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, char a5, int a6)
{
  __int64 RealDmaOperation; // rax
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, __int64, char, int); // rbx
  __int64 AdapterInformationInternal; // r15
  __int64 result; // rax

  RealDmaOperation = ViGetRealDmaOperation(a1, 152LL);
  LOBYTE(v11) = 1;
  v12 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64, char, int))RealDmaOperation;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1, v11);
  result = v12(a1, a2, a3, a4, a5, a6);
  if ( result )
  {
    if ( AdapterInformationInternal )
      _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 172));
  }
  return result;
}
