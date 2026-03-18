/*
 * XREFs of InitClipFormatExceptionList @ 0x1402262E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

int InitClipFormatExceptionList()
{
  _DWORD *v0; // rdi
  int result; // eax
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  struct MOVESIZEDATA *v4; // rcx
  bool v5; // r15
  bool v6; // bl
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  _DWORD *v22; // rsi
  ULONG i; // r14d
  int v24; // eax
  int v25; // ebx
  __int64 v26; // rax
  unsigned __int16 v27; // ax
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Length; // [rsp+C0h] [rbp+40h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  Length = 0;
  KeyHandle = 0LL;
  v0 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\ExceptionFormats");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v2 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
    if ( v2 == -1073741789 || v2 == -2147483643 )
    {
      v0 = (_DWORD *)Win32AllocPoolZInit(Length, 1650684757LL);
      if ( v0 )
      {
        if ( ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0 )
        {
          v10 = v0[8];
          if ( v10 )
          {
            *(_DWORD *)(W32GetUserSessionState(v9, v3) + 21896) = v10;
            if ( *(_DWORD *)(W32GetUserSessionState(v12, v11) + 21896) <= 0x1FFFu )
            {
              UserSessionState = W32GetUserSessionState(v13, v3);
              v15 = Win32AllocPoolZInit(4LL * *(unsigned int *)(UserSessionState + 21896), 1650684757LL);
              *(_QWORD *)(W32GetUserSessionState(v17, v16) + 21888) = v15;
              if ( *(_QWORD *)(W32GetUserSessionState(v19, v18) + 21888) )
              {
                v20 = (unsigned int)v0[10];
                if ( (unsigned int)v20 < 0xFFFFFFF0 )
                {
                  v22 = (_DWORD *)Win32AllocPoolZInit(v20 + 16, 1650684757LL);
                  if ( v22 )
                  {
                    for ( i = 0; ; ++i )
                    {
                      if ( i >= *(_DWORD *)(W32GetUserSessionState(v21, v3) + 21896) )
                      {
LABEL_30:
                        Win32FreePool(v22);
                        goto LABEL_11;
                      }
                      if ( ZwEnumerateValueKey(KeyHandle, i, KeyValuePartialInformation, v22, v0[10] + 16, &Length) < 0 )
                        goto LABEL_29;
                      v24 = v22[1];
                      if ( v24 == 4 )
                        break;
                      if ( v24 == 1 )
                      {
                        *((_WORD *)v22 + (unsigned int)v22[2] + 6) = 0;
                        v27 = UserAddAtomEx(v22 + 3, 1LL, 2LL);
                        if ( !v27 )
                        {
LABEL_29:
                          *(_DWORD *)(W32GetUserSessionState(v21, v3) + 21896) = i;
                          goto LABEL_30;
                        }
                        v25 = v27;
                        goto LABEL_27;
                      }
LABEL_28:
                      ;
                    }
                    v25 = v22[3];
LABEL_27:
                    v26 = W32GetUserSessionState(v21, v3);
                    v21 = i;
                    *(_DWORD *)(*(_QWORD *)(v26 + 21888) + 4LL * i) = v25;
                    goto LABEL_28;
                  }
                }
              }
            }
          }
        }
      }
    }
    v4 = WPP_GLOBAL_Control;
    v5 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v6 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v5 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v28 = W32GetUserSessionState(WPP_GLOBAL_Control, v3);
      LOBYTE(v29) = v6;
      LOBYTE(v30) = v5;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v30,
        v29,
        *(_QWORD *)(v28 + 69152),
        4,
        3,
        11,
        (__int64)&WPP_80c5c559a090326a6faa57b33a36599a_Traceguids);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v4, v3) + 21888) )
    {
      v31 = W32GetUserSessionState(v8, v7);
      Win32FreePool(*(void **)(v31 + 21888));
      *(_QWORD *)(W32GetUserSessionState(v33, v32) + 21888) = 0LL;
    }
    *(_DWORD *)(W32GetUserSessionState(v8, v7) + 21896) = 0;
LABEL_11:
    if ( v0 )
      Win32FreePool(v0);
    return ZwClose(KeyHandle);
  }
  return result;
}
