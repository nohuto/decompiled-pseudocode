/*
 * XREFs of NtRemoveProcessDebug @ 0x1405EFF80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A4564 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkClearProcessDebugObject @ 0x1404F48C4 (DbgkClearProcessDebugObject.c)
 */

NTSTATUS __stdcall NtRemoveProcessDebug(HANDLE Process, HANDLE DebugObject)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *v5; // rdi
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  PVOID v8; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int8 v10[8]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v11; // [rsp+58h] [rbp-90h]
  __int64 v12; // [rsp+60h] [rbp-88h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  result = ObReferenceObjectByHandleWithTag(
             Process,
             0x800u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x4F676244u,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    v5 = Object;
    if ( PspCheckForInvalidAccessByProtection(
           PreviousMode,
           BYTE2(KeGetCurrentThread()->ApcState.Process[2].SwapListEntry.Next),
           *((_BYTE *)Object + 1722)) )
    {
      v6 = -1073740014;
    }
    else
    {
      v7 = v5[90];
      if ( !v7 || (v12 = 0LL, v11 = v7, v6 = HvlpEnterIumSecureMode(1u, 11, 0, v10), v6 >= 0) )
      {
        v6 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &v8, 0LL);
        if ( v6 >= 0 )
        {
          v6 = DbgkClearProcessDebugObject((ULONG_PTR)v5, (__int64)v8);
          ObfDereferenceObject(v8);
        }
      }
    }
    ObfDereferenceObjectWithTag(v5, 0x4F676244u);
    return v6;
  }
  return result;
}
