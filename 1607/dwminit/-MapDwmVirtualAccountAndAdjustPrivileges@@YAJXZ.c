/*
 * XREFs of ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001BE0
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800011D8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001A18 (-LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001ADC (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003E40 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003F6C (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180006E30 (__security_check_cookie.c)
 */

__int64 MapDwmVirtualAccountAndAdjustPrivileges(void)
{
  int v0; // eax
  unsigned int v1; // ebx
  NTSTATUS v2; // ebx
  unsigned int v3; // edx
  int v4; // ecx
  int v5; // r9d
  NTSTATUS v6; // ebx
  NTSTATUS v7; // ebx
  ULONG SubAuthority2; // [rsp+28h] [rbp-49h]
  int v10; // [rsp+68h] [rbp-9h] BYREF
  PSID v11; // [rsp+70h] [rbp-1h] BYREF
  PSID v12; // [rsp+78h] [rbp+7h] BYREF
  PSID Sid; // [rsp+80h] [rbp+Fh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp+17h] BYREF
  struct _UNICODE_STRING v15; // [rsp+98h] [rbp+27h] BYREF
  struct _UNICODE_STRING v16; // [rsp+A8h] [rbp+37h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B8h] [rbp+47h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Sid = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v0 = StringCchPrintfW(gwszDwmAccountName, 30LL, L"DWM-%d", NtCurrentPeb()->SessionId);
  v1 = v0;
  if ( v0 < 0 )
  {
    if ( !&dword_18000A120 )
    {
      v3 = 572;
      goto LABEL_31;
    }
    SubAuthority2 = 572;
    goto LABEL_34;
  }
  RtlInitUnicodeString(&DestinationString, L"Window Manager");
  RtlInitUnicodeString(&v15, L"Window Manager Group");
  RtlInitUnicodeString(&v16, gwszDwmAccountName);
  v2 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v2 < 0 )
  {
    v1 = v2 | 0x10000000;
    if ( !&dword_18000A120 )
    {
      v3 = 589;
LABEL_5:
      v4 = v1;
LABEL_32:
      DoStackCapture(v4, v3);
      goto LABEL_36;
    }
    SubAuthority2 = 589;
    goto LABEL_7;
  }
  v6 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &v12);
  if ( v6 < 0 )
  {
    v1 = v6 | 0x10000000;
    if ( !&dword_18000A120 )
    {
      v3 = 602;
      goto LABEL_5;
    }
    SubAuthority2 = 602;
    goto LABEL_7;
  }
  v7 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 3u, 0x5Au, 0, NtCurrentPeb()->SessionId, 0, 0, 0, 0, 0, &v11);
  if ( v7 >= 0 )
  {
    v0 = AddSidMappingToLsa(&DestinationString, 0LL, Sid, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v10);
    v1 = v0;
    if ( v0 < 0 )
    {
      if ( !&dword_18000A120 )
      {
        v3 = 617;
        goto LABEL_31;
      }
      SubAuthority2 = 617;
    }
    else if ( LsaCollisionResult(v10)
           || (v0 = AddSidMappingToLsa(
                      &DestinationString,
                      &v15,
                      v12,
                      (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v10),
               v1 = v0,
               v0 >= 0) )
    {
      v0 = AddSidMappingToLsa(&DestinationString, &v16, v11, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v10);
      v1 = v0;
      if ( v0 >= 0 )
        goto LABEL_36;
      if ( !&dword_18000A120 )
      {
        v3 = 633;
        goto LABEL_31;
      }
      SubAuthority2 = 633;
    }
    else
    {
      if ( !&dword_18000A120 )
      {
        v3 = 629;
LABEL_31:
        v4 = v0;
        goto LABEL_32;
      }
      SubAuthority2 = 629;
    }
LABEL_34:
    v5 = v0;
    goto LABEL_35;
  }
  v1 = v7 | 0x10000000;
  if ( !&dword_18000A120 )
  {
    v3 = 615;
    goto LABEL_5;
  }
  SubAuthority2 = 615;
LABEL_7:
  v5 = v1;
LABEL_35:
  MilInstrumentationCheckHR(4u, &dword_18000A120, 1u, v5, SubAuthority2);
LABEL_36:
  if ( v11 )
    RtlFreeSid(v11);
  if ( v12 )
    RtlFreeSid(v12);
  if ( Sid )
    RtlFreeSid(Sid);
  return v1;
}
