/*
 * XREFs of PsIumGetOnDemandDebugChallenge @ 0x140682170
 * Callers:
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     VslGetOnDemandDebugChallenge @ 0x140620820 (VslGetOnDemandDebugChallenge.c)
 */

__int64 __fastcall PsIumGetOnDemandDebugChallenge(void *a1, void *a2, unsigned int a3, _DWORD *a4)
{
  int v7; // ebx
  PVOID Object; // [rsp+40h] [rbp-18h] BYREF

  v7 = ObReferenceObjectByHandleWithTag(
         a1,
         0x1000u,
         (POBJECT_TYPE)PsProcessType,
         KeGetCurrentThread()->PreviousMode,
         0x79517350u,
         &Object,
         0LL);
  if ( v7 >= 0 )
  {
    v7 = VslGetOnDemandDebugChallenge((__int64)Object, a2, a3, a4);
    ObfDereferenceObjectWithTag(Object, 0x79517350u);
  }
  return (unsigned int)v7;
}
