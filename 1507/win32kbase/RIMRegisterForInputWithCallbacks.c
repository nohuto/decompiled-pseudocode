/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C0072410
 * Callers:
 *     RIMRegisterForInput @ 0x1C0072050 (RIMRegisterForInput.c)
 * Callees:
 *     rimConvertUserToKernelEventHandle @ 0x1C0013988 (rimConvertUserToKernelEventHandle.c)
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C001A9C0 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     RIMUnregisterForInput @ 0x1C00719C0 (RIMUnregisterForInput.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C00720C8 (rimConvertUserToKernelTimerHandle.c)
 *     RIMCALMInitializeCALM @ 0x1C007215C (RIMCALMInitializeCALM.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C0072380 (RIMCheckPressureDefaultSetting.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C0072C84 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RawInputManagerObjectCreate @ 0x1C0072DC8 (RawInputManagerObjectCreate.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00758D8 (RIMDiscoverDevicesOfInputType.c)
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C00C2B98 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C00C2CB4 (WPP_RECORDER_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00C937C (RIMDiscoverSpecificDevice.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        int a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        void *a7,
        void *a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        char a13,
        HANDLE *a14)
{
  __int64 v14; // r13
  int v17; // edx
  int v18; // r8d
  int v19; // r9d
  unsigned __int16 v20; // r9
  int v22; // esi
  int v23; // ecx
  int v24; // eax
  bool v25; // sf
  int v26; // ecx
  int v27; // edx
  int v28; // r8d
  int v29; // r9d
  char *v30; // r14
  unsigned int v31; // edx
  GUID **v32; // rax
  char *v33; // r8
  _QWORD *v34; // r9
  signed __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  unsigned int i; // r9d
  _DWORD *v40; // rdx
  int v41; // ecx
  WCHAR *Buffer; // rdx
  unsigned __int64 v43; // r8
  HANDLE *v44; // rcx
  int TableContext; // [rsp+20h] [rbp-B8h]
  __int64 v46; // [rsp+28h] [rbp-B0h]
  int v47; // [rsp+40h] [rbp-98h]
  HANDLE v48; // [rsp+48h] [rbp-90h] BYREF
  HANDLE v49; // [rsp+50h] [rbp-88h] BYREF
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-78h] BYREF
  HANDLE v52; // [rsp+68h] [rbp-70h] BYREF
  struct _UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-68h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-60h] BYREF
  int v55; // [rsp+88h] [rbp-50h]
  UNICODE_STRING SourceString; // [rsp+90h] [rbp-48h] BYREF
  int v57; // [rsp+E0h] [rbp+8h]

  v14 = a3;
  Handle = (HANDLE)-1LL;
  v52 = (HANDLE)-1LL;
  v49 = (HANDLE)-1LL;
  v48 = (HANDLE)-1LL;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0xAu,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids);
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0xBu,
      (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
      a1);
    v20 = 12;
LABEL_3:
    LODWORD(v46) = -1073741811;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      4u,
      v20,
      (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
      v46);
    return 3221225485LL;
  }
  if ( a2 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || (_DWORD)v14 )
    {
      WPP_RECORDER_SF_qDd(WPP_GLOBAL_Control->DeviceExtension, v17, v18, v19, TableContext, (char)a2, a1, v14);
      v20 = 14;
      goto LABEL_3;
    }
  }
  else if ( (_DWORD)v14 && (a1 & 0x20) == 0 )
  {
    LOBYTE(v17) = 2;
    WPP_RECORDER_SF_Dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      2,
      15,
      (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
      a1,
      v14);
    v20 = 16;
    goto LABEL_3;
  }
  v22 = rimConvertUserToKernelEventHandle(a6, &Handle);
  v23 = rimConvertUserToKernelTimerHandle(a7, &v52);
  v57 = v23;
  if ( a8 )
  {
    v24 = rimConvertUserToKernelTimerHandle(a8, &v49);
    v23 = v57;
  }
  else
  {
    v24 = 0;
  }
  v25 = v22 < 0;
  if ( v22 < 0 )
    goto LABEL_70;
  if ( v23 < 0 || v24 < 0 )
  {
    v25 = v22 < 0;
LABEL_70:
    if ( !v25 )
      v22 = v23;
    goto LABEL_72;
  }
  KeEnterCriticalRegion();
  LOBYTE(v26) = a13;
  v22 = RawInputManagerObjectCreate(v26, v27, v28, v29, &v48);
  KeLeaveCriticalRegion();
  if ( v22 < 0 )
  {
LABEL_78:
    if ( Handle != (HANDLE)-1LL )
      ZwClose(Handle);
    if ( v52 != (HANDLE)-1LL )
      ZwClose(v52);
    if ( v49 != (HANDLE)-1LL )
      ZwClose(v49);
    if ( v48 != (HANDLE)-1LL )
      ObCloseHandle(v48, 1);
    goto LABEL_86;
  }
  v22 = RawInputManagerObjectResolveHandle(v48, 3u, 1, &Object);
  v47 = v22;
  if ( v22 >= 0 )
  {
    v30 = (char *)Object;
    *((_QWORD *)Object + 8) = v48;
    *((_WORD *)v30 + 36) = 0;
    v30[74] = 0;
    *((_DWORD *)v30 + 19) = a1;
    *((_QWORD *)v30 + 14) = a5;
    *((_QWORD *)v30 + 12) = 0LL;
    *((_QWORD *)v30 + 13) = 0LL;
    *((_QWORD *)v30 + 89) = 0LL;
    *((_QWORD *)v30 + 90) = 0LL;
    *((_QWORD *)v30 + 64) = 0LL;
    *((_DWORD *)v30 + 124) = 0;
    *((_QWORD *)v30 + 63) = 0LL;
    *((_QWORD *)v30 + 66) = v30 + 520;
    *((_QWORD *)v30 + 65) = v30 + 520;
    memset(v30 + 536, 0, 0x20uLL);
    *((_QWORD *)v30 + 68) = v30 + 536;
    *((_QWORD *)v30 + 67) = v30 + 536;
    memset(v30 + 568, 0, 0x28uLL);
    RIMCALMInitializeCALM(v30);
    RIMCheckPressureDefaultSetting((__int64)v30);
    v31 = 0;
    v32 = &gRIMDeviceTemplate;
    v33 = v30 + 384;
    v34 = v30 + 360;
    v35 = v30 - (char *)&gRIMDeviceTemplate;
    do
    {
      *(_OWORD *)((char *)v32 + v35 + 120) = *(_OWORD *)v32;
      *(_OWORD *)((char *)v32 + v35 + 136) = *((_OWORD *)v32 + 1);
      *(_OWORD *)((char *)v32 + v35 + 152) = *((_OWORD *)v32 + 2);
      *(_OWORD *)((char *)v32 + v35 + 168) = *((_OWORD *)v32 + 3);
      *(_OWORD *)((char *)v32 + v35 + 184) = *((_OWORD *)v32 + 4);
      *v34 = 0LL;
      *((_DWORD *)v33 + 2) = v31;
      *(_QWORD *)v33 = v30;
      ++v31;
      ++v34;
      v32 += 10;
      v33 += 16;
    }
    while ( v31 <= 2 );
    *((_QWORD *)v30 + 54) = v52;
    *((_QWORD *)v30 + 55) = v49;
    *((_DWORD *)v30 + 112) = a9;
    *((_QWORD *)v30 + 57) = 0LL;
    *((_QWORD *)v30 + 58) = 0LL;
    if ( a9 && v49 != (HANDLE)-1LL )
      *((_QWORD *)v30 + 57) = gliQpcFreq.QuadPart * (unsigned int)(20 * a9) / 1000;
    *((_QWORD *)v30 + 59) = 0LL;
    *((_QWORD *)v30 + 61) = a10;
    *((_QWORD *)v30 + 60) = Handle;
    v30[728] = 0;
    *((_QWORD *)v30 + 104) = 0LL;
    *((_QWORD *)v30 + 103) = 500 * gliQpcFreq.QuadPart / 1000;
    *((_QWORD *)v30 + 94) = a11;
    *((_QWORD *)v30 + 95) = a12;
    v30[648] = 0;
    RawInputManagerObject::bTouchInputAllowed = 1;
    v30[649] = 0;
    KeQueryPerformanceCounter((PLARGE_INTEGER)v30 + 82);
    *((_QWORD *)v30 + 83) = 1LL;
    *((_QWORD *)v30 + 86) = v30 + 680;
    *((_QWORD *)v30 + 85) = v30 + 680;
    *((_QWORD *)v30 + 88) = v30 + 696;
    *((_QWORD *)v30 + 87) = v30 + 696;
    *((_QWORD *)v30 + 93) = v30 + 736;
    *((_QWORD *)v30 + 92) = v30 + 736;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(v30 + 848),
      rimUserMemAllocNodeCompare,
      rimUserMemAllocNodeAlloc,
      (PRTL_AVL_FREE_ROUTINE)rimUserMemAllocNodeFree,
      0LL);
    *((_DWORD *)v30 + 20) = v14;
    if ( !(_DWORD)v14 )
      goto LABEL_41;
    v36 = v14;
    if ( (unsigned __int64)(4 * v14) > 0xFFFFFFFF )
    {
      v22 = -1073741811;
    }
    else
    {
      v37 = Win32AllocPool();
      *((_QWORD *)v30 + 11) = v37;
      if ( v37 )
      {
        if ( a13 )
        {
          for ( i = 0; i < (unsigned int)v14; ++i )
          {
            v40 = (_DWORD *)(a4 + 4LL * i);
            if ( v40 >= W32UserProbeAddress )
              v40 = W32UserProbeAddress;
            *(_DWORD *)(*((_QWORD *)v30 + 11) + 4LL * i) = *v40;
          }
        }
        else
        {
          v38 = 0LL;
          do
          {
            *(_DWORD *)(v38 + *((_QWORD *)v30 + 11)) = *(_DWORD *)(v38 + a4);
            v38 += 4LL;
            --v36;
          }
          while ( v36 );
        }
        goto LABEL_41;
      }
      v22 = -1073741801;
    }
    v47 = v22;
LABEL_41:
    if ( a2 )
    {
      p_DestinationString = 0LL;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.Buffer = 0LL;
      if ( a13 )
      {
        if ( a2 >= W32UserProbeAddress )
          a2 = (struct _UNICODE_STRING *)W32UserProbeAddress;
        v41 = *(_DWORD *)&a2->Length;
        v55 = v41;
        *(_DWORD *)&SourceString.Length = v41;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v43 = (unsigned __int64)Buffer + (unsigned __int16)v41 + 2;
        if ( v43 >= (unsigned __int64)W32UserProbeAddress
          || (unsigned __int16)v41 > HIWORD(v55)
          || (v41 & 1) != 0
          || v43 <= (unsigned __int64)Buffer )
        {
          *(_BYTE *)W32UserProbeAddress = 0;
        }
        DestinationString.MaximumLength = SourceString.Length;
        DestinationString.Length = SourceString.Length;
        DestinationString.Buffer = (PWSTR)Win32AllocPool();
        if ( DestinationString.Buffer )
        {
          RtlCopyUnicodeString(&DestinationString, &SourceString);
          p_DestinationString = &DestinationString;
          v22 = v47;
        }
        else
        {
          v22 = -1073741801;
        }
        v30 = (char *)Object;
      }
      else
      {
        p_DestinationString = a2;
      }
      if ( v22 >= 0 )
      {
        RIMLockExclusive((__int64)(v30 + 96));
        v22 = RIMDiscoverSpecificDevice(v30);
        RIMUnlockExclusive((__int64)(v30 + 96));
        if ( v22 < 0 )
        {
          if ( *((_QWORD *)v30 + 63) )
          {
            Win32FreePool();
            *((_QWORD *)v30 + 63) = 0LL;
          }
          *((_QWORD *)v30 + 54) = -1LL;
          *((_QWORD *)v30 + 55) = -1LL;
          *((_QWORD *)v30 + 60) = -1LL;
        }
      }
      if ( DestinationString.Buffer )
        Win32FreePool();
    }
    else
    {
      if ( v22 >= 0 )
        RIMDiscoverDevicesOfInputType(v30);
      if ( !*((_QWORD *)v30 + 95) )
        RIMIDEAdoptOrphanedRimDevs(v30);
    }
    ObfDereferenceObject(v30);
  }
LABEL_72:
  if ( v22 < 0 )
    goto LABEL_78;
  if ( a13 )
  {
    v44 = a14;
    if ( a14 >= W32UserProbeAddress )
      v44 = (HANDLE *)W32UserProbeAddress;
    *v44 = v48;
  }
  else
  {
    *a14 = v48;
  }
LABEL_86:
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    4u,
    0x13u,
    (__int64)&WPP_dd9f0c7a0f42e4329fa71b586c89d33f_Traceguids,
    v22);
  return (unsigned int)v22;
}
