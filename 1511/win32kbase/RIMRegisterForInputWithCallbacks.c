/*
 * XREFs of RIMRegisterForInputWithCallbacks @ 0x1C00065F0
 * Callers:
 *     RIMRegisterForInput @ 0x1C00060D0 (RIMRegisterForInput.c)
 * Callees:
 *     rimConvertUserToKernelEventHandle @ 0x1C0006310 (rimConvertUserToKernelEventHandle.c)
 *     rimConvertUserToKernelTimerHandle @ 0x1C0006464 (rimConvertUserToKernelTimerHandle.c)
 *     RawInputManagerObjectCreate @ 0x1C00064F8 (RawInputManagerObjectCreate.c)
 *     RIMIDEAdoptOrphanedRimDevs @ 0x1C0006FA0 (RIMIDEAdoptOrphanedRimDevs.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00072B4 (RIMDiscoverDevicesOfInputType.c)
 *     RIMCheckPressureDefaultSetting @ 0x1C000A1C0 (RIMCheckPressureDefaultSetting.c)
 *     RIMCALMInitializeCALM @ 0x1C000A244 (RIMCALMInitializeCALM.c)
 *     RIMUnregisterForInput @ 0x1C000A470 (RIMUnregisterForInput.c)
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00115F0 (RawInputManagerObjectResolveHandle.c)
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C00C39B8 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qDd @ 0x1C00C3AD4 (WPP_RECORDER_SF_qDd.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00CA27C (RIMDiscoverSpecificDevice.c)
 */

__int64 __fastcall RIMRegisterForInputWithCallbacks(
        int a1,
        _UNICODE_STRING *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        void *a6,
        void *a7,
        __int64 a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        char a13,
        HANDLE *a14)
{
  _UNICODE_STRING *v15; // r13
  __int64 v17; // r12
  int v18; // edx
  int v19; // r8d
  int v20; // r9d
  int v21; // edx
  int v22; // r9d
  unsigned int v24; // esi
  __int64 *v25; // r14
  __int64 v26; // rax
  int v27; // esi
  int v28; // edx
  int v29; // r14d
  int v30; // eax
  bool v31; // sf
  char v32; // r14
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r8
  char *v38; // r14
  unsigned int v39; // r9d
  _QWORD *v40; // rdx
  GUID **v41; // rcx
  char *v42; // r10
  _DWORD *v43; // r11
  signed __int64 v44; // r8
  signed __int64 v45; // rbx
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  char v48; // r10
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r11
  unsigned int v52; // r9d
  __int64 v53; // r11
  _DWORD *v54; // rdx
  int v55; // edx
  WCHAR *Buffer; // rcx
  unsigned __int64 v57; // r8
  __int64 v58; // rcx
  HANDLE *v59; // rcx
  _QWORD *v60; // rbx
  __int64 v61; // r14
  _QWORD *v62; // rbx
  int TableContext; // [rsp+20h] [rbp-F8h]
  int v64; // [rsp+40h] [rbp-D8h]
  HANDLE v66; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v67; // [rsp+50h] [rbp-C8h]
  PVOID Object; // [rsp+58h] [rbp-C0h] BYREF
  HANDLE v69; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v70; // [rsp+68h] [rbp-B0h]
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-A8h] BYREF
  HANDLE *v72; // [rsp+80h] [rbp-98h]
  HANDLE v73; // [rsp+88h] [rbp-90h] BYREF
  _UNICODE_STRING *p_DestinationString; // [rsp+90h] [rbp-88h]
  HANDLE Handle[2]; // [rsp+98h] [rbp-80h] BYREF
  UNICODE_STRING SourceString; // [rsp+A8h] [rbp-70h] BYREF
  void *v77; // [rsp+B8h] [rbp-60h]
  _BYTE v78[24]; // [rsp+C0h] [rbp-58h] BYREF

  v70 = a4;
  v15 = a2;
  Handle[1] = a2;
  *(_QWORD *)&DestinationString.Length = a4;
  Object = a6;
  v77 = a7;
  *(_QWORD *)&SourceString.Length = a8;
  v72 = a14;
  Handle[0] = (HANDLE)-1LL;
  v73 = (HANDLE)-1LL;
  v69 = (HANDLE)-1LL;
  v66 = (HANDLE)-1LL;
  memset(v78, 0, sizeof(v78));
  v17 = 3LL;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    4,
    10,
    (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids);
  if ( (a1 & 0xFFFFFFC0) != 0 )
  {
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      2,
      11,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
      a1);
    v22 = 12;
