/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x1C01DEB78
 * Callers:
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01DC9E8 (_InitializeTouchInjectionWithQDCData.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PostDeviceNotification @ 0x1C00790B0 (PostDeviceNotification.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C012D508 (FindRimDevBackedDeviceInfo.c)
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C0132224 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     UpdatePointerDeviceCount @ 0x1C0145DC4 (UpdatePointerDeviceCount.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0145DF0 (UpdatePointerDeviceSystemMetrics.c)
 *     SearchHidTLCInfo @ 0x1C0152B08 (SearchHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C0155544 (AllocateAndLinkHidTLCInfo.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C015D5FC (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 *     InitializePointerDeviceFrameContactIdMgr @ 0x1C01CBE10 (InitializePointerDeviceFrameContactIdMgr.c)
 *     RetrieveLinkCollection @ 0x1C01CC58C (RetrieveLinkCollection.c)
 *     FreeHidDesc @ 0x1C01D359C (FreeHidDesc.c)
 *     HidTLCActive @ 0x1C01D3AB0 (HidTLCActive.c)
 *     ?_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z @ 0x1C01DE340 (-_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z.c)
 *     ComputeVirtualDesktopPhysicalSize @ 0x1C01DE5D8 (ComputeVirtualDesktopPhysicalSize.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(unsigned int a1, int a2, __int64 a3, __int64 a4)
{
  struct DEVICEINFO *RimDevBackedDeviceInfo; // rsi
  __int64 v6; // r13
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r15
  unsigned int v17; // kr00_4
  unsigned int v18; // ecx
  __int128 v19; // xmm1
  PHIDP_PREPARSED_DATA v20; // r12
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rax
  void *v24; // rax
  __int64 v25; // rax
  __int16 v26; // dx
  __int16 v27; // cx
  __int64 v28; // r8
  __int64 v29; // rax
  __int128 v30; // xmm0
  int v31; // edx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct _LIST_ENTRY **v35; // rax
  struct _LIST_ENTRY *v36; // rbx
  int updated; // eax
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // rcx
  __int64 v42; // rax
  struct tagHID_PAGEONLY_REQUEST *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  HANDLE *v49; // r14
  __int64 v50; // rcx
  int v51; // edi
  int v52; // ebx
  struct tagRECT v53; // xmm6
  __int64 v54; // rcx
  __int64 *v55; // rbx
  HANDLE v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rcx
  int v59[2]; // [rsp+28h] [rbp-E0h]
  int v60; // [rsp+38h] [rbp-D0h] BYREF
  int v61; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG LinkCollectionNodesLength; // [rsp+40h] [rbp-C8h] BYREF
  int v63; // [rsp+44h] [rbp-C4h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct tagRECT v65; // [rsp+58h] [rbp-B0h]
  struct tagRECT v66[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v67; // [rsp+88h] [rbp-80h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+98h] [rbp-70h]
  struct _HIDP_CAPS Capabilities; // [rsp+A8h] [rbp-60h] BYREF
  _HIDP_DEVICE_DESC DeviceDescription; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v71[18]; // [rsp+128h] [rbp+20h] BYREF

  RimDevBackedDeviceInfo = 0LL;
  v63 = a2;
  v6 = a1;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  v61 = 0;
  v60 = 0;
  LinkCollectionNodesLength = 0;
  v8 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\??\\VIRTUAL_DIGITIZER");
  if ( !aDeviceTemplate[308] )
  {
    EnterDeviceInfoListCrit_(v9);
    EtwTracePseudoDevCreationStart();
    LOBYTE(v10) = 19;
    v11 = HMAllocObject(0LL, 0LL, v10, aDeviceTemplate[284]);
    v12 = v11;
    if ( !v11 )
    {
      UserSetLastError(14);
LABEL_49:
      v12 = 0LL;
LABEL_50:
      LeaveDeviceInfoListCrit_(v13);
      return (struct DEVICEINFO *)v12;
    }
    *(_BYTE *)(v11 + 48) = 2;
    *(_WORD *)(v11 + 64) = 64;
    *(_DWORD *)(v11 + 316) = 1;
    *(_QWORD *)(v11 + 112) = v11 + 104;
    *(_QWORD *)(v11 + 104) = v11 + 104;
    if ( DestinationString.Buffer )
    {
      v14 = Win32AllocPool(DestinationString.MaximumLength, 1953067861LL);
      *(_QWORD *)(v12 + 216) = v14;
      if ( !v14 )
        goto LABEL_29;
      *(_WORD *)(v12 + 210) = DestinationString.MaximumLength;
      RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 208), &DestinationString);
    }
    memset((void *)(v12 + 400), 0, 0x20uLL);
    memset(&DeviceDescription, 0, sizeof(DeviceDescription));
    ComputeVirtualDesktopPhysicalSize(&v61, &v60, a3);
    v15 = Win32AllocPool(584LL, 1953067861LL);
    v16 = v15;
    if ( !v15 )
      goto LABEL_29;
    *(_OWORD *)(v15 + 44) = *(_OWORD *)(gpDispInfo + 120LL);
    *(_OWORD *)(v15 + 60) = *(_OWORD *)(gpDispInfo + 136LL);
    v17 = 3937 * v60;
    v18 = 3937 * v61;
    v65 = *(struct tagRECT *)(gpDispInfo + 104LL);
    v66[0] = v65;
    *(struct tagRECT *)(v15 + 28) = v65;
    _UpdateReportDescriptor(v66, v18 / 0x64, v17 / 0x64);
    if ( HidP_GetCollectionDescription(&ReportDesc, 0x1F2u, PagedPool, &DeviceDescription) < 0 )
      goto LABEL_30;
    if ( !DeviceDescription.CollectionDescLength )
      goto LABEL_30;
    v19 = *(_OWORD *)&DeviceDescription.CollectionDesc->Reserved[11];
    PreparsedData = DeviceDescription.CollectionDesc->PreparsedData;
    v20 = PreparsedData;
    v67 = v19;
    if ( HidP_GetCaps(PreparsedData, &Capabilities) < 0 )
      goto LABEL_30;
    v21 = Win32AllocPoolZInit(120LL, 1147695957LL);
    v22 = v21;
    if ( !v21 )
      goto LABEL_30;
    *(_QWORD *)(v12 + 400) = v21;
    *(struct _HIDP_CAPS *)(v21 + 40) = Capabilities;
    v23 = Win32AllocPoolZInit(*(unsigned __int16 *)(v21 + 44), 1953067861LL);
    *(_QWORD *)(v22 + 24) = v23;
    if ( !v23 )
      goto LABEL_29;
    v24 = (void *)Win32AllocPool(WORD5(v67), 1953067861LL);
    *(_QWORD *)(v22 + 16) = v24;
    if ( !v24 )
      goto LABEL_29;
    memmove(v24, v20, WORD5(v67));
    *(_DWORD *)(v22 + 104) = WORD5(v67);
    *(_DWORD *)(v22 + 108) = 0;
    *(_DWORD *)(v22 + 112) = 0x10000;
    v25 = (__int64)SearchHidTLCInfo(Capabilities.UsagePage, Capabilities.Usage);
    if ( !v25 )
    {
      v25 = AllocateAndLinkHidTLCInfo(v27, v26);
      if ( !v25 )
        goto LABEL_29;
    }
    ++*(_DWORD *)(v25 + 20);
    LOBYTE(v28) = 22;
    *(_QWORD *)(v12 + 408) = v25;
    v29 = HMAllocObject(0LL, 0LL, v28, 1768LL);
    v8 = v29;
    if ( !v29 )
      goto LABEL_29;
    *(_DWORD *)(v29 + 24) = 5;
    *(_DWORD *)(v29 + 1476) = 1;
    *(_QWORD *)(v29 + 264) = v16;
    v30 = *(_OWORD *)(v16 + 28);
    *(_DWORD *)(v29 + 236) |= 8u;
    v31 = *(_DWORD *)(v29 + 236);
    *(_OWORD *)(v29 + 124) = v30;
    *(_QWORD *)(v29 + 1536) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 832LL);
    *(_DWORD *)(v29 + 236) = v31 & 0xFFFFFFF9 | 2;
    *(_QWORD *)(v29 + 720) = *(_QWORD *)v12;
    *(_DWORD *)(v29 + 880) = v63;
    *(_DWORD *)(v29 + 864) = 500;
    *(_QWORD *)(v29 + 872) = 500 * gliQpcFreq.QuadPart / 0x3E8uLL;
    if ( DestinationString.Buffer )
    {
      v32 = Win32AllocPool(DestinationString.MaximumLength, 1953067861LL);
      *(_QWORD *)(v8 + 280) = v32;
      if ( !v32 )
        goto LABEL_29;
      *(_WORD *)(v8 + 274) = DestinationString.MaximumLength;
      RtlCopyUnicodeString((PUNICODE_STRING)(v8 + 272), &DestinationString);
    }
    *(_DWORD *)(v8 + 180) = v65.right - v65.left;
    *(_DWORD *)(v8 + 184) = v65.bottom - v65.top;
    *(_DWORD *)(v8 + 148) = 1000 * v61;
    *(_DWORD *)(v8 + 152) = 1000 * v60;
    *(_OWORD *)(v8 + 156) = *(_OWORD *)(v8 + 140);
    v33 = Win32AllocPoolZInit(64LL, 1953067861LL);
    *(_QWORD *)(v8 + 696) = v33;
    if ( v33 )
    {
      *(_DWORD *)(v33 + 4) |= 1u;
      *(_DWORD *)(*(_QWORD *)(v8 + 696) + 8LL) = 3;
      *(_DWORD *)(*(_QWORD *)(v8 + 696) + 40LL) = 4;
      if ( HidP_GetLinkCollectionNodes(0LL, &LinkCollectionNodesLength, *(PHIDP_PREPARSED_DATA *)(v22 + 16)) != -1072627705 )
        goto LABEL_30;
      if ( LinkCollectionNodesLength <= 1 )
        goto LABEL_30;
      RetrieveLinkCollection(
        (struct tagHID_POINTER_DEVICE_INFO *)v8,
        *(struct _HIDP_PREPARSED_DATA **)(v22 + 16),
        LinkCollectionNodesLength);
      *(_DWORD *)(v8 + 292) = v6;
      *(_DWORD *)(v8 + 300) = 7;
      *(_DWORD *)(v8 + 712) = 7;
      *(_DWORD *)(v8 + 704) = v6;
      if ( !(unsigned int)InitializePointerDeviceFrameContactIdMgr(v8, &Capabilities) )
        goto LABEL_30;
      *(_DWORD *)(v8 + 236) |= 0x80u;
      *(_DWORD *)(v8 + 1472) = -1;
      v34 = Win32AllocPoolZInit(2400 * v6, 1953067861LL);
      *(_QWORD *)(v8 + 680) = v34;
      if ( v34 )
      {
        if ( (unsigned int)_PopulatePointerDevice((struct tagHID_POINTER_DEVICE_INFO *)v8, v20, &Capabilities) )
        {
          *(_QWORD *)(v12 + 56) = gpDeviceInfoList;
          gpDeviceInfoList = v12;
          UpdatePointerDeviceSystemMetrics((struct tagHID_POINTER_DEVICE_INFO *)v8);
          HMAssignmentLock(v12 + 416, v8);
          v35 = (struct _LIST_ENTRY **)qword_1C03247A8;
          v36 = (struct _LIST_ENTRY *)(v8 + 1504);
          v36->Flink = &gPointerDeviceInfoList;
          v36->Blink = (struct _LIST_ENTRY *)v35;
          if ( *v35 != &gPointerDeviceInfoList )
            __fastfail(3u);
          *v35 = v36;
          qword_1C03247A8 = (__int64)v36;
          updated = UpdatePointerDeviceCount(1);
          PostDeviceNotification(0LL, (struct DEVICEINFO *)v12, v38, 1uLL, updated);
          HidP_FreeCollectionDescription(&DeviceDescription);
          EtwTracePseudoDevCreationStop(v39);
          goto LABEL_50;
        }
        goto LABEL_30;
      }
    }
LABEL_29:
    UserSetLastError(14);
LABEL_30:
    v40 = *(_QWORD *)(v12 + 216);
    if ( v40 )
      Win32FreePool(v40);
    if ( DeviceDescription.CollectionDesc )
      HidP_FreeCollectionDescription(&DeviceDescription);
    v41 = *(_QWORD **)(v12 + 400);
    if ( v41 )
      FreeHidDesc(v41);
    v42 = *(_QWORD *)(v12 + 408);
    if ( v42 )
    {
      if ( (*(_DWORD *)(v42 + 20))-- == 1 && !(unsigned int)HidTLCActive(*(_DWORD **)(v12 + 408)) )
        FreeHidPageOnlyRequest(v44);
    }
    if ( v8 )
    {
      v45 = *(_QWORD *)(v8 + 696);
      if ( v45 )
        Win32FreePool(v45);
      v46 = *(_QWORD *)(v8 + 280);
      if ( v46 )
        Win32FreePool(v46);
      v47 = *(_QWORD *)(v8 + 680);
      if ( v47 )
        Win32FreePool(v47);
      HMFreeObject(v8);
    }
    HMFreeObject(v12);
    goto LABEL_49;
  }
  EnterDeviceInfoListCrit_(v9);
  EtwTracePseudoDevCreationStart();
  v49 = (HANDLE *)(a4 + 80);
  *(_QWORD *)v59 = a4 + 80;
  if ( (int)RawInputManagerObjectCreateKernelHandle(*(_QWORD *)&aDeviceTemplate[312], 3LL, 0LL) >= 0 )
  {
    ComputeVirtualDesktopPhysicalSize(&v61, &v60, a3);
    v51 = v60;
    v52 = v61;
    v66[0] = *(struct tagRECT *)(gpDispInfo + 104LL);
    v53 = v66[0];
    _UpdateReportDescriptor(v66, 3937 * v61 / 0x64u, 3937 * v60 / 0x64u);
    memset(v71, 0, 0x88uLL);
    LODWORD(v71[1]) = 498;
    v71[0] = &ReportDesc;
    v71[10] = 0LL;
    *(struct tagRECT *)((char *)&v71[11] + 4) = v53;
    LODWORD(v71[11]) = v6;
    HIDWORD(v71[13]) = v52;
    LODWORD(v71[14]) = v51;
    *(_QWORD *)((char *)&v71[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v54) + 832);
    v55 = (__int64 *)(a4 + 88);
    LOBYTE(v59[0]) = 0;
    HIDWORD(v71[15]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v71[14] + 4)) + 12) & 0x80000000;
    v56 = *v49;
    LODWORD(v71[16]) = v63;
    if ( (int)RIMAddInjectionDeviceOfType(v56, &DestinationString, 2LL, v71, *(_QWORD *)v59, a4 + 88) < 0 )
    {
      ZwClose(*v49);
      *v49 = 0LL;
      *v55 = 0LL;
    }
    else
    {
      RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(*v55, 0, v57);
    }
  }
  EtwTracePseudoDevCreationStop(v50);
  LeaveDeviceInfoListCrit_(v58);
  return RimDevBackedDeviceInfo;
}
