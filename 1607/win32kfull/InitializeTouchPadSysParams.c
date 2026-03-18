/*
 * XREFs of InitializeTouchPadSysParams @ 0x1C012A8C0
 * Callers:
 *     <none>
 * Callees:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C006A9CC (GetLocalMachineRegistryDWORDValues.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 InitializeTouchPadSysParams()
{
  _DWORD *v0; // rdx
  int *v1; // rcx
  int v2; // eax
  __int64 v3; // rcx
  __int128 *v4; // rbx
  __int64 v5; // rdi
  __int64 result; // rax
  const wchar_t *v7; // [rsp+20h] [rbp-39h] BYREF
  int v8; // [rsp+28h] [rbp-31h]
  int v9; // [rsp+2Ch] [rbp-2Dh]
  const wchar_t *v10; // [rsp+30h] [rbp-29h]
  int v11; // [rsp+38h] [rbp-21h]
  int v12; // [rsp+3Ch] [rbp-1Dh]
  const wchar_t *v13; // [rsp+40h] [rbp-19h]
  int v14; // [rsp+48h] [rbp-11h]
  int v15; // [rsp+4Ch] [rbp-Dh]
  const wchar_t *v16; // [rsp+50h] [rbp-9h]
  __int64 v17; // [rsp+58h] [rbp-1h]
  const wchar_t *v18; // [rsp+60h] [rbp+7h]
  __int64 v19; // [rsp+68h] [rbp+Fh]
  const wchar_t *v20; // [rsp+70h] [rbp+17h]
  int v21; // [rsp+78h] [rbp+1Fh]
  int v22; // [rsp+7Ch] [rbp+23h]
  const wchar_t *v23; // [rsp+80h] [rbp+27h]
  int v24; // [rsp+88h] [rbp+2Fh]
  int v25; // [rsp+8Ch] [rbp+33h]
  const wchar_t *v26; // [rsp+90h] [rbp+37h]
  int v27; // [rsp+98h] [rbp+3Fh]
  int v28; // [rsp+9Ch] [rbp+43h]

  v0 = &gAapState;
  HIDWORD(gTouchPadParameters) |= 0x600u;
  v1 = (int *)&gAapDefaults;
  DWORD2(gTouchPadParameters) = 2;
  HIDWORD(qword_1C03281F0) |= 0x4Fu;
  do
  {
    v2 = *v1;
    v1 += 4;
    *v0++ = v2;
  }
  while ( v1 != (int *)&gModeMonitor );
  dword_1C03280AC = 450;
  gTPThresholds = 300;
  dword_1C03280B0 = 500;
  dword_1C03280B4 = 20;
  dword_1C03280DC = 20;
  dword_1C03280B8 = 500;
  dword_1C03280BC = 500;
  dword_1C03280C0 = 500;
  dword_1C03280D4 = 90000;
  dword_1C03280D8 = 90000;
  dword_1C0328128 = 270;
  dword_1C032812C = 270;
  dword_1C0328130 = 270;
  qword_1C0328134 = 270LL;
  dword_1C032816C = 270;
  v7 = L"CurtainDismissTime";
  v10 = L"CurtainDismissDistance";
  v11 = 10;
  v12 = 10;
  v13 = L"GestureScrollMaxDistance";
  v14 = 33;
  v15 = 33;
  v16 = L"RightClickZoneHeight";
  v18 = L"RightClickZoneWidth";
  dword_1C03280C4 = 500;
  dword_1C03280FC = 500;
  v3 = 0LL;
  v20 = L"SuperCurtainTop";
  dword_1C03280A4 = 300;
  dword_1C03280A8 = 300;
  dword_1C03280C8 = 750;
  dword_1C03280CC = 25;
  dword_1C03280D0 = 50;
  dword_1C03280F0 = 215;
  dword_1C03280F4 = 1000;
  dword_1C03280E0 = 1000000;
  dword_1C03280E4 = 250;
  dword_1C03280E8 = 50;
  dword_1C03280EC = 200;
  dword_1C03280F8 = 100;
  dword_1C0328100 = 300;
  dword_1C0328104 = 300;
  dword_1C0328108 = 300;
  dword_1C032810C = 300;
  dword_1C0328114 = 50;
  dword_1C0328118 = 50;
  dword_1C032811C = 50;
  dword_1C0328120 = 50;
  dword_1C0328124 = 100;
  dword_1C032813C = 70;
  dword_1C0328140 = 120;
  dword_1C032815C = 300;
  dword_1C0328160 = 300;
  dword_1C0328164 = 300;
  dword_1C0328168 = 540;
  dword_1C0328170 = 810;
  dword_1C0328174 = 300;
  dword_1C0328178 = 1000;
  dword_1C032817C = 1000;
  dword_1C0328110 = 510;
  v8 = 250;
  v9 = 250;
  v17 = 0LL;
  v19 = 0LL;
  v21 = 100;
  v23 = L"SuperCurtainLeft";
  v4 = (__int128 *)&v7;
  v22 = 100;
  v26 = L"SuperCurtainRight";
  v5 = 8LL;
  v24 = 100;
  v25 = 100;
  v27 = 100;
  v28 = 100;
  do
  {
    GetLocalMachineRegistryDWORDValues(v3, L"\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad", v4++);
    --v5;
  }
  while ( v5 );
  dword_1C0328150 = v9;
  dword_1C0328180 = HIDWORD(v17);
  dword_1C0328184 = HIDWORD(v19);
  dword_1C0328144 = v22;
  dword_1C0328148 = v25;
  dword_1C032814C = v28;
  dword_1C0328154 = 100 * v12 * 100 * v12;
  result = (unsigned int)(100 * v15 * 100 * v15);
  dword_1C0328158 = 100 * v15 * 100 * v15;
  return result;
}
