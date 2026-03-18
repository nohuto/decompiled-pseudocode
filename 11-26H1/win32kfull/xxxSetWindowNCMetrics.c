/*
 * XREFs of xxxSetWindowNCMetrics @ 0x1400CDEC0
 * Callers:
 *     UserOnGreTextReady @ 0x1400CBFE0 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1400CC898 (xxxInitWindowStation.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14023CE68 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1400CCE14 (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1400CE604 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     CreateBitmapStrip @ 0x1400CE890 (CreateBitmapStrip.c)
 *     xxxSetNCFonts @ 0x1401250CC (xxxSetNCFonts.c)
 *     GetSessionDpiMetrics @ 0x140302624 (GetSessionDpiMetrics.c)
 *     GetSessionDpiServerInfo @ 0x140302648 (GetSessionDpiServerInfo.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxSetWindowNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // r14d
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 SessionDpiMetrics; // rax
  int v20; // edx
  __int64 v21; // r8
  int v22; // ecx
  int v23; // edx
  int v24; // eax
  int v25; // edx
  int v26; // edx
  int v27; // r8d
  __int64 v28; // rcx
  int v30; // [rsp+20h] [rbp-E0h] BYREF
  int TWIPSMetricById; // [rsp+24h] [rbp-DCh]
  int v32; // [rsp+28h] [rbp-D8h]
  int v33; // [rsp+2Ch] [rbp-D4h]
  int v34; // [rsp+30h] [rbp-D0h]
  int v35; // [rsp+34h] [rbp-CCh]
  int v36; // [rsp+94h] [rbp-6Ch]
  int v37; // [rsp+98h] [rbp-68h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  int v40; // [rsp+214h] [rbp+114h]

  memset_0(&v30, 0, 0x1F8uLL);
  v6 = 0;
  if ( !(unsigned int)xxxSetNCFonts(a1) )
    return 0LL;
  if ( !a2 )
  {
    v30 = 504;
    if ( a3 >= 0 )
      TWIPSMetricById = a3;
    else
      TWIPSMetricById = GetTWIPSMetricById(a1, 0x88u, -15);
    v32 = GetTWIPSMetricById(a1, 0x98u, -240);
    v33 = GetTWIPSMetricById(a1, 0x99u, -240);
    v34 = GetTWIPSMetricById(a1, 0x89u, -270);
    v35 = GetTWIPSMetricById(a1, 0x8Au, -270);
    v36 = GetTWIPSMetricById(a1, 0x8Cu, -195);
    v37 = GetTWIPSMetricById(a1, 0x8Du, -195);
    v38 = GetTWIPSMetricById(a1, 0x8Fu, -270);
    v39 = GetTWIPSMetricById(a1, 0x90u, -270);
    v40 = GetTWIPSMetricById(a1, 0x9Eu, 0);
    a2 = (struct tagNONCLIENTMETRICSW *)&v30;
  }
  v7 = *((_DWORD *)a2 + 1);
  if ( v7 <= 1 )
  {
    v7 = 1;
LABEL_6:
    v8 = v7;
    goto LABEL_7;
  }
  v8 = 50;
  if ( v7 < 50 )
    goto LABEL_6;
LABEL_7:
  v9 = *((_DWORD *)a2 + 5);
  v10 = 8;
  *((_DWORD *)a2 + 1) = v8;
  v11 = 100;
  v12 = *((_DWORD *)a2 + 125);
  if ( v12 <= 0 )
    v12 = 0;
  if ( v12 < 100 )
    v11 = v12;
  v13 = *((_DWORD *)a2 + 2);
  *((_DWORD *)a2 + 125) = v11;
  v14 = 8;
  if ( v13 > 8 )
    v14 = v13;
  v15 = 8;
  *((_DWORD *)a2 + 2) = v14;
  if ( *((int *)a2 + 3) > 8 )
    v15 = *((_DWORD *)a2 + 3);
  v16 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 3) = v15;
  v17 = 8LL;
  if ( v16 > 8 )
    v17 = (unsigned int)v16;
  *((_DWORD *)a2 + 4) = v17;
  v18 = (unsigned int)(*(_DWORD *)(GetSessionDpiServerInfo(v17) + 20) + 2);
  if ( v9 <= (int)v18 )
    v9 = *(_DWORD *)(GetSessionDpiServerInfo(v18) + 20) + 2;
  *((_DWORD *)a2 + 5) = v9;
  SessionDpiMetrics = GetSessionDpiMetrics(v18);
  v20 = 8;
  v21 = SessionDpiMetrics;
  if ( *((int *)a2 + 29) > 8 )
    v20 = *((_DWORD *)a2 + 29);
  v22 = *((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 29) = v20;
  v23 = *(_DWORD *)(SessionDpiMetrics + 44);
  v24 = *((_DWORD *)a2 + 54);
  v25 = v23 + 2;
  if ( v22 <= v25 )
    v22 = v25;
  v26 = *((_DWORD *)a2 + 55);
  *((_DWORD *)a2 + 30) = v22;
  if ( v24 > 8 )
    v10 = v24;
  *((_DWORD *)a2 + 54) = v10;
  v27 = *(_DWORD *)(v21 + 28);
  if ( v26 <= v27 )
    v26 = v27;
  *((_DWORD *)a2 + 55) = v26;
  SetNCMetrics(a2);
  LOBYTE(v6) = (unsigned int)CreateBitmapStrip(v28) != 0;
  return v6;
}
