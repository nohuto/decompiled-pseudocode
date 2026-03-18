/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1C01E1450
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01F74EC (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0008034 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     IsPointerInputMessageWithState @ 0x1C008C6AC (IsPointerInputMessageWithState.c)
 *     CheckPwndFilter @ 0x1C0090AD4 (CheckPwndFilter.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00E61D0 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01F72D4 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01F864C (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F9698 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FAE54 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01FC6DC (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01FC898 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
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
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // ecx
  unsigned __int64 v33; // r14
  struct _LIST_ENTRY *ThreadPointerData; // rax
  int *v35; // r9
  __int64 v36; // r8
  int v37; // r14d
  __int64 v38; // rax
  struct tagPOINTERCAPTUREINFO *v39; // rcx
  struct tagPOINT v40; // rcx
  unsigned int v41; // [rsp+48h] [rbp-59h] BYREF
  int v42; // [rsp+4Ch] [rbp-55h] BYREF
  struct tagPOINT v43; // [rsp+50h] [rbp-51h] BYREF
  HWND v44; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v45; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v46; // [rsp+64h] [rbp-3Dh] BYREF
  struct tagPOINT v47; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v48[4]; // [rsp+70h] [rbp-31h]
  unsigned __int64 v49[11]; // [rsp+80h] [rbp-21h]
  int v50; // [rsp+E8h] [rbp+47h]

  v15 = *(_DWORD *)(a1 + 1080);
  v16 = *((_OWORD *)a8 + 2);
  v17 = __CFSHR__(*((_DWORD *)a8 + 23), 6);
  *(_OWORD *)v48 = *((_OWORD *)a8 + 1);
  v18 = -v17;
  v50 = v18;
  *(_OWORD *)v49 = v16;
  if ( (v15 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  v20 = v49[1];
  v21 = v48[2];
  if ( !a6 )
  {
    v22 = v48[2];
    *(_DWORD *)(a1 + 1080) = v15 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v22);
    if ( !(unsigned int)xxxSetPointerFrameTargetWindows((struct tagTHREADINFO *)a1, v20, v21, (int *)&v41) )
    {
      EtwTraceEndPointerSetTargetWindows(v21);
      *(_DWORD *)(a1 + 1080) &= ~0x100u;
      return (unsigned int)(v41 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v21);
    v23 = *(_QWORD *)(a1 + 392);
    *(_DWORD *)(a1 + 1080) &= ~0x100u;
    if ( *(struct tagQMSG **)(v23 + 40) != a8 )
      return 4LL;
    v18 = v50;
  }
  if ( v21 == 595 )
  {
    v43 = 0LL;
    v24 = 1;
    v42 = 0;
    v25 = (HWND)*((_QWORD *)a8 + 2);
    LODWORD(v44) = 1;
    v41 = 1;
  }
  else
  {
    if ( !(unsigned int)GetPointerMessageInfo(v20, v18, &v44, (int *)&v41, &v42, &v45, &v46) )
      return 3LL;
    v25 = v44;
    v24 = v42;
    LODWORD(v44) = v41;
    v41 = v45;
    v42 = v46;
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
    v31 = *(_QWORD *)(v27 + 16);
    if ( *(_QWORD *)(v31 + 392) == *(_QWORD *)(a1 + 392) )
    {
      v32 = (*(_DWORD *)(v31 + 1080) >> 15) & 1;
      if ( !v32 || ((v24 + 2) & 0xFFFFFFFD) != 0 )
      {
        if ( !v32 )
          goto LABEL_33;
        return 4LL;
      }
    }
    return 3LL;
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(v28, v29, v30, (__int64)a13) )
  {
    v33 = v49[0];
    ThreadPointerData = FindThreadPointerData((struct _LIST_ENTRY *)(a1 + 968), v49[0]);
    if ( ThreadPointerData )
      LODWORD(ThreadPointerData[3].Flink) |= 8u;
    goto LABEL_62;
  }
  if ( (_DWORD)v44 )
    goto LABEL_49;
  if ( (v42 & 0x10000) == 0 )
  {
    if ( v28 == 593 )
    {
      v36 = 2LL;
      goto LABEL_48;
    }
LABEL_49:
    if ( *a7 && (_DWORD)v44 && (v21 == 583 || v21 == 594) )
    {
      v38 = *(_QWORD *)(v20 + 40);
      v37 = v50;
      if ( v38 )
      {
        v39 = (struct tagPOINTERCAPTUREINFO *)(v38 + 56);
        if ( !v50 )
          v39 = (struct tagPOINTERCAPTUREINFO *)(v38 + 32);
        ReleasePointerCaptureInt(v39);
      }
    }
    else
    {
      v37 = v50;
    }
    goto LABEL_58;
  }
  v36 = 1LL;
LABEL_48:
  v37 = v50;
  PointerList::SetPointerCapture(v20, v27, v36, v24, v50);
LABEL_58:
  if ( !UpdatePointerInfoTarget(v20, (struct tagWND *)v27, v24, v37, &v43, &v47) )
    return 3LL;
  if ( ((v24 + 2) & 0xFFFFFFFD) == 0 )
    return 3LL;
  v33 = v49[0];
  if ( !(unsigned int)AddThreadPointerData((struct _LIST_ENTRY *)(a1 + 968), v49[0], v41, v20, v28, *(HWND *)v27, 1) )
    return 3LL;
  v35 = a13;
LABEL_62:
  *a9 = v27;
  *a10 = v28;
  if ( v28 - 577 > 3 )
    *a11 = v33;
  else
    *a11 = (unsigned __int16)v33 | (unsigned __int64)((unsigned __int16)v24 << 16);
  result = 1LL;
  *a12 = LOWORD(v43.x) | (unsigned __int64)(LOWORD(v43.y) << 16);
  v40 = v47;
  *v35 = 0;
  *(struct tagPOINT *)(a1 + 1132) = v40;
  return result;
}
