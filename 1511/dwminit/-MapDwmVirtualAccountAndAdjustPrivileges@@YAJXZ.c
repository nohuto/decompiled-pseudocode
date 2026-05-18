/*
 * XREFs of ?MapDwmVirtualAccountAndAdjustPrivileges@@YAJXZ @ 0x180001C10
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002A90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001228 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001A48 (-LsaCollisionResult@@YA_NW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z @ 0x180001B0C (-AddSidMappingToLsa@@YAJPEAU_UNICODE_STRING@@0PEAXPEAW4_LSA_SID_NAME_MAPPING_OPERATION_ERROR@@@Z.c)
 *     ?DoStackCapture@@YAXJI@Z @ 0x180003D40 (-DoStackCapture@@YAXJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003DE4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800067F0 (__security_check_cookie.c)
 */

__int64 MapDwmVirtualAccountAndAdjustPrivileges(void)
{
  int v0; // eax
  unsigned int v1; // ebx
  unsigned int v2; // edx
  int v3; // ecx
  NTSTATUS v4; // ebx
  int v5; // r9d
  NTSTATUS v6; // ebx
  NTSTATUS v7; // ebx
  ULONG SubAuthority2; // [rsp+28h] [rbp-49h]
  int v10; // [rsp+68h] [rbp-9h] BYREF
  PSID v11; // [rsp+70h] [rbp-1h] BYREF
  PSID Sid; // [rsp+78h] [rbp+7h] BYREF
  PSID v13; // [rsp+80h] [rbp+Fh] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp+17h] BYREF
  struct _UNICODE_STRING v15; // [rsp+98h] [rbp+27h] BYREF
  struct _UNICODE_STRING v16; // [rsp+A8h] [rbp+37h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B8h] [rbp+47h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Sid = 0LL;
  v13 = 0LL;
  v11 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v0 = StringCchPrintfW(gwszDwmAccountName, 30LL, L"DWM-%d", NtCurrentPeb()->SessionId);
  v1 = v0;
  if ( v0 < 0 )
  {
    if ( !&dword_180008E14 )
    {
      v2 = 550;
LABEL_4:
      v3 = v0;
LABEL_5:
      DoStackCapture(v3, v2);
      goto LABEL_36;
    }
    SubAuthority2 = 550;
LABEL_34:
    v5 = v0;
    goto LABEL_35;
  }
  RtlInitUnicodeString(&DestinationString, L"Window Manager");
  RtlInitUnicodeString(&v15, L"Window Manager Group");
  RtlInitUnicodeString(&v16, gwszDwmAccountName);
  v4 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 1u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &Sid);
  if ( v4 >= 0 )
  {
    v6 = RtlAllocateAndInitializeSid(&IdentifierAuthority, 2u, 0x5Au, 0, 0, 0, 0, 0, 0, 0, &v11);
    if ( v6 >= 0 )
    {
      v7 = RtlAllocateAndInitializeSid(
             &IdentifierAuthority,
             3u,
             0x5Au,
             0,
             NtCurrentPeb()->SessionId,
             0,
             0,
             0,
             0,
             0,
             &v13);
      if ( v7 >= 0 )
      {
        v0 = AddSidMappingToLsa(&DestinationString, 0LL, Sid, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v10);
        v1 = v0;
        if ( v0 >= 0 )
        {
          if ( LsaCollisionResult(v10)
            || (v0 = AddSidMappingToLsa(
                       &DestinationString,
                       &v15,
                       v11,
                       (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v10),
                v1 = v0,
                v0 >= 0) )
          {
            v0 = AddSidMappingToLsa(&DestinationString, &v16, v13, (enum _LSA_SID_NAME_MAPPING_OPERATION_ERROR *)&v10);
            v1 = v0;
            if ( v0 >= 0 )
              goto LABEL_36;
            if ( !&dword_180008E14 )
            {
              v2 = 611;
              goto LABEL_4;
            }
            SubAuthority2 = 611;
          }
          else
          {
            if ( !&dword_180008E14 )
            {
              v2 = 607;
              goto LABEL_4;
            }
            SubAuthority2 = 607;
          }
        }
        else
        {
          if ( !&dword_180008E14 )
          {
            v2 = 595;
            goto LABEL_4;
          }
          SubAuthority2 = 595;
        }
        goto LABEL_34;
      }
      v1 = v7 | 0x10000000;
      if ( !&dword_180008E14 )
      {
        v2 = 593;
        goto LABEL_10;
      }
      SubAuthority2 = 593;
    }
    else
    {
      v1 = v6 | 0x10000000;
      if ( !&dword_180008E14 )
      {
        v2 = 580;
        goto LABEL_10;
      }
      SubAuthority2 = 580;
    }
  }
  else
  {
    v1 = v4 | 0x10000000;
    if ( !&dword_180008E14 )
    {
      v2 = 567;
LABEL_10:
      v3 = v1;
      goto LABEL_5;
    }
    SubAuthority2 = 567;
  }
  v5 = v1;
LABEL_35:
  MilInstrumentationCheckHR(4u, &dword_180008E14, 1u, v5, SubAuthority2);
LABEL_36:
  if ( v13 )
    RtlFreeSid(v13);
  if ( v11 )
    RtlFreeSid(v11);
  if ( Sid )
    RtlFreeSid(Sid);
  return v1;
}
