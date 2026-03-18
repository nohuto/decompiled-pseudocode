/*
 * XREFs of ?DxgkNetDispAccessCheck@@YAJPEAVDXGPROCESS@@@Z @ 0x1C00209A8
 * Callers:
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C014F270 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStartMiracastDisplayDevice @ 0x1C014F450 (DxgkNetDispStartMiracastDisplayDevice.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C014F670 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkNetDispAccessCheck(struct DXGPROCESS *a1)
{
  NTSTATUS Acl; // ebx
  struct _ACL *v3; // rdi
  ULONG v4; // eax
  void *v5; // rax
  void *v6; // rsi
  ULONG v7; // ebx
  struct _ACL *v8; // rax
  BOOLEAN v9; // al
  int AccessStatus; // [rsp+50h] [rbp-29h] BYREF
  DWORD GrantedAccess; // [rsp+54h] [rbp-25h] BYREF
  _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-21h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+78h] [rbp-1h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A0h] [rbp+27h] BYREF
  struct _GENERIC_MAPPING GenericMapping; // [rsp+A8h] [rbp+2Fh] BYREF

  Acl = 0;
  if ( !a1
    || (!g_OSTestSigningEnabled || (unsigned int)PsGetCurrentProcessSessionId())
    && (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)a1 + 9) + 224LL))(0LL) )
  {
    v3 = 0LL;
    SeCaptureSubjectContext(&SubjectContext);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    v4 = RtlLengthRequiredSid(6u);
    v5 = operator new(v4, 0x4B677844u, PagedPool);
    v6 = v5;
    if ( !v5 )
      goto LABEL_13;
    *(_DWORD *)IdentifierAuthority.Value = 0;
    *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
    RtlInitializeSid(v5, &IdentifierAuthority, 6u);
    *RtlSubAuthoritySid(v6, 0) = 80;
    *RtlSubAuthoritySid(v6, 1u) = 1495648203;
    *RtlSubAuthoritySid(v6, 2u) = -1791465185;
    *RtlSubAuthoritySid(v6, 3u) = 1597754693;
    *RtlSubAuthoritySid(v6, 4u) = -849792585;
    *RtlSubAuthoritySid(v6, 5u) = 1316708627;
    v7 = RtlLengthSid(v6) + 20;
    v8 = (struct _ACL *)operator new(v7, 0x4B677844u, PagedPool);
    v3 = v8;
    if ( v8 )
    {
      Acl = RtlCreateAcl(v8, v7, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v3, 2u, 0x1F0000u, v6);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v3, 0);
          if ( Acl >= 0 )
          {
            GenericMapping.GenericAll = 2031616;
            GenericMapping.GenericRead = 0x20000;
            GenericMapping.GenericWrite = 0x20000;
            GenericMapping.GenericExecute = 0x20000;
            v9 = SeAccessCheck(
                   SecurityDescriptor,
                   &SubjectContext,
                   0,
                   0x1F0000u,
                   0,
                   0LL,
                   &GenericMapping,
                   1,
                   &GrantedAccess,
                   &AccessStatus);
            Acl = AccessStatus;
            if ( v9 )
              Acl = 0;
          }
        }
      }
    }
    else
    {
LABEL_13:
      Acl = -1073741801;
    }
    SeReleaseSubjectContext(&SubjectContext);
    if ( v6 )
      operator delete(v6);
    if ( v3 )
      operator delete(v3);
  }
  return (unsigned int)Acl;
}
