/*
 * XREFs of ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C005CC58
 * Callers:
 *     DxgkInitializeDpi @ 0x1C005CC50 (DxgkInitializeDpi.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1C00011F4 (RtlUnicodeStringCopy.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0008058 (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

NTSTATUS SaveHKCUPathInSessionData(void)
{
  DXGGLOBAL *Global; // rax
  __int64 v1; // rcx
  struct DXGSESSIONDATA *SessionData; // rbx
  NTSTATUS result; // eax
  void *v4; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v4 = (void *)*((_QWORD *)SessionData + 2327);
      if ( v4 )
      {
        operator delete(v4);
        *((_DWORD *)SessionData + 4652) = 0;
        *((_QWORD *)SessionData + 2327) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionData, KeyPath.MaximumLength);
      v6 = RtlUnicodeStringCopy(UserRegistryPath, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v6 < 0 )
      {
        v9 = WdLogNewEntry5_WdError(v7);
        *(_QWORD *)(v9 + 24) = v6;
        WdLogEvent5_WdError(v9);
      }
      return v6;
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v8 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return -1073741811;
  }
  return result;
}
