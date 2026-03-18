/*
 * XREFs of UsbhHubRunPortChangeQueue @ 0x1C0011850
 * Callers:
 *     Usbh_PCE_wRun_Action @ 0x1C00125D0 (Usbh_PCE_wRun_Action.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueNullEventEx @ 0x1C0011810 (UsbhDispatch_PortChangeQueueNullEventEx.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhHubDispatchPortEvent @ 0x1C0013130 (UsbhHubDispatchPortEvent.c)
 *     UsbhQueryPortState @ 0x1C00150B0 (UsbhQueryPortState.c)
 *     UsbhUnlatchPdo @ 0x1C001F8F0 (UsbhUnlatchPdo.c)
 *     UsbhPCE_psSUSPEND @ 0x1C0026F00 (UsbhPCE_psSUSPEND.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     UsbhHubProcessTimeoutObj @ 0x1C0040C70 (UsbhHubProcessTimeoutObj.c)
 *     UsbhPCE_wChangeERROR @ 0x1C004189C (UsbhPCE_wChangeERROR.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhHubRunPortChangeQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // r8
  _DWORD *v11; // rdx
  unsigned __int16 v12; // si
  char v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char *v19; // r10
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rsi
  __int16 v23; // ax
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int PortState; // r15d
  int v30; // eax
  int v31; // r14d
  __int64 v32; // r8
  _DWORD *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  _DWORD *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 result; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  int v45; // [rsp+50h] [rbp-41h]
  __int64 v46; // [rsp+68h] [rbp-29h] BYREF
  int v47; // [rsp+70h] [rbp-21h]
  int v48; // [rsp+78h] [rbp-19h]
  __int16 v49; // [rsp+7Ch] [rbp-15h]
  int v50; // [rsp+80h] [rbp-11h]
  __int64 v51; // [rsp+F8h] [rbp+67h]
  __int64 v53; // [rsp+110h] [rbp+7Fh] BYREF

  v53 = a4;
  v4 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  if ( !a3 )
    UsbhTrapFatal_Dbg(a1, a1, 0LL, a4);
  if ( *(_DWORD *)a2 != 1146120296 )
    UsbhTrapFatal_Dbg(a1, a1, a3, a4);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v9 = *(_QWORD *)(v7 + 888)
       + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
    *(_DWORD *)v9 = 1466458992;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = a2;
    *(_QWORD *)(v9 + 24) = v8;
  }
  v10 = (char *)&WPP_7750967c46a832f629b3446543f02792_Traceguids;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      (unsigned int)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      98,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4),
      v4);
    v10 = (char *)&WPP_7750967c46a832f629b3446543f02792_Traceguids;
  }
  *(_DWORD *)(a2 + 8) = 1;
  while ( 1 )
  {
    v11 = *(_DWORD **)(a1 + 64);
    v12 = *(_WORD *)(a2 + 4);
    v46 = 0LL;
    if ( !v11 )
      UsbhTrapFatal_Dbg(a1, 0LL, &WPP_7750967c46a832f629b3446543f02792_Traceguids, a4);
    if ( *v11 != 541218120 )
      UsbhTrapFatal_Dbg(a1, v11, &WPP_7750967c46a832f629b3446543f02792_Traceguids, a4);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v11,
        (unsigned int)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        74,
        (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
        v12,
        v4);
    v13 = UsbhLogMask;
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 909198672;
        *(_QWORD *)(v15 + 24) = v12;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = 0LL;
        v13 = UsbhLogMask;
      }
    }
    if ( (v13 & 8) != 0 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
        *(_DWORD *)v17 = 1413771367;
        *(_QWORD *)(v17 + 16) = v12;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 24) = 0LL;
        v13 = UsbhLogMask;
      }
    }
    if ( v12 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( !v18 )
        UsbhTrapFatal_Dbg(a1, 0LL, v10, a4);
      if ( *(_DWORD *)v18 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v18, v10, a4);
      if ( v12 <= *(unsigned __int8 *)(v18 + 2938) )
      {
        v10 = *(char **)(v18 + 3056);
        if ( v10 )
        {
          v19 = &v10[2928 * v12 - 2928];
          if ( (v13 & 8) != 0 )
          {
            v20 = *(_QWORD *)(v18 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v18 + 880)) & *(_DWORD *)(v18 + 884));
            *(_DWORD *)v20 = 1044672615;
            *(_QWORD *)(v20 + 16) = v12;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_QWORD *)(v20 + 24) = v19;
          }
          if ( v19 )
            v46 = UsbhDispatch_PortChangeQueueNullEventEx(a1, (int)v19, 16, v4, (__int64)&v46);
        }
      }
    }
    if ( !v46 )
      break;
    *(_QWORD *)(a2 + 376) = v4;
    v21 = v46;
    *(_QWORD *)(v4 + 24) = KeGetCurrentThread();
    v22 = v21 - 16;
    v23 = UsbhLogMask;
    v24 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      v25 = *(_QWORD *)(a1 + 64);
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
        *(_DWORD *)v26 = 1313891184;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = v24;
        *(_QWORD *)(v26 + 24) = 0LL;
        v23 = UsbhLogMask;
      }
      if ( (v23 & 0x200) != 0 )
      {
        v27 = *(_QWORD *)(a1 + 64);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
          *(_DWORD *)v28 = 1145332592;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 16) = a2;
          *(_QWORD *)(v28 + 24) = v22;
        }
      }
    }
    if ( (*(_DWORD *)(v22 + 8) & 0x16) != 0 )
      _InterlockedDecrement((volatile signed __int32 *)(a2 + 2876));
    if ( (*(_DWORD *)(v22 + 8) & 1) != 0 )
      *(_WORD *)(a2 + 2839) = 256;
    PortState = UsbhQueryPortState(a1);
    if ( PortState >> 30 == 3 )
    {
      v44 = *(_DWORD *)(v22 + 48);
      LODWORD(v53) = 0;
      if ( v44 == 2 )
      {
        UsbhHubProcessTimeoutObj(a1, a2, v22, &v53);
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v22 + 8), v4, 0, 0LL);
      }
      else if ( v44 == 1 )
      {
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v22 + 8), v4, 1, *(_QWORD *)(v22 + 40));
      }
      else
      {
        UsbhPCE_wChangeERROR(a1, a2, *(_QWORD *)(v22 + 8), v4, 0, 0LL);
      }
      v49 = *(_WORD *)(a2 + 4);
      v48 = 1145332592;
      v50 = 0x80000;
      v31 = UsbhHubDispatchPortEvent(a1);
      if ( !(unsigned __int8)Usb_Disconnected(PortState) && !*(_BYTE *)(v7 + 5268) )
      {
        LOBYTE(v45) = 1;
        UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 1, v22, 56, PortState, v47, usbfile_pchange_c, 6038, v45);
      }
    }
    else
    {
      if ( *(_DWORD *)(v22 + 48) == 2 )
        v30 = UsbhHubProcessTimeoutObj(a1, a2, v22, &v53);
      else
        v30 = UsbhHubDispatchPortEvent(a1);
      v31 = v30;
    }
    *(_BYTE *)(a2 + 2840) = 0;
    if ( *(_DWORD *)(v22 + 48) == 1 )
      UsbhUnlatchPdo(a1, *(_QWORD *)(v22 + 40), v22, 1230065731LL);
    ExFreePoolWithTag((PVOID)v22, 0);
    *(_QWORD *)(a2 + 376) = 0LL;
    if ( v31 == 5 )
    {
      LODWORD(v4) = a3;
      UsbhPCE_psSUSPEND(a1, a2, a3);
      break;
    }
    if ( *(int *)(a2 + 2876) > 50 )
    {
      LOBYTE(v45) = 1;
      UsbhException(a1, 0, 139, 0, 0, -1073741823, -1073704960, usbfile_pchange_c, 6117, v45);
LABEL_91:
      *(_DWORD *)(a2 + 400) = 4;
LABEL_50:
      v33 = *(_DWORD **)(a1 + 64);
      if ( !v33 )
        UsbhTrapFatal_Dbg(a1, 0LL, v32, a4);
      if ( *v33 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v33, v32, a4);
      LODWORD(v4) = a3;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v33,
          v32,
          71,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          *(_WORD *)(a2 + 4),
          a3);
      v34 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v35 = *(_QWORD *)(a1 + 64);
        if ( v35 )
        {
          v36 = *(_QWORD *)(v35 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v35 + 880)) & *(_DWORD *)(v35 + 884));
          *(_DWORD *)v36 = 959530320;
          *(_QWORD *)(v36 + 8) = 0LL;
          *(_QWORD *)(v36 + 16) = 0LL;
          *(_QWORD *)(v36 + 24) = v34;
        }
      }
      LODWORD(v51) = 0;
      UsbhDispatch_PortChangeQueueEventEx(a1, a2, 19, a3, v51, 0, 0LL, 0LL);
      break;
    }
    if ( v31 == 4 )
      goto LABEL_50;
    if ( v31 == 3 )
      goto LABEL_91;
    v4 = a3;
    v10 = (char *)&WPP_7750967c46a832f629b3446543f02792_Traceguids;
  }
  *(_DWORD *)(a2 + 8) = 0;
  v37 = *(_DWORD **)(a1 + 64);
  if ( !v37 )
    UsbhTrapFatal_Dbg(a1, 0LL, v10, a4);
  if ( *v37 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v37, v10, a4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      58,
      (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
      *(_WORD *)(a2 + 4));
  v38 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v39 = *(_QWORD *)(a1 + 64);
    if ( v39 )
    {
      v40 = *(_QWORD *)(v39 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
      *(_DWORD *)v40 = 909133136;
      *(_QWORD *)(v40 + 8) = 0LL;
      *(_QWORD *)(v40 + 16) = 0LL;
      *(_QWORD *)(v40 + 24) = v38;
    }
  }
  LODWORD(v51) = 0;
  result = UsbhDispatch_PortChangeQueueEventEx(a1, a2, 6, v4, v51, 0, 0LL, 0LL);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    v42 = *(_QWORD *)(a1 + 64);
    if ( v42 )
    {
      result = 762017649LL;
      v43 = *(_QWORD *)(v42 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
      *(_DWORD *)v43 = 762017649;
      *(_QWORD *)(v43 + 8) = 0LL;
      *(_QWORD *)(v43 + 16) = a2;
      *(_QWORD *)(v43 + 24) = 0LL;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_d(
             WPP_GLOBAL_Control->DeviceExtension,
             0,
             1,
             99,
             (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
             *(_WORD *)(a2 + 4));
  return result;
}