LABEL_3:
    LOBYTE(v21) = 3;
    WPP_RECORDER_SF_D(
      WPP_GLOBAL_Control->DeviceExtension,
      v21,
      4,
      v22,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
      13);
    return 3221225485LL;
  }
  if ( v15 )
  {
    if ( !a1 || ((a1 - 1) & a1) != 0 || a3 )
    {
      WPP_RECORDER_SF_qDd(WPP_GLOBAL_Control->DeviceExtension, v18, v19, v20, TableContext, (char)v15, a1, a3);
      v22 = 14;
      goto LABEL_3;
    }
  }
  else if ( a3 && (a1 & 0x20) == 0 )
  {
    LOBYTE(v18) = 2;
    WPP_RECORDER_SF_Dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v18,
      2,
      15,
      (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
      a1,
      a3);
    v22 = 16;
    goto LABEL_3;
  }
  v24 = 0;
  v25 = (__int64 *)v78;
  while ( 1 )
  {
    v26 = Win32AllocPoolNonPaged(104LL, 1668301138LL);
    *v25 = v26;
    if ( !v26 )
      break;
    ++v24;
    ++v25;
    if ( v24 > 2 )
    {
      v27 = rimConvertUserToKernelEventHandle(Object, Handle);
      v29 = rimConvertUserToKernelTimerHandle(v77, &v73);
      if ( *(_QWORD *)&SourceString.Length )
        v30 = rimConvertUserToKernelTimerHandle(*(void **)&SourceString.Length, &v69);
      else
        v30 = 0;
      v31 = v27 < 0;
      if ( v27 >= 0 )
      {
        if ( v29 >= 0 && v30 >= 0 )
        {
          KeEnterCriticalRegion();
          v32 = a13;
          LOBYTE(v33) = a13;
          v27 = RawInputManagerObjectCreate(v33, v34, v35, v36, &v66);
          KeLeaveCriticalRegion();
          if ( v27 < 0 )
            goto LABEL_80;
          LOBYTE(v37) = 1;
          v27 = RawInputManagerObjectResolveHandle(v66, 3LL, v37, &Object);
          v64 = v27;
          if ( v27 < 0 )
            goto LABEL_74;
          v38 = (char *)Object;
          *((_QWORD *)Object + 8) = v66;
          *((_WORD *)v38 + 36) = 0;
          v38[74] = 0;
          *((_DWORD *)v38 + 19) = a1;
          *((_QWORD *)v38 + 14) = a5;
          *((_QWORD *)v38 + 12) = 0LL;
          *((_QWORD *)v38 + 13) = 0LL;
          *((_QWORD *)v38 + 93) = 0LL;
          *((_QWORD *)v38 + 94) = 0LL;
          *((_QWORD *)v38 + 68) = 0LL;
          *((_DWORD *)v38 + 132) = 0;
          *((_QWORD *)v38 + 67) = 0LL;
          *((_QWORD *)v38 + 70) = v38 + 552;
          *((_QWORD *)v38 + 69) = v38 + 552;
          memset(v38 + 568, 0, 0x20uLL);
          *((_QWORD *)v38 + 72) = v38 + 568;
          *((_QWORD *)v38 + 71) = v38 + 568;
          memset(v38 + 600, 0, 0x28uLL);
          RIMCALMInitializeCALM(v38);
          RIMCheckPressureDefaultSetting(v38);
          v39 = 0;
          v40 = v78;
          v41 = &gRIMDeviceTemplate;
          v42 = v38 + 384;
          v43 = v38 + 432;
          v44 = v38 - (char *)&gRIMDeviceTemplate;
          v45 = v38 - v78;
          do
          {
            *(_OWORD *)((char *)v41 + v44 + 120) = *(_OWORD *)v41;
            *(_OWORD *)((char *)v41 + v44 + 136) = *((_OWORD *)v41 + 1);
            *(_OWORD *)((char *)v41 + v44 + 152) = *((_OWORD *)v41 + 2);
            *(_OWORD *)((char *)v41 + v44 + 168) = *((_OWORD *)v41 + 3);
            *(_OWORD *)((char *)v41 + v44 + 184) = *((_OWORD *)v41 + 4);
            *(_QWORD *)((char *)v40 + v45 + 360) = 0LL;
            *(_QWORD *)((char *)v40 + v45 + 448) = *v40;
            *v43 = 0;
            *v40 = 0LL;
            *((_DWORD *)v42 + 2) = v39;
            *(_QWORD *)v42 = v38;
            ++v39;
            ++v43;
            v41 += 10;
            ++v40;
            v42 += 16;
          }
          while ( v39 <= 2 );
          *((_QWORD *)v38 + 59) = v73;
          *((_QWORD *)v38 + 60) = v69;
          *((_DWORD *)v38 + 122) = a9;
          *((_QWORD *)v38 + 62) = 0LL;
          *((_QWORD *)v38 + 63) = 0LL;
          if ( a9 && v69 != (HANDLE)-1LL )
            *((_QWORD *)v38 + 62) = gliQpcFreq.QuadPart * (unsigned int)(20 * a9) / 1000;
          *((_QWORD *)v38 + 65) = a10;
          *((HANDLE *)v38 + 64) = Handle[0];
          v38[760] = 0;
          *((_QWORD *)v38 + 110) = 0LL;
          *((_QWORD *)v38 + 109) = 500 * gliQpcFreq.QuadPart / 1000;
          *((_QWORD *)v38 + 100) = a11;
          *((_QWORD *)v38 + 101) = a12;
          v38[680] = 0;
          RawInputManagerObject::bTouchInputAllowed = 1;
          v38[681] = 0;
          KeQueryPerformanceCounter((PLARGE_INTEGER)v38 + 86);
          *((_QWORD *)v38 + 87) = 1LL;
          *((_QWORD *)v38 + 90) = v38 + 712;
          *((_QWORD *)v38 + 89) = v38 + 712;
          *((_QWORD *)v38 + 92) = v38 + 728;
          *((_QWORD *)v38 + 91) = v38 + 728;
          *((_QWORD *)v38 + 97) = v38 + 768;
          *((_QWORD *)v38 + 96) = v38 + 768;
          *((_QWORD *)v38 + 99) = v38 + 784;
          *((_QWORD *)v38 + 98) = v38 + 784;
          RtlInitializeGenericTableAvl(
            (PRTL_AVL_TABLE)(v38 + 896),
            rimUserMemAllocNodeCompare,
            rimUserMemAllocNodeAlloc,
            rimUserMemAllocNodeFree,
            0LL);
          *((_DWORD *)v38 + 20) = a3;
          if ( a3 )
          {
            v46 = 4LL * a3;
            if ( v46 <= 0xFFFFFFFF )
            {
              v47 = Win32AllocPool((unsigned int)v46, 1885435218LL);
              *((_QWORD *)v38 + 11) = v47;
              v48 = a13;
              if ( v47 )
              {
                if ( a13 )
                {
                  v52 = 0;
                  v67 = 0;
                  v53 = v70;
                  while ( v52 < a3 )
                  {
                    v54 = (_DWORD *)(v53 + 4LL * v52);
                    if ( v54 >= W32UserProbeAddress )
                      v54 = W32UserProbeAddress;
                    *(_DWORD *)(*((_QWORD *)v38 + 11) + 4LL * v52++) = *v54;
                    v67 = v52;
                  }
                }
                else
                {
                  v49 = 0LL;
                  v50 = a3;
                  v67 = a3;
                  v51 = v70;
                  do
                  {
                    *(_DWORD *)(v49 + *((_QWORD *)v38 + 11)) = *(_DWORD *)(v49 + v51);
                    v49 += 4LL;
                    --v50;
                  }
                  while ( v50 );
                }
              }
              else
              {
                v27 = -1073741801;
                v64 = -1073741801;
              }
LABEL_44:
              if ( v15 )
              {
                p_DestinationString = 0LL;
                *(_QWORD *)&DestinationString.Length = 0LL;
                DestinationString.Buffer = 0LL;
                if ( v48 )
                {
                  if ( v15 >= W32UserProbeAddress )
                    v15 = (_UNICODE_STRING *)W32UserProbeAddress;
                  v55 = *(_DWORD *)&v15->Length;
                  LODWORD(v70) = v55;
                  *(_DWORD *)&SourceString.Length = v55;
                  Buffer = v15->Buffer;
                  SourceString.Buffer = Buffer;
                  if ( ((unsigned __int8)Buffer & 1) != 0 )
                    ExRaiseDatatypeMisalignment();
                  v57 = (unsigned __int64)Buffer + (unsigned __int16)v55 + 2;
                  if ( v57 >= (unsigned __int64)W32UserProbeAddress
                    || (unsigned __int16)v55 > WORD1(v70)
                    || v57 <= (unsigned __int64)Buffer )
                  {
                    *(_BYTE *)W32UserProbeAddress = 0;
                  }
                  DestinationString.MaximumLength = SourceString.Length;
                  DestinationString.Length = SourceString.Length;
                  DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 1886221394LL);
                  if ( DestinationString.Buffer )
                  {
                    RtlCopyUnicodeString(&DestinationString, &SourceString);
                    p_DestinationString = &DestinationString;
                    v27 = v64;
                  }
                  else
                  {
                    v27 = -1073741801;
                  }
                  v38 = (char *)Object;
                }
                else
                {
                  p_DestinationString = v15;
                }
                if ( v27 >= 0 )
                {
                  RIMLockExclusive(v38 + 96);
                  v27 = RIMDiscoverSpecificDevice(v38);
                  RIMUnlockExclusive(v38 + 96);
                  if ( v27 < 0 )
                  {
                    v58 = *((_QWORD *)v38 + 67);
                    if ( v58 )
                    {
                      Win32FreePool(v58);
                      *((_QWORD *)v38 + 67) = 0LL;
                    }
                    *((_QWORD *)v38 + 59) = -1LL;
                    *((_QWORD *)v38 + 60) = -1LL;
                    *((_QWORD *)v38 + 64) = -1LL;
                  }
                }
                if ( DestinationString.Buffer )
                  Win32FreePool(DestinationString.Buffer);
              }
              else
              {
                if ( v27 >= 0 )
                  RIMDiscoverDevicesOfInputType(v38);
                RIMIDEAdoptOrphanedRimDevs(v38);
              }
              ObfDereferenceObject(v38);
LABEL_73:
              v32 = a13;
LABEL_74:
              if ( v27 >= 0 )
              {
                if ( v32 )
                {
                  v59 = v72;
                  if ( v72 >= W32UserProbeAddress )
                    v59 = (HANDLE *)W32UserProbeAddress;
                  *v59 = v66;
                }
                else
                {
                  *v72 = v66;
                }
LABEL_92:
                LOBYTE(v28) = 3;
                WPP_RECORDER_SF_D(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v28,
                  4,
                  19,
                  (__int64)&WPP_b7afe0d2946a99936bddfefe20d700ac_Traceguids,
                  v27);
                return (unsigned int)v27;
              }
LABEL_80:
              v60 = v78;
              v61 = 3LL;
              do
              {
                if ( *v60 )
                  Win32FreePool(*v60);
                ++v60;
                --v61;
              }
              while ( v61 );
              if ( Handle[0] != (HANDLE)-1LL )
                ZwClose(Handle[0]);
              if ( v73 != (HANDLE)-1LL )
                ZwClose(v73);
              if ( v69 != (HANDLE)-1LL )
                ZwClose(v69);
              if ( v66 != (HANDLE)-1LL )
                ObCloseHandle(v66, 1);
              goto LABEL_92;
            }
            v27 = -1073741811;
            v64 = -1073741811;
          }
          v48 = a13;
          goto LABEL_44;
        }
        v31 = v27 < 0;
      }
      if ( !v31 )
        v27 = v29;
      goto LABEL_73;
    }
  }
  v62 = v78;
  do
  {
    if ( *v62 )
      Win32FreePool(*v62);
    ++v62;
    --v17;
  }
  while ( v17 );
  return 3221225495LL;
}
