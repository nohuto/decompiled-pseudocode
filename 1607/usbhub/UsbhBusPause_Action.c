/*
 * XREFs of UsbhBusPause_Action @ 0x1C00105A0
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C000CDE4 (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhSsh_CheckHubIdle @ 0x1C000CAE0 (UsbhSsh_CheckHubIdle.c)
 *     UsbhRefPdo @ 0x1C000D410 (UsbhRefPdo.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x1C0018C00 (UsbhBusUnlatchPdo.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhPostInterrupt @ 0x1C0024290 (UsbhPostInterrupt.c)
 *     UsbhDerefPdo @ 0x1C0026298 (UsbhDerefPdo.c)
 *     UsbhCancelEnumeration @ 0x1C00276A4 (UsbhCancelEnumeration.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D674 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 i; // bp
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v9; // rcx
  unsigned __int8 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rcx
  void *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  void *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r14
  void *v20; // rdx
  __int64 v21; // rcx
  KIRQL v22; // al
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // rdx
  __int64 v26; // rcx
  unsigned __int8 *v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  void *v30; // rdx
  __int64 v31; // rcx
  PDEVICE_OBJECT v32; // rcx
  void *v33; // rdx
  __int64 v34; // rcx
  unsigned __int8 *v35; // rdx
  __int64 v36; // r10
  __int64 v37; // rcx
  _DWORD *v38; // rdx
  void *v39; // rdx
  __int64 v40; // rcx
  void *v41; // rdx
  __int64 v42; // rcx
  unsigned __int8 *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // r14
  unsigned __int16 v48; // di
  void *v49; // rdx
  __int64 v50; // rcx
  KIRQL v51; // al
  __int64 v52; // r8
  __int64 v53; // r9
  void *v54; // rdx
  __int64 v55; // rcx
  unsigned __int8 *v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v60; // rbx
  __int64 v61; // rdx
  KIRQL v62; // [rsp+78h] [rbp-60h]
  KIRQL v63; // [rsp+90h] [rbp-48h]

  v4 = FdoExt(DeviceObject);
  Log((_DWORD)DeviceObject, 2048, 1885435185, 0, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 2712), 0xFFFFFFFF) == 1 )
  {
    Log((_DWORD)DeviceObject, 2048, 1667320145, *(_QWORD *)(v4 + 2664), 0LL);
    IoCancelIrp(*(PIRP *)(v4 + 2664));
  }
  KeWaitForSingleObject((PVOID)(v4 + 2688), Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(a2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle((__int64)DeviceObject) < 0 )
  {
    *(_DWORD *)(v4 + 2712) = 0;
    KeResetEvent((PRKEVENT)(v4 + 2688));
    UsbhPostInterrupt(DeviceObject);
    return 3221225473LL;
  }
  else
  {
    for ( i = 1; ; ++i )
    {
      if ( !DeviceObject )
        UsbhTrapFatal_Dbg(0LL, 0LL, v5, v6);
      DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !DeviceExtension )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v5, v6);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension, v5, v6);
      if ( i > DeviceExtension[2938] )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v9 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v9 = 1413771367;
        *(_QWORD *)(v9 + 16) = i;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
      if ( i )
      {
        v10 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v10 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v5, v6);
        if ( *(_DWORD *)v10 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v10, v5, v6);
        if ( i > v10[2938] )
        {
          v12 = 0LL;
        }
        else
        {
          v11 = *((_QWORD *)v10 + 382);
          if ( v11 )
          {
            v12 = v11 + 2928LL * (i - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v13 = *((_QWORD *)v10 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v10 + 220) & *((_DWORD *)v10 + 221));
              *(_DWORD *)v13 = 1044672615;
              *(_QWORD *)(v13 + 16) = i;
              *(_QWORD *)(v13 + 8) = 0LL;
              *(_QWORD *)(v13 + 24) = v12;
            }
          }
          else
          {
            v12 = 0LL;
          }
        }
      }
      else
      {
        v12 = 0LL;
      }
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        v14 = DeviceObject->DeviceExtension;
        if ( v14 )
        {
          v15 = *((_QWORD *)v14 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v14 + 220) & *((_DWORD *)v14 + 221));
          *(_DWORD *)v15 = 1467310448;
          *(_QWORD *)(v15 + 24) = i;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = 0LL;
        }
      }
      if ( v12 )
      {
        v16 = *(int *)(v12 + 696);
        if ( (UsbhLogMask & 0x800) != 0 )
        {
          v17 = DeviceObject->DeviceExtension;
          if ( v17 )
          {
            v18 = *((_QWORD *)v17 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v17 + 220) & *((_DWORD *)v17 + 221));
            *(_DWORD *)v18 = 846553456;
            *(_QWORD *)(v18 + 24) = i;
            *(_QWORD *)(v18 + 8) = 0LL;
            *(_QWORD *)(v18 + 16) = v16;
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeWaitForSingleObject((PVOID)(v12 + 520), Executive, 0, 0, 0LL);
      v19 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v20 = DeviceObject->DeviceExtension;
        if ( v20 )
        {
          v21 = *((_QWORD *)v20 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v20 + 220) & *((_DWORD *)v20 + 221));
          *(_DWORD *)v21 = 1329877100;
          *(_QWORD *)(v21 + 16) = i;
          *(_QWORD *)(v21 + 8) = 0LL;
          *(_QWORD *)(v21 + 24) = 1348564304LL;
        }
      }
      v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v24 = (unsigned int)UsbhLogMask;
      v62 = v22;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v25 = DeviceObject->DeviceExtension;
        if ( v25 )
        {
          v26 = *((_QWORD *)v25 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v25 + 220) & *((_DWORD *)v25 + 221));
          *(_DWORD *)v26 = 1413771367;
          *(_QWORD *)(v26 + 16) = i;
          *(_QWORD *)(v26 + 8) = 0LL;
          *(_QWORD *)(v26 + 24) = 0LL;
          v24 = (unsigned int)UsbhLogMask;
        }
      }
      if ( i )
      {
        v27 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v27 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v23, v24);
        if ( *(_DWORD *)v27 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v27, v23, v24);
        if ( i <= v27[2938] )
        {
          v28 = *((_QWORD *)v27 + 382);
          if ( v28 )
          {
            v29 = v28 + 2928LL * (i - 1);
            if ( (v24 & 8) != 0 )
            {
              v28 = *((_QWORD *)v27 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
              *(_DWORD *)v28 = 1044672615;
              *(_QWORD *)(v28 + 16) = i;
              *(_QWORD *)(v28 + 8) = 0LL;
              *(_QWORD *)(v28 + 24) = v29;
            }
            if ( v29 )
            {
              v19 = *(_QWORD *)(v29 + 392);
              if ( v19 )
                v19 = UsbhRefPdo(v28, v19, 0LL, 1348564304LL);
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v62);
      if ( v19 )
      {
        v60 = PdoExt(v19);
        KeWaitForSingleObject((PVOID)(v60 + 2864), Executive, 0, 0, 0LL);
        *(_DWORD *)(v60 + 1412) |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v60 + 2864), 0, 0);
        Log((_DWORD)DeviceObject, 256, 1968194639, v19, 1348564304LL);
        LOBYTE(v60) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        UsbhDerefPdo(DeviceObject, v19, 0LL, 1348564304LL);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v60);
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v30 = DeviceObject->DeviceExtension;
        if ( v30 )
        {
          v31 = *((_QWORD *)v30 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v30 + 220) & *((_DWORD *)v30 + 221));
          *(_DWORD *)v31 = 829912937;
          *(_QWORD *)(v31 + 24) = i;
          *(_QWORD *)(v31 + 8) = 0LL;
          *(_QWORD *)(v31 + 16) = a2;
        }
      }
      v32 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          79,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          i);
        v32 = WPP_GLOBAL_Control;
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v33 = DeviceObject->DeviceExtension;
        if ( v33 )
        {
          v34 = *((_QWORD *)v33 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v33 + 220) & *((_DWORD *)v33 + 221));
          *(_DWORD *)v34 = 1413771367;
          *(_QWORD *)(v34 + 16) = i;
          *(_QWORD *)(v34 + 8) = 0LL;
          *(_QWORD *)(v34 + 24) = 0LL;
          v32 = WPP_GLOBAL_Control;
        }
      }
      if ( i )
      {
        v35 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v35 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v5, v6);
        if ( *(_DWORD *)v35 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v35, v5, v6);
        if ( i <= v35[2938] )
        {
          v5 = *((_QWORD *)v35 + 382);
          if ( v5 )
          {
            v36 = v5 + 2928LL * (i - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v37 = *((_QWORD *)v35 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v35 + 220) & *((_DWORD *)v35 + 221));
              *(_DWORD *)v37 = 1044672615;
              *(_QWORD *)(v37 + 16) = i;
              *(_QWORD *)(v37 + 8) = 0LL;
              *(_QWORD *)(v37 + 24) = v36;
              v32 = WPP_GLOBAL_Control;
            }
            if ( v36 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v36, 4, a2, 0x80000LL, 0, 0LL, 0LL);
              v32 = WPP_GLOBAL_Control;
            }
          }
        }
      }
      if ( LOWORD(v32->DeviceType) )
      {
        WPP_RECORDER_SF_d(v32->DeviceExtension, 0, 1, 80, (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids, i);
        v32 = WPP_GLOBAL_Control;
      }
      v38 = DeviceObject->DeviceExtension;
      if ( !v38 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v5, v6);
      if ( *v38 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v38, v5, v6);
      if ( LOWORD(v32->DeviceType) )
        WPP_RECORDER_SF_dq(
          v32->DeviceExtension,
          (_DWORD)v38,
          v5,
          66,
          (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
          i,
          a2);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v39 = DeviceObject->DeviceExtension;
        if ( v39 )
        {
          v40 = *((_QWORD *)v39 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v39 + 220) & *((_DWORD *)v39 + 221));
          *(_DWORD *)v40 = 842024272;
          *(_QWORD *)(v40 + 24) = i;
          *(_QWORD *)(v40 + 8) = 0LL;
          *(_QWORD *)(v40 + 16) = 0LL;
        }
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v41 = DeviceObject->DeviceExtension;
        if ( v41 )
        {
          v42 = *((_QWORD *)v41 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v41 + 220) & *((_DWORD *)v41 + 221));
          *(_DWORD *)v42 = 1413771367;
          *(_QWORD *)(v42 + 16) = i;
          *(_QWORD *)(v42 + 8) = 0LL;
          *(_QWORD *)(v42 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v43 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v43 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v5, v6);
        if ( *(_DWORD *)v43 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v43, v5, v6);
        if ( i <= v43[2938] )
        {
          v44 = *((_QWORD *)v43 + 382);
          if ( v44 )
          {
            v45 = v44 + 2928LL * (i - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v46 = *((_QWORD *)v43 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v43 + 220) & *((_DWORD *)v43 + 221));
              *(_DWORD *)v46 = 1044672615;
              *(_QWORD *)(v46 + 16) = i;
              *(_QWORD *)(v46 + 8) = 0LL;
              *(_QWORD *)(v46 + 24) = v45;
            }
            if ( v45 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v45, 2, a2, 0LL, 0, 0LL, 0LL);
              v47 = 0LL;
              v48 = *(_WORD *)(v45 + 4);
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v49 = DeviceObject->DeviceExtension;
                if ( v49 )
                {
                  v50 = *((_QWORD *)v49 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v49 + 220) & *((_DWORD *)v49 + 221));
                  *(_DWORD *)v50 = 1329877100;
                  *(_QWORD *)(v50 + 16) = v48;
                  *(_QWORD *)(v50 + 8) = 0LL;
                  *(_QWORD *)(v50 + 24) = 1884308559LL;
                }
              }
              v51 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              v53 = (unsigned int)UsbhLogMask;
              v63 = v51;
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v54 = DeviceObject->DeviceExtension;
                if ( v54 )
                {
                  v55 = *((_QWORD *)v54 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v54 + 220) & *((_DWORD *)v54 + 221));
                  *(_DWORD *)v55 = 1413771367;
                  *(_QWORD *)(v55 + 16) = v48;
                  *(_QWORD *)(v55 + 8) = 0LL;
                  *(_QWORD *)(v55 + 24) = 0LL;
                  v53 = (unsigned int)UsbhLogMask;
                }
              }
              if ( v48 )
              {
                v56 = (unsigned __int8 *)DeviceObject->DeviceExtension;
                if ( !v56 )
                  UsbhTrapFatal_Dbg(DeviceObject, 0LL, v52, v53);
                if ( *(_DWORD *)v56 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, v56, v52, v53);
                if ( v48 <= v56[2938] )
                {
                  v57 = *((_QWORD *)v56 + 382);
                  if ( v57 )
                  {
                    v58 = v57 + 2928LL * (v48 - 1);
                    if ( (v53 & 8) != 0 )
                    {
                      v57 = *((_QWORD *)v56 + 111)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v56 + 220) & *((_DWORD *)v56 + 221));
                      *(_DWORD *)v57 = 1044672615;
                      *(_QWORD *)(v57 + 16) = v48;
                      *(_QWORD *)(v57 + 8) = 0LL;
                      *(_QWORD *)(v57 + 24) = v58;
                    }
                    if ( v58 )
                    {
                      v47 = *(_QWORD *)(v58 + 392);
                      if ( v47 )
                        v47 = UsbhRefPdo(v57, v47, 0LL, 1884308559LL);
                    }
                  }
                }
              }
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v63);
              if ( v47 )
              {
                v61 = *(unsigned int *)(v45 + 400);
                *(_QWORD *)(v45 + 376) = v45 + 24;
                *(_DWORD *)(v45 + 416) = 1;
                UsbhCancelEnumeration(DeviceObject, v61, v45, v47);
                *(_QWORD *)(v45 + 376) = 0LL;
                if ( *(_DWORD *)(v45 + 416) )
                  UsbhBusUnlatchPdo((_DWORD)DeviceObject, v47, v45, v6, 0LL);
                else
                  *(_DWORD *)(v45 + 400) = 0;
              }
            }
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeSetEvent((PRKEVENT)(v12 + 520), 0, 0);
    }
    Log((_DWORD)DeviceObject, 2048, 1885435198, 0, 0LL);
    return 0LL;
  }
}
