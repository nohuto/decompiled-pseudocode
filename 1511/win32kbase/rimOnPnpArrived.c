/*
 * XREFs of rimOnPnpArrived @ 0x1C0010120
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1C00108E0 (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0010980 (RIMAddNonPnpDeviceOfType.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00113D0 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087110 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     RIMFreeDev @ 0x1C000F020 (RIMFreeDev.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000F23C (RIMGetDeviceObjectPointer.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C00104CC (WPP_RECORDER_SF_qqD.c)
 *     RIMOpenDev @ 0x1C00105AC (RIMOpenDev.c)
 *     RIMCloseDev @ 0x1C00106D8 (RIMCloseDev.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0010880 (RawInputManagerDeviceObjectReference.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C0010898 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMHidTLCActive @ 0x1C00115AC (RIMHidTLCActive.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_qqS @ 0x1C007A9F0 (WPP_RECORDER_SF_qqS.c)
 *     RIMStartDeviceSpecificRead @ 0x1C007AAF0 (RIMStartDeviceSpecificRead.c)
 *     RIMQueryDev @ 0x1C007CA1C (RIMQueryDev.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  int v7; // r8d
  char v8; // cl
  unsigned int v9; // r12d
  unsigned int v10; // r14d
  __int64 v11; // rax
  int v12; // edx
  __int64 v13; // r8
  int v14; // r14d
  __int64 v15; // r8
  int v17; // r8d
  void *v18; // rcx
  void *v19; // rcx
  PVOID v20; // rbx
  PVOID *v21; // r12
  __int64 v22; // r8
  int v23; // eax
  NTSTATUS v24; // eax
  void *v25; // rcx
  void *v26; // rcx
  NTSTATUS v27; // eax
  void *v28; // rcx
  int v29; // [rsp+20h] [rbp-49h]
  PVOID Object; // [rsp+40h] [rbp-29h] BYREF
  PVOID v31; // [rsp+48h] [rbp-21h] BYREF
  int v32; // [rsp+50h] [rbp-19h] BYREF
  __int64 v33; // [rsp+58h] [rbp-11h]
  __int64 v34; // [rsp+60h] [rbp-9h]
  int v35; // [rsp+68h] [rbp-1h]
  __int64 v36; // [rsp+70h] [rbp+7h]
  HANDLE *p_Handle; // [rsp+78h] [rbp+Fh]
  HANDLE Handle; // [rsp+80h] [rbp+17h] BYREF
  __int16 v39; // [rsp+88h] [rbp+1Fh]

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    14,
    (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids);
  v8 = *(_BYTE *)(v4 + 48);
  *(_DWORD *)(v4 + 176) &= ~1u;
  if ( v8 != 3 )
  {
    if ( a3 == (void *)-1LL )
    {
      v33 = 0LL;
      v36 = 0LL;
      v9 = 1048577;
      v34 = v4 + 200;
      p_Handle = &Handle;
      v10 = 2;
      v32 = 48;
      v35 = 512;
      Handle = (HANDLE)0x20000000CLL;
      v39 = 257;
      if ( v8 == 2 )
      {
        v11 = *(_QWORD *)(v4 + 416);
        v9 = 1048579;
        if ( !v11 || *(_DWORD *)(v11 + 24) == 7 )
          v10 = 3;
        else
          WPP_RECORDER_SF_qqS(WPP_GLOBAL_Control->DeviceExtension, v6, v7, 15, v29, a1, v4, *(_QWORD *)(v4 + 208));
      }
      v14 = RIMOpenDev(v4, &v32, v9, v10);
    }
    else
    {
      v14 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
      *(_QWORD *)(v4 + 224) = Handle;
      if ( v14 < 0 )
        goto LABEL_21;
      *(_DWORD *)(v4 + 176) |= 0x4000u;
      *(_QWORD *)(v4 + 216) = a3;
    }
    if ( v14 >= 0 )
    {
      if ( *(_BYTE *)(v4 + 48) != 2 )
        v14 = RIMQueryDev(a1, v4);
      if ( v14 < 0 )
        goto LABEL_36;
      if ( (*(_DWORD *)(v4 + 176) & 0x20) == 0 )
      {
        v14 = RIMRegisterForDeviceChangeNotifications(v4, *(_QWORD *)(a1 + 112), v13, v4, v4 + 240);
        if ( v14 < 0 )
          goto LABEL_36;
        v14 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
      }
      if ( v14 >= 0 )
      {
        *(_DWORD *)(v4 + 176) &= ~0x100u;
        if ( *(_BYTE *)(v4 + 48) != 2
          || *(_DWORD *)(v4 + 308)
          || (*(_DWORD *)(v4 + 176) & 0x2000) != 0
          || (unsigned int)RIMHidTLCActive(*(_QWORD *)(v4 + 408)) )
        {
          if ( !*(_QWORD *)(a1 + 808) )
          {
            RIMLockExclusive(a1 + 744);
            RIMStartDeviceSpecificRead(a1, v4, v15);
            RIMUnlockExclusive(a1 + 744);
          }
        }
        else
        {
          WPP_RECORDER_SF_qqS(WPP_GLOBAL_Control->DeviceExtension, v12, v17, 16, v29, a1, v4, *(_QWORD *)(v4 + 208));
          RIMCloseDev(v4);
          v18 = *(void **)(v4 + 240);
          if ( v18 )
          {
            IoUnregisterPlugPlayNotification(v18);
            v19 = *(void **)(v4 + 32);
            *(_QWORD *)(v4 + 240) = 0LL;
            ObfDereferenceObject(v19);
          }
        }
        goto LABEL_21;
      }
LABEL_36:
      v26 = *(void **)(v4 + 240);
      if ( v26 )
      {
        v27 = IoUnregisterPlugPlayNotification(v26);
        v28 = *(void **)(v4 + 32);
        v14 = v27;
        *(_QWORD *)(v4 + 240) = 0LL;
        ObfDereferenceObject(v28);
      }
      RIMCloseDev(v4);
      RIMFreeDev(a1, v4);
      LOBYTE(v4) = 0;
    }
LABEL_21:
    WPP_RECORDER_SF_qqD(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      4,
      17,
      (__int64)&WPP_2cf43eb6f084e9fb81263413500054a8_Traceguids,
      a1,
      v4,
      v14);
    return (unsigned int)v14;
  }
  v14 = RIMGetDeviceObjectPointer(
          (struct _UNICODE_STRING *)(v4 + 200),
          v6,
          2u,
          &Handle,
          &v31,
          (PDEVICE_OBJECT *)&Object);
  if ( v14 >= 0 )
  {
    ObfReferenceObject(Object);
    v20 = v31;
    v21 = (PVOID *)(v4 + 240);
    *(_QWORD *)(v4 + 224) = v31;
    v23 = RIMRegisterForDeviceChangeNotifications(v4, *(_QWORD *)(a1 + 112), v22, v4, v4 + 240);
    *(_QWORD *)(v4 + 224) = 0LL;
    v14 = v23;
    ObfDereferenceObject(v20);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
    if ( v14 >= 0 )
    {
      v14 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
      if ( v14 < 0 )
      {
        if ( *v21 )
        {
          v24 = IoUnregisterPlugPlayNotification(*v21);
          v25 = *(void **)(v4 + 32);
          v14 = v24;
          *v21 = 0LL;
          ObfDereferenceObject(v25);
        }
        RIMCloseDev(v4);
        RIMFreeDev(a1, v4);
      }
    }
  }
  return (unsigned int)v14;
}
