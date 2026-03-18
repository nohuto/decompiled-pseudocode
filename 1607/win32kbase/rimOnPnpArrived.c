/*
 * XREFs of rimOnPnpArrived @ 0x1C000C7E8
 * Callers:
 *     RIMAddNonPnpDeviceOfType @ 0x1C0009D90 (RIMAddNonPnpDeviceOfType.c)
 *     RIMDoOnPnpNotification @ 0x1C000C538 (RIMDoOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0010070 (RIMDirectStartStopDeviceRead.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0087FB0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 * Callees:
 *     WPP_RECORDER_SF_qqS @ 0x1C000A084 (WPP_RECORDER_SF_qqS.c)
 *     RIMFreeDev @ 0x1C000B268 (RIMFreeDev.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000B2CC (RIMGetDeviceObjectPointer.c)
 *     RIMRegisterForDeviceChangeNotifications @ 0x1C000C5D0 (RIMRegisterForDeviceChangeNotifications.c)
 *     RIMCloseDev @ 0x1C000C778 (RIMCloseDev.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C000CCA4 (WPP_RECORDER_SF_qqD.c)
 *     RIMOpenDev @ 0x1C000CD84 (RIMOpenDev.c)
 *     _TlgWrite @ 0x1C000FA24 (_TlgWrite.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00101D4 (RimDeviceTypeToRimInputType.c)
 *     RIMHidTLCActive @ 0x1C0010254 (RIMHidTLCActive.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0010A8C (RIMStartDeviceSpecificRead.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0010C90 (RawInputManagerDeviceObjectReference.c)
 *     _TlgKeywordOn @ 0x1C00111F8 (_TlgKeywordOn.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C001D690 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     RIMQueryDev @ 0x1C00808C0 (RIMQueryDev.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1C00B3BE4 (_TlgCreateWsz.c)
 *     RIMUnRegisterForDeviceChangeNotifications @ 0x1C00DA9AC (RIMUnRegisterForDeviceChangeNotifications.c)
 *     WPP_RECORDER_SF_DqqS @ 0x1C00DAB1C (WPP_RECORDER_SF_DqqS.c)
 */

