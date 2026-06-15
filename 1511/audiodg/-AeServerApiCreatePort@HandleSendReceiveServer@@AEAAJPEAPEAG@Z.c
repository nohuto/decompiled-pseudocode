/*
 * XREFs of ?AeServerApiCreatePort@HandleSendReceiveServer@@AEAAJPEAPEAG@Z @ 0x140016324
 * Callers:
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x140016538 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z @ 0x1400162A0 (-AeServerApiCreateDynamicPortName@HandleSendReceiveServer@@AEAAJPEAGKHPEAK@Z.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     memset_0 @ 0x140019034 (memset_0.c)
 */

__int64 __fastcall HandleSendReceiveServer::AeServerApiCreatePort(HandleSendReceiveServer *this, unsigned __int16 **a2)
{
  int v4; // r12d
  unsigned __int16 *v5; // rax
  HandleSendReceiveServer *v6; // rcx
  ULONG v7; // r8d
  int v8; // ebx
  int inited; // esi
  PSECURITY_DESCRIPTOR v10; // r14
  int v11; // r15d
  int v12; // eax
  HandleSendReceiveServer *v13; // rcx
  ULONG v14; // r8d
  signed int v16; // eax
  signed int LastError; // eax
  unsigned int v18; // [rsp+30h] [rbp-99h] BYREF
  int v19; // [rsp+38h] [rbp-91h] BYREF
  __int64 v20; // [rsp+40h] [rbp-89h]
  _UNICODE_STRING *p_DestinationString; // [rsp+48h] [rbp-81h]
  int v22; // [rsp+50h] [rbp-79h]
  PSECURITY_DESCRIPTOR v23; // [rsp+58h] [rbp-71h]
  __int64 v24; // [rsp+60h] [rbp-69h]
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+68h] [rbp-61h] BYREF
  ULONG SecurityDescriptorSize; // [rsp+70h] [rbp-59h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  _BYTE v28[16]; // [rsp+90h] [rbp-39h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-29h]

  v18 = 0;
  v4 = 0;
  if ( !a2 )
    return (unsigned int)-2147024809;
  v5 = (unsigned __int16 *)CoTaskMemAlloc(0x80uLL);
  *a2 = v5;
  if ( !v5 )
    return (unsigned int)-2147024882;
  *v5 = 0;
  v8 = HandleSendReceiveServer::AeServerApiCreateDynamicPortName(v6, *a2, v7, 0, &v18);
  if ( v8 >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&DestinationString, *a2);
    if ( inited < 0 )
    {
LABEL_23:
      RtlSetLastWin32ErrorAndNtStatusFromNtStatus(inited);
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      CoTaskMemFree(*a2);
      *a2 = 0LL;
      return (unsigned int)v8;
    }
    v10 = 0LL;
    if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
           L"D:(A;;0x1;;;WD)(A;;0x1;;;S-1-15-2-1)",
           1u,
           &SecurityDescriptor,
           &SecurityDescriptorSize) )
    {
      v10 = SecurityDescriptor;
      v8 = 0;
    }
    else
    {
      v16 = GetLastError();
      v8 = v16;
      if ( v16 > 0 )
        v8 = (unsigned __int16)v16 | 0x80070000;
      if ( v8 < 0 )
      {
LABEL_11:
        if ( inited >= 0 )
          return (unsigned int)v8;
        goto LABEL_23;
      }
    }
    v20 = 0LL;
    v19 = 48;
    v22 = 64;
    p_DestinationString = &DestinationString;
    v23 = v10;
    v24 = 0LL;
    memset_0(v28, 0, 0x48uLL);
    v29 = 48LL;
    v11 = 3;
    do
    {
      --v11;
      v12 = NtAlpcCreatePort((char *)this + 8, &v19, v28);
      inited = v12;
      if ( v12 != -1073741771 && v12 != 0x40000000 )
        break;
      v8 = HandleSendReceiveServer::AeServerApiCreateDynamicPortName(v13, *a2, v14, ++v4, &v18);
      if ( v8 < 0 )
        break;
      if ( RtlInitUnicodeStringEx(&DestinationString, *a2) < 0 )
        break;
      v20 = 0LL;
      v24 = 0LL;
      v19 = 48;
      v22 = 64;
      p_DestinationString = &DestinationString;
      v23 = v10;
    }
    while ( v11 > 0 );
    LocalFree(v10);
    goto LABEL_11;
  }
  return (unsigned int)v8;
}
