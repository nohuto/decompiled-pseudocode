/*
 * XREFs of UsbhHubProcessIsr @ 0x1C00127E0
 * Callers:
 *     UsbhHubIsrWorker @ 0x1C0024640 (UsbhHubIsrWorker.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhQueryChange @ 0x1C00187B0 (UsbhQueryChange.c)
 *     UsbhEtwGetHubInfo @ 0x1C0019020 (UsbhEtwGetHubInfo.c)
 *     UsbhEtwWrite @ 0x1C001B750 (UsbhEtwWrite.c)
 *     UsbhQueryHubState @ 0x1C00201D8 (UsbhQueryHubState.c)
 *     UsbhPostInterrupt @ 0x1C00239F0 (UsbhPostInterrupt.c)
 *     UsbhQueueWorkItemEx @ 0x1C0024A80 (UsbhQueueWorkItemEx.c)
 *     UsbhHubAckPortChange @ 0x1C0025B34 (UsbhHubAckPortChange.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_HW_Stop @ 0x1C0040D74 (UsbhPCE_HW_Stop.c)
 *     UsbhQueuePauseChange @ 0x1C004140C (UsbhQueuePauseChange.c)
 *     UsbhHubAckHubChange @ 0x1C0043A28 (UsbhHubAckHubChange.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
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
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  __int64 v55; // [rsp+28h] [rbp-A1h]
  int *v56; // [rsp+30h] [rbp-99h]
  __int64 v57; // [rsp+38h] [rbp-91h]
  _WORD *v58; // [rsp+40h] [rbp-89h]
  int v59; // [rsp+48h] [rbp-81h]
  __int64 v60; // [rsp+50h] [rbp-79h]
  unsigned __int16 v61; // [rsp+64h] [rbp-65h] BYREF
  unsigned __int16 v62; // [rsp+66h] [rbp-63h]
  _WORD v63[2]; // [rsp+68h] [rbp-61h] BYREF
  int v64; // [rsp+6Ch] [rbp-5Dh] BYREF
  unsigned int v65; // [rsp+70h] [rbp-59h]
  __int64 v66; // [rsp+78h] [rbp-51h]
  __int64 v67; // [rsp+80h] [rbp-49h]
  unsigned int v68; // [rsp+88h] [rbp-41h] BYREF
  __int64 v69; // [rsp+90h] [rbp-39h] BYREF
  __int64 v70; // [rsp+98h] [rbp-31h]
  int v71; // [rsp+A0h] [rbp-29h]
  int v72; // [rsp+A8h] [rbp-21h]
  __int16 v73; // [rsp+ACh] [rbp-1Dh]
  __int16 v74; // [rsp+AEh] [rbp-1Bh]
  __int16 v75; // [rsp+B0h] [rbp-19h]
  __int16 v76; // [rsp+B2h] [rbp-17h]
  _BYTE v77[40]; // [rsp+B8h] [rbp-11h] BYREF

  v4 = a2;
  v5 = 0LL;
  v65 = a2;
  v64 = 0;
  v67 = a3;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      36,
      (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
      a2);
    a3 = v67;
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
      && (v70 = 2928LL * ((unsigned __int8)v4 - 1),
          v66 = v70 + v18,
          Log((_DWORD)a1, 8, 1735410750, (unsigned __int8)v4, v70 + v18),
          v19) )
    {
      v21 = (int)UsbhQueryChange((_DWORD)a1);
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
        v24 = v65;
        v68 = v65;
        if ( dword_1C0066650 )
        {
          v25 = FdoExt(a1);
          v72 = *(_DWORD *)(v25 + 5192);
          v73 = *(_WORD *)(v25 + 5196);
          v26 = *(_DWORD *)(v25 + 5200);
          v74 = v26;
          v71 = v26;
          v75 = *(_WORD *)(v25 + 5228);
          v76 = *(_WORD *)(v25 + 5230);
          UsbhEtwGetHubInfo(v25, v77);
          v60 = 0LL;
          v59 = 2;
          v58 = v63;
          v57 = 4LL;
          v56 = (int *)&v68;
          v55 = 36LL;
          Timeout = (PLARGE_INTEGER)v77;
          UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE, 0LL);
        }
        if ( !v63[0] )
          goto LABEL_51;
        v21 = (int)UsbhHubAckPortChange(a1, (unsigned __int8)v4, v63, &v64, Timeout, v55, v56, v57, v58, v59, v60);
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
          v29 = v63[0];
          if ( (v63[0] & 1) != 0 )
          {
            Log((_DWORD)a1, 4, 1112425259, (unsigned __int8)v4, 0LL);
            _InterlockedIncrement((volatile signed __int32 *)(v66 + 404));
            v29 = v63[0];
          }
          LODWORD(v69) = v29;
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
              Log((_DWORD)a1, 8, 1735410750, (unsigned __int8)v4, v32 + v70);
              if ( v33 )
              {
                LODWORD(v66) = 0;
                UsbhDispatch_PortChangeQueueEventEx(a1, v33, 12LL, v67, v66, 0, 0LL, 0LL);
              }
            }
          }
          v34 = v69;
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
          v66 = FdoExt(a1);
          if ( (unsigned __int8)v4 <= *(unsigned __int8 *)(FdoExt(a1) + 2938) )
          {
            v35 = *(_QWORD *)(v66 + 3056);
            if ( v35 )
            {
              Log((_DWORD)a1, 8, 1735410750, (unsigned __int8)v4, v35 + v70);
              if ( v36 )
                UsbhDispatch_PortChangeQueueEventEx(a1, v36, 4LL, v67, v34, 0, 0LL, 0LL);
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
          v24 = v65;
          if ( (UsbhLogMask & 4) != 0 )
          {
            v20 = (__int64)a1->DeviceExtension;
            if ( v20 )
            {
              v37 = *(_QWORD *)(v20 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
              *(_DWORD *)v37 = 1734894417;
              *(_QWORD *)(v37 + 24) = &v69;
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
                     (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
                     v24);
          return result;
        }
      }
      KeSetEvent(v9 + 112, 0, 0);
      if ( (unsigned __int8)Usb_Disconnected((unsigned int)v21) )
      {
        Log((_DWORD)a1, 4, 1769436977, 0, (int)v21);
        UsbhQueuePauseChange(a1, (unsigned __int8)v4, v67);
        UsbhPCE_HW_Stop(a1, (unsigned __int8)v4, v67);
      }
      else
      {
        Log((_DWORD)a1, 4, 1769436978, 0, (int)v21);
        LOBYTE(v59) = 1;
        UsbhException((int)a1, (unsigned __int8)v4, 1, v42, v42, v21, v64, usbfile_bus_c, 3213, v59);
      }
      LOBYTE(v4) = v65;
    }
    else
    {
      Log((_DWORD)a1, 4, 1769437016, 0, -1073741811LL);
      LOBYTE(v59) = v43;
      UsbhException((int)a1, (unsigned __int8)v4, v43 + 1, v43, 0, -1073741811, 0, usbfile_bus_c, 3118, v59);
      KeSetEvent(v9 + 112, 0, 0);
      LOBYTE(v4) = v65;
    }
    goto LABEL_92;
  }
  HubState = UsbhQueryHubState((_DWORD)a1);
  v45 = HubState;
  Log((_DWORD)a1, 4, 1364551795, 0, HubState);
  Log((_DWORD)a1, 4, 1364551779, v62, v61);
  if ( HubState < 0 )
    goto LABEL_84;
  if ( (v61 & 1) != 0 )
    v9[127].Header.LockNV = 100;
  else
    v9[127].Header.LockNV = 500;
  if ( (v62 & 1) != 0 )
    LODWORD(v9[126].Header.WaitListHead.Flink) = v9[127].Header.Lock;
  HubState = UsbhHubAckHubChange(a1, &v61, &v64);
  v45 = HubState;
  Log((_DWORD)a1, 4, 1095263080, 0, HubState);
  if ( HubState < 0 || (v61 & 2) != 0 || BYTE1(v9[125].Header.WaitListHead.Flink) == v46 && (v62 & 2) != 0 )
  {
LABEL_84:
    KeSetEvent(v9 + 112, 0, 0);
    if ( (v61 & 2) != 0 || !BYTE1(v9[125].Header.WaitListHead.Flink) && (v62 & 2) != 0 )
    {
      Log((_DWORD)a1, 4, 1749512054, 0, v45);
      if ( BYTE2(v9[125].Header.WaitListHead.Flink) == (_BYTE)v51 )
      {
        BYTE2(v9[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx((_DWORD)a1, 1, (unsigned int)UsbhSetHubOvercurrentDetectedKey, v51, 0, 1666340431, 0LL);
      }
      LOBYTE(v59) = 0;
      UsbhException((int)a1, 0, 75, (int)&v61, 4, HubState, v64, usbfile_bus_c, 3318, v59);
    }
    else if ( !(unsigned __int8)Usb_Disconnected((unsigned int)HubState) )
    {
      Log((_DWORD)a1, 4, 1769433138, 0, v45);
      LOBYTE(v59) = 0;
      UsbhException((int)a1, 0, v50 + 1, v50, 0, HubState, v64, usbfile_bus_c, 3331, v59);
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
        (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids,
        v4);
    return UsbhDecHubBusy((__int64)a1, v52, (_QWORD *)v5, v53);
  }
  LOBYTE(v59) = 0;
  if ( (v62 & 2) != 0 )
  {
    UsbhException((int)a1, 0, 72, (int)&v61, 4, HubState, v64, usbfile_bus_c, 3270, v59);
  }
  else if ( (v62 & 1) != 0 )
  {
    UsbhException((int)a1, 0, 73, (int)&v61, 4, HubState, v64, usbfile_bus_c, 3273, v59);
  }
  else
  {
    UsbhException((int)a1, 0, 74, (int)&v61, 4, HubState, v64, usbfile_bus_c, 3277, v59);
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
             (__int64)&WPP_0fac597d3f0b5fd77bcb4f18b65857f6_Traceguids);
  return result;
}
