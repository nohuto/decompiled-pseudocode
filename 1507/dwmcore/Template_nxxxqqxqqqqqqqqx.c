/*
 * XREFs of Template_nxxxqqxqqqqqqqqx @ 0x1801197DC
 * Callers:
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180086B28 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

ULONG __fastcall Template_nxxxqqxqqqqqqqqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ULONGLONG a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-E0h] BYREF
  char *v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h]
  char *v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  char *v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  char *v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  char *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  char *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  char *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  char *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  char *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  char *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  char *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  char *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  char *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  char *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  char *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]

  v21 = &a5;
  UserData.Ptr = a4;
  v23 = &a6;
  *(_QWORD *)&UserData.Size = 8LL;
  v25 = &a7;
  v22 = 8LL;
  v27 = &a8;
  v29 = &a9;
  v31 = &a10;
  v33 = &a11;
  v35 = &a12;
  v37 = &a13;
  v39 = &a14;
  v41 = &a15;
  v43 = &a16;
  v45 = &a17;
  v47 = &a18;
  v49 = &a19;
  v24 = 8LL;
  v26 = 8LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 8LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 8LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_SURFACEUPDATE, 0x10u, &UserData);
}
