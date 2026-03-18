/*
 * XREFs of ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1C02293FC
 * Callers:
 *     ?Enabled@PalmRejection@@YAHXZ @ 0x1C0228F48 (-Enabled@PalmRejection@@YAHXZ.c)
 * Callees:
 *     GetLocalMachineRegistryDWORDValues @ 0x1C006A9CC (GetLocalMachineRegistryDWORDValues.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall PalmRejection::_ReadSettingsFromRegKey(PalmRejection *this)
{
  __int128 *v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rdi
  unsigned int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  const wchar_t *v8; // [rsp+20h] [rbp-29h] BYREF
  int v9; // [rsp+28h] [rbp-21h]
  unsigned int v10; // [rsp+2Ch] [rbp-1Dh]
  const wchar_t *v11; // [rsp+30h] [rbp-19h]
  int v12; // [rsp+38h] [rbp-11h]
  unsigned int v13; // [rsp+3Ch] [rbp-Dh]
  const wchar_t *v14; // [rsp+40h] [rbp-9h]
  int v15; // [rsp+48h] [rbp-1h]
  unsigned int v16; // [rsp+4Ch] [rbp+3h]
  const wchar_t *v17; // [rsp+50h] [rbp+7h]
  int v18; // [rsp+58h] [rbp+Fh]
  unsigned int v19; // [rsp+5Ch] [rbp+13h]
  const wchar_t *v20; // [rsp+60h] [rbp+17h]
  int v21; // [rsp+68h] [rbp+1Fh]
  unsigned int v22; // [rsp+6Ch] [rbp+23h]
  const wchar_t *v23; // [rsp+70h] [rbp+27h]
  int v24; // [rsp+78h] [rbp+2Fh]
  unsigned int v25; // [rsp+7Ch] [rbp+33h]
  const wchar_t *v26; // [rsp+80h] [rbp+37h]
  int v27; // [rsp+88h] [rbp+3Fh]
  unsigned int v28; // [rsp+8Ch] [rbp+43h]

  v12 = 0;
  v13 = 0;
  v1 = (__int128 *)&v8;
  v8 = L"RejectionEnabled";
  v2 = 1000LL;
  v9 = 1;
  v11 = L"DelayNonEdgeTouches";
  v3 = 7LL;
  v10 = 1;
  v14 = L"TimeThreshold";
  v15 = 175;
  v16 = 175;
  v17 = L"HorizEdgeThreshold";
  v20 = L"VertEdgeThreshold";
  v21 = 530;
  v22 = 530;
  v23 = L"TopEdgeThreshold";
  v26 = L"DisableTimeThreshold";
  v27 = 60000;
  v28 = 60000;
  v18 = 1000;
  v19 = 1000;
  v24 = 1000;
  v25 = 1000;
  do
  {
    GetLocalMachineRegistryDWORDValues(
      v2,
      L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\EdgePalmRejection",
      v1++);
    --v3;
  }
  while ( v3 );
  v4 = 1500;
  gPalmRejectEnabled = v10;
  gPalmRejectDelayNonEdge = v13;
  v5 = 250;
  if ( v16 < 0xFA )
    v5 = v16;
  gPalmRejectTimeThr = v5;
  v6 = 1500;
  if ( v19 < 0x5DC )
    v6 = v19;
  gPalmRejectHEdgeThr = v6;
  v7 = 1500;
  if ( v22 < 0x5DC )
    v7 = v22;
  gPalmRejectVEdgeThr = v7;
  if ( v25 < 0x5DC )
    v4 = v25;
  gPalmRejectTopEdgeThr = v4;
  gPalmRejectDisableThr = v28;
}
