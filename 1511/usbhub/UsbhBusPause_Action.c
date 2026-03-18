/*
 * XREFs of UsbhBusPause_Action @ 0x1C00157E0
 * Callers:
 *     Usbh_BS_BusRun @ 0x1C0021B4C (Usbh_BS_BusRun.c)
 * Callees:
 *     UsbhRefPdo @ 0x1C00095D0 (UsbhRefPdo.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhDerefPdo @ 0x1C000F30C (UsbhDerefPdo.c)
 *     UsbhBusUnlatchPdo @ 0x1C0010990 (UsbhBusUnlatchPdo.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C00170F0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhSsh_CheckHubIdle @ 0x1C0022384 (UsbhSsh_CheckHubIdle.c)
 *     UsbhPostInterrupt @ 0x1C00238D0 (UsbhPostInterrupt.c)
 *     UsbhCancelEnumeration @ 0x1C0026DB0 (UsbhCancelEnumeration.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CDA0 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhBusPause_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int16 i; // bp
  unsigned __int8 *DeviceExtension; // rdx
  __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rcx
  void *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  void *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  void *v22; // rdx
  __int64 v23; // rcx
  KIRQL v24; // al
  __int64 v25; // r8
  __int64 v26; // r9
  void *v27; // rdx
  __int64 v28; // rcx
  unsigned __int8 *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  void *v33; // rdx
  __int64 v34; // rcx
  PDEVICE_OBJECT v35; // rcx
  void *v36; // rdx
  __int64 v37; // rcx
  unsigned __int8 *v38; // rdx
  __int64 v39; // r10
  __int64 v40; // rcx
  _DWORD *v41; // rdx
  void *v42; // rdx
  __int64 v43; // rcx
  void *v44; // rdx
  __int64 v45; // rcx
  unsigned __int8 *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // r14
  unsigned __int16 v51; // di
  void *v52; // rdx
  __int64 v53; // rcx
  KIRQL v54; // al
  __int64 v55; // r8
  __int64 v56; // r9
  void *v57; // rdx
  __int64 v58; // rcx
  unsigned __int8 *v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  _DWORD *v63; // rbx
  __int64 v64; // rdx
  KIRQL v65; // [rsp+78h] [rbp-60h]
  KIRQL v66; // [rsp+88h] [rbp-50h]

  v6 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  Log((__int64)DeviceObject, 2048, 1885435185, 0LL, 0LL);
  if ( _InterlockedExchangeAdd(v6 + 678, 0xFFFFFFFF) == 1 )
  {
    Log((__int64)DeviceObject, 2048, 1667320145, *((_QWORD *)v6 + 333), 0LL);
    IoCancelIrp(*((PIRP *)v6 + 333));
  }
  KeWaitForSingleObject(v6 + 672, Executive, 0, 0, 0LL);
  if ( *(_DWORD *)(a2 + 128) == 2 && (int)UsbhSsh_CheckHubIdle(DeviceObject) < 0 )
  {
    v6[678] = 0;
    KeResetEvent((PRKEVENT)v6 + 112);
    UsbhPostInterrupt(DeviceObject);
    return 3221225473LL;
  }
  else
  {
    for ( i = 1; ; ++i )
    {
      if ( !DeviceObject )
        UsbhTrapFatal_Dbg(0LL, 0LL, v7, v8);
      DeviceExtension = (unsigned __int8 *)DeviceObject->DeviceExtension;
      if ( !DeviceExtension )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v7, v8);
      if ( *(_DWORD *)DeviceExtension != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension, v7, v8);
      if ( i > DeviceExtension[2938] )
        break;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v11 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v11 = 1413771367;
        *(_QWORD *)(v11 + 16) = i;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 24) = 0LL;
      }
      if ( i )
      {
        v12 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v12 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v7, v8);
        if ( *(_DWORD *)v12 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v12, v7, v8);
        if ( i > v12[2938] )
        {
          v14 = 0LL;
        }
        else
        {
          v13 = *((_QWORD *)v12 + 382);
          if ( v13 )
          {
            v14 = v13 + 2928LL * (i - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v15 = *((_QWORD *)v12 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
              *(_DWORD *)v15 = 1044672615;
              *(_QWORD *)(v15 + 16) = i;
              *(_QWORD *)(v15 + 8) = 0LL;
              *(_QWORD *)(v15 + 24) = v14;
            }
          }
          else
          {
            v14 = 0LL;
          }
        }
      }
      else
      {
        v14 = 0LL;
      }
      if ( (UsbhLogMask & 0x800) != 0 )
      {
        v16 = DeviceObject->DeviceExtension;
        if ( v16 )
        {
          v17 = *((_QWORD *)v16 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v16 + 220) & *((_DWORD *)v16 + 221));
          *(_DWORD *)v17 = 1467310448;
          *(_QWORD *)(v17 + 24) = i;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 16) = 0LL;
        }
      }
      if ( v14 )
      {
        v18 = *(int *)(v14 + 696);
        if ( (UsbhLogMask & 0x800) != 0 )
        {
          v19 = DeviceObject->DeviceExtension;
          if ( v19 )
          {
            v20 = *((_QWORD *)v19 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
            *(_DWORD *)v20 = 846553456;
            *(_QWORD *)(v20 + 24) = i;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_QWORD *)(v20 + 16) = v18;
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeWaitForSingleObject((PVOID)(v14 + 520), Executive, 0, 0, 0LL);
      v21 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        v22 = DeviceObject->DeviceExtension;
        if ( v22 )
        {
          v23 = *((_QWORD *)v22 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v22 + 220) & *((_DWORD *)v22 + 221));
          *(_DWORD *)v23 = 1329877100;
          *(_QWORD *)(v23 + 16) = i;
          *(_QWORD *)(v23 + 8) = 0LL;
          *(_QWORD *)(v23 + 24) = 1348564304LL;
        }
      }
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
      v26 = (unsigned int)UsbhLogMask;
      v65 = v24;
      WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v27 = DeviceObject->DeviceExtension;
        if ( v27 )
        {
          v28 = *((_QWORD *)v27 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v27 + 220) & *((_DWORD *)v27 + 221));
          *(_DWORD *)v28 = 1413771367;
          *(_QWORD *)(v28 + 16) = i;
          *(_QWORD *)(v28 + 8) = 0LL;
          *(_QWORD *)(v28 + 24) = 0LL;
          v26 = (unsigned int)UsbhLogMask;
        }
      }
      if ( i )
      {
        v29 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v29 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v25, v26);
        if ( *(_DWORD *)v29 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v29, v25, v26);
        if ( i <= v29[2938] )
        {
          v30 = *((_QWORD *)v29 + 382);
          if ( v30 )
          {
            v31 = v30 + 2928LL * (i - 1);
            if ( (v26 & 8) != 0 )
            {
              v30 = *((_QWORD *)v29 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v29 + 220) & *((_DWORD *)v29 + 221));
              *(_DWORD *)v30 = 1044672615;
              *(_QWORD *)(v30 + 16) = i;
              *(_QWORD *)(v30 + 8) = 0LL;
              *(_QWORD *)(v30 + 24) = v31;
            }
            if ( v31 )
            {
              v21 = *(_QWORD *)(v31 + 392);
              if ( v21 )
                v21 = UsbhRefPdo(v30, v21, 0LL, 1348564304LL);
            }
          }
        }
      }
      WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v65);
      if ( v21 )
      {
        v63 = PdoExt(v21, v32, v7, v8);
        KeWaitForSingleObject(v63 + 716, Executive, 0, 0, 0LL);
        v63[353] |= 0x10000000u;
        KeSetEvent((PRKEVENT)(v63 + 716), 0, 0);
        Log((__int64)DeviceObject, 256, 1968194639, v21, 1348564304LL);
        LOBYTE(v63) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
        WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
        UsbhDerefPdo((int)DeviceObject, v21, 0LL, 0x50617550u);
        WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, (KIRQL)v63);
      }
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v33 = DeviceObject->DeviceExtension;
        if ( v33 )
        {
          v34 = *((_QWORD *)v33 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v33 + 220) & *((_DWORD *)v33 + 221));
          *(_DWORD *)v34 = 829912937;
          *(_QWORD *)(v34 + 24) = i;
          *(_QWORD *)(v34 + 8) = 0LL;
          *(_QWORD *)(v34 + 16) = a2;
        }
      }
      v35 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          79,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          i);
        v35 = WPP_GLOBAL_Control;
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v36 = DeviceObject->DeviceExtension;
        if ( v36 )
        {
          v37 = *((_QWORD *)v36 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v36 + 220) & *((_DWORD *)v36 + 221));
          *(_DWORD *)v37 = 1413771367;
          *(_QWORD *)(v37 + 16) = i;
          *(_QWORD *)(v37 + 8) = 0LL;
          *(_QWORD *)(v37 + 24) = 0LL;
          v35 = WPP_GLOBAL_Control;
        }
      }
      if ( i )
      {
        v38 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v38 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v7, v8);
        if ( *(_DWORD *)v38 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v38, v7, v8);
        if ( i <= v38[2938] )
        {
          v7 = *((_QWORD *)v38 + 382);
          if ( v7 )
          {
            v39 = v7 + 2928LL * (i - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v40 = *((_QWORD *)v38 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v38 + 220) & *((_DWORD *)v38 + 221));
              *(_DWORD *)v40 = 1044672615;
              *(_QWORD *)(v40 + 16) = i;
              *(_QWORD *)(v40 + 8) = 0LL;
              *(_QWORD *)(v40 + 24) = v39;
              v35 = WPP_GLOBAL_Control;
            }
            if ( v39 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v39, 4, a2, 0x80000LL, 0, 0LL, 0LL);
              v35 = WPP_GLOBAL_Control;
            }
          }
        }
      }
      if ( LOWORD(v35->DeviceType) )
      {
        WPP_RECORDER_SF_d(v35->DeviceExtension, 0, 1, 80, (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids, i);
        v35 = WPP_GLOBAL_Control;
      }
      v41 = DeviceObject->DeviceExtension;
      if ( !v41 )
        UsbhTrapFatal_Dbg(DeviceObject, 0LL, v7, v8);
      if ( *v41 != 541218120 )
        UsbhTrapFatal_Dbg(DeviceObject, v41, v7, v8);
      if ( LOWORD(v35->DeviceType) )
        WPP_RECORDER_SF_dq(
          v35->DeviceExtension,
          (_DWORD)v41,
          v7,
          66,
          (__int64)&WPP_7c8008b9a24e5d7244c8b992653290aa_Traceguids,
          i,
          a2);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        v42 = DeviceObject->DeviceExtension;
        if ( v42 )
        {
          v43 = *((_QWORD *)v42 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v42 + 220) & *((_DWORD *)v42 + 221));
          *(_DWORD *)v43 = 842024272;
          *(_QWORD *)(v43 + 24) = i;
          *(_QWORD *)(v43 + 8) = 0LL;
          *(_QWORD *)(v43 + 16) = 0LL;
        }
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        v44 = DeviceObject->DeviceExtension;
        if ( v44 )
        {
          v45 = *((_QWORD *)v44 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v44 + 220) & *((_DWORD *)v44 + 221));
          *(_DWORD *)v45 = 1413771367;
          *(_QWORD *)(v45 + 16) = i;
          *(_QWORD *)(v45 + 8) = 0LL;
          *(_QWORD *)(v45 + 24) = 0LL;
        }
      }
      if ( i )
      {
        v46 = (unsigned __int8 *)DeviceObject->DeviceExtension;
        if ( !v46 )
          UsbhTrapFatal_Dbg(DeviceObject, 0LL, v7, v8);
        if ( *(_DWORD *)v46 != 541218120 )
          UsbhTrapFatal_Dbg(DeviceObject, v46, v7, v8);
        if ( i <= v46[2938] )
        {
          v47 = *((_QWORD *)v46 + 382);
          if ( v47 )
          {
            v48 = v47 + 2928LL * (i - 1);
            if ( (UsbhLogMask & 8) != 0 )
            {
              v49 = *((_QWORD *)v46 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v46 + 220) & *((_DWORD *)v46 + 221));
              *(_DWORD *)v49 = 1044672615;
              *(_QWORD *)(v49 + 16) = i;
              *(_QWORD *)(v49 + 8) = 0LL;
              *(_QWORD *)(v49 + 24) = v48;
            }
            if ( v48 )
            {
              UsbhDispatch_PortChangeQueueEventEx((_DWORD)DeviceObject, v48, 2, a2, 0LL, 0, 0LL, 0LL);
              v50 = 0LL;
              v51 = *(_WORD *)(v48 + 4);
              if ( (UsbhLogMask & 0x100) != 0 )
              {
                v52 = DeviceObject->DeviceExtension;
                if ( v52 )
                {
                  v53 = *((_QWORD *)v52 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v52 + 220) & *((_DWORD *)v52 + 221));
                  *(_DWORD *)v53 = 1329877100;
                  *(_QWORD *)(v53 + 16) = v51;
                  *(_QWORD *)(v53 + 8) = 0LL;
                  *(_QWORD *)(v53 + 24) = 1884308559LL;
                }
              }
              v54 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
              v56 = (unsigned int)UsbhLogMask;
              v66 = v54;
              WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))&WPP_MAIN_CB.Dpc.DeferredContext;
              if ( (UsbhLogMask & 8) != 0 )
              {
                v57 = DeviceObject->DeviceExtension;
                if ( v57 )
                {
                  v58 = *((_QWORD *)v57 + 111)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v57 + 220) & *((_DWORD *)v57 + 221));
                  *(_DWORD *)v58 = 1413771367;
                  *(_QWORD *)(v58 + 16) = v51;
                  *(_QWORD *)(v58 + 8) = 0LL;
                  *(_QWORD *)(v58 + 24) = 0LL;
                  v56 = (unsigned int)UsbhLogMask;
                }
              }
              if ( v51 )
              {
                v59 = (unsigned __int8 *)DeviceObject->DeviceExtension;
                if ( !v59 )
                  UsbhTrapFatal_Dbg(DeviceObject, 0LL, v55, v56);
                if ( *(_DWORD *)v59 != 541218120 )
                  UsbhTrapFatal_Dbg(DeviceObject, v59, v55, v56);
                if ( v51 <= v59[2938] )
                {
                  v60 = *((_QWORD *)v59 + 382);
                  if ( v60 )
                  {
                    v61 = v60 + 2928LL * (v51 - 1);
                    if ( (v56 & 8) != 0 )
                    {
                      v60 = *((_QWORD *)v59 + 111)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v59 + 220) & *((_DWORD *)v59 + 221));
                      *(_DWORD *)v60 = 1044672615;
                      *(_QWORD *)(v60 + 16) = v51;
                      *(_QWORD *)(v60 + 8) = 0LL;
                      *(_QWORD *)(v60 + 24) = v61;
                    }
                    if ( v61 )
                    {
                      v50 = *(_QWORD *)(v61 + 392);
                      if ( v50 )
                        v50 = UsbhRefPdo(v60, v50, 0LL, 1884308559LL);
                    }
                  }
                }
              }
              WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
              KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, v66);
              if ( v50 )
              {
                v64 = *(unsigned int *)(v48 + 400);
                *(_QWORD *)(v48 + 376) = v48 + 24;
                *(_DWORD *)(v48 + 416) = 1;
                UsbhCancelEnumeration(DeviceObject, v64, v48, v50);
                *(_QWORD *)(v48 + 376) = 0LL;
                if ( *(_DWORD *)(v48 + 416) )
                  UsbhBusUnlatchPdo((__int64)DeviceObject, v50, v48, v8, 0LL);
                else
                  *(_DWORD *)(v48 + 400) = 0;
              }
            }
          }
        }
      }
      if ( *(_DWORD *)(a2 + 128) == 6 )
        KeSetEvent((PRKEVENT)(v14 + 520), 0, 0);
    }
    Log((__int64)DeviceObject, 2048, 1885435198, 0LL, 0LL);
    return 0LL;
  }
}
