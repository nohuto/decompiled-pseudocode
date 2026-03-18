/*
 * XREFs of Template_pqqxpxqqqdddddddddddd @ 0x1C00148F8
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C0016460 (VidSchiExecuteMmIoFlip.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_pqqxpxqqqdddddddddddd(
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
        char a20,
        char a21,
        char a22,
        char a23,
        char a24)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  char *v26; // [rsp+40h] [rbp-C0h]
  __int64 v27; // [rsp+48h] [rbp-B8h]
  char *v28; // [rsp+50h] [rbp-B0h]
  __int64 v29; // [rsp+58h] [rbp-A8h]
  char *v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  char *v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  char *v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  char *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  char *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  char *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  char *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  char *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  char *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  char *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  char *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  char *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  char *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  char *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  char *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  char *v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  char *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  __int64 v66; // [rsp+1B8h] [rbp+B8h] BYREF

  v66 = a4;
  UserData.Ptr = (ULONGLONG)&v66;
  *(_QWORD *)&UserData.Size = 8LL;
  v26 = &a5;
  v27 = 4LL;
  v28 = &a6;
  v29 = 4LL;
  v30 = &a7;
  v32 = &a8;
  v34 = &a9;
  v36 = &a10;
  v38 = &a11;
  v40 = &a12;
  v42 = &a13;
  v44 = &a14;
  v46 = &a15;
  v48 = &a16;
  v50 = &a17;
  v52 = &a18;
  v54 = &a19;
  v56 = &a20;
  v58 = &a21;
  v60 = &a22;
  v62 = &a23;
  v64 = &a24;
  v31 = 8LL;
  v33 = 8LL;
  v35 = 8LL;
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
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 4LL;
  v65 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &MMIOFlipMultiPlaneOverlay, 0LL, 0x15u, &UserData);
}
