/*
 * XREFs of UsbhHubProcessIsr @ 0x1C0012AD0
 * Callers:
 *     UsbhHubIsrWorker @ 0x1C0024520 (UsbhHubIsrWorker.c)
 * Callees:
 *     UsbhEtwGetHubInfo @ 0x1C000BDE0 (UsbhEtwGetHubInfo.c)
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     UsbhEtwWrite @ 0x1C000F240 (UsbhEtwWrite.c)
 *     UsbhQueryChange @ 0x1C000FA00 (UsbhQueryChange.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhHubAckPortChange @ 0x1C001BA8C (UsbhHubAckPortChange.c)
 *     UsbhQueryHubState @ 0x1C001C92C (UsbhQueryHubState.c)
 *     UsbhPostInterrupt @ 0x1C00238D0 (UsbhPostInterrupt.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024960 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C002765C (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C0028D40 (__security_check_cookie.c)
 *     memset @ 0x1C0029180 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_HW_Stop @ 0x1C0040F90 (UsbhPCE_HW_Stop.c)
 *     UsbhQueuePauseChange @ 0x1C0041628 (UsbhQueuePauseChange.c)
 *     UsbhHubAckHubChange @ 0x1C0043B54 (UsbhHubAckHubChange.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 */

LONG __fastcall UsbhHubProcessIsr(struct _DEVICE_OBJECT *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  void *DeviceExtension; // rcx
  __int64 v8; // rdx
  struct _KEVENT *v9; // r15
  struct _KEVENT *v10; // rbx
  int v11; // r9d
  PVOID PoolWithTag; // rax
  _LIST_ENTRY *v13; // rax
  _LIST_ENTRY *Blink; // rdx
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // r9
  __int64 v23; // rcx
  char v24; // bl
  __int64 v25; // rax
  int v26; // ecx
  void *v27; // rdx
  __int64 v28; // rcx
  unsigned __int16 v29; // ax
  __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // r10
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // r10
  __int64 v37; // rcx
  LONG result; // eax
  __int64 LockNV; // r9
  void *v40; // rdx
  __int64 v41; // rcx
  int v42; // r9d
  int v43; // r9d
  int HubState; // ebx
  __int64 v45; // rsi
  char v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r9
  __int16 v49; // r9
  int v50; // r9d
  int v51; // r9d
  __int64 v52; // rdx
  __int64 v53; // r9
  int v54; // [rsp+48h] [rbp-81h]
  unsigned __int16 v55; // [rsp+64h] [rbp-65h] BYREF
  unsigned __int16 v56; // [rsp+66h] [rbp-63h]
  _WORD v57[2]; // [rsp+68h] [rbp-61h] BYREF
  int v58; // [rsp+6Ch] [rbp-5Dh] BYREF
  unsigned int v59; // [rsp+70h] [rbp-59h]
  __int64 v60; // [rsp+78h] [rbp-51h]
  __int64 v61; // [rsp+80h] [rbp-49h]
  unsigned int v62; // [rsp+88h] [rbp-41h] BYREF
  __int64 v63; // [rsp+90h] [rbp-39h] BYREF
  __int64 v64; // [rsp+98h] [rbp-31h]
  int v65; // [rsp+A0h] [rbp-29h]
  int v66; // [rsp+A8h] [rbp-21h] BYREF
  __int16 v67; // [rsp+ACh] [rbp-1Dh]
  __int16 v68; // [rsp+AEh] [rbp-1Bh]
  __int16 v69; // [rsp+B0h] [rbp-19h]
  __int16 v70; // [rsp+B2h] [rbp-17h]
  _BYTE v71[40]; // [rsp+B8h] [rbp-11h] BYREF

  v4 = a2;
  v5 = 0LL;
  v59 = a2;
  v58 = 0;
  v61 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      36,
      (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
      a2);
    a3 = v61;
  }
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( !a1 )
      goto LABEL_57;
    DeviceExtension = a1->DeviceExtension;
    if ( DeviceExtension )
    {
      v8 = *((_QWORD *)DeviceExtension + 111)
         + 32LL
         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v8 = 1467052649;
      *(_QWORD *)(v8 + 8) = 0LL;
      *(_QWORD *)(v8 + 16) = a3;
      *(_QWORD *)(v8 + 24) = v4;
    }
  }
  if ( !a1 )
