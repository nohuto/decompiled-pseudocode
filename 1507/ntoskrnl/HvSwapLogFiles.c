/*
 * XREFs of HvSwapLogFiles @ 0x1405560A0
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 * Callees:
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x14044D690 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14044D6E8 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvSwapLogFiles(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  int v4; // esi
  int v5; // r9d
  char v6; // r10
  int v7; // r11d
  int v8; // eax
  __int64 v9; // rax
  int v10; // eax
  __int64 result; // rax
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh] BYREF
  int v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  char *v21; // [rsp+80h] [rbp-80h]
  int v22; // [rsp+88h] [rbp-78h]
  int v23; // [rsp+8Ch] [rbp-74h]
  int *v24; // [rsp+90h] [rbp-70h]
  int v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+9Ch] [rbp-64h]
  int *v27; // [rsp+A0h] [rbp-60h]
  int v28; // [rsp+A8h] [rbp-58h]
  int v29; // [rsp+ACh] [rbp-54h]
  int *v30; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32; // [rsp+BCh] [rbp-44h]
  int *v33; // [rsp+C0h] [rbp-40h]
  int v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+CCh] [rbp-34h]
  int *v36; // [rsp+D0h] [rbp-30h]
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  int *v39; // [rsp+E0h] [rbp-20h]
  int v40; // [rsp+E8h] [rbp-18h]
  int v41; // [rsp+ECh] [rbp-14h]
  __int64 *v42; // [rsp+F0h] [rbp-10h]
  int v43; // [rsp+F8h] [rbp-8h]
  int v44; // [rsp+FCh] [rbp-4h]

  HvGetEffectiveLogSizeCapForHive(a1);
  v2 = HvpLogTypeToLogArrayIndex(*(_DWORD *)(a1 + 148));
  v3 = MEMORY[0xFFFFF78000000014];
  v4 = *(_DWORD *)(a1 + 8LL * v2 + 2976);
  if ( stru_14031EED0.LevelPlus1 > 5 && TlgKeywordOn(&stru_14031EED0, 0x400000000000uLL) )
  {
    v8 = *(_DWORD *)(a1 + 1400);
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v41 = 0;
    v17 = v8;
    v15 = *(_DWORD *)(a1 + 168);
    v13 = *(_DWORD *)(a1 + 160);
    v9 = v3 - *(_QWORD *)(a1 + 176);
    v44 = 0;
    v19 = v9;
    v21 = &v12;
    v24 = &v17;
    v27 = &v15;
    v30 = &v18;
    v33 = &v13;
    v36 = &v14;
    v39 = &v16;
    v42 = &v19;
    v12 = v6;
    v18 = v7;
    v14 = v4;
    v16 = v5;
    v22 = 1;
    v25 = 4;
    v28 = 4;
    v31 = 4;
    v34 = 4;
    v37 = 4;
    v40 = 4;
    v43 = 8;
    TlgWrite(&stru_14031EED0, &unk_1402A3B87, 0LL, 0LL, 0xAu, &pData);
  }
  v10 = *(_DWORD *)(a1 + 148) - 4;
  *(_QWORD *)(a1 + 176) = v3;
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 148) = 5 - (v10 != 0);
  result = *(unsigned int *)(a1 + 152);
  *(_DWORD *)(a1 + 156) = result;
  return result;
}
