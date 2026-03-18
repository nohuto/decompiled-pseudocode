/*
 * XREFs of InitializeTouchPadSysParams @ 0x1C0150DA0
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C003CE30 (GetLocalMachineRegistryDWORDValues.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 InitializeTouchPadSysParams()
{
  _DWORD *v0; // rdx
  __int16 *v1; // rcx
  int v2; // eax
  __int128 *v3; // rbx
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
  HIDWORD(qword_1C0323098) |= 0xFu;
  do
  {
    v2 = *(_DWORD *)v1;
    v1 += 8;
    *v0++ = v2;
  }
  while ( v1 != &gNumLockVk );
  dword_1C0323684 = 270;
  dword_1C0323690 = 500;
  gTPThresholds = 300;
  v3 = (__int128 *)&v7;
  dword_1C0323688 = 300;
  dword_1C0323694 = 20;
  dword_1C03236BC = 20;
  dword_1C0323698 = 500;
  dword_1C032369C = 500;
  dword_1C03236A0 = 500;
  v7 = L"CurtainDismissTime";
  v4 = 5LL;
  dword_1C03236A4 = 500;
  v10 = L"CurtainDismissDistance";
  v11 = 10;
  v12 = 10;
  v13 = L"GestureScrollMaxDistance";
  v14 = 33;
  v15 = 33;
  dword_1C03236DC = 500;
  v16 = L"RightClickZoneHeight";
  dword_1C03236C4 = 250;
  v8 = 250;
  v9 = 250;
  v5 = 0LL;
  v18 = L"RightClickZoneWidth";
  dword_1C032368C = 450;
  dword_1C03236A8 = 750;
  dword_1C03236AC = 25;
  dword_1C03236B0 = 50;
  dword_1C03236D0 = 215;
  dword_1C03236D4 = 1000;
  dword_1C03236B4 = 72900;
  dword_1C03236B8 = 160000;
  dword_1C03236C0 = 1000000;
  dword_1C03236C8 = 50;
  dword_1C03236CC = 200;
  dword_1C03236D8 = 100;
  v17 = 0LL;
  v19 = 0LL;
  do
  {
    GetLocalMachineRegistryDWORDValues(v5, L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", v3++);
    --v4;
  }
  while ( v4 );
  dword_1C03236E0 = v9;
  dword_1C03236EC = HIDWORD(v17);
  dword_1C03236F0 = HIDWORD(v19);
  dword_1C03236E4 = 100 * v12 * 100 * v12;
  result = (unsigned int)(100 * v15 * 100 * v15);
  dword_1C03236E8 = 100 * v15 * 100 * v15;
  return result;
}
