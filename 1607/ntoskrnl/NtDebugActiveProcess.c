/*
 * XREFs of NtDebugActiveProcess @ 0x1406197C4
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140425420 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404BB248 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1406186A4 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x14061927C (DbgkpSetProcessDebugObject.c)
 */

NTSTATUS __stdcall NtDebugActiveProcess(HANDLE Process, HANDLE DebugObject)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS result; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _EX_RUNDOWN_REF *v7; // rdi
  _KPROCESS *v8; // rsi
  NTSTATUS v9; // ebx
  BOOLEAN v10; // al
  struct _KEVENT *v11; // rsi
  int v12; // eax
  PVOID Object; // [rsp+40h] [rbp-B8h] BYREF
  PVOID v14; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-A8h] BYREF
  char v16[8]; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 Count; // [rsp+68h] [rbp-90h]
  __int64 v18; // [rsp+70h] [rbp-88h]

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
    v7 = (struct _EX_RUNDOWN_REF *)Object;
    v8 = KeGetCurrentThread()->ApcState.Process;
    if ( Object == v8 || Object == PsInitialSystemProcess )
    {
      v9 = -1073741790;
    }
    else
    {
      LOBYTE(v5) = BYTE2(v8[2].ActiveProcessors.Bitmap[0]);
      LOBYTE(v6) = PreviousMode;
      if ( PspCheckForInvalidAccessByProtection(v6, v5, *((_BYTE *)Object + 1738)) )
      {
        v9 = -1073740014;
      }
      else if ( !v7[90].Count
             || (Count = v7[90].Count, v18 = 1LL, v9 = VslpEnterIumSecureMode(1, 11LL, 0LL, (__int64)v16), v9 >= 0) )
      {
        if ( !v8[1].ActiveProcessors.Bitmap[7] || v7[133].Count )
        {
          v9 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &v14, 0LL);
          if ( v9 >= 0 )
          {
            v10 = ExAcquireRundownProtection(v7 + 92);
            v11 = (struct _KEVENT *)v14;
            if ( v10 )
            {
              v12 = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v7, (struct _KEVENT *)v14, &v15);
              v9 = DbgkpSetProcessDebugObject((ULONG_PTR)v7, v11, v12, v15);
              ExReleaseRundownProtection(v7 + 92);
            }
            else
            {
              v9 = -1073741558;
            }
            ObfDereferenceObject(v11);
          }
        }
        else
        {
          v9 = -1073741637;
        }
      }
    }
    ObfDereferenceObjectWithTag(v7, 0x4F676244u);
    return v9;
  }
  return result;
}
