/*
 * XREFs of NtPrivilegedServiceAuditAlarm @ 0x140524EA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140432E10 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x140526A90 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140526BA8 (SeCheckAuditPrivilege.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // rdx
  int v11; // edi
  PVOID v12; // r14
  ULONG PrivilegeCount; // edi
  unsigned int v14; // ecx
  char *v15; // rdx
  ULONG *PoolWithTag; // rax
  ULONG *v17; // rsi
  PVOID v18; // rdi
  PVOID v19; // r15
  NTSTATUS v21; // ebx
  __int64 v22; // rcx
  int v23; // [rsp+40h] [rbp-78h]
  PVOID Object; // [rsp+48h] [rbp-70h] BYREF
  ULONG *v25; // [rsp+50h] [rbp-68h]
  PVOID v26; // [rsp+58h] [rbp-60h] BYREF
  PVOID P; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v28; // [rsp+68h] [rbp-50h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-48h] BYREF
  ULONG v30; // [rsp+90h] [rbp-28h]
  PVOID v31; // [rsp+98h] [rbp-20h]

  v25 = 0LL;
  P = 0LL;
  v26 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v10) = PreviousMode;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v10) )
  {
    v21 = -1073741727;
LABEL_36:
    SeReleaseSubjectContext(&SubjectContext);
    return v21;
  }
  v11 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v31 = Object;
  v23 = v11;
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return v11;
    v22 = (unsigned int)v11;
LABEL_33:
    SepAuditFailed(v22);
    return v11;
  }
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v21 = -1073741659;
    goto LABEL_36;
  }
  if ( SubsystemName && (v11 = SepProbeAndCaptureString_U(SubsystemName, &P), v23 = v11, v11 < 0)
    || ServiceName && (v11 = SepProbeAndCaptureString_U(ServiceName, &v26), v23 = v11, v11 < 0) )
  {
    v17 = v25;
  }
  else
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v30 = PrivilegeCount;
    if ( PrivilegeCount >= 0x42 )
    {
      v11 = -1073741811;
      v17 = v25;
    }
    else
    {
      v14 = 12 * (PrivilegeCount - 1) + 20;
      v28 = v14;
      if ( 12 * (PrivilegeCount - 1) != -20 )
      {
        v15 = (char *)Privileges + v14;
        if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 < (char *)Privileges )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v14, 0x72506553u);
      v17 = PoolWithTag;
      v25 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Privileges, 12 * (PrivilegeCount - 1) + 20);
        *v17 = PrivilegeCount;
        v11 = v23;
      }
      else
      {
        v11 = -1073741670;
      }
    }
    v12 = Object;
  }
  if ( v11 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v12);
    if ( v11 != -1073741670 )
      return v11;
    v22 = 3221225626LL;
    goto LABEL_33;
  }
  v18 = v26;
  v19 = P;
  SepAdtPrivilegedServiceAuditAlarm(
    &SubjectContext,
    (unsigned __int16 *)P,
    (unsigned __int16 *)v26,
    (__int64)v12,
    (__int64)SubjectContext.PrimaryToken,
    v17,
    AccessGranted);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  ObfDereferenceObject(v12);
  SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
