/*
 * XREFs of ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x1C012C630
 * Callers:
 *     CreatePointerDeviceProcessEvents @ 0x1C012C5DC (CreatePointerDeviceProcessEvents.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C012C8FC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall CreatePointerDeviceProcessEvent(
        ACCESS_MASK AccessMask,
        int a2,
        BOOLEAN a3,
        unsigned __int16 *a4,
        void **a5)
{
  unsigned int v6; // r12d
  struct _ACL *v7; // rbx
  ULONG v8; // eax
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  void *v12; // rsi
  NTSTATUS v13; // r14d
  NTSTATUS v14; // eax
  ULONG v15; // eax
  void *v16; // rax
  void *v17; // rdi
  ULONG v18; // ebx
  ULONG v19; // r15d
  struct _ACL *v20; // rax
  struct _ACL *v21; // r14
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp-78h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY v29; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[256]; // [rsp+A0h] [rbp-60h] BYREF

  v6 = 0;
  v7 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)v29.Value = 0;
  *(_WORD *)&v29.Value[4] = 256;
  v8 = RtlLengthRequiredSid(1u);
  v9 = (void *)Win32AllocPoolWithQuota(v8, 1702064981LL);
  v12 = v9;
  v13 = -1073741801;
  if ( v9 )
  {
    *RtlSubAuthoritySid(v9, 0) = 18;
    v14 = RtlInitializeSid(v12, &IdentifierAuthority, 1u);
  }
  else
  {
    v14 = -1073741801;
  }
  if ( v14 >= 0 )
  {
    v15 = RtlLengthRequiredSid(1u);
    v16 = (void *)Win32AllocPoolWithQuota(v15, 1702064981LL);
    v17 = v16;
    if ( v16 )
    {
      *RtlSubAuthoritySid(v16, 0) = 0;
      v13 = RtlInitializeSid(v17, &v29, 1u);
    }
    if ( v13 >= 0 )
    {
      v18 = RtlLengthSid(v12);
      v19 = v18 + RtlLengthSid(v17) + 40;
      v20 = (struct _ACL *)Win32AllocPool(v19 + 40LL, 2020635477LL);
      v7 = v20;
      if ( v20 )
      {
        v21 = v20 + 5;
        if ( RtlCreateAcl(v20 + 5, v19, 2u) >= 0
          && RtlAddAccessAllowedAce(v21, 2u, AccessMask, v17) >= 0
          && RtlAddAccessAllowedAce(v21, 2u, 0x1F0003u, v12) >= 0
          && RtlCreateSecurityDescriptor(v7, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(v7, 1u, v21, 0) >= 0 )
        {
          if ( gSessionId )
          {
            if ( (int)StringCchPrintfW(
                        SourceString,
                        0x100uLL,
                        L"%ws\\%ld\\BaseNamedObjects\\%ws",
                        L"\\Sessions",
                        gSessionId,
                        a4) >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, SourceString);
              ObjectAttributes.ObjectName = &DestinationString;
              ObjectAttributes.Length = 48;
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Attributes = 192;
              ObjectAttributes.SecurityDescriptor = v7;
              ObjectAttributes.SecurityQualityOfService = 0LL;
              if ( ZwCreateEvent(a5, 0x1F0003u, &ObjectAttributes, (EVENT_TYPE)(a2 == 0), a3) >= 0 )
                v6 = 1;
            }
          }
        }
      }
    }
    if ( v17 )
      Win32FreePool(v17, v10, v11);
  }
  if ( v12 )
    Win32FreePool(v12, v10, v11);
  if ( v7 )
    Win32FreePool(v7, v10, v11);
  return v6;
}
