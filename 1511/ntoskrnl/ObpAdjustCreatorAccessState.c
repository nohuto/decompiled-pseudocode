/*
 * XREFs of ObpAdjustCreatorAccessState @ 0x1404A95A0
 * Callers:
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     ObpGrantAccess @ 0x1404705B8 (ObpGrantAccess.c)
 * Callees:
 *     SeComputeCreatorDeniedRights @ 0x1400426B0 (SeComputeCreatorDeniedRights.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptor @ 0x140421050 (ObpReferenceSecurityDescriptor.c)
 *     RtlMapGenericMask @ 0x140472860 (RtlMapGenericMask.c)
 *     SePrivilegedServiceAuditAlarm @ 0x140472A30 (SePrivilegedServiceAuditAlarm.c)
 *     SePrivilegeCheck @ 0x140472B50 (SePrivilegeCheck.c)
 *     SeAppendPrivileges @ 0x1404A3E30 (SeAppendPrivileges.c)
 */

__int64 __fastcall ObpAdjustCreatorAccessState(PACCESS_STATE AccessState, KPROCESSOR_MODE a2, __int64 a3, __int64 a4)
{
  ACCESS_MASK *p_RemainingDesiredAccess; // rbx
  ACCESS_MASK RemainingDesiredAccess; // eax
  unsigned __int64 v10; // rbx
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+20h] [rbp-48h] BYREF

  p_RemainingDesiredAccess = &AccessState->RemainingDesiredAccess;
  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
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
    if ( !SePrivilegeCheck(&RequiredPrivileges, &AccessState->SubjectSecurityContext, a2) )
    {
      SePrivilegedServiceAuditAlarm(0, (__int64 *)&AccessState->SubjectSecurityContext, (__int64)&RequiredPrivileges, 0);
      return 3221225569LL;
    }
    *p_RemainingDesiredAccess &= ~0x1000000u;
    AccessState->PreviouslyGrantedAccess |= 0x1000000u;
    SeAppendPrivileges(AccessState, &RequiredPrivileges);
  }
  AccessState->PreviouslyGrantedAccess |= *p_RemainingDesiredAccess;
  *p_RemainingDesiredAccess = 0;
  AccessState->PreviouslyGrantedAccess &= *(_DWORD *)(a3 + 92) | 0x1000000;
  v10 = ObpReferenceSecurityDescriptor(a4 - 48);
  AccessState->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                           &AccessState->SubjectSecurityContext,
                                                           (__int64)AccessState,
                                                           AccessState->PreviouslyGrantedAccess,
                                                           v10);
  if ( v10 )
    ObDereferenceSecurityDescriptor(v10, 1u);
  return 0LL;
}
