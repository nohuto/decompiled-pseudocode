/*
 * XREFs of xxxConnectService @ 0x1C015A9D0
 * Callers:
 *     xxxResolveDesktop @ 0x1C00DB260 (xxxResolveDesktop.c)
 * Callees:
 *     PopW32ThreadLock @ 0x1C005BC70 (PopW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     xxxCreateDesktopEx @ 0x1C00DBDE0 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C0138EEC (xxxCreateWindowStation.c)
 */

__int64 __fastcall xxxConnectService(struct _UNICODE_STRING *a1, HANDLE *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 SecurityDescriptor; // r14
  _QWORD *v7; // r15
  int Desktop; // ebx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  HANDLE v14; // r12
  HANDLE TokenHandle; // [rsp+50h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-F0h] BYREF
  __int64 v17; // [rsp+60h] [rbp-E8h]
  int v18; // [rsp+68h] [rbp-E0h] BYREF
  HANDLE v19; // [rsp+70h] [rbp-D8h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+78h] [rbp-D0h]
  int v21; // [rsp+80h] [rbp-C8h]
  __int128 v22; // [rsp+88h] [rbp-C0h]
  __int64 v23; // [rsp+98h] [rbp-B0h]
  __int64 v24; // [rsp+A0h] [rbp-A8h]
  _QWORD *v25; // [rsp+A8h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-90h] BYREF
  _QWORD v27[3]; // [rsp+C8h] [rbp-80h] BYREF
  _QWORD v28[3]; // [rsp+E0h] [rbp-68h] BYREF
  _QWORD v29[10]; // [rsp+F8h] [rbp-50h] BYREF
  ULONG TokenInformationLength; // [rsp+168h] [rbp+20h] BYREF

  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  v7 = (_QWORD *)Win32AllocPool(TokenInformationLength, 1869902677LL);
  v25 = v7;
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
    v17 = *v7;
    v5 = AllocAce(0LL, 0LL, 0LL, 983150LL, v17, &TokenInformationLength);
    if ( v5 )
    {
      LOBYTE(v9) = 13;
      v10 = AllocAce(v5, 0LL, v9, 983247LL, v17, &TokenInformationLength);
      if ( v10 )
      {
        v5 = v10;
        v11 = AllocAce(v10, 0LL, 0LL, 256LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
        if ( v11 )
        {
          v5 = v11;
          LOBYTE(v12) = 13;
          v13 = AllocAce(v11, 0LL, v12, 193LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
          if ( v13 )
          {
            v5 = v13;
            v24 = v13;
            SecurityDescriptor = CreateSecurityDescriptor(v13, TokenInformationLength, 0LL);
            v23 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              PushW32ThreadLock((__int64)v7, v28, (__int64)Win32FreePool);
              PushW32ThreadLock(v5, v29, (__int64)Win32FreePool);
              PushW32ThreadLock(SecurityDescriptor, v27, (__int64)Win32FreePool);
              v18 = 48;
              v19 = 0LL;
              v21 = 128;
              p_DestinationString = a1;
              v22 = (unsigned __int64)SecurityDescriptor;
              Desktop = xxxCreateWindowStation((__int64)&v18, 0, 0x2000000u, 0LL, 0, 0, 0LL, 0LL, 0, &Handle);
              v14 = Handle;
              if ( Desktop < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                RtlInitUnicodeString(&DestinationString, L"Default");
                v18 = 48;
                v19 = v14;
                v21 = 192;
                p_DestinationString = &DestinationString;
                v22 = 0LL;
                Desktop = xxxCreateDesktopEx((__int64)&v18, 0, 0x2000000LL, 0, a2, 1);
                if ( Desktop < 0 )
                  ObCloseHandle(v14, 1);
                else
                  *a3 = v14;
              }
              PopW32ThreadLock(v27);
              PopW32ThreadLock(v29);
              PopW32ThreadLock(v28);
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
    Win32FreePool(v7);
  if ( v5 )
    Win32FreePool(v5);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  return (unsigned int)Desktop;
}
