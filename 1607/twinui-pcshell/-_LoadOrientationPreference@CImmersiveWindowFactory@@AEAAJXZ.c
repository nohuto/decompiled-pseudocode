/*
 * XREFs of ?_LoadOrientationPreference@CImmersiveWindowFactory@@AEAAJXZ @ 0x18002BC54
 * Callers:
 *     ?v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z @ 0x18002BDC0 (-v_Initialize@CImmersiveWindowFactory@@EEAAJPEAUIImmersiveMonitor@@PEBUtagRECT@@@Z.c)
 * Callees:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18002D35C (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z @ 0x18002D698 (-GetStateHandle@CallerIdentity@@YAJPEBGPEAPEAX@Z.c)
 *     ?GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z @ 0x18002D6EC (-GetStateRegKey@CallerIdentity@@YAJPEAXPEBGKPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall CImmersiveWindowFactory::_LoadOrientationPreference(CImmersiveWindowFactory *this)
{
  const unsigned __int16 *v1; // r14
  signed int StateHandle; // ebx
  void **v4; // r8
  void *v5; // rdx
  const unsigned __int16 *v6; // r8
  LSTATUS v7; // eax
  LSTATUS v8; // eax
  HKEY v9; // rcx
  HKEY v10; // rcx
  HKEY *phkResult; // [rsp+20h] [rbp-48h]
  HKEY hKey; // [rsp+30h] [rbp-38h] BYREF
  CallerIdentity *v14; // [rsp+38h] [rbp-30h] BYREF
  LPVOID pv[5]; // [rsp+40h] [rbp-28h] BYREF
  DWORD cbData; // [rsp+90h] [rbp+28h] BYREF
  DWORD Type; // [rsp+98h] [rbp+30h] BYREF
  int Data; // [rsp+A0h] [rbp+38h] BYREF
  HKEY v19; // [rsp+A8h] [rbp+40h] BYREF

  v1 = (const unsigned __int16 *)*((_QWORD *)this + 13);
  *((_DWORD *)this + 29) = 0;
  pv[0] = 0LL;
  pv[1] = (LPVOID)-1LL;
  pv[2] = (LPVOID)-1LL;
  StateHandle = ParseAppUserModelId(v1, (unsigned __int16 **)pv, 0LL);
  if ( StateHandle >= 0 )
  {
    v14 = 0LL;
    StateHandle = CallerIdentity::GetStateHandle((CallerIdentity *)pv[0], (const unsigned __int16 *)&v14, v4);
    if ( StateHandle >= 0 )
    {
      hKey = 0LL;
      StateHandle = CallerIdentity::GetStateRegKey(v14, v5, v6, (unsigned int)&hKey, phkResult);
      if ( StateHandle >= 0 )
      {
        v19 = 0LL;
        v7 = RegOpenKeyExW(hKey, v1, 0, 0x20019u, &v19);
        StateHandle = (unsigned __int16)v7 | 0x80070000;
        if ( v7 <= 0 )
          StateHandle = v7;
        if ( StateHandle >= 0 )
        {
          cbData = 4;
          v8 = RegQueryValueExW(v19, L"Orientation", 0LL, &Type, (LPBYTE)&Data, &cbData);
          StateHandle = (unsigned __int16)v8 | 0x80070000;
          if ( v8 <= 0 )
            StateHandle = v8;
          if ( StateHandle >= 0 )
          {
            StateHandle = Type != 4 ? 0x80004005 : 0;
            if ( Type == 4 )
              *((_DWORD *)this + 29) = Data;
          }
        }
        v9 = v19;
        v19 = 0LL;
        if ( v9 )
          RegCloseKey(v9);
      }
      CloseState(v14);
      v10 = hKey;
      hKey = 0LL;
      if ( v10 )
        RegCloseKey(v10);
    }
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
  *((_BYTE *)this + 112) = StateHandle >= 0;
  return (unsigned int)StateHandle;
}
