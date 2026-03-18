/*
 * XREFs of Template_xxffffffffffffffff @ 0x180113CD8
 * Callers:
 *     ?SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z @ 0x1800597C0 (-SetWorldTransform@CDesktopTreeData@@MEAAJAEBVCMILMatrix@@_NPEAV2@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xxffffffffffffffff(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
        char a19,
        char a20)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v22; // [rsp+30h] [rbp-D0h]
  __int64 v23; // [rsp+38h] [rbp-C8h]
  char *v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h]
  char *v26; // [rsp+50h] [rbp-B0h]
  __int64 v27; // [rsp+58h] [rbp-A8h]
  char *v28; // [rsp+60h] [rbp-A0h]
  __int64 v29; // [rsp+68h] [rbp-98h]
  char *v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]
  char *v32; // [rsp+80h] [rbp-80h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  char *v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  char *v36; // [rsp+A0h] [rbp-60h]
  __int64 v37; // [rsp+A8h] [rbp-58h]
  char *v38; // [rsp+B0h] [rbp-50h]
  __int64 v39; // [rsp+B8h] [rbp-48h]
  char *v40; // [rsp+C0h] [rbp-40h]
  __int64 v41; // [rsp+C8h] [rbp-38h]
  char *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  char *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  char *v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  char *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]
  char *v50; // [rsp+110h] [rbp+10h]
  __int64 v51; // [rsp+118h] [rbp+18h]
  char *v52; // [rsp+120h] [rbp+20h]
  __int64 v53; // [rsp+128h] [rbp+28h]
  char *v54; // [rsp+130h] [rbp+30h]
  __int64 v55; // [rsp+138h] [rbp+38h]
  __int64 v56; // [rsp+170h] [rbp+70h] BYREF
  __int64 v57; // [rsp+178h] [rbp+78h] BYREF

  v57 = a4;
  v56 = a3;
  UserData.Ptr = (ULONGLONG)&v56;
  *(_QWORD *)&UserData.Size = 8LL;
  v22 = &v57;
  v23 = 8LL;
  v24 = &a5;
  v25 = 4LL;
  v26 = &a6;
  v28 = &a7;
  v30 = &a8;
  v32 = &a9;
  v34 = &a10;
  v36 = &a11;
  v38 = &a12;
  v40 = &a13;
  v42 = &a14;
  v44 = &a15;
  v46 = &a16;
  v48 = &a17;
  v50 = &a18;
  v52 = &a19;
  v54 = &a20;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 4LL;
  v41 = 4LL;
  v43 = 4LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_INPUT_SINK_UPDATE_TRANSFORM, 0x12u, &UserData);
}
