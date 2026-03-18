/*
 * XREFs of NtRemoveProcessDebug @ 0x140619B78
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404BB248 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkClearProcessDebugObject @ 0x1404F0FB8 (DbgkClearProcessDebugObject.c)
 */

NTSTATUS __stdcall NtRemoveProcessDebug(HANDLE Process, HANDLE DebugObject)
{
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  __int64 v5; // rdx
  _QWORD *v6; // rdi
  _KPROCESS *v7; // rcx
  NTSTATUS v8; // ebx
  __int64 v9; // rax
  PVOID v10; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v12[8]; // [rsp+50h] [rbp-98h] BYREF
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
    v6 = Object;
    v7 = KeGetCurrentThread()->ApcState.Process;
    LOBYTE(v5) = BYTE2(v7[2].ActiveProcessors.Bitmap[0]);
    LOBYTE(v7) = PreviousMode;
    if ( PspCheckForInvalidAccessByProtection((__int64)v7, v5, *((_BYTE *)Object + 1738)) )
    {
      v8 = -1073740014;
    }
    else
    {
      v9 = v6[90];
      if ( !v9 || (v14 = 0LL, v13 = v9, v8 = VslpEnterIumSecureMode(1, 11LL, 0LL, (__int64)v12), v8 >= 0) )
      {
        v8 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &v10, 0LL);
        if ( v8 >= 0 )
        {
          v8 = DbgkClearProcessDebugObject((ULONG_PTR)v6, (__int64)v10);
          ObfDereferenceObject(v10);
        }
      }
    }
    ObfDereferenceObjectWithTag(v6, 0x4F676244u);
    return v8;
  }
  return result;
}
