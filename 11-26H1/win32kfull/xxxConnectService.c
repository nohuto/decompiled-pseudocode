/*
 * XREFs of xxxConnectService @ 0x14018B600
 * Callers:
 *     xxxResolveDesktop @ 0x1402A52F0 (xxxResolveDesktop.c)
 * Callees:
 *     ??0?$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXPEAX@Z@Z @ 0x140022FA8 (--0-$Win32RawLockedItemNoCleanup@U_ACCESS_ALLOWED_ACE@@$0A@@@QEAA@PEAU_ACCESS_ALLOWED_ACE@@P6AXP.c)
 *     ??1?$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ @ 0x14018BC44 (--1-$Win32RawLockedItemNoCleanup@UtagINTDDEINFO@@$0A@@@QEAA@XZ.c)
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGIW4tagWINDOWSTATIONFLAGS@@KPEAPEAUHWINSTA__@@@Z @ 0x1402A83AC (-xxxCreateWindowStation@@YAJPEAU_OBJECT_ATTRIBUTES@@DKPEAXKKPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGI.c)
 */

__int64 __fastcall xxxConnectService(__int64 a1, _QWORD *a2, HANDLE *a3)
{
  __int64 result; // rax
  _QWORD *v4; // rsi
  void *v5; // r14
  void *SecurityDescriptor; // r12
  char v7; // r15
  NTSTATUS Desktop; // edi
  __int64 v9; // r13
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  bool v16; // di
  bool v17; // r13
  __int64 v18; // rdx
  bool v19; // r13
  __int64 v20; // rax
  int v21; // r8d
  int v22; // edx
  __int64 UserSessionState; // rax
  int v24; // r8d
  int v25; // edx
  HANDLE TokenHandle; // [rsp+60h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-F0h] BYREF
  __int128 v28; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v29; // [rsp+80h] [rbp-D8h]
  __int128 v30; // [rsp+90h] [rbp-C8h]
  _QWORD *v31; // [rsp+A0h] [rbp-B8h]
  void *v32; // [rsp+A8h] [rbp-B0h]
  __int64 v33; // [rsp+B0h] [rbp-A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-A0h] BYREF
  _QWORD v35[3]; // [rsp+D0h] [rbp-88h] BYREF
  _QWORD v36[3]; // [rsp+E8h] [rbp-70h] BYREF
  _QWORD v37[11]; // [rsp+100h] [rbp-58h] BYREF
  ULONG TokenInformationLength; // [rsp+178h] [rbp+20h] BYREF

  TokenHandle = 0LL;
  TokenInformationLength = 0;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  DestinationString = 0LL;
  result = OpenEffectiveToken(&TokenHandle);
  if ( (int)result < 0 )
    return result;
  v4 = 0LL;
  v5 = 0LL;
  SecurityDescriptor = 0LL;
  Handle = 0LL;
  v7 = 1;
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
  if ( (int)(Desktop + 0x80000000) >= 0 && Desktop != -1073741789 )
  {
    ZwClose(TokenHandle);
    goto LABEL_18;
  }
  v4 = (_QWORD *)Win32AllocPoolZInit(TokenInformationLength, 1869902677LL);
  v31 = v4;
  if ( !v4 )
  {
    ZwClose(TokenHandle);
LABEL_37:
    Desktop = -1073741801;
    goto LABEL_18;
  }
  Desktop = ZwQueryInformationToken(TokenHandle, TokenUser, v4, TokenInformationLength, &TokenInformationLength);
  ZwClose(TokenHandle);
  if ( Desktop >= 0 )
  {
    v9 = *v4;
    v5 = (void *)AllocAce(0LL, 0LL, 0LL, 983150LL, *v4, &TokenInformationLength);
    if ( v5 )
    {
      LOBYTE(v10) = 13;
      v11 = AllocAce(v5, 0LL, v10, 983247LL, v9, &TokenInformationLength);
      if ( v11 )
      {
        v5 = (void *)v11;
        v12 = AllocAce(v11, 0LL, 0LL, 256LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
        if ( v12 )
        {
          v5 = (void *)v12;
          LOBYTE(v13) = 13;
          v14 = AllocAce(v12, 0LL, v13, 193LL, SeExports->SeAliasAdminsSid, &TokenInformationLength);
          if ( v14 )
          {
            v5 = (void *)v14;
            v33 = v14;
            SecurityDescriptor = (void *)CreateSecurityDescriptor(v14, TokenInformationLength, 0LL);
            v32 = SecurityDescriptor;
            if ( SecurityDescriptor )
            {
              Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
                v37,
                (__int64)v4,
                (__int64)Win32FreePool);
              Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
                v36,
                (__int64)v5,
                (__int64)Win32FreePool);
              Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>::Win32RawLockedItemNoCleanup<_ACCESS_ALLOWED_ACE,0>(
                v35,
                (__int64)SecurityDescriptor,
                (__int64)Win32FreePool);
              LODWORD(v28) = 48;
              *((_QWORD *)&v28 + 1) = 0LL;
              DWORD2(v29) = 128;
              *(_QWORD *)&v29 = a1;
              v30 = (unsigned __int64)SecurityDescriptor;
              Desktop = xxxCreateWindowStation(&v28, 0LL, 0x2000000LL, 0LL, 0, 0, 0LL, 0LL, 0, 0, -1, &Handle);
              if ( Desktop < 0 )
              {
                *a2 = 0LL;
              }
              else
              {
                v16 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                   && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
                   && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
                v17 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                if ( v16 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                {
                  UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v15);
                  LOBYTE(v24) = v17;
                  LOBYTE(v25) = v16;
                  WPP_RECORDER_AND_TRACE_SF_(
                    *((_QWORD *)WPP_GLOBAL_Control + 3),
                    v25,
                    v24,
                    *(_QWORD *)(UserSessionState + 69152),
                    4,
                    3,
                    10,
                    (__int64)&WPP_462d993f56733f4e68c28264cc638a6e_Traceguids);
                }
                RtlInitUnicodeString(&DestinationString, L"Default");
                LODWORD(v28) = 48;
                *((_QWORD *)&v28 + 1) = Handle;
                DWORD2(v29) = 192;
                *(_QWORD *)&v29 = &DestinationString;
                v30 = 0LL;
                Desktop = xxxCreateDesktopEx((unsigned int)&v28, 0, 0x2000000, 0, (__int64)a2, 1);
                if ( Desktop >= 0 )
                {
                  if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
                    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) == 0
                    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
                  {
                    v7 = 0;
                  }
                  v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
                  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
                  {
                    v20 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v18);
                    LOBYTE(v21) = v19;
                    LOBYTE(v22) = v7;
                    WPP_RECORDER_AND_TRACE_SF_(
                      *((_QWORD *)WPP_GLOBAL_Control + 3),
                      v22,
                      v21,
                      *(_QWORD *)(v20 + 69152),
                      4,
                      3,
                      11,
                      (__int64)&WPP_462d993f56733f4e68c28264cc638a6e_Traceguids);
                  }
                  *a3 = Handle;
                }
                else
                {
                  ObCloseHandle(Handle, 1);
                  Handle = 0LL;
                }
              }
              Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v35);
              Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v36);
              Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>::~Win32RawLockedItemNoCleanup<tagINTDDEINFO,0>(v37);
              goto LABEL_18;
            }
          }
        }
      }
    }
    goto LABEL_37;
  }
LABEL_18:
  if ( v4 )
    Win32FreePool(v4);
  if ( v5 )
    Win32FreePool(v5);
  if ( SecurityDescriptor )
    Win32FreePool(SecurityDescriptor);
  return (unsigned int)Desktop;
}
