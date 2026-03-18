/*
 * XREFs of PsIumEnableOnDemandDebugWithResponse @ 0x1406820E8
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x140620764 (VslEnableOnDemandDebugWithResponse.c)
 */

__int64 __fastcall PsIumEnableOnDemandDebugWithResponse(void *a1, const void *a2, unsigned int a3)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v5 = ObReferenceObjectByHandleWithTag(
         a1,
         0x2000u,
         (POBJECT_TYPE)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         0x79517350u,
         &Object,
         0LL);
  if ( v5 >= 0 )
  {
    v5 = VslEnableOnDemandDebugWithResponse((__int64)Object, a2, a3);
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
  }
  return (unsigned int)v5;
}
