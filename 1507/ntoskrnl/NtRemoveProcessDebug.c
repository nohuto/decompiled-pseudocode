/*
 * XREFs of NtRemoveProcessDebug @ 0x140668A2C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140509FD0 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkClearProcessDebugObject @ 0x1405685D8 (DbgkClearProcessDebugObject.c)
 */

NTSTATUS __stdcall NtRemoveProcessDebug(HANDLE Process, HANDLE DebugObject)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *v5; // rdi
  NTSTATUS v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  PVOID v10; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  unsigned __int8 v12[8]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v13; // [rsp+58h] [rbp-90h]
  __int64 v14; // [rsp+60h] [rbp-88h]

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
           BYTE2(KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink),
           *((_BYTE *)Object + 1714)) )
    {
      v6 = -1073740014;
    }
    else
    {
      v7 = v5[90];
      if ( !v7 || (v14 = 0LL, v13 = v7, v6 = HvlpEnterIumSecureMode(1u, 11, 0, v12), v6 >= 0) )
      {
        v6 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &v10, 0LL);
        if ( v6 >= 0 )
        {
          v6 = DbgkClearProcessDebugObject((ULONG_PTR)v5, (__int64)v10, v8, v9);
          ObfDereferenceObject(v10);
        }
      }
    }
    ObfDereferenceObjectWithTag(v5, 0x4F676244u);
    return v6;
  }
  return result;
}
