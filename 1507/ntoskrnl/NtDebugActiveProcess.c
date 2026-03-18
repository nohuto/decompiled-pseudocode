/*
 * XREFs of NtDebugActiveProcess @ 0x1406685CC
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     PspCheckForInvalidAccessByProtection @ 0x140509FD0 (PspCheckForInvalidAccessByProtection.c)
 *     DbgkpPostFakeProcessCreateMessages @ 0x1406671DC (DbgkpPostFakeProcessCreateMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140667F30 (DbgkpSetProcessDebugObject.c)
 */

NTSTATUS __stdcall NtDebugActiveProcess(HANDLE Process, HANDLE DebugObject)
{
  KPROCESSOR_MODE PreviousMode; // r14
  NTSTATUS result; // eax
  struct _EX_RUNDOWN_REF *v5; // rdi
  _KPROCESS *v6; // rsi
  NTSTATUS v7; // ebx
  struct _EX_RUNDOWN_REF *v8; // rdi
  unsigned __int64 v9; // rtt
  int v10; // eax
  unsigned __int64 v11; // rtt
  PVOID Object; // [rsp+40h] [rbp-69h] BYREF
  PVOID v13; // [rsp+48h] [rbp-61h] BYREF
  void *v14; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int8 v15[8]; // [rsp+60h] [rbp-49h] BYREF
  unsigned __int64 Count; // [rsp+68h] [rbp-41h]
  __int64 v17; // [rsp+70h] [rbp-39h]

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
                BYTE2(v6[2].ReadyListHead.Blink),
                *((_BYTE *)Object + 1714)) )
    {
      v7 = -1073740014;
    }
    else if ( !v5[90].Count || (Count = v5[90].Count, v17 = 1LL, v7 = HvlpEnterIumSecureMode(1u, 11, 0, v15), v7 >= 0) )
    {
      if ( !v6[1].ActiveProcessors.Bitmap[7] || v5[133].Count )
      {
        v7 = ObReferenceObjectByHandle(DebugObject, 2u, DbgkDebugObjectType, PreviousMode, &v13, 0LL);
        if ( v7 >= 0 )
        {
          v8 = v5 + 92;
          _m_prefetchw(v8);
          v9 = v8->Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)v8, v9 + 2, v9)
            || ExfAcquireRundownProtection(v8) )
          {
            v10 = DbgkpPostFakeProcessCreateMessages((_KPROCESS *)Object, (struct _KEVENT *)v13, &v14);
            v7 = DbgkpSetProcessDebugObject((ULONG_PTR)Object, (PRKEVENT)v13, v10, v14);
            _m_prefetchw(v8);
            v11 = v8->Count & 0xFFFFFFFFFFFFFFFEuLL;
            if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)v8, v11 - 2, v11) )
              ExfReleaseRundownProtection(v8);
          }
          else
          {
            v7 = -1073741558;
          }
          ObfDereferenceObject(v13);
          v5 = (struct _EX_RUNDOWN_REF *)Object;
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
