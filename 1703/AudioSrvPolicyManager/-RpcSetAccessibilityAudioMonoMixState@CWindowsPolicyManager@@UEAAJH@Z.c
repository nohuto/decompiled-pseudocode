/*
 * XREFs of ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x180005260
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z @ 0x18001BB7C (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YAHK@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x18001BBDC (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z @ 0x18001BC44 (-TsSessionIdGetAccessibilityAudioMonoMixState@@YAHK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowsPolicyManager::RpcSetAccessibilityAudioMonoMixState(CWindowsPolicyManager *this, int a2)
{
  __int64 v2; // rax
  int v3; // ebx
  DWORD v4; // eax
  DWORD v5; // esi
  LSTATUS v6; // edi
  int v7; // ebx
  struct TSSession *v9; // [rsp+50h] [rbp-18h] BYREF
  __int64 v10; // [rsp+90h] [rbp+28h] BYREF
  int Data; // [rsp+98h] [rbp+30h] BYREF
  HKEY hKey; // [rsp+A0h] [rbp+38h] BYREF
  HKEY phkResult; // [rsp+A8h] [rbp+40h] BYREF

  Data = a2;
  v2 = *(_QWORD *)this;
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(CWindowsPolicyManager *, _QWORD, __int64 *))(v2 + 32))(this, 0LL, &v10);
  if ( v3 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
    v5 = v4;
    if ( v4 )
    {
      if ( !(unsigned int)TsSessionIdAreAccessibilityAudioSettingsInitialized(v4) )
        TsSessionIdInitAccessibilityAudioSettings(v5, 0);
      if ( (unsigned int)TsSessionIdGetAccessibilityAudioMonoMixState(v5) != Data )
      {
        v3 = RpcImpersonateClient(0LL);
        if ( !v3 )
        {
          v6 = RegOpenCurrentUser(0xF003Fu, &phkResult);
          if ( !v6 )
          {
            v6 = RegCreateKeyExW(
                   phkResult,
                   L"Software\\Microsoft\\Multimedia\\Audio",
                   0,
                   0LL,
                   0,
                   0xF003Fu,
                   0LL,
                   &hKey,
                   0LL);
            if ( !v6 )
            {
              v6 = RegSetValueExW(hKey, L"AccessibilityMonoMixState", 0, 4u, (const BYTE *)&Data, 4u);
              if ( !v6 )
              {
                v7 = Data;
                EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
                if ( !(unsigned int)TsSessionFromSessionId(v5, 1, 0LL, &v9) && *((_DWORD *)v9 + 90) != v6 )
                  *((_DWORD *)v9 + 91) = v7;
                LeaveCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 24));
              }
              RegCloseKey(hKey);
            }
            RegCloseKey(phkResult);
          }
          v3 = (unsigned __int16)v6 | 0x80070000;
          if ( v6 <= 0 )
            v3 = v6;
          RpcRevertToSelf();
        }
      }
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v3;
}
