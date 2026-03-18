/*
 * XREFs of WerKernelSubmitReport @ 0x1C003B888
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C0054B94 (TelemetryData_SubmitReport.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FA40 (__security_check_cookie.c)
 *     memset @ 0x1C0010200 (memset.c)
 *     StringCchCopyNW @ 0x1C003B58C (StringCchCopyNW.c)
 *     WerStartSystemErrorHandler @ 0x1C003BDE4 (WerStartSystemErrorHandler.c)
 *     WerWaitForSystemErrorHandler @ 0x1C003BEEC (WerWaitForSystemErrorHandler.c)
 *     WerpAllocateAndInitializeSid @ 0x1C003BF94 (WerpAllocateAndInitializeSid.c)
 *     WerpFreeMem @ 0x1C003C1C8 (WerpFreeMem.c)
 *     WerpGetRegistryKey @ 0x1C003C1E0 (WerpGetRegistryKey.c)
 *     WerpParseKeyName @ 0x1C003C2C0 (WerpParseKeyName.c)
 */

__int64 __fastcall WerKernelSubmitReport(HANDLE KeyHandle)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int RegistryKey; // eax
  signed int v6; // ebx
  NTSTATUS v7; // eax
  char v8; // r14
  _DWORD *PoolWithTag; // rsi
  NTSTATUS started; // eax
  __int64 v11; // r9
  const CHAR *v12; // r8
  __int64 *v13; // rax
  size_t v14; // r9
  HRESULT v15; // eax
  unsigned __int16 v16; // bx
  __int64 v17; // r9
  const CHAR *v18; // r8
  size_t v19; // r9
  __int64 *v20; // rax
  int v21; // eax
  PULONG ResultLength; // [rsp+28h] [rbp-E0h]
  int v23; // [rsp+30h] [rbp-D8h]
  int v24; // [rsp+38h] [rbp-D0h]
  int v25; // [rsp+40h] [rbp-C8h]
  int v26; // [rsp+48h] [rbp-C0h]
  int v27; // [rsp+50h] [rbp-B8h]
  ULONG Length; // [rsp+68h] [rbp-A0h] BYREF
  size_t cchToCopy; // [rsp+6Ch] [rbp-9Ch] BYREF
  HANDLE KeyHandlea; // [rsp+78h] [rbp-90h] BYREF
  unsigned int SystemInformation; // [rsp+80h] [rbp-88h] BYREF
  int v32; // [rsp+84h] [rbp-84h]
  __int64 v33; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  STRSAFE_PCNZWCH pszSrc; // [rsp+98h] [rbp-70h] BYREF
  STRSAFE_PCNZWCH v36; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  int v40; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-38h]
  __int64 v42; // [rsp+D8h] [rbp-30h]
  int v43; // [rsp+E0h] [rbp-28h]
  __int128 v44; // [rsp+E8h] [rbp-20h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v46[10]; // [rsp+108h] [rbp+0h] BYREF
  _DWORD v47[352]; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v48[352]; // [rsp+6D8h] [rbp+5D0h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Handle = 0LL;
  v33 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  pszSrc = 0LL;
  v36 = 0LL;
  cchToCopy = 0LL;
  KeyHandlea = 0LL;
  memset(v46, 0, 0x48uLL);
  if ( !KeyHandle )
    return 3221225485LL;
  RegistryKey = WerpGetRegistryKey(KeyHandle, v2, v3, &KeyHandlea);
  if ( RegistryKey >= 0 )
  {
    ZwDeleteKey(KeyHandlea);
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
    v7 = ZwQueryKey(KeyHandle, KeyNameInformation, 0LL, 0, &Length);
    v6 = v7;
    if ( v7 != -2147483643 && v7 != -1073741789 )
    {
      DbgPrintEx(
        0x96u,
        0,
        "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed while determining the size with 0x%x\n",
        1008,
        v7);
      goto LABEL_49;
    }
    v8 = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (int)Length, 0x7765726Bu);
    if ( !PoolWithTag )
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR OOM\n", 1016);
      v6 = -1073741801;
      goto LABEL_49;
    }
    started = ZwQueryKey(KeyHandle, KeyNameInformation, PoolWithTag, Length, &Length);
    v6 = started;
    if ( started >= 0 )
    {
      started = WerpParseKeyName(
                  (int)PoolWithTag + 4,
                  *PoolWithTag >> 1,
                  (unsigned int)&pszSrc,
                  (unsigned int)&cchToCopy,
                  (__int64)&v36,
                  (__int64)&cchToCopy + 4);
      v6 = started;
      if ( started >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\WindowsErrorReportingServicePort");
        memset(v46, 0, 0x48uLL);
        v46[2] = 1400LL;
        v6 = WerpAllocateAndInitializeSid(
               &IdentifierAuthority,
               (int)ResultLength,
               v23,
               v24,
               v25,
               v26,
               v27,
               (__int64)&v33);
        if ( v6 < 0 )
          goto LABEL_48;
        started = WerStartSystemErrorHandler();
        v6 = started;
        if ( started >= 0 )
        {
          started = ZwQuerySystemInformation(MaxSystemInfoClass|SystemObjectInformation, &SystemInformation, 8u, 0LL);
          v6 = started;
          if ( started >= 0 )
          {
            started = WerWaitForSystemErrorHandler(SystemInformation);
            v6 = started;
            if ( started >= 0 )
            {
              if ( started == 258 )
              {
                started = -1073740973;
                v12 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler timed out, failing the call with 0x%x\n";
                v6 = -1073740973;
                v11 = 1108LL;
              }
              else
              {
                v44 = 0LL;
                v40 = 48;
                v41 = 0LL;
                v43 = 512;
                v42 = 0LL;
                if ( v32 == -1 )
                {
                  v13 = 0LL;
                }
                else
                {
                  v8 = 0;
                  v13 = &v37;
                  v37 = -10000LL * v32;
                }
                started = ZwAlpcConnectPort(
                            &Handle,
                            &DestinationString,
                            &v40,
                            v46,
                            0x20000,
                            v33,
                            0LL,
                            0LL,
                            0LL,
                            0LL,
                            v13);
                v6 = started;
                if ( started >= 0 )
                {
                  if ( started != 258 )
                  {
                    memset(v47, 0, 0x578uLL);
                    v14 = 15LL;
                    v47[0] = 91751760;
                    v47[10] = 1610612736;
                    LOWORD(v47[1]) = 0;
                    v47[12] = 0;
                    if ( (unsigned int)cchToCopy <= 0xF )
                      v14 = (unsigned int)cchToCopy;
                    v15 = StringCchCopyNW((STRSAFE_LPWSTR)&v47[14], 0x10uLL, pszSrc, v14);
                    v16 = v15;
                    if ( v15 >= 0 )
                    {
                      v19 = 31LL;
                      if ( HIDWORD(cchToCopy) <= 0x1F )
                        v19 = HIDWORD(cchToCopy);
                      v15 = StringCchCopyNW((STRSAFE_LPWSTR)&v47[22], 0x20uLL, v36, v19);
                      v16 = v15;
                      if ( v15 >= 0 )
                      {
                        memset(v48, 0, 0x578uLL);
                        v20 = &v37;
                        v48[0] = 91751760;
                        v38 = 1400LL;
                        if ( v8 )
                          v20 = 0LL;
                        v21 = ZwAlpcSendWaitReceivePort(Handle, 0LL, v47, 0LL, v48, &v38, 0LL, v20);
                        v6 = v21;
                        if ( v21 < 0 || v21 == 258 )
                        {
                          DbgPrintEx(
                            0x96u,
                            0,
                            "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcSendWaitReceivePort failed\n",
                            1205);
                        }
                        else if ( v48[12] >= 0 )
                        {
                          v6 = 0;
                        }
                        else
                        {
                          DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Service returned failure\n", 1211);
                          v6 = -1073741823;
                        }
                        goto LABEL_48;
                      }
                      v17 = 1184LL;
                      v18 = "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for id with 0x%x\n";
                    }
                    else
                    {
                      v17 = 1170LL;
                      v18 = "WERLIVEKERNELREPORTING:%u: ERROR StringCchCopy failed for key with 0x%x\n";
                    }
                    LODWORD(ResultLength) = v15;
                    DbgPrintEx(0x96u, 0, v18, v17, ResultLength);
                    v6 = v16 | 0x80070000;
LABEL_48:
                    WerpFreeMem(PoolWithTag);
                    goto LABEL_49;
                  }
                  started = -1073740973;
                  v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort timed out, failing the call with 0x%x\n";
                  v6 = -1073740973;
                  v11 = 1145LL;
                }
                else
                {
                  v11 = 1138LL;
                  v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwAlpcConnectPort failed with 0x%x\n";
                }
              }
            }
            else
            {
              v11 = 1101LL;
              v12 = "WERLIVEKERNELREPORTING:%u: ERROR WerWaitForSystemErrorHandler failed with 0x%x\n";
            }
          }
          else
          {
            v11 = 1094LL;
            v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQuerySysInfo(ErrorPortTimeouts) failed with 0x%x\n";
          }
        }
        else
        {
          v11 = 1080LL;
          v12 = "WERLIVEKERNELREPORTING:%u: ERROR WerStartSystemErrorHandler failed with 0x%x\n";
        }
      }
      else
      {
        v11 = 1047LL;
        v12 = "WERLIVEKERNELREPORTING:%u: ERROR ParseKeyName failed with 0x%x\n";
      }
    }
    else
    {
      v11 = 1034LL;
      v12 = "WERLIVEKERNELREPORTING:%u: ERROR ZwQueryKey failed with 0x%x\n";
    }
    LODWORD(ResultLength) = started;
    DbgPrintEx(0x96u, 0, v12, v11, ResultLength);
    goto LABEL_48;
  }
  DbgPrintEx(
    0x96u,
    0,
    "WERLIVEKERNELREPORTING:%u: ERROR WerpGetRegistryKey failed for the busy key 0x%x\n",
    985,
    RegistryKey);
  v6 = -2147019873;
LABEL_49:
  if ( KeyHandlea )
  {
    ZwClose(KeyHandlea);
    KeyHandlea = 0LL;
  }
  if ( v33 )
    WerpFreeMem(v33);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v6;
}
