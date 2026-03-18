/*
 * XREFs of NtDebugActiveProcess @ 0x1405EFBC8
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     PspCheckForInvalidAccessByProtection @ 0x1404A4564 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1405EEA74 (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1405EF678 (DbgkpSetProcessDebugObject.c)
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
  PVOID v11; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int8 v14[8]; // [rsp+60h] [rbp-98h] BYREF
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
                BYTE2(v6[2].SwapListEntry.Next),
                *((_BYTE *)Object + 1722)) )
    {
      v7 = -1073740014;
    }
    else if ( !v5[90].Count || (Count = v5[90].Count, v16 = 1LL, v7 = HvlpEnterIumSecureMode(1u, 11, 0, v14), v7 >= 0) )
    {
      if ( !v6[1].ActiveProcessors.Bitmap[7] || v5[133].Count )
      {
        v7 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &v11, 0LL);
        if ( v7 >= 0 )
        {
          v8 = ExAcquireRundownProtection(v5 + 92);
          v9 = (struct _KEVENT *)v11;
          if ( v8 )
          {
            v10 = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)v5, (struct _KEVENT *)v11, &v12);
            v7 = DbgkpSetProcessDebugObject((ULONG_PTR)v5, v9, v10, v12);
            ExReleaseRundownProtection_0(v5 + 92);
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
