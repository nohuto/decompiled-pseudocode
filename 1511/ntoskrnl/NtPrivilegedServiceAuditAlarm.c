/*
 * XREFs of NtPrivilegedServiceAuditAlarm @ 0x1404BB38C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SeCheckAuditPrivilege @ 0x14046E588 (SeCheckAuditPrivilege.c)
 *     SepProbeAndCaptureString_U @ 0x14046F5B0 (SepProbeAndCaptureString_U.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140478A74 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  char PreviousMode; // di
  NTSTATUS v10; // edi
  PVOID v11; // r14
  ULONG PrivilegeCount; // edi
  unsigned int v13; // ecx
  char *v14; // rdx
  ULONG *PoolWithTag; // rax
  ULONG *v16; // rsi
  PVOID v17; // rdi
  PVOID v18; // r15
  NTSTATUS v20; // ebx
  __int64 v21; // rcx
  NTSTATUS v22; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG *v24; // [rsp+50h] [rbp-68h]
  PVOID v25; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v27; // [rsp+68h] [rbp-50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-48h] BYREF
  ULONG v29; // [rsp+90h] [rbp-28h]
  PVOID v30; // [rsp+98h] [rbp-20h]

  v24 = 0LL;
  P = 0LL;
  v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64)&SubjectContext, PreviousMode) )
  {
    v20 = -1073741727;
LABEL_36:
    SeReleaseSubjectContext(&SubjectContext);
    return v20;
  }
  v10 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v11 = Object;
  v30 = Object;
  v22 = v10;
  if ( v10 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v10 == -1073741816 )
      return v10;
    v21 = (unsigned int)v10;
LABEL_33:
    SepAuditFailed(v21);
    return v10;
  }
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v20 = -1073741659;
    goto LABEL_36;
  }
  if ( SubsystemName && (v10 = SepProbeAndCaptureString_U((ULONG64)SubsystemName, (__int64)&P), v22 = v10, v10 < 0)
    || ServiceName && (v10 = SepProbeAndCaptureString_U((ULONG64)ServiceName, (__int64)&v25), v22 = v10, v10 < 0) )
  {
    v16 = v24;
  }
  else
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v29 = PrivilegeCount;
    if ( PrivilegeCount >= 0x42 )
    {
      v10 = -1073741811;
      v16 = v24;
    }
    else
    {
      v13 = 12 * (PrivilegeCount - 1) + 20;
      v27 = v13;
      if ( 12 * (PrivilegeCount - 1) != -20 )
      {
        v14 = (char *)Privileges + v13;
        if ( (unsigned __int64)v14 > MmUserProbeAddress || v14 < (char *)Privileges )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v13, 0x72506553u);
      v16 = PoolWithTag;
      v24 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Privileges, 12 * (PrivilegeCount - 1) + 20);
        *v16 = PrivilegeCount;
        v10 = v22;
      }
      else
      {
        v10 = -1073741670;
      }
    }
    v11 = Object;
  }
  if ( v10 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v25 )
      ExFreePoolWithTag(v25, 0);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v11);
    if ( v10 != -1073741670 )
      return v10;
    v21 = 3221225626LL;
    goto LABEL_33;
  }
  v17 = v25;
  v18 = P;
  SepAdtPrivilegedServiceAuditAlarm(
    (int)&SubjectContext,
    (unsigned __int16 *)P,
    (unsigned __int16 *)v25,
    (__int64)v11,
    (__int64)SubjectContext.PrimaryToken,
    (int *)v16,
    AccessGranted);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  ObfDereferenceObject(v11);
  SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
