/*
 * XREFs of NtDebugActiveProcess @ 0x140619878
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A6F78 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x140618758 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140619330 (DbgkpSetProcessDebugObject.c)
 */

NTSTATUS __stdcall NtDebugActiveProcess(HANDLE Process, HANDLE DebugObject)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS result; // eax
  struct _EX_RUNDOWN_REF *v5; // rdi
  _KPROCESS *v6; // rsi
  NTSTATUS v7; // ebx
  BOOLEAN v8; // al
  struct _KEVENT *v9; // rsi
  int v10; // eax
  PVOID Object; // [rsp+40h] [rbp-B8h] BYREF
  PVOID v12; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-A8h] BYREF
  char v14[8]; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 Count; // [rsp+68h] [rbp-90h]
  __int64 v16; // [rsp+70h] [rbp-88h]

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
    v5 = (struct _EX_RUNDOWN_REF *)Object;
    v6 = KeGetCurrentThread()->ApcState.Process;
    if ( Object == v6 || Object == PsInitialSystemProcess )
    {
      v7 = -1073741790;
    }
    else if ( PspCheckForInvalidAccessByProtection(
                PreviousMode,
                (PS_PROTECTION)SBYTE2(v6[2].ActiveProcessors.Bitmap[0]),
                (PS_PROTECTION)*((char *)Object + 1738)) )
    {
      v7 = -1073740014;
    }
    else if ( !v5[90].Count
           || (Count = v5[90].Count, v16 = 1LL, v7 = VslpEnterIumSecureMode(1, 11LL, 0LL, (__int64)v14), v7 >= 0) )
    {
      if ( !v6[1].ActiveProcessors.Bitmap[7] || v5[133].Count )
      {
        v7 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &v12, 0LL);
        if ( v7 >= 0 )
        {
          v8 = ExAcquireRundownProtection(v5 + 92);
          v9 = (struct _KEVENT *)v12;
          if ( v8 )
          {
            v10 = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v5, (struct _KEVENT *)v12, &v13);
            v7 = DbgkpSetProcessDebugObject((ULONG_PTR)v5, v9, v10, v13);
            ExReleaseRundownProtection(v5 + 92);
          }
          else
          {
            v7 = -1073741558;
          }
          ObfDereferenceObject(v9);
        }
      }
      else
      {
        v7 = -1073741637;
      }
    }
    ObfDereferenceObjectWithTag(v5, 0x4F676244u);
    return v7;
  }
  return result;
}
