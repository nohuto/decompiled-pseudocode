/*
 * XREFs of ?SaveHKCUPathInSessionData@@YAJXZ @ 0x1C00D80C8
 * Callers:
 *     DxgkInitializeDpi @ 0x1C00D80C0 (DxgkInitializeDpi.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x1C00011A8 (RtlUnicodeStringCopy.c)
 *     ?GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z @ 0x1C0004EDC (-GetUserRegistryPath@DXGSESSIONDATA@@QEAAPEAU_UNICODE_STRING@@G@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 */

NTSTATUS __fastcall SaveHKCUPathInSessionData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  struct DXGSESSIONDATA *SessionData; // rbx
  NTSTATUS result; // eax
  void *v11; // rcx
  struct _UNICODE_STRING *UserRegistryPath; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  struct _UNICODE_STRING KeyPath; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v5, v6, v7);
  if ( SessionData )
  {
    result = RtlFormatCurrentUserKeyPath(&KeyPath);
    if ( result >= 0 )
    {
      v11 = (void *)*((_QWORD *)SessionData + 2323);
      if ( v11 )
      {
        operator delete(v11);
        *((_DWORD *)SessionData + 4644) = 0;
        *((_QWORD *)SessionData + 2323) = 0LL;
      }
      UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(SessionData, KeyPath.MaximumLength);
      v13 = RtlUnicodeStringCopy(UserRegistryPath, &KeyPath);
      RtlFreeUnicodeString(&KeyPath);
      if ( (int)v13 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v20 + 24) = v13;
        WdLogEvent5_WdError(v20);
      }
      return v13;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v15 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17, v16, v18, v19);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return -1073741811;
  }
  return result;
}
