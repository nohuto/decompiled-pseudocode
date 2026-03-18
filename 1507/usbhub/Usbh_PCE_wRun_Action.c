/*
 * XREFs of Usbh_PCE_wRun_Action @ 0x1C0010D80
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhHubRunPortChangeQueue @ 0x1C00104E0 (UsbhHubRunPortChangeQueue.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     UsbhUnlockPcqWithTag @ 0x1C00241A0 (UsbhUnlockPcqWithTag.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_wRun_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rdx
  KIRQL v8; // al
  __int64 v9; // r8
  char v10; // cl
  KIRQL v11; // bp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int16 v20; // ax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r9
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  KIRQL v55; // [rsp+70h] [rbp+8h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_DWORD **)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v7, a3, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v7,
      a3,
      33,
      (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v10 = UsbhLogMask;
  v11 = v8;
  v55 = v8;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 64);
    if ( v12 )
    {
      v11 = v8;
      v13 = *(_QWORD *)(v12 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
      *(_DWORD *)v13 = 724267376;
      *(_QWORD *)(v13 + 8) = 0LL;
      *(_QWORD *)(v13 + 16) = 5LL;
      *(_QWORD *)(v13 + 24) = v9;
      v10 = UsbhLogMask;
    }
  }
  v14 = *(unsigned __int16 *)(a2 + 4);
  v15 = *(int *)(a2 + 12);
  if ( (v10 & 0x10) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 64);
    if ( v16 )
    {
      v11 = v8;
      v17 = *(_QWORD *)(v16 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
      *(_DWORD *)v17 = 724267376;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = v15;
      *(_QWORD *)(v17 + 24) = v14;
    }
  }
  v18 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v18;
  v19 = a2 + 32 * (v18 + 43);
  *(_DWORD *)v19 = 5;
  *(_DWORD *)(v19 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v19 + 8) = -1;
  *(_QWORD *)(v19 + 12) = 0LL;
  *(_QWORD *)(v19 + 20) = 0LL;
  *(_DWORD *)(v19 + 28) = 0;
  v20 = UsbhLogMask;
  v21 = *(int *)(a2 + 12);
  v22 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v23 = *(_QWORD *)(a1 + 64);
    if ( v23 )
    {
      v11 = v55;
      v24 = *(_QWORD *)(v23 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
      *(_DWORD *)v24 = 812660063;
      *(_QWORD *)(v24 + 8) = 0LL;
      *(_QWORD *)(v24 + 16) = v21;
      *(_QWORD *)(v24 + 24) = v22;
      v20 = UsbhLogMask;
    }
  }
  if ( (_DWORD)v21 == 5 )
  {
    v31 = *(unsigned __int16 *)(a2 + 4);
    if ( (v20 & 0x200) != 0 )
    {
      v32 = *(_QWORD *)(a1 + 64);
      if ( v32 )
      {
        v33 = *(_QWORD *)(v32 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
        *(_DWORD *)v33 = 896546143;
        *(_QWORD *)(v33 + 8) = 0LL;
        *(_QWORD *)(v33 + 16) = 5LL;
        *(_QWORD *)(v33 + 24) = v31;
      }
    }
    v34 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 12;
    *(_DWORD *)(v34 + a2 + 1384) = 12;
  }
  else
  {
    if ( (_DWORD)v21 != 4 )
    {
      if ( (_DWORD)v21 == 6 )
      {
LABEL_18:
        KeResetEvent((PRKEVENT)(a2 + 496));
        v25 = *(unsigned __int16 *)(a2 + 4);
        v26 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          v27 = *(_QWORD *)(a1 + 64);
          if ( v27 )
          {
            v11 = v55;
            v28 = *(_QWORD *)(v27 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
            *(_DWORD *)v28 = 757952880;
            *(_QWORD *)(v28 + 8) = 0LL;
            *(_QWORD *)(v28 + 16) = v26;
            *(_QWORD *)(v28 + 24) = v25;
          }
        }
        v29 = *(_DWORD *)(a2 + 12);
        v30 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v30 + a2 + 1384) = v29;
LABEL_22:
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v11);
      }
      else
      {
        switch ( (int)v21 )
        {
          case 3:
            Log(a1, 512, 1597337650, v21, *(unsigned __int16 *)(a2 + 4));
            v49 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 14;
            *(_DWORD *)(v49 + a2 + 1384) = 14;
            goto LABEL_50;
          case 8:
            Log(a1, 512, 1597337650, v21, *(unsigned __int16 *)(a2 + 4));
            v50 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 10;
            *(_DWORD *)(v50 + a2 + 1384) = 10;
            goto LABEL_50;
          case 9:
            Log(a1, 512, 1597337652, v21, *(unsigned __int16 *)(a2 + 4));
            v46 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 8;
            *(_DWORD *)(v46 + a2 + 1384) = 8;
            goto LABEL_38;
          case 10:
          case 14:
            Log(a1, 512, 1597337649, v21, *(unsigned __int16 *)(a2 + 4));
            goto LABEL_50;
          case 12:
            Log(a1, 512, 1597337650, v21, *(unsigned __int16 *)(a2 + 4));
            v51 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 13;
            *(_DWORD *)(v51 + a2 + 1384) = 13;
            goto LABEL_50;
          case 16:
            Log(a1, 512, 1597337655, v21, *(unsigned __int16 *)(a2 + 4));
            v53 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 17;
            *(_DWORD *)(v53 + a2 + 1384) = 17;
LABEL_38:
            *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
            UsbhUnlockPcqWithTag(a1, a2, v55, 0LL);
            goto LABEL_31;
          case 17:
            Log(a1, 512, 1597337654, v21, *(unsigned __int16 *)(a2 + 4));
            v52 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 17;
            *(_DWORD *)(v52 + a2 + 1384) = 17;
            goto LABEL_50;
          case 19:
            KeResetEvent((PRKEVENT)(a2 + 496));
            v54 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 12) = 19;
            *(_DWORD *)(v54 + a2 + 1384) = 19;
LABEL_50:
            UsbhUnlockPcqWithTag(a1, a2, v11, 0LL);
            break;
          case 20:
            goto LABEL_18;
          default:
            Log(a1, 512, 1597337656, v21, *(unsigned __int16 *)(a2 + 4));
            Log(a1, 16, 1886465325, *(_DWORD *)(a2 + 12), *(unsigned __int16 *)(a2 + 4));
            v47 = *(_DWORD *)(a2 + 12);
            v48 = 32LL * *(unsigned int *)(a2 + 2400);
            *(_DWORD *)(a2 + 448) = 0;
            *(_DWORD *)(v48 + a2 + 1384) = v47;
            goto LABEL_22;
        }
      }
      return;
    }
    v42 = *(unsigned __int16 *)(a2 + 4);
    if ( (v20 & 0x200) != 0 )
    {
      v43 = *(_QWORD *)(a1 + 64);
      if ( v43 )
      {
        v44 = *(_QWORD *)(v43 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
        *(_DWORD *)v44 = 862991711;
        *(_QWORD *)(v44 + 8) = 0LL;
        *(_QWORD *)(v44 + 16) = 4LL;
        *(_QWORD *)(v44 + 24) = v42;
      }
    }
    v45 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 3;
    *(_DWORD *)(v45 + a2 + 1384) = 3;
  }
  v35 = *(int *)(a2 + 12);
  v36 = *(unsigned __int16 *)(a2 + 4);
  *(_QWORD *)(a2 + 384) = KeGetCurrentThread();
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v37 = *(_QWORD *)(a1 + 64);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
      *(_DWORD *)v38 = 757952880;
      *(_QWORD *)(v38 + 24) = v36;
      *(_QWORD *)(v38 + 16) = v35;
      *(_QWORD *)(v38 + 8) = 0LL;
    }
  }
  v39 = *(_DWORD *)(a2 + 12);
  v40 = 32LL * *(unsigned int *)(a2 + 2400);
  *(_DWORD *)(a2 + 448) = 0;
  *(_DWORD *)(v40 + a2 + 1384) = v39;
  KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v55);
LABEL_31:
  UsbhHubRunPortChangeQueue(a1, a2, a3, v41);
}
