/*
 * XREFs of _UserTestForWinStaAccess @ 0x14005C23C
 * Callers:
 *     xxxResolveDesktop @ 0x1402A52F0 (xxxResolveDesktop.c)
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 */

int __fastcall UserTestForWinStaAccess(PCUNICODE_STRING String1, int a2)
{
  ACCESS_MASK v4; // esi
  BOOLEAN v5; // bl
  int result; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  NTSTATUS v9; // ebx
  _DWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 UserSessionState; // rax
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  HANDLE TokenHandle; // [rsp+40h] [rbp-30h] BYREF
  PVOID Object; // [rsp+48h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  ULONG TokenInformationLength; // [rsp+B0h] [rbp+40h] BYREF
  int TokenInformation; // [rsp+B8h] [rbp+48h] BYREF

  TokenInformationLength = 0;
  Handle = 0LL;
  TokenHandle = 0LL;
  Object = 0LL;
  DestinationString = 0LL;
  TokenInformation = 0;
  v4 = 0x20000000;
  RtlInitUnicodeString(&DestinationString, L"\\Windows\\WindowStations\\WinSta0");
  v5 = RtlEqualUnicodeString(String1, &DestinationString, 1u);
  result = OpenEffectiveToken(&TokenHandle);
  if ( result >= 0 )
  {
    result = ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &TokenInformationLength);
    if ( result >= 0 )
    {
      if ( TokenInformation )
        v4 = 131104;
    }
  }
  if ( v5 )
  {
    if ( !TokenHandle )
      return result;
    v8 = ZwQueryInformationToken(TokenHandle, TokenStatistics, 0LL, 0, &TokenInformationLength);
    if ( v8 == -1073741789 )
    {
      v10 = (_DWORD *)Win32AllocPoolWithQuotaZInit(TokenInformationLength, 1702064981LL);
      if ( v10 )
      {
        v8 = ZwQueryInformationToken(TokenHandle, TokenStatistics, v10, TokenInformationLength, &TokenInformationLength);
        if ( v8 >= 0 )
        {
          v8 = -1073741790;
          if ( *(_QWORD *)(W32GetUserSessionState(v12, v11) + 63512) )
          {
            UserSessionState = W32GetUserSessionState(v14, v13);
            v17 = v10[2];
            v18 = *(_QWORD *)(UserSessionState + 63512);
            v19 = *(_DWORD *)(v18 + 152);
            if ( a2 )
            {
              if ( v17 == v19 && v10[3] == *(_DWORD *)(v18 + 156)
                || v17 == luidSystem[0] && v10[3] == luidSystem[1]
                || (LOBYTE(v16) = 1, (unsigned int)AccessCheckObject(v18, v4, v16, WinStaMapping)) )
              {
                v8 = 0;
              }
            }
            else if ( v17 == v19 && v10[3] == *(_DWORD *)(v18 + 156) )
            {
              v8 = 0;
            }
          }
        }
        ZwClose(TokenHandle);
        Win32FreePool(v10);
        return v8;
      }
      v8 = -1073741801;
    }
    ZwClose(TokenHandle);
    return v8;
  }
  if ( TokenHandle )
    ZwClose(TokenHandle);
  v7 = ObReferenceObjectByName(String1, 64LL, 0LL, v4, ExWindowStationObjectType, 0, 0LL, &Object);
  v8 = v7;
  if ( v7 < 0 )
  {
    SetLastNtError(v7);
    return v8;
  }
  v9 = ObOpenObjectByPointer(Object, 0x40u, 0LL, v4, ExWindowStationObjectType, 1, &Handle);
  ObfDereferenceObject(Object);
  if ( v9 >= 0 && Handle )
    return ObCloseHandle(Handle, 1);
  else
    return -1073741790;
}
