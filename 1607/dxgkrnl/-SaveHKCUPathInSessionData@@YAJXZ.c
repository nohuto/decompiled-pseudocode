/*
 * XREFs of ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C00DB9F8
 * Callers:
 *     DxgkInitializeDpi @ 0x1C00DB9F0 (DxgkInitializeDpi.c)
 * Callees:
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0001AFC (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     RtlUnicodeStringCopy @ 0x1C000A5A8 (RtlUnicodeStringCopy.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

NTSTATUS __fastcall SaveHKCUPathInSessionData(__int64 a1)
{
  DXGGLOBAL *Global; // rax
  __int64 v2; // rcx
  struct DXGSESSIONDATA *SessionData; // rbx
  NTSTATUS result; // eax
  void *v5; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v5 = (void *)*((_QWORD *)SessionData + 2326);
      if ( v5 )
      {
        operator delete(v5);
        *((_DWORD *)SessionData + 4650) = 0;
        *((_QWORD *)SessionData + 2326) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionData, KeyPath.MaximumLength);
      v7 = RtlUnicodeStringCopy(UserRegistryPath, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v7 < 0 )
      {
        v14 = WdLogNewEntry5_WdError(v8);
        *(_QWORD *)(v14 + 24) = v7;
        WdLogEvent5_WdError(v14);
      }
      return v7;
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v9 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v11, v10, v12, v13);
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    return -1073741811;
  }
  return result;
}
