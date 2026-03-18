/*
 * XREFs of InitializeTouchPadSysParams @ 0x1C010A3D0
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C0125BB4 (GetLocalMachineRegistryDWORDValues.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 InitializeTouchPadSysParams()
{
  _DWORD *v0; // rdx
  __int16 *v1; // rcx
  int v2; // eax
  const wchar_t **v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  const wchar_t *v7; // [rsp+20h] [rbp-60h] BYREF
  int v8; // [rsp+28h] [rbp-58h]
  int v9; // [rsp+2Ch] [rbp-54h]
  const wchar_t *v10; // [rsp+30h] [rbp-50h]
  int v11; // [rsp+38h] [rbp-48h]
  int v12; // [rsp+3Ch] [rbp-44h]
  const wchar_t *v13; // [rsp+40h] [rbp-40h]
  int v14; // [rsp+48h] [rbp-38h]
  int v15; // [rsp+4Ch] [rbp-34h]
  const wchar_t *v16; // [rsp+50h] [rbp-30h]
  __int64 v17; // [rsp+58h] [rbp-28h]
  const wchar_t *v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]

  v0 = &gAapState;
  HIDWORD(gTouchPadParameters) |= 0x600u;
  v1 = (__int16 *)&gAapDefaults;
  DWORD2(gTouchPadParameters) = 2;
  HIDWORD(qword_1C0322020) |= 0xFu;
  do
  {
    v2 = *(_DWORD *)v1;
    v1 += 8;
    *v0++ = v2;
  }
  while ( v1 != &gNumLockVk );
  dword_1C0321EE4 = 270;
  dword_1C0321EF4 = 20;
  v3 = &v7;
  dword_1C0321F1C = 20;
  gTPThresholds = 300;
  dword_1C0321EE8 = 300;
  dword_1C0321F10 = 50;
  dword_1C0321F28 = 50;
  dword_1C0321EEC = 450;
  dword_1C0321EF0 = 500;
  dword_1C0321EF8 = 500;
  dword_1C0321EFC = 500;
  dword_1C0321F00 = 500;
  dword_1C0321F04 = 500;
  dword_1C0321F3C = 500;
  dword_1C0321F2C = 200;
  dword_1C0321F40 = 150;
  v4 = 5LL;
  dword_1C0321F44 = 150;
  dword_1C0321F4C = 400;
  dword_1C0321F60 = 400;
  dword_1C0321F70 = 400;
  v7 = L"CurtainDismissTime";
  v10 = L"CurtainDismissDistance";
  v11 = 10;
  v12 = 10;
  v13 = L"GestureScrollMaxDistance";
  v14 = 33;
  v15 = 33;
  v16 = L"RightClickZoneHeight";
  dword_1C0321F48 = 200;
  dword_1C0321F5C = 200;
  dword_1C0321F68 = 200;
  dword_1C0321F6C = 200;
  v5 = 0LL;
  v18 = L"RightClickZoneWidth";
  dword_1C0321F08 = 750;
  dword_1C0321F0C = 25;
  dword_1C0321F30 = 215;
  dword_1C0321F34 = 1000;
  dword_1C0321F14 = 72900;
  dword_1C0321F18 = 160000;
  dword_1C0321F20 = 1000000;
  dword_1C0321F24 = 250;
  dword_1C0321F38 = 100;
  dword_1C0321F54 = 100;
  dword_1C0321F58 = 100;
  dword_1C0321F64 = 300;
  qword_1C0321F74 = 450LL;
  dword_1C0321F7C = 70;
  dword_1C0321F80 = 120;
  dword_1C0321F84 = 100;
  dword_1C0321F88 = 100;
  dword_1C0321F8C = 100;
  dword_1C0321F50 = 254;
  v8 = 250;
  v9 = 250;
  v17 = 0LL;
  v19 = 0LL;
  do
  {
    GetLocalMachineRegistryDWORDValues(v5, L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", v3);
    v3 += 2;
    --v4;
  }
  while ( v4 );
  dword_1C0321F90 = v9;
  dword_1C0321F9C = HIDWORD(v17);
  dword_1C0321FA0 = HIDWORD(v19);
  dword_1C0321F94 = 100 * v12 * 100 * v12;
  result = (unsigned int)(100 * v15 * 100 * v15);
  dword_1C0321F98 = 100 * v15 * 100 * v15;
  return result;
}
