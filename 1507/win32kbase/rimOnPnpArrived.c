/*
 * XREFs of rimOnPnpArrived @ 0x1C00769E4
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C001A680 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C006F3B0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDoOnPnpNotification @ 0x1C0076038 (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0084B00 (RIMAddNonPnpDeviceOfType.c)
 * Callees:
 *     RIMHidTLCActive @ 0x1C001A8C4 (RIMHidTLCActive.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0075724 (RIMStartDeviceSpecificRead.c)
 *     RIMFreeDev @ 0x1C00759DC (RIMFreeDev.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C0076D6C (WPP_RECORDER_SF_qqD.c)
 *     RIMOpenDev @ 0x1C0076E4C (RIMOpenDev.c)
 *     RIMCloseDev @ 0x1C007707C (RIMCloseDev.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0077220 (RawInputManagerDeviceObjectReference.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0077238 (RIMRegisterForDeviceChangeNotifications.c)
 *     DbgPrintRIM @ 0x1C0077BB4 (DbgPrintRIM.c)
 *     RIMGetDeviceObjectPointer @ 0x1C0077D50 (RIMGetDeviceObjectPointer.c)
 *     RIMQueryDev @ 0x1C00828A4 (RIMQueryDev.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, void *a3)
{
  __int64 v6; // rdx
  char v7; // cl
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // r8
  NTSTATUS v13; // r14d
  void *v15; // rcx
  void *v16; // rcx
  PVOID v17; // rbx
  PVOID *v18; // r12
  __int64 v19; // r8
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  void *v22; // rcx
  void *v23; // rcx
  NTSTATUS v24; // eax
  void *v25; // rcx
  PVOID Object; // [rsp+40h] [rbp-29h] BYREF
  PVOID v27; // [rsp+48h] [rbp-21h] BYREF
  int v28; // [rsp+50h] [rbp-19h] BYREF
  __int64 v29; // [rsp+58h] [rbp-11h]
  __int64 v30; // [rsp+60h] [rbp-9h]
  int v31; // [rsp+68h] [rbp-1h]
  __int64 v32; // [rsp+70h] [rbp+7h]
  HANDLE *p_Handle; // [rsp+78h] [rbp+Fh]
  HANDLE Handle; // [rsp+80h] [rbp+17h] BYREF
  __int16 v35; // [rsp+88h] [rbp+1Fh]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xEu,
    (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids);
  v7 = *(_BYTE *)(a2 + 48);
  *(_DWORD *)(a2 + 184) &= ~1u;
  if ( v7 != 3 )
  {
    if ( a3 == (void *)-1LL )
    {
      v29 = 0LL;
      v32 = 0LL;
      v8 = 1048577;
      v30 = a2 + 208;
      p_Handle = &Handle;
      v9 = 2;
      v28 = 48;
      v31 = 512;
      Handle = (HANDLE)0x20000000CLL;
      v35 = 257;
      if ( v7 == 2 )
      {
        v10 = *(_QWORD *)(a2 + 416);
        v8 = 1048579;
        if ( !v10 || *(_DWORD *)(v10 + 24) == 7 )
          v9 = 3;
        else
          DbgPrintRIM("rimpnp:rimOnPnpArrvied [EXO] pRimObj(%p), pRimDev(%p) %ws\n");
      }
      v13 = RIMOpenDev(a2, &v28, v8, v9);
    }
    else
    {
      v13 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
      *(_QWORD *)(a2 + 232) = Handle;
      if ( v13 < 0 )
        goto LABEL_21;
      *(_DWORD *)(a2 + 184) |= 0x4000u;
      *(_QWORD *)(a2 + 224) = a3;
    }
    if ( v13 >= 0 )
    {
      if ( *(_BYTE *)(a2 + 48) != 2 )
        v13 = RIMQueryDev(a1, a2);
      if ( v13 < 0 )
        goto LABEL_36;
      if ( (*(_DWORD *)(a2 + 184) & 0x20) == 0 )
      {
        v13 = RIMRegisterForDeviceChangeNotifications(a2, *(_QWORD *)(a1 + 112), v12, a2, a2 + 248);
        if ( v13 < 0 )
          goto LABEL_36;
        v13 = RawInputManagerDeviceObjectReference(*(_QWORD *)(a2 + 32));
      }
      if ( v13 >= 0 )
      {
        *(_DWORD *)(a2 + 184) &= ~0x100u;
        if ( *(_BYTE *)(a2 + 48) != 2
          || *(_DWORD *)(a2 + 316)
          || (*(_DWORD *)(a2 + 184) & 0x2000) != 0
          || (unsigned int)RIMHidTLCActive(*(_DWORD **)(a2 + 408)) )
        {
          if ( !*(_QWORD *)(a1 + 760) )
          {
            RIMLockExclusive(a1 + 712);
            RIMStartDeviceSpecificRead(a1, a2);
            RIMUnlockExclusive(a1 + 712);
          }
        }
        else
        {
          DbgPrintRIM("rimpnp:rimOnPnpArrvied [CLO] pRimObj(%p), pRimDev(%p) %ws\n");
          RIMCloseDev(a2);
          v15 = *(void **)(a2 + 248);
          if ( v15 )
          {
            IoUnregisterPlugPlayNotification(v15);
            v16 = *(void **)(a2 + 32);
            *(_QWORD *)(a2 + 248) = 0LL;
            ObfDereferenceObject(v16);
          }
        }
        goto LABEL_21;
      }
LABEL_36:
      v23 = *(void **)(a2 + 248);
      if ( v23 )
      {
        v24 = IoUnregisterPlugPlayNotification(v23);
        v25 = *(void **)(a2 + 32);
        v13 = v24;
        *(_QWORD *)(a2 + 248) = 0LL;
        ObfDereferenceObject(v25);
      }
      RIMCloseDev(a2);
      RIMFreeDev(a1, a2);
      LOBYTE(a2) = 0;
    }
LABEL_21:
    WPP_RECORDER_SF_qqD(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      4,
      15,
      (__int64)&WPP_505169cae3bc6ac582b8fcf89871eb02_Traceguids,
      a1,
      a2,
      v13);
    return (unsigned int)v13;
  }
  v13 = RIMGetDeviceObjectPointer(a2 + 208, v6, 2LL, &Handle, &v27, &Object);
  if ( v13 >= 0 )
  {
    ObfReferenceObject(Object);
    v17 = v27;
    v18 = (PVOID *)(a2 + 248);
    *(_QWORD *)(a2 + 232) = v27;
    v20 = RIMRegisterForDeviceChangeNotifications(a2, *(_QWORD *)(a1 + 112), v19, a2, a2 + 248);
    *(_QWORD *)(a2 + 232) = 0LL;
    v13 = v20;
    ObfDereferenceObject(v17);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
    if ( v13 >= 0 )
    {
      v13 = RawInputManagerDeviceObjectReference(*(_QWORD *)(a2 + 32));
      if ( v13 < 0 )
      {
        if ( *v18 )
        {
          v21 = IoUnregisterPlugPlayNotification(*v18);
          v22 = *(void **)(a2 + 32);
          v13 = v21;
          *v18 = 0LL;
          ObfDereferenceObject(v22);
        }
        RIMCloseDev(a2);
        RIMFreeDev(a1, a2);
      }
    }
  }
  return (unsigned int)v13;
}
