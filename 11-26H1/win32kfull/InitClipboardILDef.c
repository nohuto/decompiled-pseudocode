/*
 * XREFs of InitClipboardILDef @ 0x1402CF200
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 */

void InitClipboardILDef()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdi
  __int64 v2; // rdx
  NTSTATUS v3; // eax
  unsigned int v4; // eax
  ULONG v5; // r14d
  ULONG i; // r15d
  unsigned __int64 v7; // r12
  unsigned int j; // esi
  bool v9; // si
  bool v10; // r14
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG Length; // [rsp+C0h] [rbp+40h] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+48h] BYREF

  v0 = 0LL;
  Length = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  DestinationString = 0LL;
  v1 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\IntegrityLevelDef");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
    if ( v3 == -2147483643 || v3 == -1073741789 )
    {
      v0 = (_DWORD *)Win32AllocPoolZInit(Length, 1650684757LL);
      if ( v0 )
      {
        if ( ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0 )
        {
          v4 = v0[8];
          if ( v4 )
          {
            if ( v4 <= 5 )
            {
              v5 = v0[9] + 16;
              if ( v0[9] < 0xFFFFFFF0 )
              {
                v1 = Win32AllocPoolZInit(v5, 1650684757LL);
                if ( v1 )
                {
                  for ( i = 0; i < v0[8]; ++i )
                  {
                    if ( ZwEnumerateValueKey(KeyHandle, i, KeyValueBasicInformation, (PVOID)v1, v5, &Length) < 0 )
                      goto LABEL_21;
                    if ( *(_DWORD *)(v1 + 4) == 1 )
                    {
                      v7 = *(unsigned int *)(v1 + 8);
                      for ( j = 0; j < 5; ++j )
                      {
                        if ( !_wcsnicmp((const wchar_t *)*(&gaClipILDef + 4 * j), (const wchar_t *)(v1 + 12), v7 >> 1) )
                        {
                          *((_DWORD *)&gaClipILDef + 8 * j + 6) = 1;
                          break;
                        }
                      }
                    }
                  }
                  dword_1403AA9B8 = 1;
                  goto LABEL_30;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_21:
  v9 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v10 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v9 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v2);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      10,
      (__int64)&WPP_80c5c559a090326a6faa57b33a36599a_Traceguids);
  }
  dword_1403AA9B8 = 1;
  dword_1403AA998 = 1;
  dword_1403AA978 = 0;
  dword_1403AA958 = 0;
  dword_1403AA938 = 1;
  dword_1403AA918 = 0;
  if ( v1 )
LABEL_30:
    Win32FreePool((void *)v1);
  if ( v0 )
    Win32FreePool(v0);
  if ( KeyHandle )
    ZwClose(KeyHandle);
}
