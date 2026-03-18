/*
 * XREFs of xxxSetWindowNCMetrics @ 0x1C00D7C00
 * Callers:
 *     xxxInitWindowStation @ 0x1C00D7374 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D75E0 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     xxxSetNCFonts @ 0x1C00CD2F8 (xxxSetNCFonts.c)
 *     CreateBitmapStrip @ 0x1C00D7F70 (CreateBitmapStrip.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C00D7FA0 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetWindowNCMetrics(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // ebx
  int *v6; // rsi
  int v8; // r15d
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // r9d
  int v13; // eax
  bool v14; // cc
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // r8d
  int v20; // r8d
  int v21; // eax
  int v22; // r8d
  _DWORD v24[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  int v26; // [rsp+44h] [rbp-BCh]
  int v27; // [rsp+48h] [rbp-B8h]
  int v28; // [rsp+4Ch] [rbp-B4h]
  int v29; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+54h] [rbp-ACh]
  int v31; // [rsp+B4h] [rbp-4Ch]
  int v32; // [rsp+B8h] [rbp-48h]
  int v33; // [rsp+118h] [rbp+18h]
  int v34; // [rsp+11Ch] [rbp+1Ch]
  int v35; // [rsp+234h] [rbp+134h]

  v4 = 0;
  v6 = (int *)a2;
  if ( !a3 )
  {
LABEL_32:
    LOBYTE(v4) = (unsigned int)CreateBitmapStrip() != 0;
    return v4;
  }
  if ( (unsigned int)xxxSetNCFonts(a1, a2) )
  {
    v8 = 1;
    if ( !v6 )
    {
      v25 = 504;
      if ( a4 >= 0 )
      {
        v26 = a4;
      }
      else
      {
        FastGetProfileIntFromID(a1, 23LL, 136LL, 1LL, v24, 0);
        v26 = v24[0];
      }
      FastGetProfileIntFromID(a1, 23LL, 152LL, 16LL, v24, 0);
      v27 = v24[0];
      FastGetProfileIntFromID(a1, 23LL, 153LL, 16LL, v24, 0);
      v28 = v24[0];
      FastGetProfileIntFromID(a1, 23LL, 137LL, 18LL, v24, 0);
      v29 = v24[0];
      FastGetProfileIntFromID(a1, 23LL, 138LL, 18LL, v24, 0);
      v30 = v24[0];
      FastGetProfileIntFromID(a1, 23LL, 140LL, 13LL, v24, 0);
      v31 = v24[0];
      FastGetProfileIntFromID(a1, 23LL, 141LL, 13LL, v24, 0);
      v32 = v24[0];
      FastGetProfileIntFromID(a1, 23LL, 143LL, 18LL, v24, 0);
      v33 = v24[0];
      FastGetProfileIntFromID(a1, 23LL, 144LL, 18LL, v24, 0);
      v34 = v24[0];
      FastGetProfileIntFromID(a1, 23LL, 158LL, 0LL, v24, 0);
      v6 = &v25;
      v35 = v24[0];
    }
    v9 = 0;
    v10 = v6[55];
    v11 = 50;
    v12 = 4 * *(_DWORD *)(gpsi + 2060LL);
    if ( v6[1] > 1 )
      v8 = v6[1];
    if ( v8 < 50 )
      v11 = v8;
    v6[1] = v11;
    if ( v6[125] > 0 )
      v9 = v6[125];
    v13 = 100;
    if ( v9 < 100 )
      v13 = v9;
    v14 = v6[2] <= v12;
    v6[125] = v13;
    v15 = v12;
    if ( !v14 )
      v15 = v6[2];
    v6[2] = v15;
    v16 = 4 * *(_DWORD *)(gpsi + 2064LL);
    if ( v6[3] > v16 )
      v16 = v6[3];
    v14 = v6[4] <= v12;
    v6[3] = v16;
    v17 = v12;
    if ( !v14 )
      v17 = v6[4];
    v6[4] = v17;
    v18 = v12;
    v19 = HIDWORD(gdpiSystem[9]) + *(_DWORD *)(gpsi + 2064LL);
    if ( v6[5] > v19 )
      v19 = v6[5];
    v14 = v6[29] <= v12;
    v6[5] = v19;
    if ( !v14 )
      v18 = v6[29];
    v6[29] = v18;
    v20 = HIDWORD(gdpiSystem[10]) + *(_DWORD *)(gpsi + 2064LL);
    v21 = v6[54];
    if ( v6[30] > v20 )
      v20 = v6[30];
    v6[30] = v20;
    if ( v21 > v12 )
      v12 = v21;
    v6[54] = v12;
    v22 = HIDWORD(gdpiSystem[6]) + HIDWORD(gdpiSystem[7]) + *(_DWORD *)(gpsi + 2064LL);
    if ( v10 > v22 )
      v22 = v10;
    v6[55] = v22;
    SetNCMetrics((struct tagNONCLIENTMETRICSW *)v6);
    goto LABEL_32;
  }
  return 0LL;
}
