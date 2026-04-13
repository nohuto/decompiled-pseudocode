/*
 * XREFs of ?CheckExecutionEnvironment@?$AsyncBaseFTM@UIAsyncActionCompletedHandler@Foundation@Windows@@$00U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x180020FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::AsyncBaseFTM<Windows::Foundation::IAsyncActionCompletedHandler,1,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>::CheckExecutionEnvironment(
        PINIT_ONCE InitOnce,
        PVOID Parameter,
        PVOID *Context)
{
  DWORD CurrentProcessId; // eax
  HANDLE v4; // rax
  void *v5; // rbx
  char v6; // al
  LPVOID v7; // rdi
  DWORD ReturnLength; // [rsp+30h] [rbp-30h] BYREF
  LPVOID v10; // [rsp+38h] [rbp-28h] BYREF
  void *TokenHandle; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  int TokenInformation; // [rsp+88h] [rbp+28h] BYREF

  v13 = -2LL;
  v10 = 0LL;
  if ( CoCreateInstance(&CLSID_GlobalOptions, 0LL, 1u, &GUID_0000015b_0000_0000_c000_000000000046, &v10) >= 0 )
    Windows::Internal::s_bIsWakeOnRpcSuppressionEnabled = (*(int (__fastcall **)(LPVOID, __int64, _BYTE *))(*(_QWORD *)v10 + 32LL))(
                                                            v10,
                                                            4LL,
                                                            v12) >= 0
                                                       && (v12[0] & 0x20) != 0;
  CurrentProcessId = GetCurrentProcessId();
  v4 = OpenProcess(0x1000u, 0, CurrentProcessId);
  v5 = v4;
  if ( v4 )
  {
    if ( OpenProcessToken(v4, 8u, &TokenHandle) )
    {
      TokenInformation = 0;
      if ( GetTokenInformation(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &ReturnLength) )
      {
        v6 = Windows::Internal::s_bIsAppContainer;
        if ( TokenInformation )
          v6 = 1;
        Windows::Internal::s_bIsAppContainer = v6;
      }
      CloseHandle(TokenHandle);
    }
    CloseHandle(v5);
  }
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return 1LL;
}
