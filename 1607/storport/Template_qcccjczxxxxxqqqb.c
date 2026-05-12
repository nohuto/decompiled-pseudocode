/*
 * XREFs of Template_qcccjczxxxxxqqqb @ 0x1C0041F84
 * Callers:
 *     StorpTelemetrySendUnitPerfData @ 0x1C0040FC0 (StorpTelemetrySendUnitPerfData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjczxxxxxqqqb(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        const wchar_t *a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        int a18,
        __int64 a19)
{
  __int64 v19; // rax
  int v20; // edx
  const wchar_t *v21; // rax
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  char *v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  char *v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  char *v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  char *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  const wchar_t *v34; // [rsp+90h] [rbp-70h]
  int v35; // [rsp+98h] [rbp-68h]
  int v36; // [rsp+9Ch] [rbp-64h]
  char *v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  char *v39; // [rsp+B0h] [rbp-50h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  char *v41; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  char *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  char *v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  char *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  char *v49; // [rsp+100h] [rbp+0h]
  __int64 v50; // [rsp+108h] [rbp+8h]
  int *v51; // [rsp+110h] [rbp+10h]
  __int64 v52; // [rsp+118h] [rbp+18h]
  __int64 v53; // [rsp+120h] [rbp+20h]
  int v54; // [rsp+128h] [rbp+28h]
  int v55; // [rsp+12Ch] [rbp+2Ch]
  int v56; // [rsp+168h] [rbp+68h] BYREF

  v56 = a4;
  UserData.Ptr = (unsigned __int64)&v56;
  v24 = &a5;
  v26 = &a6;
  v28 = &a7;
  v30 = a8;
  v32 = &a9;
  *(_QWORD *)&UserData.Size = 4LL;
  v25 = 1LL;
  v27 = 1LL;
  v29 = 1LL;
  v31 = 16LL;
  v33 = 1LL;
  if ( a10 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a10[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10;
  }
  v35 = v20;
  v21 = L"NULL";
  v36 = 0;
  if ( a10 )
    v21 = a10;
  v38 = 8LL;
  v34 = v21;
  v40 = 8LL;
  v37 = &a11;
  v42 = 8LL;
  v39 = &a12;
  v44 = 8LL;
  v41 = &a13;
  v43 = &a14;
  v45 = &a15;
  v47 = &a16;
  v49 = &a17;
  v51 = &a18;
  v53 = a19;
  v54 = a18;
  v46 = 8LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v55 = 0;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitPeriodicPerformance, 0LL, 0x10u, &UserData);
}
