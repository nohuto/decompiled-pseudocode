/*
 * XREFs of NtPrivilegeObjectAuditAlarm @ 0x140580598
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x140526A90 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140526BA8 (SeCheckAuditPrivilege.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtPrivilegeObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  char PreviousMode; // bl
  NTSTATUS v11; // ebx
  PVOID v12; // rdi
  ULONG PrivilegeCount; // edi
  unsigned int v14; // ecx
  char *v15; // rdx
  ULONG *PoolWithTag; // rax
  ULONG *v17; // rsi
  PVOID v18; // rbx
  __int64 v20; // rcx
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  ULONG *v22; // [rsp+60h] [rbp-78h]
  PVOID P; // [rsp+68h] [rbp-70h] BYREF
  ULONG v24; // [rsp+70h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v26; // [rsp+98h] [rbp-40h]
  PVOID v27; // [rsp+A0h] [rbp-38h]

  P = 0LL;
  v22 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v11 = -1073741727;
LABEL_30:
    SeReleaseSubjectContext(&SubjectContext);
    return v11;
  }
  v11 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v12 = Object;
  v27 = Object;
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return v11;
    v20 = (unsigned int)v11;
LABEL_28:
    SepAuditFailed(v20);
    return v11;
  }
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v11 = -1073741659;
    goto LABEL_30;
  }
  v11 = SepProbeAndCaptureString_U((ULONG64)SubsystemName, (__int64)&P);
  if ( v11 < 0 )
  {
LABEL_18:
    v17 = v22;
    goto LABEL_19;
  }
  if ( ((unsigned __int8)Privileges & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  PrivilegeCount = Privileges->PrivilegeCount;
  v24 = PrivilegeCount;
  if ( PrivilegeCount >= 0x42 )
  {
    v11 = -1073741811;
    v12 = Object;
    goto LABEL_18;
  }
  v14 = 12 * (PrivilegeCount - 1) + 20;
  v26 = v14;
  if ( 12 * (PrivilegeCount - 1) != -20 )
  {
    v15 = (char *)Privileges + v14;
    if ( (unsigned __int64)v15 > MmUserProbeAddress || v15 < (char *)Privileges )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  PoolWithTag = (ULONG *)ExAllocatePoolWithTag(PagedPool, v14, 0x72506553u);
  v17 = PoolWithTag;
  v22 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Privileges, 12 * (PrivilegeCount - 1) + 20);
    *v17 = PrivilegeCount;
  }
  else
  {
    v11 = -1073741670;
  }
  v12 = Object;
LABEL_19:
  if ( v11 < 0 )
  {
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v12);
    if ( v11 != -1073741670 )
      return v11;
    v20 = 3221225626LL;
    goto LABEL_28;
  }
  v18 = P;
  SepAdtPrivilegeObjectAuditAlarm(
    (unsigned __int16 *)P,
    0LL,
    0LL,
    (__int64)HandleId,
    (__int64)v12,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)SubjectContext.ProcessAuditId,
    DesiredAccess,
    v17,
    AccessGranted);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  SeReleaseSubjectContext(&SubjectContext);
  ObfDereferenceObject(v12);
  return 0;
}