__int64 __fastcall rimOnPnpArrived(__int64 a1, __int64 a2, void *a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  char v8; // cl
  int v9; // edx
  int v10; // r8d
  int v11; // r14d
  PVOID v12; // rbx
  __int64 v13; // r8
  int v14; // eax
  int v15; // r9d
  void *v16; // rcx
  NTSTATUS v17; // eax
  void *v18; // rcx
  unsigned int v19; // ebx
  unsigned int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r8
  int v25; // eax
  const WCHAR *v26; // rdx
  LPCGUID v27; // r9
  void *v28; // rcx
  NTSTATUS v29; // eax
  void *v30; // rcx
  int cData; // [rsp+20h] [rbp-69h]
  int cDataa; // [rsp+20h] [rbp-69h]
  PVOID Object; // [rsp+50h] [rbp-39h] BYREF
  PVOID v35; // [rsp+58h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-29h] BYREF
  __int16 v37; // [rsp+68h] [rbp-21h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-19h] BYREF
  __int64 v39; // [rsp+80h] [rbp-9h]
  int v40; // [rsp+88h] [rbp-1h]
  PVOID *p_Object; // [rsp+90h] [rbp+7h]
  __int64 p_Handle; // [rsp+98h] [rbp+Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp+17h] BYREF

  v4 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    4,
    16,
    (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids);
  v8 = *(_BYTE *)(v4 + 48);
  *(_DWORD *)(v4 + 184) &= ~1u;
  if ( v8 != 3 )
  {
    if ( a3 == (void *)-1LL )
    {
      *(_QWORD *)&pData.Size = 0LL;
      p_Object = 0LL;
      v19 = 2;
      v39 = v4 + 208;
      p_Handle = (__int64)&Handle;
      v20 = 1048577;
      LODWORD(pData.Ptr) = 48;
      v40 = 512;
      Handle = (HANDLE)0x20000000CLL;
      v37 = 257;
      if ( v8 == 2 )
      {
        v21 = *(_QWORD *)(v4 + 480);
        v20 = 1048579;
        if ( !v21 || *(_DWORD *)(v21 + 24) == 6 )
          v19 = 3;
        else
          WPP_RECORDER_SF_qqS(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v6,
            v7,
            0x13u,
            cData,
            a1,
            v4,
            *(const wchar_t **)(v4 + 216));
      }
      v11 = RIMOpenDev(v4, &pData, v20, v19);
    }
    else
    {
      v11 = ObReferenceObjectByHandle(a3, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Handle, 0LL);
      *(_QWORD *)(v4 + 232) = Handle;
      if ( v11 < 0 )
        goto LABEL_44;
      *(_DWORD *)(v4 + 184) |= 0x4000u;
      *(_QWORD *)(v4 + 224) = a3;
    }
    if ( v11 >= 0 )
    {
      if ( *(_BYTE *)(v4 + 48) != 2 )
        v11 = RIMQueryDev(a1, v4);
      if ( v11 < 0 )
        goto LABEL_41;
      if ( (*(_DWORD *)(v4 + 184) & 0x20) == 0 && !*(_QWORD *)(v4 + 248) )
      {
        v11 = RIMRegisterForDeviceChangeNotifications(
                v4,
                *(struct _DRIVER_OBJECT **)(a1 + 112),
                v23,
                (void *)v4,
                (PVOID *)(v4 + 248));
        if ( v11 < 0 )
          goto LABEL_41;
        v11 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
      }
      if ( v11 >= 0 )
      {
        *(_DWORD *)(v4 + 184) &= ~0x100u;
        if ( *(_BYTE *)(v4 + 48) != 2
          || *(_DWORD *)(v4 + 316)
          || *(_DWORD *)(v4 + 320)
          || (*(_DWORD *)(v4 + 184) & 0x2000) != 0
          || (unsigned int)RIMHidTLCActive(*(_QWORD *)(v4 + 472)) )
        {
          if ( !*(_QWORD *)(a1 + 760) )
          {
            RIMLockExclusive(a1 + 696);
            RIMStartDeviceSpecificRead(a1, v4);
            RIMUnlockExclusive(a1 + 696);
          }
        }
        else
        {
          WPP_RECORDER_SF_qqS(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v22,
            v24,
            0x14u,
            cData,
            a1,
            v4,
            *(const wchar_t **)(v4 + 216));
          RIMCloseDev(v4);
          if ( *(_QWORD *)(v4 + 248)
            && dword_1C01187D0 > 5u
            && TlgKeywordOn((TraceLoggingHProvider)&dword_1C01187D0, 0x400000000000uLL) )
          {
            v25 = RimDeviceTypeToRimInputType(v4, *(unsigned __int8 *)(v4 + 48));
            v26 = *(const WCHAR **)(v4 + 216);
            LODWORD(Object) = v25;
            p_Object = &Object;
            p_Handle = 4LL;
            TlgCreateWsz(&pDesc, v26);
            TlgWrite((TraceLoggingHProvider)&dword_1C01187D0, &unk_1C0103E94, 0LL, v27, 4u, &pData);
          }
        }
        goto LABEL_44;
      }
LABEL_41:
      v28 = *(void **)(v4 + 248);
      if ( v28 )
      {
        v29 = RIMUnRegisterForDeviceChangeNotifications(v28);
        v30 = *(void **)(v4 + 32);
        v11 = v29;
        *(_QWORD *)(v4 + 248) = 0LL;
        CompositionObject::Release(v30);
      }
      RIMCloseDev(v4);
      RIMFreeDev(a1, v4);
      LOBYTE(v4) = 0;
    }
LABEL_44:
    WPP_RECORDER_SF_qqD(
      WPP_GLOBAL_Control->DeviceExtension,
      v22,
      4,
      21,
      (__int64)&WPP_952a1f57a19f3321a82489c5b0904b88_Traceguids,
      a1,
      v4,
      v11);
    return (unsigned int)v11;
  }
  v11 = RIMGetDeviceObjectPointer(
          (struct _UNICODE_STRING *)(v4 + 208),
          v6,
          v7,
          &Handle,
          &v35,
          (PDEVICE_OBJECT *)&Object);
  if ( v11 < 0 )
  {
    v15 = 18;
  }
  else
  {
    ObfReferenceObject(Object);
    v12 = v35;
    *(_QWORD *)(v4 + 232) = v35;
    v14 = RIMRegisterForDeviceChangeNotifications(
            v4,
            *(struct _DRIVER_OBJECT **)(a1 + 112),
            v13,
            (void *)v4,
            (PVOID *)(v4 + 248));
    *(_QWORD *)(v4 + 232) = 0LL;
    v11 = v14;
    ObfDereferenceObject(v12);
    ObfDereferenceObject(Object);
    ZwClose(Handle);
    if ( v11 >= 0 )
    {
      v11 = RawInputManagerDeviceObjectReference(*(_QWORD *)(v4 + 32));
      goto LABEL_8;
    }
    v15 = 17;
  }
  WPP_RECORDER_SF_DqqS(WPP_GLOBAL_Control->DeviceExtension, v9, v10, v15, cDataa, v11, a1, v4, *(_QWORD *)(v4 + 216));
LABEL_8:
  if ( v11 < 0 )
  {
    v16 = *(void **)(v4 + 248);
    if ( v16 )
    {
      v17 = RIMUnRegisterForDeviceChangeNotifications(v16);
      v18 = *(void **)(v4 + 32);
      v11 = v17;
      *(_QWORD *)(v4 + 248) = 0LL;
      CompositionObject::Release(v18);
    }
    RIMCloseDev(v4);
    RIMFreeDev(a1, v4);
  }
  return (unsigned int)v11;
}
