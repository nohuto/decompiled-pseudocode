/*
 * XREFs of Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x180101BEC
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ @ 0x18008E710 (-ProcessFrame@CPartitionVerticalBlankScheduler@@IEAAJXZ.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x1800FC5E4 (-Trace@CFrameInfo@@QEAAXK_K00@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
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
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33)
{
  int v34; // [rsp+20h] [rbp-E0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v36; // [rsp+40h] [rbp-C0h]
  __int64 v37; // [rsp+48h] [rbp-B8h]
  char *v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h]
  char *v40; // [rsp+60h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-98h]
  char *v42; // [rsp+70h] [rbp-90h]
  __int64 v43; // [rsp+78h] [rbp-88h]
  char *v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  int *v46; // [rsp+90h] [rbp-70h]
  __int64 v47; // [rsp+98h] [rbp-68h]
  char *v48; // [rsp+A0h] [rbp-60h]
  __int64 v49; // [rsp+A8h] [rbp-58h]
  char *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  char *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  char *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  char *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  char *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  char *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  char *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  char *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  char *v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  char *v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  char *v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  char *v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]
  char *v74; // [rsp+170h] [rbp+70h]
  __int64 v75; // [rsp+178h] [rbp+78h]
  char *v76; // [rsp+180h] [rbp+80h]
  __int64 v77; // [rsp+188h] [rbp+88h]
  char *v78; // [rsp+190h] [rbp+90h]
  __int64 v79; // [rsp+198h] [rbp+98h]
  char *v80; // [rsp+1A0h] [rbp+A0h]
  __int64 v81; // [rsp+1A8h] [rbp+A8h]
  char *v82; // [rsp+1B0h] [rbp+B0h]
  __int64 v83; // [rsp+1B8h] [rbp+B8h]
  char *v84; // [rsp+1C0h] [rbp+C0h]
  __int64 v85; // [rsp+1C8h] [rbp+C8h]
  char *v86; // [rsp+1D0h] [rbp+D0h]
  __int64 v87; // [rsp+1D8h] [rbp+D8h]
  char *v88; // [rsp+1E0h] [rbp+E0h]
  __int64 v89; // [rsp+1E8h] [rbp+E8h]
  char *v90; // [rsp+1F0h] [rbp+F0h]
  __int64 v91; // [rsp+1F8h] [rbp+F8h]
  char *v92; // [rsp+200h] [rbp+100h]
  __int64 v93; // [rsp+208h] [rbp+108h]
  char *v94; // [rsp+210h] [rbp+110h]
  __int64 v95; // [rsp+218h] [rbp+118h]
  int v96; // [rsp+250h] [rbp+150h] BYREF
  __int64 v97; // [rsp+258h] [rbp+158h] BYREF

  v97 = a4;
  v96 = a3;
  v34 = 1;
  UserData.Ptr = (ULONGLONG)&v96;
  v36 = &v97;
  v38 = &a5;
  v40 = &a6;
  v42 = &a7;
  v44 = &a8;
  v46 = &v34;
  v48 = &a10;
  v50 = &a11;
  v52 = &a12;
  v54 = &a13;
  v56 = &a14;
  v58 = &a15;
  v60 = &a16;
  v62 = &a17;
  v64 = &a18;
  v66 = &a19;
  v68 = &a20;
  v70 = &a21;
  v72 = &a22;
  v74 = &a23;
  v76 = &a24;
  v78 = &a25;
  v80 = &a26;
  v82 = &a27;
  v84 = &a28;
  v86 = &a29;
  *(_QWORD *)&UserData.Size = 4LL;
  v37 = 8LL;
  v39 = 4LL;
  v41 = 8LL;
  v43 = 8LL;
  v45 = 8LL;
  v47 = 4LL;
  v49 = 8LL;
  v51 = 8LL;
  v53 = 8LL;
  v55 = 8LL;
  v57 = 4LL;
  v59 = 8LL;
  v61 = 8LL;
  v63 = 8LL;
  v65 = 8LL;
  v67 = 8LL;
  v69 = 8LL;
  v71 = 8LL;
  v73 = 8LL;
  v75 = 8LL;
  v77 = 8LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 8LL;
  v88 = &a30;
  v87 = 4LL;
  v90 = &a31;
  v89 = 8LL;
  v92 = &a32;
  v91 = 8LL;
  v94 = &a33;
  v93 = 8LL;
  v95 = 8LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_FRAMEINFO, 0x1Fu, &UserData);
}
