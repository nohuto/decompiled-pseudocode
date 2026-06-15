/*
 * XREFs of ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x140003548
 * Callers:
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x1400031B8 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400037A8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 *     ?AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z @ 0x140025ED4 (-AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiCreatePort(HandleSendReceiveServer *this, PCWSTR *a2)
{
  int v4; // r13d
  unsigned __int16 *v5; // rax
  wchar_t *v6; // rbx
  ULONG v7; // eax
  signed int DynamicPortName; // ebx
  int inited; // esi
  PSECURITY_DESCRIPTOR v10; // r14
  int v11; // r15d
  int v12; // eax
  HandleSendReceiveServer *v13; // rcx
  unsigned int v14; // r8d
  signed int v16; // eax
  signed int LastError; // eax
  __int64 v18; // [rsp+0h] [rbp-C9h] BYREF
  __int64 v19; // [rsp+28h] [rbp-A1h]
  __int64 v20; // [rsp+30h] [rbp-99h] BYREF
  int v21; // [rsp+38h] [rbp-91h] BYREF
  __int64 v22; // [rsp+40h] [rbp-89h]
  _UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-81h]
  int v24; // [rsp+50h] [rbp-79h]
  PSECURITY_DESCRIPTOR v25; // [rsp+58h] [rbp-71h]
  __int64 v26; // [rsp+60h] [rbp-69h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-61h] BYREF
  ULONG SecurityDescriptorSize; // [rsp+70h] [rbp-59h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v30[16]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-29h]

  LODWORD(v20) = 0;
  v4 = 0;
  if ( !a2 )
    return (unsigned int)-2147024809;
  v5 = (unsigned __int16 *)CoTaskMemAlloc(0x80uLL);
  *a2 = v5;
  if ( !v5 )
    return (unsigned int)-2147024882;
  *v5 = 0;
  v6 = (wchar_t *)*a2;
  if ( &v18 == (__int64 *)-48LL )
  {
    DynamicPortName = -2147024809;
  }
  else
  {
    HIDWORD(v20) = MEMORY[0x7FFE0320];
    do
      v7 = RtlRandomEx((PULONG)&v20 + 1);
    while ( !v7 );
    LODWORD(v19) = v7;
    LODWORD(v20) = v7;
    DynamicPortName = StringCchPrintfW(
                        v6,
                        0x40uLL,
                        L"%ws%ws%ld",
                        L"\\BaseNamedObjects\\",
                        L"AudioEngineDuplicateHandleApiPort",
                        v19,
                        v20);
  }
  if ( DynamicPortName >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, *a2);
    if ( inited < 0 )
    {
LABEL_28:
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(inited);
      LastError = GetLastError();
      DynamicPortName = LastError;
      if ( LastError > 0 )
        DynamicPortName = (unsigned __int16)LastError | 0x80070000;
      CoTaskMemFree((LPVOID)*a2);
      *a2 = 0LL;
      return (unsigned int)DynamicPortName;
    }
    v10 = 0LL;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;0x1;;;WD)(A;;0x1;;;S-1-15-2-1)",
           1u,
           &SecurityDescriptor,
           &SecurityDescriptorSize) )
    {
      v10 = SecurityDescriptor;
      DynamicPortName = 0;
    }
    else
    {
      v16 = GetLastError();
      DynamicPortName = v16;
      if ( v16 > 0 )
        DynamicPortName = (unsigned __int16)v16 | 0x80070000;
      if ( DynamicPortName < 0 )
      {
LABEL_15:
        if ( inited >= 0 )
          return (unsigned int)DynamicPortName;
        goto LABEL_28;
      }
    }
    v22 = 0LL;
    v21 = 48;
    v24 = 64;
    p_DestinationString = &DestinationString;
    v25 = v10;
    v26 = 0LL;
    memset_0(v30, 0, 0x48uLL);
    v31 = 48LL;
    v11 = 3;
    do
    {
      --v11;
      v12 = NtAlpcCreatePort((char *)this + 8, &v21, v30);
      inited = v12;
      if ( v12 != -1073741771 && v12 != 0x40000000 )
        break;
      DynamicPortName = HandleSendReceiveServer::AeServerApiCreateDynamicPortName(
                          v13,
                          (unsigned __int16 *)*a2,
                          v14,
                          ++v4,
                          (unsigned int *)&v20);
      if ( DynamicPortName < 0 )
        break;
      if ( RtlInitUnicodeStringEx(&DestinationString, *a2) < 0 )
        break;
      v22 = 0LL;
      v26 = 0LL;
      v21 = 48;
      v24 = 64;
      p_DestinationString = &DestinationString;
      v25 = v10;
    }
    while ( v11 > 0 );
    LocalFree(v10);
    goto LABEL_15;
  }
  return (unsigned int)DynamicPortName;
}
