/*
 * XREFs of NtRemoveProcessDebug @ 0x140619C2C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A6F78 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkClearProcessDebugObject @ 0x1404D30AC (DbgkClearProcessDebugObject.c)
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
  _BYTE v10[8]; // [rsp+50h] [rbp-98h] BYREF
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
           (PS_PROTECTION)SBYTE2(KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0]),
           (PS_PROTECTION)*((char *)Object + 1738)) )
    {
      v6 = -1073740014;
    }
    else
    {
      v7 = v5[90];
      if ( !v7 || (v12 = 0LL, v11 = v7, v6 = VslpEnterIumSecureMode(1, 11LL, 0LL, (__int64)v10), v6 >= 0) )
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
