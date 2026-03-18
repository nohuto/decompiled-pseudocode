/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1C01E1A60
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01F79B0 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000B25C (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     CheckPwndFilter @ 0x1C00563B8 (CheckPwndFilter.c)
 *     IsPointerInputMessageWithState @ 0x1C00652DC (IsPointerInputMessageWithState.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C0065340 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01F7798 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01F8AFC (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F9B3C (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01FCB7C (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01FCD38 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 */

__int64 __fastcall xxxRetrievePointerInputMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        int *a7,
        struct tagQMSG *a8,
        __int64 *a9,
        unsigned int *a10,
        unsigned __int64 *a11,
        unsigned __int64 *a12,
        int *a13,
        struct tagQMSG **a14)
{
  int v15; // eax
  __int128 v16; // xmm1
  bool v17; // cf
  int v18; // ecx
  __int64 result; // rax
  unsigned __int64 v20; // r12
  unsigned int v21; // r14d
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // r13d
  HWND v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned int v28; // edi
  __int64 v29; // rcx
  int v30; // ecx
  unsigned __int64 v31; // r14
  struct _LIST_ENTRY *ThreadPointerData; // rax
  int *v33; // r9
  __int64 v34; // r8
  int v35; // r14d
  __int64 v36; // rax
  struct tagPOINTERCAPTUREINFO *v37; // rcx
  struct tagPOINT v38; // rcx
  unsigned int v39; // [rsp+48h] [rbp-59h] BYREF
  int v40; // [rsp+4Ch] [rbp-55h] BYREF
  struct tagPOINT v41; // [rsp+50h] [rbp-51h] BYREF
  HWND v42; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v43; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v44; // [rsp+64h] [rbp-3Dh] BYREF
  struct tagPOINT v45; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v46[4]; // [rsp+70h] [rbp-31h]
  unsigned __int64 v47[11]; // [rsp+80h] [rbp-21h]
  int v48; // [rsp+E8h] [rbp+47h]

  v15 = *(_DWORD *)(a1 + 1072);
  v16 = *((_OWORD *)a8 + 2);
  v17 = __CFSHR__(*((_DWORD *)a8 + 23), 6);
  *(_OWORD *)v46 = *((_OWORD *)a8 + 1);
  v18 = -v17;
  v48 = v18;
  *(_OWORD *)v47 = v16;
  if ( (v15 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  v20 = v47[1];
  v21 = v46[2];
  if ( !a6 )
  {
    v22 = v46[2];
    *(_DWORD *)(a1 + 1072) = v15 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v22);
    if ( !(unsigned int)xxxSetPointerFrameTargetWindows((struct tagTHREADINFO *)a1, v20, v21, (int *)&v39) )
    {
      EtwTraceEndPointerSetTargetWindows(v21);
      *(_DWORD *)(a1 + 1072) &= ~0x100u;
      return (unsigned int)(v39 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v21);
    v23 = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a1 + 1072) &= ~0x100u;
    if ( *(struct tagQMSG **)(v23 + 40) != a8 )
      return 4LL;
    v18 = v48;
  }
  if ( v21 == 595 )
  {
    v41 = 0LL;
    v24 = 1;
    v40 = 0;
    v25 = (HWND)*((_QWORD *)a8 + 2);
    LODWORD(v42) = 1;
    v39 = 1;
  }
  else
  {
    if ( !(unsigned int)GetPointerMessageInfo(v20, v18, &v42, (int *)&v39, &v40, &v43, &v44) )
      return 3LL;
    v25 = v42;
    v24 = v40;
    LODWORD(v42) = v39;
    v39 = v43;
    v40 = v44;
  }
  v26 = HMValidateHandleNoSecure((unsigned __int64)v25, 1);
  v27 = v26;
  if ( !v26 )
    return 3LL;
  if ( !(unsigned int)CheckPwndFilter(v26, a2) )
    return 4LL;
  v28 = v21;
  if ( a5 && v24 != 1 )
  {
    switch ( v21 )
    {
      case 0x245u:
        v28 = 577;
        break;
      case 0x246u:
        v28 = 578;
        break;
      case 0x247u:
        v28 = 579;
        break;
    }
  }
  if ( a3 || a4 != -1 )
  {
    if ( a3 <= a4 )
    {
      if ( v28 < a3 || v28 > a4 )
        return 4LL;
    }
    else if ( v28 >= a4 && v28 <= a3 )
    {
      return 4LL;
    }
  }
  if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v27, a8, a13, a7, a14) )
  {
LABEL_33:
    *a9 = v27;
    return 2LL;
  }
  if ( *a13 )
  {
    v29 = *(_QWORD *)(v27 + 16);
    if ( *(_QWORD *)(v29 + 384) == *(_QWORD *)(a1 + 384) )
    {
      v30 = (*(_DWORD *)(v29 + 1072) >> 15) & 1;
      if ( !v30 || ((v24 + 2) & 0xFFFFFFFD) != 0 )
      {
        if ( !v30 )
          goto LABEL_33;
        return 4LL;
      }
    }
    return 3LL;
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(v28) )
  {
    v31 = v47[0];
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 960), v47[0]);
    if ( ThreadPointerData )
      LODWORD(ThreadPointerData[3].Flink) |= 8u;
    goto LABEL_62;
  }
  if ( (_DWORD)v42 )
    goto LABEL_49;
  if ( (v40 & 0x10000) == 0 )
  {
    if ( v28 == 593 )
    {
      v34 = 2LL;
      goto LABEL_48;
    }
LABEL_49:
    if ( *a7 && (_DWORD)v42 && (v21 == 583 || v21 == 594) )
    {
      v36 = *(_QWORD *)(v20 + 40);
      v35 = v48;
      if ( v36 )
      {
        v37 = (struct tagPOINTERCAPTUREINFO *)(v36 + 56);
        if ( !v48 )
          v37 = (struct tagPOINTERCAPTUREINFO *)(v36 + 32);
        ReleasePointerCaptureInt(v37);
      }
    }
    else
    {
      v35 = v48;
    }
    goto LABEL_58;
  }
  v34 = 1LL;
LABEL_48:
  v35 = v48;
  PointerList::SetPointerCapture(v20, v27, v34, v24, v48);
LABEL_58:
  if ( !UpdatePointerInfoTarget(v20, (struct tagWND *)v27, v24, v35, &v41, &v45) )
    return 3LL;
  if ( ((v24 + 2) & 0xFFFFFFFD) == 0 )
    return 3LL;
  v31 = v47[0];
  if ( !(unsigned int)AddThreadPointerData((struct _LIST_ENTRY *)(a1 + 960), v47[0], v39, v20, v28, *(HWND *)v27, 1) )
    return 3LL;
  v33 = a13;
LABEL_62:
  *a9 = v27;
  *a10 = v28;
  if ( v28 - 577 > 3 )
    *a11 = v31;
  else
    *a11 = (unsigned __int16)v31 | (unsigned __int64)((unsigned __int16)v24 << 16);
  result = 1LL;
  *a12 = LOWORD(v41.x) | (unsigned __int64)(LOWORD(v41.y) << 16);
  v38 = v45;
  *v33 = 0;
  *(struct tagPOINT *)(a1 + 1124) = v38;
  return result;
}
