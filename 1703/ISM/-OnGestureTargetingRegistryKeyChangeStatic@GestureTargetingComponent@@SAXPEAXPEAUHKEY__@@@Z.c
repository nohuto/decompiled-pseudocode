/*
 * XREFs of ?OnGestureTargetingRegistryKeyChangeStatic@GestureTargetingComponent@@SAXPEAXPEAUHKEY__@@@Z @ 0x18000DF40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GestureTargetingComponent::OnGestureTargetingRegistryKeyChangeStatic(_BYTE *a1, HKEY a2)
{
  LSTATUS v3; // eax
  signed int v4; // ecx
  DWORD v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF
  DWORD v7; // [rsp+58h] [rbp+20h] BYREF

  if ( a1 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 4;
    v3 = RegQueryValueExW(a2, L"DisableGestureTargeting", 0LL, &v5, (LPBYTE)&v6, &v7);
    v4 = (unsigned __int16)v3 | 0x80070000;
    if ( v3 <= 0 )
      v4 = v3;
    a1[40] = v4 < 0 || v5 != 4 || v6 != 1;
  }
}
