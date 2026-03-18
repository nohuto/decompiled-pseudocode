/*
 * XREFs of xxxConnectService @ 0x1C00EB590
 * Callers:
 *     xxxResolveDesktop @ 0x1C00D93C0 (xxxResolveDesktop.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C006FA40 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     xxxCreateDesktopEx @ 0x1C00D9F40 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00EA280 (xxxCreateWindowStation.c)
 */

__int64 __fastcall xxxConnectService(struct _UNICODE_STRING *a1, HANDLE *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 SecurityDescriptor; // r14
  _QWORD *v7; // r15
  int Desktop; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  HANDLE v20; // r12
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  HANDLE TokenHandle; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v29; // [rsp+60h] [rbp-E8h]
  int v30; // [rsp+68h] [rbp-E0h] BYREF
  HANDLE v31; // [rsp+70h] [rbp-D8h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp-D0h]
  int v33; // [rsp+80h] [rbp-C8h]
  __int128 v34; // [rsp+88h] [rbp-C0h]
  __int64 v35; // [rsp+98h] [rbp-B0h]
  _QWORD *v36; // [rsp+A0h] [rbp-A8h]
  __int64 v37; // [rsp+A8h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-90h] BYREF
  _QWORD v39[3]; // [rsp+C8h] [rbp-80h] BYREF
  _QWORD v40[3]; // [rsp+E0h] [rbp-68h] BYREF
  _QWORD v41[10]; // [rsp+F8h] [rbp-50h] BYREF
  ULONG TokenInformationLength; // [rsp+168h] [rbp+20h] BYREF

  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  v7 = (_QWORD *)Win32AllocPool(TokenInformationLength, 1869902677LL);
  v36 = v7;
  if ( !v7 )
  {
    ZwClose(TokenHandle);
LABEL_23:
    Desktop = -1073741801;
    goto LABEL_14;
  }
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, v7, TokenInformationLength, &TokenInformationLength);
  ZwClose(TokenHandle);
  if ( Desktop >= 0 )
  {
    v29 = *v7;
    v5 = AllocAce(0LL, 0LL, 0LL, 983150LL, v29, &TokenInformationLength);
    if ( v5 )
    {
      LOBYTE(v10) = 13;
      v11 = AllocAce(v5, 0LL, v10, 983247LL, v29, &TokenInformationLength);
      if ( v11 )
      {
        v5 = v11;
        v12 = AllocAce(v11, 0LL, 0LL, 256LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
        if ( v12 )
        {
          v5 = v12;
          LOBYTE(v10) = 13;
          v13 = AllocAce(v12, 0LL, v10, 193LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
          if ( v13 )
          {
            v5 = v13;
            v35 = v13;
            SecurityDescriptor = CreateSecurityDescriptor(v13, TokenInformationLength, 0LL);
            v37 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              PushW32ThreadLock((__int64)v7, v41, (__int64)Win32FreePool, v14);
              PushW32ThreadLock(v5, v40, (__int64)Win32FreePool, v15);
              PushW32ThreadLock(SecurityDescriptor, v39, (__int64)Win32FreePool, v16);
              v30 = 48;
              v31 = 0LL;
              v33 = 128;
              p_DestinationString = a1;
              v34 = (unsigned __int64)SecurityDescriptor;
              Desktop = xxxCreateWindowStation((__int64)&v30, 0, 0x2000000u, 0LL, 0, 0, 0LL, 0LL, 0, &Handle);
              v20 = Handle;
              if ( Desktop < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, L"Default");
                v30 = 48;
                v31 = v20;
                v33 = 192;
                p_DestinationString = &DestinationString;
                v34 = 0LL;
                Desktop = xxxCreateDesktopEx((__int64)&v30, 0, 0x2000000LL, 0, a2, 1);
                if ( Desktop < 0 )
                  ObCloseHandle(v20, 1);
                else
                  *a3 = v20;
              }
              PopW32ThreadLock(v39, v17, v18, v19);
              PopW32ThreadLock(v40, v21, v22, v23);
              PopW32ThreadLock(v41, v24, v25, v26);
              goto LABEL_14;
            }
          }
        }
      }
    }
    goto LABEL_23;
  }
LABEL_14:
  if ( v7 )
    Win32FreePool(v7, v9, v10);
  if ( v5 )
    Win32FreePool(v5, v9, v10);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor, v9, v10);
  return (unsigned int)Desktop;
}