LABEL_57:
    UsbhTrapFatal_Dbg(a1, a1, a3, a4);
  v9 = (struct _KEVENT *)a1->DeviceExtension;
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( v9->Header.LockNV != 541218120 )
    UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, a3, a4);
  v10 = (struct _KEVENT *)FdoExt(a1);
  v10[142].Header.Type = 1;
  KeWaitForSingleObject(&v10[139], Executive, 0, 0, 0LL);
  Log((_DWORD)a1, 0x10000, 1212771939, 0, v10[142].Header.Signalling);
  if ( v10[142].Header.Signalling != (_BYTE)v11 )
  {
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, (unsigned int)(v11 + 40), 0x42554855u);
    v5 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x28uLL);
      *(_DWORD *)v5 = 1215918946;
      *(_QWORD *)(v5 + 24) = a1;
      v13 = (_LIST_ENTRY *)(v5 + 8);
      *(_DWORD *)(v5 + 32) = 826438515;
      Blink = v10[129].Header.WaitListHead.Blink;
      *(_QWORD *)(v5 + 8) = (char *)v10 + 3104;
      *(_QWORD *)(v5 + 16) = Blink;
      if ( Blink->Flink != &v10[129].Header.WaitListHead )
        __fastfail(3u);
      Blink->Flink = v13;
      v10[129].Header.WaitListHead.Blink = v13;
    }
    else
    {
      ++v10[130].Header.LockNV;
      v5 = 1936941672LL;
    }
  }
  KeSetEvent(v10 + 139, 0, 0);
  _InterlockedIncrement(&v9[114].Header.Lock);
  if ( (UsbhLogMask & 4) != 0 )
  {
    v15 = a1->DeviceExtension;
    if ( v15 )
    {
      v16 = *((_QWORD *)v15 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
      *(_DWORD *)v16 = 2003923561;
      *(_QWORD *)(v16 + 16) = (unsigned __int8)v4;
      *(_QWORD *)(v16 + 8) = 0LL;
      *(_QWORD *)(v16 + 24) = 0LL;
    }
  }
  if ( (_BYTE)v4 )
  {
    Log((_DWORD)a1, 8, 1735410772, (unsigned __int8)v4, 0LL);
    v17 = FdoExt(a1);
    if ( (unsigned __int8)v4 <= *(unsigned __int8 *)(FdoExt(a1) + 2938)
      && (v18 = *(_QWORD *)(v17 + 3056)) != 0
      && (v64 = 2928LL * ((unsigned __int8)v4 - 1),
          v60 = v64 + v18,
          Log((_DWORD)a1, 8, 1735410750, (unsigned __int8)v4, v64 + v18),
          v19) )
    {
      v21 = (int)UsbhQueryChange((__int64)a1, (unsigned __int8)v4, v57, &v58);
      if ( (UsbhLogMask & 4) != 0 )
      {
        v20 = (__int64)a1->DeviceExtension;
        if ( v20 )
        {
          v23 = *(_QWORD *)(v20 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
          *(_DWORD *)v23 = 1751340369;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 16) = (unsigned __int8)v4;
          *(_QWORD *)(v23 + 24) = v21;
        }
      }
      if ( (v21 & 0xC0000000) != 0xC0000000 )
      {
        v24 = v59;
        v62 = v59;
        if ( dword_1C0067650 )
        {
          v25 = FdoExt(a1);
          v66 = *(_DWORD *)(v25 + 5192);
          v67 = *(_WORD *)(v25 + 5196);
          v26 = *(_DWORD *)(v25 + 5200);
          v68 = v26;
          v65 = v26;
          v69 = *(_WORD *)(v25 + 5228);
          v70 = *(_WORD *)(v25 + 5230);
          UsbhEtwGetHubInfo(v25, (__int64)v71);
          UsbhEtwWrite(
            &USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE,
            0LL,
            (unsigned __int64)&v66,
            12LL,
            v71,
            36LL,
            &v62,
            4LL,
            v57,
            2,
            0LL);
        }
        if ( !v57[0] )
          goto LABEL_51;
        v21 = (int)UsbhHubAckPortChange(a1, (unsigned __int8)v4, v57, &v58);
        if ( (UsbhLogMask & 4) != 0 )
        {
          v27 = a1->DeviceExtension;
          if ( v27 )
          {
            v28 = *((_QWORD *)v27 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
            *(_DWORD *)v28 = 1734894401;
            *(_QWORD *)(v28 + 8) = 0LL;
            *(_QWORD *)(v28 + 16) = (unsigned __int8)v4;
            *(_QWORD *)(v28 + 24) = v21;
          }
        }
        if ( (v21 & 0xC0000000) != 0xC0000000 )
        {
          v29 = v57[0];
          if ( (v57[0] & 1) != 0 )
          {
            Log((_DWORD)a1, 4, 1112425259, (unsigned __int8)v4, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(v60 + 404));
            v29 = v57[0];
          }
          LODWORD(v63) = v29;
          FdoExt(a1);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              62,
              (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
              v4);
          Log((_DWORD)a1, 512, 1346711858, 0, (unsigned __int8)v4);
          Log((_DWORD)a1, 8, 1735410772, (unsigned __int8)v4, v30);
          v31 = FdoExt(a1);
          if ( (unsigned __int8)v4 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
          {
            v32 = *(_QWORD *)(v31 + 3056);
            if ( v32 )
            {
              Log((_DWORD)a1, 8, 1735410750, (unsigned __int8)v4, v32 + v64);
              if ( v33 )
              {
                LODWORD(v60) = 0;
                UsbhDispatch_PortChangeQueueEventEx((_DWORD)a1, v33, 12, v61, v60, 0, 0LL, 0LL);
              }
            }
          }
          v34 = v63;
          FdoExt(a1);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              75,
              (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
              v4);
          Log((_DWORD)a1, 8, 1735410772, (unsigned __int8)v4, 0LL);
          v60 = FdoExt(a1);
          if ( (unsigned __int8)v4 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
          {
            v35 = *(_QWORD *)(v60 + 3056);
            if ( v35 )
            {
              Log((_DWORD)a1, 8, 1735410750, (unsigned __int8)v4, v35 + v64);
              if ( v36 )
                UsbhDispatch_PortChangeQueueEventEx((_DWORD)a1, v36, 4, v61, v34, 0, 0LL, 0LL);
            }
          }
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              76,
              (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
              v4);
          v24 = v59;
          if ( (UsbhLogMask & 4) != 0 )
          {
            v20 = (__int64)a1->DeviceExtension;
            if ( v20 )
            {
              v37 = *(_QWORD *)(v20 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
              *(_DWORD *)v37 = 1734894417;
              *(_QWORD *)(v37 + 24) = &v63;
              *(_QWORD *)(v37 + 8) = 0LL;
              *(_QWORD *)(v37 + 16) = (unsigned __int8)v4;
            }
          }
LABEL_51:
          UsbhDecHubBusy((__int64)a1, v20, (_QWORD *)v5, v22);
          _InterlockedDecrement(&v9[114].Header.Lock);
          UsbhPostInterrupt(a1);
          result = UsbhLogMask;
          LockNV = v9[114].Header.LockNV;
          if ( (UsbhLogMask & 4) != 0 )
          {
            v40 = a1->DeviceExtension;
            if ( v40 )
            {
              result = 826177385;
              v41 = *((_QWORD *)v40 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v40 + 220) & *((_DWORD *)v40 + 221));
              *(_DWORD *)v41 = 826177385;
              *(_QWORD *)(v41 + 8) = 0LL;
              *(_QWORD *)(v41 + 16) = 0LL;
              *(_QWORD *)(v41 + 24) = LockNV;
            }
          }
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            return WPP_RECORDER_SF_d(
                     WPP_GLOBAL_Control->DeviceExtension,
                     0,
                     1,
                     37,
                     (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
                     v24);
          return result;
        }
      }
      KeSetEvent(v9 + 112, 0, 0);
      if ( (unsigned __int8)Usb_Disconnected((unsigned int)v21) )
      {
        Log((_DWORD)a1, 4, 1769436977, 0, (int)v21);
        UsbhQueuePauseChange(a1, (unsigned __int8)v4, v61);
        UsbhPCE_HW_Stop(a1, (unsigned __int8)v4, v61);
      }
      else
      {
        Log((_DWORD)a1, 4, 1769436978, 0, (int)v21);
        LOBYTE(v54) = 1;
        UsbhException((int)a1, (unsigned __int8)v4, 1, v42, v42, v21, v58, usbfile_bus_c, 3190, v54);
      }
      LOBYTE(v4) = v59;
    }
    else
    {
      Log((_DWORD)a1, 4, 1769437016, 0, -1073741811LL);
      LOBYTE(v54) = v43;
      UsbhException((int)a1, (unsigned __int8)v4, v43 + 1, v43, 0, -1073741811, 0, usbfile_bus_c, 3095, v54);
      KeSetEvent(v9 + 112, 0, 0);
      LOBYTE(v4) = v59;
    }
    goto LABEL_92;
  }
  HubState = UsbhQueryHubState((_DWORD)a1);
  v45 = HubState;
  Log((_DWORD)a1, 4, 1364551795, 0, HubState);
  Log((_DWORD)a1, 4, 1364551779, v56, v55);
  if ( HubState < 0 )
    goto LABEL_84;
  if ( (v55 & 1) != 0 )
    v9[127].Header.LockNV = 100;
  else
    v9[127].Header.LockNV = 500;
  if ( (v56 & 1) != 0 )
    LODWORD(v9[126].Header.WaitListHead.Flink) = v9[127].Header.Lock;
  HubState = UsbhHubAckHubChange(a1, &v55, &v58);
  v45 = HubState;
  Log((_DWORD)a1, 4, 1095263080, 0, HubState);
  if ( HubState < 0 || (v55 & 2) != 0 || BYTE1(v9[125].Header.WaitListHead.Flink) == v46 && (v56 & 2) != 0 )
  {
LABEL_84:
    KeSetEvent(v9 + 112, 0, 0);
    if ( (v55 & 2) != 0 || !BYTE1(v9[125].Header.WaitListHead.Flink) && (v56 & 2) != 0 )
    {
      Log((_DWORD)a1, 4, 1749512054, 0, v45);
      if ( BYTE2(v9[125].Header.WaitListHead.Flink) == (_BYTE)v51 )
      {
        BYTE2(v9[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx((_DWORD)a1, 1, (unsigned int)UsbhSetHubOvercurrentDetectedKey, v51, 0, 1666340431, 0LL);
      }
      LOBYTE(v54) = 0;
      UsbhException((int)a1, 0, 75, (int)&v55, 4, HubState, v58, usbfile_bus_c, 3295, v54);
    }
    else if ( !(unsigned __int8)Usb_Disconnected((unsigned int)HubState) )
    {
      Log((_DWORD)a1, 4, 1769433138, 0, v45);
      LOBYTE(v54) = 0;
      UsbhException((int)a1, 0, v50 + 1, v50, 0, HubState, v58, usbfile_bus_c, 3308, v54);
    }
LABEL_92:
    Log((_DWORD)a1, 4, 1769422386, 0, v9[114].Header.LockNV);
    _InterlockedDecrement(&v9[114].Header.Lock);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v53 )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        39,
        (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids,
        v4);
    return UsbhDecHubBusy((__int64)a1, v52, (_QWORD *)v5, v53);
  }
  LOBYTE(v54) = 0;
  if ( (v56 & 2) != 0 )
  {
    UsbhException((int)a1, 0, 72, (int)&v55, 4, HubState, v58, usbfile_bus_c, 3247, v54);
  }
  else if ( (v56 & 1) != 0 )
  {
    UsbhException((int)a1, 0, 73, (int)&v55, 4, HubState, v58, usbfile_bus_c, 3250, v54);
  }
  else
  {
    UsbhException((int)a1, 0, 74, (int)&v55, 4, HubState, v58, usbfile_bus_c, 3254, v54);
  }
  _InterlockedDecrement(&v9[114].Header.Lock);
  UsbhDecHubBusy((__int64)a1, v47, (_QWORD *)v5, v48);
  UsbhPostInterrupt(a1);
  result = Log((_DWORD)a1, 4, 1769422387, 0, v9[114].Header.LockNV);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) != v49 )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             0,
             1,
             38,
             (__int64)&WPP_023598a80677ca4034006684006c4b8e_Traceguids);
  return result;
}
