/*
 * XREFs of Template_qcccjqqbqbqbqbqbqbqb @ 0x1C0042228
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C0040278 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qcccjqqbqbqbqbqbqbqb(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        int a10,
        __int64 a11,
        int a12,
        __int64 a13,
        int a14,
        __int64 a15,
        int a16,
        __int64 a17,
        int a18,
        __int64 a19,
        int a20,
        __int64 a21,
        int a22,
        __int64 a23)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  char *v25; // [rsp+40h] [rbp-C0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  char *v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  char *v29; // [rsp+60h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-98h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  __int64 v32; // [rsp+78h] [rbp-88h]
  char *v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+88h] [rbp-78h]
  int *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  int v38; // [rsp+A8h] [rbp-58h]
  int v39; // [rsp+ACh] [rbp-54h]
  int *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  int v43; // [rsp+C8h] [rbp-38h]
  int v44; // [rsp+CCh] [rbp-34h]
  int *v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+D8h] [rbp-28h]
  __int64 v47; // [rsp+E0h] [rbp-20h]
  int v48; // [rsp+E8h] [rbp-18h]
  int v49; // [rsp+ECh] [rbp-14h]
  int *v50; // [rsp+F0h] [rbp-10h]
  __int64 v51; // [rsp+F8h] [rbp-8h]
  __int64 v52; // [rsp+100h] [rbp+0h]
  int v53; // [rsp+108h] [rbp+8h]
  int v54; // [rsp+10Ch] [rbp+Ch]
  int *v55; // [rsp+110h] [rbp+10h]
  __int64 v56; // [rsp+118h] [rbp+18h]
  __int64 v57; // [rsp+120h] [rbp+20h]
  int v58; // [rsp+128h] [rbp+28h]
  int v59; // [rsp+12Ch] [rbp+2Ch]
  int *v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  __int64 v62; // [rsp+140h] [rbp+40h]
  int v63; // [rsp+148h] [rbp+48h]
  int v64; // [rsp+14Ch] [rbp+4Ch]
  int *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  __int64 v67; // [rsp+160h] [rbp+60h]
  int v68; // [rsp+168h] [rbp+68h]
  int v69; // [rsp+16Ch] [rbp+6Ch]
  int v70; // [rsp+1A8h] [rbp+A8h] BYREF

  v70 = a4;
  UserData.Ptr = (unsigned __int64)&v70;
  *(_QWORD *)&UserData.Size = 4LL;
  v39 = 0;
  v25 = &a5;
  v44 = 0;
  v27 = &a6;
  v29 = &a7;
  v31 = a8;
  v33 = &a9;
  v35 = &a10;
  v37 = a11;
  v38 = a10;
  v40 = &a12;
  v42 = a13;
  v43 = a12;
  v45 = &a14;
  v47 = a15;
  v48 = a14;
  v50 = &a16;
  v52 = a17;
  v53 = a16;
  v55 = &a18;
  v57 = a19;
  v58 = a18;
  v60 = &a20;
  v62 = a21;
  v63 = a20;
  v65 = &a22;
  v67 = a23;
  v68 = a22;
  v49 = 0;
  v54 = 0;
  v59 = 0;
  v64 = 0;
  v69 = 0;
  v26 = 1LL;
  v28 = 1LL;
  v30 = 1LL;
  v32 = 16LL;
  v34 = 4LL;
  v36 = 4LL;
  v41 = 4LL;
  v46 = 4LL;
  v51 = 4LL;
  v56 = 4LL;
  v61 = 4LL;
  v66 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventUnitPeriodicDeviceStatistics, 0LL, 0x14u, &UserData);
}
