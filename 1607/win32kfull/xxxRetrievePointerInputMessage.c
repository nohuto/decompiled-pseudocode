/*
 * XREFs of xxxRetrievePointerInputMessage @ 0x1C01D7CD8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?DiscardPointerMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@PEAUtagWND@@PEBUtagPOINTERINPUTFRAME@@PEAUtagMSG@@@Z @ 0x1C01EEB80 (-DiscardPointerMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@PEAUtagTHREADINFO@@PEAUtagQMSG@@P.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D1EC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     IsPointerInputMessageWithState @ 0x1C005810C (IsPointerInputMessageWithState.c)
 *     CheckPwndFilter @ 0x1C005C388 (CheckPwndFilter.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C010BA70 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01EE968 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z @ 0x1C01EFCE8 (-GetPointerMessageInfo@@YAH_KHPEAPEAUHWND__@@PEAH2PEAKPEAI@Z.c)
 *     ?UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z @ 0x1C01F0D70 (-UpdatePointerInfoTarget@@YAH_KPEAUtagWND@@HHPEAUtagPOINT@@2@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z @ 0x1C01F3DF0 (-ReleasePointerCaptureInt@@YAXPEAUtagPOINTERCAPTUREINFO@@@Z.c)
 *     ?SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z @ 0x1C01F3FB8 (-SetPointerCapture@PointerList@@YAH_KPEAUtagWND@@W4tagPOINTER_CAPTURE_MODE@@HH@Z.c)
 */

__int64 __fastcall xxxRetrievePointerInputMessage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  __int64 v15; // rdx
  int v16; // eax
  __int128 v17; // xmm1
  bool v18; // cf
  int v19; // ecx
  __int64 result; // rax
  unsigned __int64 v21; // r12
  unsigned int v22; // r14d
  __int64 v23; // rcx
  __int64 v24; // rax
  unsigned int v25; // r13d
  HWND v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rsi
  unsigned int v29; // edi
  __int64 v30; // rdx
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
  unsigned int v52; // [rsp+F8h] [rbp+57h]
  unsigned int v53; // [rsp+100h] [rbp+5Fh]

  v53 = a4;
  v52 = a3;
  v15 = 256LL;
  v16 = *(_DWORD *)(a1 + 1096);
  v17 = *((_OWORD *)a8 + 2);
  v18 = __CFSHR__(*((_DWORD *)a8 + 25), 6);
  *(_OWORD *)v48 = *((_OWORD *)a8 + 1);
  v19 = -v18;
  v50 = v19;
  *(_OWORD *)v49 = v17;
  if ( (v16 & 0x100) != 0 )
  {
    *a9 = 0LL;
    *a13 = 0;
    return 2LL;
  }
  v21 = v49[1];
  v22 = v48[2];
  if ( !a6 )
  {
    v23 = v48[2];
    *(_DWORD *)(a1 + 1096) = v16 | 0x100;
    EtwTraceBeginPointerSetTargetWindows(v23);
    if ( !(unsigned int)xxxSetPointerFrameTargetWindows((struct tagTHREADINFO *)a1, v21, v22, (int *)&v41) )
    {
      EtwTraceEndPointerSetTargetWindows(v22);
      *(_DWORD *)(a1 + 1096) &= ~0x100u;
      return (unsigned int)(v41 != 0) + 3;
    }
    EtwTraceEndPointerSetTargetWindows(v22);
    v24 = *(_QWORD *)(a1 + 384);
    *(_DWORD *)(a1 + 1096) &= ~0x100u;
    if ( *(struct tagQMSG **)(v24 + 48) != a8 )
      return 4LL;
    v19 = v50;
  }
  if ( v22 == 595 )
  {
    v43 = 0LL;
    v25 = 1;
    v42 = 0;
    v26 = (HWND)*((_QWORD *)a8 + 2);
    LODWORD(v44) = 1;
    v41 = 1;
  }
  else
  {
    if ( !(unsigned int)GetPointerMessageInfo(v21, v19, &v44, (int *)&v41, &v42, &v45, &v46) )
      return 3LL;
    v26 = v44;
    v25 = v42;
    LODWORD(v44) = v41;
    v41 = v45;
    v42 = v46;
  }
  LOBYTE(v15) = 1;
  v27 = HMValidateHandleNoSecure((unsigned __int64)v26, v15, a3, a4);
  v28 = v27;
  if ( !v27 )
    return 3LL;
  if ( !(unsigned int)CheckPwndFilter(v27, a2) )
    return 4LL;
  v29 = v22;
  if ( a5 && v25 != 1 )
  {
    switch ( v22 )
    {
      case 0x245u:
        v29 = 577;
        break;
      case 0x246u:
        v29 = 578;
        break;
      case 0x247u:
        v29 = 579;
        break;
    }
  }
  if ( v52 || v53 != -1 )
  {
    if ( v52 <= v53 )
    {
      if ( v29 < v52 || v29 > v53 )
        return 4LL;
    }
    else if ( v29 >= v53 && v29 <= v52 )
    {
      return 4LL;
    }
  }
  if ( (unsigned int)CheckCrossThreadInput((struct tagWND *const)v28, a8, a13, a7, a14) )
  {
LABEL_33:
    *a9 = v28;
    return 2LL;
  }
  if ( *a13 )
  {
    v31 = *(_QWORD *)(v28 + 16);
    if ( *(_QWORD *)(v31 + 384) == *(_QWORD *)(a1 + 384) )
    {
      v32 = (*(_DWORD *)(v31 + 1096) >> 15) & 1;
      if ( !v32 || ((v25 + 2) & 0xFFFFFFFD) != 0 )
      {
        if ( !v32 )
          goto LABEL_33;
        return 4LL;
      }
    }
    return 3LL;
  }
  if ( !(unsigned int)IsPointerInputMessageWithState(v29, v30) )
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
    if ( v29 == 593 )
    {
      v36 = 2LL;
      goto LABEL_48;
    }
LABEL_49:
    if ( *a7 && (_DWORD)v44 && (v22 == 583 || v22 == 594) )
    {
      v38 = *(_QWORD *)(v21 + 40);
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
  PointerList::SetPointerCapture(v21, v28, v36, v25, v50);
LABEL_58:
  if ( !UpdatePointerInfoTarget(v21, (struct tagWND *)v28, v25, v37, &v43, &v47) )
    return 3LL;
  if ( ((v25 + 2) & 0xFFFFFFFD) == 0 )
    return 3LL;
  v33 = v49[0];
  if ( !(unsigned int)AddThreadPointerData((struct _LIST_ENTRY *)(a1 + 968), v49[0], v41, v21, v29, *(HWND *)v28, 1) )
    return 3LL;
  v35 = a13;
LABEL_62:
  *a9 = v28;
  *a10 = v29;
  if ( v29 - 577 > 3 )
    *a11 = v33;
  else
    *a11 = (unsigned __int16)v33 | (unsigned __int64)((unsigned __int16)v25 << 16);
  result = 1LL;
  *a12 = LOWORD(v43.x) | (unsigned __int64)(LOWORD(v43.y) << 16);
  v40 = v47;
  *v35 = 0;
  *(struct tagPOINT *)(a1 + 1148) = v40;
  return result;
}
