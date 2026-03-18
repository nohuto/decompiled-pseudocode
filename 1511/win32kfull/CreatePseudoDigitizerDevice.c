/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x1C01DF17C
 * Callers:
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01DD078 (_InitializeTouchInjectionWithQDCData.c)
 * Callees:
 *     ?FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z @ 0x1C00071B4 (-FreeHidPageOnlyRequest@@YAXPEAUtagHID_PAGEONLY_REQUEST@@@Z.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PostDeviceNotification @ 0x1C0089D90 (PostDeviceNotification.c)
 *     UpdatePointerDeviceCount @ 0x1C0095E7C (UpdatePointerDeviceCount.c)
 *     UpdatePointerDeviceSystemMetrics @ 0x1C0095EA0 (UpdatePointerDeviceSystemMetrics.c)
 *     SearchHidTLCInfo @ 0x1C010243C (SearchHidTLCInfo.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C010FAFC (AllocateAndLinkHidTLCInfo.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C014F184 (FindRimDevBackedDeviceInfo.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C0152DFC (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 *     InitializePointerDeviceFrameContactIdMgr @ 0x1C01CD9F0 (InitializePointerDeviceFrameContactIdMgr.c)
 *     RetrieveLinkCollection @ 0x1C01CE16C (RetrieveLinkCollection.c)
 *     FreeHidDesc @ 0x1C01D501C (FreeHidDesc.c)
 *     HidTLCActive @ 0x1C01D5530 (HidTLCActive.c)
 *     ?_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z @ 0x1C01DE948 (-_PopulatePointerDevice@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@PEAXPEAU_HIDP_CAPS@@@Z.c)
 *     ComputeVirtualDesktopPhysicalSize @ 0x1C01DEBDC (ComputeVirtualDesktopPhysicalSize.c)
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
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  struct _LIST_ENTRY **v36; // rax
  struct _LIST_ENTRY *v37; // rbx
  unsigned int updated; // eax
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rcx
  _QWORD *v42; // rcx
  __int64 v43; // rax
  struct tagHID_PAGEONLY_REQUEST *v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  HANDLE *v50; // r14
  __int64 v51; // rcx
  int v52; // edi
  int v53; // ebx
  struct tagRECT v54; // xmm6
  __int64 v55; // rcx
  __int64 *v56; // rbx
  HANDLE v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  int v60[2]; // [rsp+28h] [rbp-E0h]
  int v61; // [rsp+38h] [rbp-D0h] BYREF
  int v62; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG LinkCollectionNodesLength; // [rsp+40h] [rbp-C8h] BYREF
  int v64; // [rsp+44h] [rbp-C4h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct tagRECT v66; // [rsp+58h] [rbp-B0h]
  struct tagRECT v67[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v68; // [rsp+88h] [rbp-80h]
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+98h] [rbp-70h]
  struct _HIDP_CAPS Capabilities; // [rsp+A8h] [rbp-60h] BYREF
  _HIDP_DEVICE_DESC DeviceDescription; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v72[18]; // [rsp+128h] [rbp+20h] BYREF

  RimDevBackedDeviceInfo = 0LL;
  v64 = a2;
  v6 = a1;
  memset(&DeviceDescription, 0, sizeof(DeviceDescription));
  v62 = 0;
  v61 = 0;
  LinkCollectionNodesLength = 0;
  v8 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\??\\VIRTUAL_DIGITIZER");
  if ( !LODWORD(aDeviceTemplate[154]) )
  {
    EnterDeviceInfoListCrit_(v9);
    EtwTracePseudoDevCreationStart();
    LOBYTE(v10) = 19;
    v11 = HMAllocObject(0LL, 0LL, v10);
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
    *(_DWORD *)(v11 + 308) = 1;
    *(_QWORD *)(v11 + 104) = v11 + 96;
    *(_QWORD *)(v11 + 96) = v11 + 96;
    if ( DestinationString.Buffer )
    {
      v14 = Win32AllocPool(DestinationString.MaximumLength);
      *(_QWORD *)(v12 + 208) = v14;
      if ( !v14 )
        goto LABEL_29;
      *(_WORD *)(v12 + 202) = DestinationString.MaximumLength;
      RtlCopyUnicodeString((PUNICODE_STRING)(v12 + 200), &DestinationString);
    }
    memset((void *)(v12 + 400), 0, 0x20uLL);
    memset(&DeviceDescription, 0, sizeof(DeviceDescription));
    ComputeVirtualDesktopPhysicalSize(&v62, &v61, a3);
    v15 = Win32AllocPool(584LL);
    v16 = v15;
    if ( !v15 )
      goto LABEL_29;
    *(_OWORD *)(v15 + 44) = *(_OWORD *)(gpDispInfo + 120LL);
    *(_OWORD *)(v15 + 60) = *(_OWORD *)(gpDispInfo + 136LL);
    v17 = 3937 * v61;
    v18 = 3937 * v62;
    v66 = *(struct tagRECT *)(gpDispInfo + 104LL);
    v67[0] = v66;
    *(struct tagRECT *)(v15 + 28) = v66;
    _UpdateReportDescriptor(v67, v18 / 0x64, v17 / 0x64);
    if ( HidP_GetCollectionDescription(&ReportDesc, 0x1F2u, PagedPool, &DeviceDescription) < 0 )
      goto LABEL_30;
    if ( !DeviceDescription.CollectionDescLength )
      goto LABEL_30;
    v19 = *(_OWORD *)&DeviceDescription.CollectionDesc->Reserved[11];
    PreparsedData = DeviceDescription.CollectionDesc->PreparsedData;
    v20 = PreparsedData;
    v68 = v19;
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
    v24 = (void *)Win32AllocPool(WORD5(v68));
    *(_QWORD *)(v22 + 16) = v24;
    if ( !v24 )
      goto LABEL_29;
    memmove(v24, v20, WORD5(v68));
    *(_DWORD *)(v22 + 104) = WORD5(v68);
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
    v29 = HMAllocObject(0LL, 0LL, v28);
    v8 = v29;
    if ( !v29 )
      goto LABEL_29;
    *(_DWORD *)(v29 + 24) = 5;
    *(_DWORD *)(v29 + 1492) = 1;
    *(_QWORD *)(v29 + 280) = v16;
    v30 = *(_OWORD *)(v16 + 28);
    *(_DWORD *)(v29 + 252) |= 0x20u;
    v31 = *(_DWORD *)(v29 + 252);
    *(_OWORD *)(v29 + 124) = v30;
    v32 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 832LL);
    *(_DWORD *)(v29 + 252) = v31 & 0xFFFFFFE7 | 8;
    *(_QWORD *)(v29 + 1552) = v32;
    *(_QWORD *)(v29 + 736) = *(_QWORD *)v12;
    *(_DWORD *)(v29 + 896) = v64;
    *(_DWORD *)(v29 + 880) = 500;
    *(_QWORD *)(v29 + 888) = 500 * gliQpcFreq.QuadPart / 1000;
    if ( DestinationString.Buffer )
    {
      v33 = Win32AllocPool(DestinationString.MaximumLength);
      *(_QWORD *)(v8 + 296) = v33;
      if ( !v33 )
        goto LABEL_29;
      *(_WORD *)(v8 + 290) = DestinationString.MaximumLength;
      RtlCopyUnicodeString((PUNICODE_STRING)(v8 + 288), &DestinationString);
    }
    *(_DWORD *)(v8 + 180) = v66.right - v66.left;
    *(_DWORD *)(v8 + 184) = v66.bottom - v66.top;
    *(_DWORD *)(v8 + 148) = 1000 * v62;
    *(_DWORD *)(v8 + 152) = 1000 * v61;
    *(_OWORD *)(v8 + 156) = *(_OWORD *)(v8 + 140);
    v34 = Win32AllocPoolZInit(64LL, 1953067861LL);
    *(_QWORD *)(v8 + 712) = v34;
    if ( v34 )
    {
      *(_DWORD *)(v34 + 4) |= 1u;
      *(_DWORD *)(*(_QWORD *)(v8 + 712) + 8LL) = 3;
      *(_DWORD *)(*(_QWORD *)(v8 + 712) + 40LL) = 4;
      if ( HidP_GetLinkCollectionNodes(0LL, &LinkCollectionNodesLength, *(PHIDP_PREPARSED_DATA *)(v22 + 16)) != -1072627705 )
        goto LABEL_30;
      if ( LinkCollectionNodesLength <= 1 )
        goto LABEL_30;
      RetrieveLinkCollection(
        (struct tagHID_POINTER_DEVICE_INFO *)v8,
        *(struct _HIDP_PREPARSED_DATA **)(v22 + 16),
        LinkCollectionNodesLength);
      *(_DWORD *)(v8 + 308) = v6;
      *(_DWORD *)(v8 + 316) = 7;
      *(_DWORD *)(v8 + 728) = 7;
      *(_DWORD *)(v8 + 720) = v6;
      if ( !(unsigned int)InitializePointerDeviceFrameContactIdMgr(v8, &Capabilities) )
        goto LABEL_30;
      *(_DWORD *)(v8 + 252) |= 0x200u;
      *(_DWORD *)(v8 + 1488) = -1;
      v35 = Win32AllocPoolZInit(2400 * v6, 1953067861LL);
      *(_QWORD *)(v8 + 696) = v35;
      if ( v35 )
      {
        if ( (unsigned int)_PopulatePointerDevice((struct tagHID_POINTER_DEVICE_INFO *)v8, v20, &Capabilities) )
        {
          *(_QWORD *)(v12 + 56) = gpDeviceInfoList;
          gpDeviceInfoList = v12;
          UpdatePointerDeviceSystemMetrics((struct tagHID_POINTER_DEVICE_INFO *)v8);
          HMAssignmentLock(v12 + 416, v8);
          v36 = (struct _LIST_ENTRY **)qword_1C0323FB8;
          v37 = (struct _LIST_ENTRY *)(v8 + 1520);
          v37->Flink = &gPointerDeviceInfoList;
          v37->Blink = (struct _LIST_ENTRY *)v36;
          if ( *v36 != &gPointerDeviceInfoList )
            __fastfail(3u);
          *v36 = v37;
          qword_1C0323FB8 = (__int64)v37;
          updated = UpdatePointerDeviceCount(1);
          PostDeviceNotification(0LL, (struct DEVICEINFO *)v12, v39, 1uLL, updated);
          HidP_FreeCollectionDescription(&DeviceDescription);
          EtwTracePseudoDevCreationStop(v40);
          goto LABEL_50;
        }
        goto LABEL_30;
      }
    }
LABEL_29:
    UserSetLastError(14);
LABEL_30:
    v41 = *(_QWORD *)(v12 + 208);
    if ( v41 )
      Win32FreePool(v41);
    if ( DeviceDescription.CollectionDesc )
      HidP_FreeCollectionDescription(&DeviceDescription);
    v42 = *(_QWORD **)(v12 + 400);
    if ( v42 )
      FreeHidDesc(v42);
    v43 = *(_QWORD *)(v12 + 408);
    if ( v43 )
    {
      if ( (*(_DWORD *)(v43 + 20))-- == 1 && !(unsigned int)HidTLCActive(*(_DWORD **)(v12 + 408)) )
        FreeHidPageOnlyRequest(v45);
    }
    if ( v8 )
    {
      v46 = *(_QWORD *)(v8 + 712);
      if ( v46 )
        Win32FreePool(v46);
      v47 = *(_QWORD *)(v8 + 296);
      if ( v47 )
        Win32FreePool(v47);
      v48 = *(_QWORD *)(v8 + 696);
      if ( v48 )
        Win32FreePool(v48);
      HMFreeObject(v8);
    }
    HMFreeObject(v12);
    goto LABEL_49;
  }
  EnterDeviceInfoListCrit_(v9);
  EtwTracePseudoDevCreationStart();
  v50 = (HANDLE *)(a4 + 80);
  *(_QWORD *)v60 = a4 + 80;
  if ( (int)RawInputManagerObjectCreateKernelHandle(aDeviceTemplate[156], 3LL, 0LL) >= 0 )
  {
    ComputeVirtualDesktopPhysicalSize(&v62, &v61, a3);
    v52 = v61;
    v53 = v62;
    v67[0] = *(struct tagRECT *)(gpDispInfo + 104LL);
    v54 = v67[0];
    _UpdateReportDescriptor(v67, 3937 * v62 / 0x64u, 3937 * v61 / 0x64u);
    memset(v72, 0, 0x88uLL);
    LODWORD(v72[1]) = 498;
    v72[0] = &ReportDesc;
    v72[10] = 0LL;
    *(struct tagRECT *)((char *)&v72[11] + 4) = v54;
    LODWORD(v72[11]) = v6;
    HIDWORD(v72[13]) = v53;
    LODWORD(v72[14]) = v52;
    *(_QWORD *)((char *)&v72[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v55) + 832);
    v56 = (__int64 *)(a4 + 88);
    LOBYTE(v60[0]) = 0;
    HIDWORD(v72[15]) = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v72[14] + 4)) + 12) & 0x80000000;
    v57 = *v50;
    LODWORD(v72[16]) = v64;
    if ( (int)RIMAddInjectionDeviceOfType(v57, &DestinationString, 2LL, v72, *(_QWORD *)v60, a4 + 88) < 0 )
    {
      ZwClose(*v50);
      *v50 = 0LL;
      *v56 = 0LL;
    }
    else
    {
      RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(*v56, 0, v58);
    }
  }
  EtwTracePseudoDevCreationStop(v51);
  LeaveDeviceInfoListCrit_(v59);
  return RimDevBackedDeviceInfo;
}
