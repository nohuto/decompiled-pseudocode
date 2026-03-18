/*
 * XREFs of ObpAdjustCreatorAccessState @ 0x1404D0C60
 * Callers:
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObpGrantAccess @ 0x1404D3D28 (ObpGrantAccess.c)
 * Callees:
 *     SeComputeCreatorDeniedRights @ 0x14004EE30 (SeComputeCreatorDeniedRights.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SePrivilegeCheck @ 0x140432040 (SePrivilegeCheck.c)
 *     RtlMapGenericMask @ 0x140435530 (RtlMapGenericMask.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404359A8 (SePrivilegedServiceAuditAlarm.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404CFD70 (ObpReferenceSecurityDescriptor.c)
 *     SeAppendPrivileges @ 0x14052D500 (SeAppendPrivileges.c)
 */

__int64 __fastcall ObpAdjustCreatorAccessState(PACCESS_STATE AccessState, __int64 a2, __int64 a3, __int64 a4)
{
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  KPROCESSOR_MODE v8; // r14
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+20h] [rbp-48h] BYREF

  p_RemainingDesiredAccess = &AccessState->RemainingDesiredAccess;
  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  v8 = a2;
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
    *p_RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
  if ( (*p_RemainingDesiredAccess & 0xF0000000) != 0 )
    RtlMapGenericMask(&AccessState->RemainingDesiredAccess, (PGENERIC_MAPPING)(a3 + 76));
  if ( (*p_RemainingDesiredAccess & 0x1000000) != 0 )
  {
    RequiredPrivileges.Privilege[0].Attributes = 0;
    RequiredPrivileges.Privilege[0].Luid = SeSecurityPrivilege;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    if ( !SePrivilegeCheck(&RequiredPrivileges, &AccessState->SubjectSecurityContext, v8) )
    {
      SePrivilegedServiceAuditAlarm(
        0LL,
        (__int64 *)&AccessState->SubjectSecurityContext,
        &RequiredPrivileges.PrivilegeCount,
        0);
      return 3221225569LL;
    }
    *p_RemainingDesiredAccess &= ~0x1000000u;
    AccessState->PreviouslyGrantedAccess |= 0x1000000u;
    SeAppendPrivileges(AccessState, &RequiredPrivileges);
  }
  AccessState->PreviouslyGrantedAccess |= *p_RemainingDesiredAccess;
  *p_RemainingDesiredAccess = 0;
  AccessState->PreviouslyGrantedAccess &= *(_DWORD *)(a3 + 92) | 0x1000000;
  v10 = ObpReferenceSecurityDescriptor(a4 - 48, a2, a3, a4);
  AccessState->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                           &AccessState->SubjectSecurityContext,
                                                           (__int64)AccessState,
                                                           AccessState->PreviouslyGrantedAccess,
                                                           v10);
  if ( v10 )
    ObDereferenceSecurityDescriptor(v10, 1u, v11, v12);
  return 0LL;
}
