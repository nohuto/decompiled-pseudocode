/*
 * XREFs of Usbh_PCE_wChange_Action @ 0x1C0017330
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x1C0024080 (UsbhUnlockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     UsbhRemoveQueuedSuspend @ 0x1C00418D4 (UsbhRemoveQueuedSuspend.c)
 *     UsbhiSignalSuspendEvent @ 0x1C0042A38 (UsbhiSignalSuspendEvent.c)
 */

__int64 *__fastcall Usbh_PCE_wChange_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r10
  __int64 *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  KIRQL v11; // al
  __int64 v12; // r8
  KIRQL v13; // r13
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 **v24; // r14
  int v25; // r15d
  __int64 v26; // rax
  __int64 *v27; // r13
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // r9
  __int64 v31; // r10
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rdx
  KIRQL v36; // dl
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // r8d
  __int64 v40; // r9
  __int64 v41; // r10
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rcx
  __int64 v47; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  int v52; // ecx
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rax
  KIRQL v63; // [rsp+80h] [rbp+8h]

  v4 = a3;
  v7 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v8 = *(_QWORD *)(a1 + 64);
  if ( !v8 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v8 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v8, a3, a4);
  v9 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v10 = *(_QWORD *)(v8 + 888)
        + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
    *(_DWORD *)v10 = 812660273;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = a2;
    *(_QWORD *)(v10 + 24) = v9;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      v9,
      43,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      v4);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = v11;
  v63 = v11;
  *(_DWORD *)(a2 + 448) = 1;
  v14 = UsbhLogMask;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
      *(_DWORD *)v16 = 724267376;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 16) = 16LL;
      *(_QWORD *)(v16 + 24) = v12;
      v14 = UsbhLogMask;
    }
  }
  v17 = *(unsigned __int16 *)(a2 + 4);
  v18 = *(int *)(a2 + 12);
  if ( (v14 & 0x10) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 64);
    if ( v19 )
    {
      v20 = *(_QWORD *)(v19 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
      *(_DWORD *)v20 = 724267376;
      *(_QWORD *)(v20 + 8) = 0LL;
      *(_QWORD *)(v20 + 16) = v18;
      *(_QWORD *)(v20 + 24) = v17;
    }
  }
  v21 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v21;
  v22 = a2 + 32 * (v21 + 43);
  *(_DWORD *)v22 = 16;
  v23 = *(_DWORD *)(a2 + 12);
  *(_QWORD *)(v22 + 12) = 0LL;
  *(_QWORD *)(v22 + 20) = 0LL;
  *(_DWORD *)(v22 + 28) = 0;
  v24 = (__int64 **)(a2 + 456);
  *(_DWORD *)(v22 + 4) = v23;
  *(_DWORD *)(v22 + 8) = -1;
  v25 = *(_DWORD *)(a2 + 12);
  if ( *v24 == (__int64 *)v24 )
  {
    KeResetEvent((PRKEVENT)(a2 + 496));
    if ( v25 != 3 )
    {
      switch ( v25 )
      {
        case 8:
        case 10:
          v61 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 8;
          *(_DWORD *)(v61 + a2 + 1384) = 8;
          goto LABEL_71;
        case 12:
        case 17:
          goto LABEL_71;
        case 13:
          v60 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 12;
          *(_DWORD *)(v60 + a2 + 1384) = 12;
          goto LABEL_71;
        case 14:
          break;
        default:
          goto LABEL_70;
      }
    }
    v47 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 3;
    *(_DWORD *)(v47 + a2 + 1384) = 3;
    v48 = *(unsigned __int16 *)(a2 + 4);
    v49 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      v50 = *(_QWORD *)(a1 + 64);
      if ( v50 )
      {
        v51 = *(_QWORD *)(v50 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
        *(_DWORD *)v51 = 757952880;
        *(_QWORD *)(v51 + 8) = 0LL;
        *(_QWORD *)(v51 + 16) = v49;
        *(_QWORD *)(v51 + 24) = v48;
      }
    }
    v52 = *(_DWORD *)(a2 + 12);
    v53 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v53 + a2 + 1384) = v52;
    goto LABEL_35;
  }
  switch ( v25 )
  {
    case 12:
      goto LABEL_28;
    case 3:
    case 8:
    case 10:
      goto LABEL_17;
    case 13:
LABEL_28:
      v7 = *v24;
      v37 = **v24;
      if ( (__int64 **)(*v24)[1] != v24 || *(__int64 **)(v37 + 8) != v7 )
        __fastfail(3u);
      *v24 = (__int64 *)v37;
      *(_QWORD *)(v37 + 8) = v24;
      v38 = *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 12;
      *(_DWORD *)(32 * v38 + a2 + 1384) = 12;
      v39 = *((_DWORD *)v7 - 2);
      v40 = *(unsigned __int16 *)(a2 + 4);
      v41 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v42 = *(_QWORD *)(a1 + 64);
        if ( v42 )
        {
          v43 = *(_QWORD *)(v42 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
          *(_DWORD *)v43 = 757952880;
          *(_QWORD *)(v43 + 8) = 0LL;
          *(_QWORD *)(v43 + 16) = v41;
          *(_QWORD *)(v43 + 24) = v40;
        }
      }
      v44 = *(_DWORD *)(a2 + 12);
      v45 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v45 + a2 + 8) = v44;
      if ( v39 )
        *(_DWORD *)(v45 + a2 + 12) = v39;
