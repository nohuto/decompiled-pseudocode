/*
 * XREFs of Template_pppqxqqqqqqqpppqqqqqqqqqqtph @ 0x1C0013778
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C005655C (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0056880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 *     ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C00910F4 (-ReportState@VIDMM_DMA_POOL@@QEAAXXZ.c)
 *     ?VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z @ 0x1C0091F00 (-VidMmReportGlobalAlloc@@YAXPEAVDXGDEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAVDXGSHAREDRESOURCE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_pppqxqqqqqqqpppqqqqqqqqqqtph(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        int a10,
        char a11,
        char a12,
        int a13,
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
        char a31)
{
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  char *v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  char *v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  char *v41; // [rsp+80h] [rbp-80h]
  __int64 v42; // [rsp+88h] [rbp-78h]
  char *v43; // [rsp+90h] [rbp-70h]
  __int64 v44; // [rsp+98h] [rbp-68h]
  int *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  char *v47; // [rsp+B0h] [rbp-50h]
  __int64 v48; // [rsp+B8h] [rbp-48h]
  char *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  int *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  char *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  char *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]
  char *v57; // [rsp+100h] [rbp+0h]
  __int64 v58; // [rsp+108h] [rbp+8h]
  char *v59; // [rsp+110h] [rbp+10h]
  __int64 v60; // [rsp+118h] [rbp+18h]
  char *v61; // [rsp+120h] [rbp+20h]
  __int64 v62; // [rsp+128h] [rbp+28h]
  char *v63; // [rsp+130h] [rbp+30h]
  __int64 v64; // [rsp+138h] [rbp+38h]
  char *v65; // [rsp+140h] [rbp+40h]
  __int64 v66; // [rsp+148h] [rbp+48h]
  char *v67; // [rsp+150h] [rbp+50h]
  __int64 v68; // [rsp+158h] [rbp+58h]
  char *v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  char *v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]
  char *v73; // [rsp+180h] [rbp+80h]
  __int64 v74; // [rsp+188h] [rbp+88h]
  char *v75; // [rsp+190h] [rbp+90h]
  __int64 v76; // [rsp+198h] [rbp+98h]
  char *v77; // [rsp+1A0h] [rbp+A0h]
  __int64 v78; // [rsp+1A8h] [rbp+A8h]
  char *v79; // [rsp+1B0h] [rbp+B0h]
  __int64 v80; // [rsp+1B8h] [rbp+B8h]
  char *v81; // [rsp+1C0h] [rbp+C0h]
  __int64 v82; // [rsp+1C8h] [rbp+C8h]
  char *v83; // [rsp+1D0h] [rbp+D0h]
  __int64 v84; // [rsp+1D8h] [rbp+D8h]
  char *v85; // [rsp+1E0h] [rbp+E0h]
  __int64 v86; // [rsp+1E8h] [rbp+E8h]
  char *v87; // [rsp+1F0h] [rbp+F0h]
  __int64 v88; // [rsp+1F8h] [rbp+F8h]
  __int64 v89; // [rsp+238h] [rbp+138h] BYREF

  v89 = a4;
  UserData.Ptr = (ULONGLONG)&v89;
  v33 = 0;
  v35 = &a5;
  v37 = &a6;
  v39 = &a7;
  v41 = &a8;
  v43 = &a9;
  v45 = &v32;
  v47 = &a11;
  v49 = &a12;
  v51 = &v33;
  v53 = &a14;
  v55 = &a15;
  v57 = &a16;
  v59 = &a17;
  v61 = &a18;
  v63 = &a19;
  v65 = &a20;
  v67 = &a21;
  v69 = &a22;
  v71 = &a23;
  v73 = &a24;
  v75 = &a25;
  v77 = &a26;
  v79 = &a27;
  v81 = &a28;
  v83 = &a29;
  v32 = 0;
  *(_QWORD *)&UserData.Size = 8LL;
  v36 = 8LL;
  v38 = 8LL;
  v40 = 4LL;
  v42 = 8LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4LL;
  v58 = 8LL;
  v60 = 8LL;
  v62 = 8LL;
  v64 = 4LL;
  v66 = 4LL;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v85 = &a30;
  v86 = 8LL;
  v87 = &a31;
  v88 = 2LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0x1Cu, &UserData);
}
