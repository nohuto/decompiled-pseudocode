/*
 * XREFs of ?OnMagnifierRegistryKeyChange@MagnifierComponent@@AEAAXPEAUHKEY__@@@Z @ 0x1800814E4
 * Callers:
 *     ?OnMagnifierRegistryKeyChangeStatic@MagnifierComponent@@SAXPEAXPEAUHKEY__@@@Z @ 0x1800814D0 (-OnMagnifierRegistryKeyChangeStatic@MagnifierComponent@@SAXPEAXPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?UpdateMagnifier@MagnifierComponent@@AEAAJXZ @ 0x180081714 (-UpdateMagnifier@MagnifierComponent@@AEAAJXZ.c)
 */

void __fastcall MagnifierComponent::OnMagnifierRegistryKeyChange(MagnifierComponent *this, HKEY hKey)
{
  LSTATUS v3; // eax
  signed int v4; // ecx
  bool v5; // zf
  int v6; // [rsp+30h] [rbp-18h] BYREF
  DWORD v7[5]; // [rsp+34h] [rbp-14h] BYREF
  DWORD v8; // [rsp+60h] [rbp+18h] BYREF
  int v9; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0;
  v9 = 0;
  v6 = 0;
  v7[0] = 4;
  v3 = RegQueryValueExW(hKey, L"ScreenMagnifier", 0LL, &v8, (LPBYTE)&v9, v7);
  v4 = (unsigned __int16)v3 | 0x80070000;
  if ( v3 <= 0 )
    v4 = v3;
  if ( v4 >= 0 && v8 == 4 && v9 == 1 )
  {
    *((_BYTE *)this + 56) = 1;
    v6 = 1;
  }
  else
  {
    v5 = *((_BYTE *)this + 88) == 0;
    *((_BYTE *)this + 56) = 0;
    if ( !v5 )
    {
      *((_BYTE *)this + 88) = 0;
      MagnifierComponent::UpdateMagnifier(this);
    }
  }
  RtlPublishWnfStateData(WNF_SHL_MAGNIFIER_STATE_CHANGED, 0LL, &v6, 4LL, 0LL);
}
