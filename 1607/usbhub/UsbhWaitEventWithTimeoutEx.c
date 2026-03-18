/*
 * XREFs of UsbhWaitEventWithTimeoutEx @ 0x1C000DC70
 * Callers:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhWaitForResetTimeout @ 0x1C00093A4 (UsbhWaitForResetTimeout.c)
 *     Usbh_PCE_Suspend_Action @ 0x1C000D4E0 (Usbh_PCE_Suspend_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x1C000D740 (Usbh_PCE_Disable_Action.c)
 *     UsbhSshResumePort @ 0x1C0022370 (UsbhSshResumePort.c)
 *     UsbhWaitForPortResume @ 0x1C0028934 (UsbhWaitForPortResume.c)
 *     Usbh_PCE_Close_Action @ 0x1C0042064 (Usbh_PCE_Close_Action.c)
 *     UsbhNotifyPnpOfFailure_Action @ 0x1C0044240 (UsbhNotifyPnpOfFailure_Action.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0046760 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhAsyncStop @ 0x1C004B25C (UsbhAsyncStop.c)
 * Callees:
 *     UsbhPCE_wRun @ 0x1C0004A68 (UsbhPCE_wRun.c)
 *     UsbhIncHubBusy @ 0x1C000E3A0 (UsbhIncHubBusy.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0011EB0 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhTrapFatalTimeout_x9f @ 0x1C003D188 (UsbhTrapFatalTimeout_x9f.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhWaitEventWithTimeoutEx(
        struct _DEVICE_OBJECT *a1,
        void *a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v6; // r14
  void *DeviceExtension; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  void *v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r13
  _QWORD *v18; // r13
  __int64 v19; // r8
  __int64 v20; // r9
  NTSTATUS v21; // r12d
  NTSTATUS v22; // eax
  __int64 v23; // r8
  void *v24; // rdx
  __int64 v25; // rcx
  _DWORD *v26; // rdx
  struct _KEVENT *v27; // r14
  __int64 Signalling; // rcx
  void *v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  struct _KEVENT *v34; // rcx
  __int64 v35; // rax
  char v36; // cl
  void *v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  void *v40; // r8
  __int64 v41; // rdx
  union _LARGE_INTEGER *v43; // rax
  NTSTATUS v44; // eax
  NTSTATUS v45; // eax
  volatile int Lock; // eax
  BOOLEAN v47; // r9
  union _LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  union _LARGE_INTEGER v49; // [rsp+48h] [rbp-38h] BYREF
  struct _KEVENT *v50; // [rsp+50h] [rbp-30h]
  __int64 v51; // [rsp+58h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  __int64 v53; // [rsp+68h] [rbp-18h]
  PVOID v54; // [rsp+70h] [rbp-10h] BYREF
  __int64 v55; // [rsp+78h] [rbp-8h]
  int v57; // [rsp+D0h] [rbp+50h]

  v6 = a3;
  v49.QuadPart = 0LL;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        HIBYTE(v57) = a4;
        LOBYTE(v57) = HIBYTE(a4);
        BYTE1(v57) = BYTE2(a4);
        BYTE2(v57) = BYTE1(a4);
        v10 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v10 = v57;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a3;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
  }
  v11 = 10000LL * a3 + (int)(KeQueryTimeIncrement() - 1);
  v51 = v11;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v12 = a1->DeviceExtension;
      if ( v12 )
      {
        v13 = *((_QWORD *)v12 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
        *(_DWORD *)v13 = 826627159;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = v6;
      }
    }
  }
  Timeout.QuadPart = -v11;
  v14 = MEMORY[0xFFFFF78000000008];
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = a1->DeviceExtension;
      if ( v15 )
      {
        v16 = *((_QWORD *)v15 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v15 + 220) & *((_DWORD *)v15 + 221));
        *(_DWORD *)v16 = 827618423;
        *(_QWORD *)(v16 + 16) = (unsigned int)v14;
        *(_QWORD *)(v16 + 24) = SHIDWORD(v14);
        *(_QWORD *)(v16 + 8) = 0LL;
      }
    }
  }
  if ( (_DWORD)v6 )
  {
    if ( !a5 )
    {
      v21 = KeWaitForSingleObject(a2, Executive, 0, 0, &Timeout);
LABEL_48:
      v17 = a6;
      goto LABEL_49;
    }
    v17 = a6;
    if ( a6 )
    {
      v18 = (_QWORD *)UsbhIncHubBusy(a1, 0);
      Object = a2;
      v53 = a6 + 496;
      v21 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
      if ( v21 )
      {
        while ( 1 )
        {
          if ( v21 == 1 )
          {
            v21 = KeWaitForSingleObject(a2, Executive, 0, 0, &v49);
            if ( !v21 )
              goto LABEL_34;
            Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
            v53 = a6 + 2464;
            v22 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
            v21 = v22;
            switch ( v22 )
            {
              case 0:
                goto LABEL_34;
              case 1:
                v23 = *(unsigned __int16 *)(a6 + 4);
                if ( (UsbhLogMask & 0x200) != 0 )
                {
                  if ( a1 )
                  {
                    v24 = a1->DeviceExtension;
                    if ( v24 )
                    {
                      v25 = *((_QWORD *)v24 + 111)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v24 + 220) & *((_DWORD *)v24 + 221));
                      *(_DWORD *)v25 = 1850889303;
                      *(_QWORD *)(v25 + 8) = 0LL;
                      *(_QWORD *)(v25 + 16) = a6;
                      *(_QWORD *)(v25 + 24) = v23;
                    }
                  }
                }
                *(_DWORD *)(a6 + 2844) = a5;
                if ( !a1 )
                  UsbhTrapFatal_Dbg(0LL, 0LL, v23, v20);
                v26 = a1->DeviceExtension;
                if ( !v26 )
                  UsbhTrapFatal_Dbg(a1, 0LL, v23, v20);
                if ( *v26 != 541218120 )
                  UsbhTrapFatal_Dbg(a1, v26, v23, v20);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  WPP_RECORDER_SF_d(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    57,
                    (__int64)&WPP_7750967c46a832f629b3446543f02792_Traceguids,
                    *(_WORD *)(a6 + 4));
                LODWORD(v50) = 0;
                UsbhDispatch_PortChangeQueueEventEx((_DWORD)a1, a6, 5, a6 + 24, (__int64)v50, 0, 0LL, 0LL);
                KeSetEvent((PRKEVENT)(a6 + 2464), 0, 0);
                break;
              case 258:
                goto LABEL_34;
            }
            v53 = a6 + 496;
          }
          else if ( v21 == 258 )
          {
            goto LABEL_34;
          }
          if ( MEMORY[0xFFFFF78000000008] - v14 >= v11 )
            break;
          Timeout.QuadPart = MEMORY[0xFFFFF78000000008] - v14 - v11;
          v21 = KeWaitForMultipleObjects(2u, &Object, WaitAny, Executive, 0, 0, &Timeout, 0LL);
          if ( !v21 )
            goto LABEL_34;
        }
        v21 = 258;
      }
LABEL_34:
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL, v19, v20);
      v27 = (struct _KEVENT *)a1->DeviceExtension;
      if ( !v27 )
        UsbhTrapFatal_Dbg(a1, 0LL, v19, v20);
      if ( v27->Header.LockNV != 541218120 )
        UsbhTrapFatal_Dbg(a1, a1->DeviceExtension, v19, v20);
      v27[142].Header.Type = 1;
      v50 = v27 + 139;
      KeWaitForSingleObject(&v27[139], Executive, 0, 0, 0LL);
      Signalling = v27[142].Header.Signalling;
      if ( (UsbhLogMask & 0x10000) != 0 )
      {
        v29 = a1->DeviceExtension;
        if ( v29 )
        {
          v30 = *((_QWORD *)v29 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v29 + 220) & *((_DWORD *)v29 + 221));
          *(_DWORD *)v30 = 1667581000;
          *(_QWORD *)(v30 + 8) = 0LL;
          *(_QWORD *)(v30 + 16) = v18;
          *(_QWORD *)(v30 + 24) = Signalling;
        }
      }
      if ( v27[142].Header.Signalling )
      {
        if ( v18 == (_QWORD *)1936941672 )
        {
          Lock = v27[130].Header.Lock;
          if ( Lock )
            v27[130].Header.LockNV = Lock - 1;
        }
        else if ( v18 )
        {
          v31 = v18[1];
          v32 = v18 + 1;
          v33 = (_QWORD *)v18[2];
          if ( *(_QWORD **)(v31 + 8) != v18 + 1 || (_QWORD *)*v33 != v32 )
            __fastfail(3u);
          *v33 = v31;
          *(_QWORD *)(v31 + 8) = v33;
          v18[2] = v18 + 1;
          *v32 = v32;
          ExFreePoolWithTag(v18, 0);
        }
        v34 = v27 + 139;
      }
      else
      {
        v34 = v50;
      }
      KeSetEvent(v34, 0, 0);
      goto LABEL_48;
    }
  }
  else
  {
    v17 = a6;
  }
  if ( a5 == 11 )
  {
    v54 = a2;
LABEL_63:
    v55 = v17 + 496;
    do
    {
      v43 = (_DWORD)v6 ? &Timeout : 0LL;
      v44 = KeWaitForMultipleObjects(2u, &v54, WaitAny, Executive, 0, 0, v43, 0LL);
      v21 = v44;
      if ( !v44 )
        break;
      if ( v44 == 1 )
      {
        v21 = KeWaitForSingleObject(a2, Executive, 0, 0, &v49);
        if ( !v21 )
          break;
        v55 = v17 + 2464;
        v45 = KeWaitForMultipleObjects(2u, &v54, WaitAny, Executive, 0, 0, 0LL, 0LL);
        v21 = v45;
        if ( !v45 )
          break;
        if ( v45 == 1 )
        {
          Log((_DWORD)a1, 512, 1465143918, v17, *(unsigned __int16 *)(v17 + 4));
          UsbhPCE_wRun((__int64)a1, v17 + 24, v17);
        }
        goto LABEL_63;
      }
    }
    while ( v44 != 258 );
  }
  else
  {
    Log((_DWORD)a1, 8, 2004112472, 0, 0LL);
    v21 = KeWaitForSingleObject(a2, Executive, 0, v47, 0LL);
  }
LABEL_49:
  v35 = MEMORY[0xFFFFF78000000008];
  v36 = UsbhLogMask;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v37 = a1->DeviceExtension;
      if ( v37 )
      {
        v38 = *((_QWORD *)v37 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
        *(_DWORD *)v38 = 844395639;
        *(_QWORD *)(v38 + 16) = (unsigned int)v35;
        *(_QWORD *)(v38 + 24) = SHIDWORD(v35);
        *(_QWORD *)(v38 + 8) = 0LL;
        v36 = UsbhLogMask;
      }
    }
  }
  v39 = v35 - v14;
  if ( (v36 & 8) != 0 )
  {
    if ( a1 )
    {
      v40 = a1->DeviceExtension;
      if ( v40 )
      {
        v41 = *((_QWORD *)v40 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v40 + 220) & *((_DWORD *)v40 + 221));
        *(_DWORD *)v41 = 2017809495;
        *(_QWORD *)(v41 + 16) = v21;
        *(_QWORD *)(v41 + 24) = (unsigned int)v39;
        *(_QWORD *)(v41 + 8) = 0LL;
      }
    }
  }
  if ( v21 == 258 )
  {
    if ( v39 < v11 )
    {
      Log((_DWORD)a1, 8, 1465135393, HIDWORD(v39), (unsigned int)v39);
      Log((_DWORD)a1, 8, 1465135649, HIDWORD(v51), (unsigned int)v11);
    }
    if ( a5 )
    {
      if ( a5 != 11 )
      {
        v21 = KeWaitForSingleObject(a2, Executive, 0, 0, &v49);
        if ( v21 )
          UsbhTrapFatalTimeout_x9f(a1, a5, v17);
      }
    }
  }
  return (unsigned int)v21;
}