LABEL_35:
      v36 = v13;
LABEL_36:
      KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v36);
      return v7;
    case 14:
LABEL_17:
      v7 = *v24;
      v26 = **v24;
      if ( (__int64 **)(*v24)[1] != v24 || *(__int64 **)(v26 + 8) != v7 )
        __fastfail(3u);
      *v24 = (__int64 *)v26;
      v27 = v7 - 2;
      *(_QWORD *)(v26 + 8) = v24;
      if ( (*(_DWORD *)(a2 + 2408) & 2) != 0 && (v27[1] & 1) != 0 )
      {
        UsbhRemoveQueuedSuspend(a1, a2, v17, v18);
        UsbhiSignalSuspendEvent(a1, a2);
        v58 = *v24;
        *v7 = (__int64)*v24;
        v27[3] = (__int64)v24;
        if ( (__int64 **)v58[1] != v24 )
          __fastfail(3u);
        v58[1] = (__int64)v7;
        *v24 = v7;
        v7 = 0LL;
        v59 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_BYTE *)(a2 + 2839) = 1;
        *(_DWORD *)(a2 + 12) = 14;
        *(_DWORD *)(v59 + a2 + 1384) = 14;
      }
      else if ( v25 != 3 && (v25 == 8 || v25 == 10) )
      {
        v54 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 8;
        *(_DWORD *)(v54 + a2 + 1384) = 8;
      }
      else
      {
        v28 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 3;
        *(_DWORD *)(v28 + a2 + 1384) = 3;
      }
      v29 = *((_DWORD *)v27 + 2);
      v30 = *(unsigned __int16 *)(a2 + 4);
      v31 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        v32 = *(_QWORD *)(a1 + 64);
        if ( v32 )
        {
          v33 = *(_QWORD *)(v32 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
          *(_DWORD *)v33 = 757952880;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = v31;
          *(_QWORD *)(v33 + 24) = v30;
        }
      }
      v34 = *(_DWORD *)(a2 + 12);
      v35 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v35 + a2 + 8) = v34;
      if ( v29 )
        *(_DWORD *)(v35 + a2 + 12) = v29;
      v36 = v63;
      goto LABEL_36;
    case 17:
      v7 = *v24;
      v55 = **v24;
      if ( (__int64 **)(*v24)[1] != v24 || *(__int64 **)(v55 + 8) != v7 )
        __fastfail(3u);
      *v24 = (__int64 *)v55;
      *(_QWORD *)(v55 + 8) = v24;
      v56 = *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 17;
      *(_DWORD *)(32 * v56 + a2 + 1384) = 17;
      v57 = *((unsigned int *)v7 - 2);
      break;
    default:
LABEL_70:
      v62 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v62 + a2 + 1384) = 19;
LABEL_71:
      v57 = 0LL;
      break;
  }
  UsbhUnlockPcqWithTag(a1, a2, v13, v57);
  return v7;
}
