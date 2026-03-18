/*
 * XREFs of UsbhBusPause_Action @ 0x1C000F090
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C0018D34 (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhDerefPdo @ 0x1C000B104 (UsbhDerefPdo.c)
 *     UsbhRefPdo @ 0x1C000BE50 (UsbhRefPdo.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0010B40 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x1C0017830 (UsbhBusUnlatchPdo.c)
 *     UsbhSsh_CheckHubIdle @ 0x1C001BE88 (UsbhSsh_CheckHubIdle.c)
 *     UsbhPostInterrupt @ 0x1C00239F0 (UsbhPostInterrupt.c)
 *     UsbhCancelEnumeration @ 0x1C0027BB0 (UsbhCancelEnumeration.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D124 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 v8; // bp
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v10; // rcx
  __int64 v11; // r15
  unsigned __int8 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  void *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r14
  void *v21; // rdx
  __int64 v22; // rcx
  KIRQL v23; // al
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rdx
  __int64 v27; // rcx
  unsigned __int8 *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rbx
  void *v32; // rdx
  __int64 v33; // rcx
  PDEVICE_OBJECT v34; // rcx
  void *v35; // rdx
  __int64 v36; // rcx
  unsigned __int8 *v37; // rdx
  __int64 v38; // r10
  __int64 v39; // rcx
  _DWORD *v40; // rdx
  void *v41; // rdx
  __int64 v42; // rcx
  void *v43; // rdx
  __int64 v44; // rcx
  unsigned __int8 *v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rdi
  unsigned __int16 v50; // r14
  void *v51; // rdx
  __int64 v52; // rcx
  KIRQL v53; // al
  __int64 v54; // r8
  __int64 v55; // r9
  void *v56; // rdx
  __int64 v57; // rcx
  unsigned __int8 *v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  KIRQL v62; // [rsp+78h] [rbp-60h]
  KIRQL v63; // [rsp+88h] [rbp-50h]

  v4 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 2048, 1885435185, 0, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 2712), 0xFFFFFFFF) == 1 )
  {
    Log((_DWORD)DeviceObject, 2048, 1667320145, *(_QWORD *)(v4 + 2664), 0LL);
    IoCancelIrp(*(PIRP *)(v4 + 2664));
  }
  KeWaitForSingleObject((PVOID)(v4 + 2688), Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(a2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle(DeviceObject) < 0 )
  {
    *(_DWORD *)(v4 + 2712) = 0;
    KeResetEvent((PRKEVENT)(v4 + 2688));
    UsbhPostInterrupt(DeviceObject);
    return 3221225473LL;
  }
  else
  {
    v8 = 1;
    if ( !DeviceObject )
      UsbhTrapFatal_Dbg(0LL, 0LL, v5, v6);
    while ( 1 )
    {
      DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !DeviceExtension )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v5, v6);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension, v5, v6);
      if ( v8 > DeviceExtension[2938] )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v10 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v10 = 1413771367;
        *(_QWORD *)(v10 + 16) = v8;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 24) = 0LL;
      }
      if ( v8 )
      {
        v12 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v12 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v5, v6);
        if ( *(_DWORD *)v12 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v12, v5, v6);
        if ( v8 <= v12[2938] )
        {
          v13 = *((_QWORD *)v12 + 382);
          if ( v13 )
          {
            v11 = v13 + 2928LL * (v8 - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v14 = *((_QWORD *)v12 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
              *(_DWORD *)v14 = 1044672615;
              *(_QWORD *)(v14 + 16) = v8;
              *(_QWORD *)(v14 + 8) = 0LL;
              *(_QWORD *)(v14 + 24) = v11;
            }
          }
          else
          {
            v11 = 0LL;
          }
        }
        else
        {
          v11 = 0LL;
        }
      }
      else
      {
        v11 = 0LL;
      }
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        v15 = DeviceObject->DeviceExtension;
        if ( v15 )
        {
          v16 = *((_QWORD *)v15 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
          *(_DWORD *)v16 = 1467310448;
          *(_QWORD *)(v16 + 24) = v8;
          *(_QWORD *)(v16 + 8) = 0LL;
          *(_QWORD *)(v16 + 16) = 0LL;
        }
      }
      if ( v11 )
      {
        v17 = *(int *)(v11 + 696);
        if ( (UsbhLogMask & 0x800) != 0 )
        {
          v18 = DeviceObject->DeviceExtension;
          if ( v18 )
          {
            v19 = *((_QWORD *)v18 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v18 + 220) & *((_DWORD *)v18 + 221));
            *(_DWORD *)v19 = 846553456;
            *(_QWORD *)(v19 + 24) = v8;
            *(_QWORD *)(v19 + 8) = 0LL;
            *(_QWORD *)(v19 + 16) = v17;
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeWaitForSingleObject((PVOID)(v11 + 520), Executive, 0, 0, 0LL);
      v20 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v21 = DeviceObject->DeviceExtension;
        if ( v21 )
        {
          v22 = *((_QWORD *)v21 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
          *(_DWORD *)v22 = 1329877100;
          *(_QWORD *)(v22 + 16) = v8;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 24) = 1348564304LL;
        }
      }
      v23 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v25 = (unsigned int)UsbhLogMask;
      v62 = v23;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v26 = DeviceObject->DeviceExtension;
        if ( v26 )
        {
          v27 = *((_QWORD *)v26 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
          *(_DWORD *)v27 = 1413771367;
          *(_QWORD *)(v27 + 16) = v8;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 24) = 0LL;
          v25 = (unsigned int)UsbhLogMask;
        }
      }
      if ( v8 )
      {
        v28 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v28 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v24, v25);
        if ( *(_DWORD *)v28 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v28, v24, v25);
        if ( v8 <= v28[2938] )
        {
          v29 = *((_QWORD *)v28 + 382);
          if ( v29 )
          {
            v30 = v29 + 2928LL * (v8 - 1);
            if ( (v25 & 8) != 0 )
            {
              v29 = *((_QWORD *)v28 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v28 + 220) & *((_DWORD *)v28 + 221));
              *(_DWORD *)v29 = 1044672615;
              *(_QWORD *)(v29 + 16) = v8;
              *(_QWORD *)(v29 + 8) = 0LL;
              *(_QWORD *)(v29 + 24) = v30;
            }
            if ( v30 )
            {
              v20 = *(_QWORD *)(v30 + 392);
              if ( v20 )
                v20 = UsbhRefPdo(v29, v20, 0LL, 1348564304LL);
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v62);
      if ( v20 )
      {
        v31 = PdoExt(v20);
        KeWaitForSingleObject((PVOID)(v31 + 2856), Executive, 0, 0, 0LL);
        *(_DWORD *)(v31 + 1412) |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v31 + 2856), 0, 0);
        Log((_DWORD)DeviceObject, 256, 1968194639, v20, 1348564304LL);
        LOBYTE(v31) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        UsbhDerefPdo((int)DeviceObject, v20, 0LL, 0x50617550u);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v31);
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v32 = DeviceObject->DeviceExtension;
        if ( v32 )
        {
          v33 = *((_QWORD *)v32 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v32 + 220) & *((_DWORD *)v32 + 221));
          *(_DWORD *)v33 = 829912937;
          *(_QWORD *)(v33 + 24) = v8;
          *(_QWORD *)(v33 + 8) = 0LL;
          *(_QWORD *)(v33 + 16) = a2;
        }
      }
      v34 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          79,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          v8);
        v34 = WPP_GLOBAL_Control;
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v35 = DeviceObject->DeviceExtension;
        if ( v35 )
        {
          v36 = *((_QWORD *)v35 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v35 + 220) & *((_DWORD *)v35 + 221));
          *(_DWORD *)v36 = 1413771367;
          *(_QWORD *)(v36 + 16) = v8;
          *(_QWORD *)(v36 + 8) = 0LL;
          *(_QWORD *)(v36 + 24) = 0LL;
          v34 = WPP_GLOBAL_Control;
        }
      }
      if ( v8 )
      {
        v37 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v37 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v5, v6);
        if ( *(_DWORD *)v37 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v37, v5, v6);
        if ( v8 <= v37[2938] )
        {
          v5 = *((_QWORD *)v37 + 382);
          if ( v5 )
          {
            v38 = v5 + 2928LL * (v8 - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v39 = *((_QWORD *)v37 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
              *(_DWORD *)v39 = 1044672615;
              *(_QWORD *)(v39 + 16) = v8;
              *(_QWORD *)(v39 + 8) = 0LL;
              *(_QWORD *)(v39 + 24) = v38;
              v34 = WPP_GLOBAL_Control;
            }
            if ( v38 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v38, 4, a2, 0x80000LL, 0, 0LL, 0LL);
              v34 = WPP_GLOBAL_Control;
            }
          }
        }
      }
      if ( LOWORD(v34->DeviceType) )
      {
        WPP_RECORDER_SF_d(v34->DeviceExtension, 0, 1, 80, (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids, v8);
        v34 = WPP_GLOBAL_Control;
      }
      v40 = DeviceObject->DeviceExtension;
      if ( !v40 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v5, v6);
      if ( *v40 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v40, v5, v6);
      if ( LOWORD(v34->DeviceType) )
        WPP_RECORDER_SF_dq(
          v34->DeviceExtension,
          (_DWORD)v40,
          v5,
          66,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          v8,
          a2);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v41 = DeviceObject->DeviceExtension;
        if ( v41 )
        {
          v42 = *((_QWORD *)v41 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v41 + 220) & *((_DWORD *)v41 + 221));
          *(_DWORD *)v42 = 842024272;
          *(_QWORD *)(v42 + 24) = v8;
          *(_QWORD *)(v42 + 8) = 0LL;
          *(_QWORD *)(v42 + 16) = 0LL;
        }
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v43 = DeviceObject->DeviceExtension;
        if ( v43 )
        {
          v44 = *((_QWORD *)v43 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v43 + 220) & *((_DWORD *)v43 + 221));
          *(_DWORD *)v44 = 1413771367;
          *(_QWORD *)(v44 + 16) = v8;
          *(_QWORD *)(v44 + 8) = 0LL;
          *(_QWORD *)(v44 + 24) = 0LL;
        }
      }
      if ( v8 )
      {
        v45 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v45 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v5, v6);
        if ( *(_DWORD *)v45 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v45, v5, v6);
        if ( v8 <= v45[2938] )
        {
          v46 = *((_QWORD *)v45 + 382);
          if ( v46 )
          {
            v47 = v46 + 2928LL * (v8 - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v48 = *((_QWORD *)v45 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v45 + 220) & *((_DWORD *)v45 + 221));
              *(_DWORD *)v48 = 1044672615;
              *(_QWORD *)(v48 + 16) = v8;
              *(_QWORD *)(v48 + 8) = 0LL;
              *(_QWORD *)(v48 + 24) = v47;
            }
            if ( v47 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v47, 2, a2, 0LL, 0, 0LL, 0LL);
              v49 = 0LL;
              v50 = *(_WORD *)(v47 + 4);
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v51 = DeviceObject->DeviceExtension;
                if ( v51 )
                {
                  v52 = *((_QWORD *)v51 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v51 + 220) & *((_DWORD *)v51 + 221));
                  *(_DWORD *)v52 = 1329877100;
                  *(_QWORD *)(v52 + 16) = v50;
                  *(_QWORD *)(v52 + 8) = 0LL;
                  *(_QWORD *)(v52 + 24) = 1884308559LL;
                }
              }
              v53 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              v55 = (unsigned int)UsbhLogMask;
              v63 = v53;
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v56 = DeviceObject->DeviceExtension;
                if ( v56 )
                {
                  v57 = *((_QWORD *)v56 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v56 + 220) & *((_DWORD *)v56 + 221));
                  *(_DWORD *)v57 = 1413771367;
                  *(_QWORD *)(v57 + 16) = v50;
                  *(_QWORD *)(v57 + 8) = 0LL;
                  *(_QWORD *)(v57 + 24) = 0LL;
                  v55 = (unsigned int)UsbhLogMask;
                }
              }
              if ( v50 )
              {
                v58 = (unsigned __int8 *)DeviceObject->DeviceExtension;
                if ( !v58 )
                  UsbhTrapFatal_Dbg(DeviceObject, 0LL, v54, v55);
                if ( *(_DWORD *)v58 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, v58, v54, v55);
                if ( v50 <= v58[2938] )
                {
                  v59 = *((_QWORD *)v58 + 382);
                  if ( v59 )
                  {
                    v60 = v59 + 2928LL * (v50 - 1);
                    if ( (v55 & 8) != 0 )
                    {
                      v59 = *((_QWORD *)v58 + 111)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v58 + 220) & *((_DWORD *)v58 + 221));
                      *(_DWORD *)v59 = 1044672615;
                      *(_QWORD *)(v59 + 16) = v50;
                      *(_QWORD *)(v59 + 8) = 0LL;
                      *(_QWORD *)(v59 + 24) = v60;
                    }
                    if ( v60 )
                    {
                      v49 = *(_QWORD *)(v60 + 392);
                      if ( v49 )
                        v49 = UsbhRefPdo(v59, v49, 0LL, 1884308559LL);
                    }
                  }
                }
              }
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v63);
              if ( v49 )
              {
                v61 = *(unsigned int *)(v47 + 400);
                *(_QWORD *)(v47 + 376) = v47 + 24;
                *(_DWORD *)(v47 + 416) = 1;
                UsbhCancelEnumeration(DeviceObject, v61, v47, v49);
                *(_QWORD *)(v47 + 376) = 0LL;
                if ( *(_DWORD *)(v47 + 416) )
                  UsbhBusUnlatchPdo((_DWORD)DeviceObject, v49, v47, v6, 0LL);
                else
                  *(_DWORD *)(v47 + 400) = 0;
              }
            }
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeSetEvent((PRKEVENT)(v11 + 520), 0, 0);
      ++v8;
    }
    Log((_DWORD)DeviceObject, 2048, 1885435198, 0, 0LL);
    return 0LL;
  }
}
