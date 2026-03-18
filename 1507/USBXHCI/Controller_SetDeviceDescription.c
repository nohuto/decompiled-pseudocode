/*
 * XREFs of Controller_SetDeviceDescription @ 0x1C0047CB0
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoInit @ 0x1C00051E0 (Controller_WdfEvtDeviceSelfManagedIoInit.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001300 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00038C0 (WPP_RECORDER_SF_d.c)
 *     RtlUnalignedStringCbLengthW @ 0x1C00050A0 (RtlUnalignedStringCbLengthW.c)
 *     RtlStringCbPrintfW @ 0x1C0005104 (RtlStringCbPrintfW.c)
 *     RootHub_GetHighestUsbVersionSupported @ 0x1C0005180 (RootHub_GetHighestUsbVersionSupported.c)
 *     __security_check_cookie @ 0x1C0007B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     Controller_DriverInstalledDueToCompatibleIdMatch @ 0x1C0047FF4 (Controller_DriverInstalledDueToCompatibleIdMatch.c)
 */

void __fastcall Controller_SetDeviceDescription(__int64 a1)
{
  char *v1; // rdi
  __int16 HighestUsbVersionSupported; // ax
  unsigned __int8 v4; // bl
  _QWORD *v5; // rax
  unsigned int v6; // ecx
  int v7; // eax
  size_t v8; // rsi
  wchar_t *Text; // r12
  size_t v10; // rax
  rsize_t v11; // r15
  size_t v12; // r14
  wchar_t *PoolWithTag; // rax
  size_t v14; // rsi
  __int64 v15; // rax
  size_t v17; // r14
  wchar_t *Data; // rsi
  NTSTATUS v19; // eax
  BYTE *v20; // rdi
  struct _DEVICE_OBJECT *v21; // rax
  NTSTATUS v22; // eax
  unsigned int v23; // r14d
  char **v24; // rsi
  int v25; // eax
  size_t v26; // rdi
  size_t v27; // rax
  rsize_t v28; // r15
  SIZE_T v29; // rdi
  wchar_t *v30; // rax
  rsize_t v31; // rdx
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-79h]
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntrya; // [rsp+20h] [rbp-79h]
  ULONG Size[2]; // [rsp+28h] [rbp-71h]
  unsigned __int8 v35; // [rsp+61h] [rbp-38h]
  wchar_t *Dst; // [rsp+68h] [rbp-31h]
  size_t pcbLength; // [rsp+70h] [rbp-29h] BYREF
  PMESSAGE_RESOURCE_ENTRY v38; // [rsp+78h] [rbp-21h] BYREF
  PMESSAGE_RESOURCE_ENTRY v39; // [rsp+80h] [rbp-19h] BYREF
  _OWORD v40[3]; // [rsp+88h] [rbp-11h] BYREF
  __int64 v41; // [rsp+B8h] [rbp+1Fh]
  int v42; // [rsp+C0h] [rbp+27h]

  v1 = 0LL;
  v42 = *(_DWORD *)L"s";
  v40[0] = *(_OWORD *)L"@System32\\drivers\\usbxhci.sys";
  v40[1] = *(_OWORD *)L"2\\drivers\\usbxhci.sys";
  v40[2] = *(_OWORD *)L"s\\usbxhci.sys";
  v41 = *(_QWORD *)L"i.sys";
  if ( (unsigned __int8)Controller_DriverInstalledDueToCompatibleIdMatch() )
  {
    HighestUsbVersionSupported = RootHub_GetHighestUsbVersionSupported(*(_QWORD *)(a1 + 120));
    v4 = HighestUsbVersionSupported;
    v35 = HIBYTE(HighestUsbVersionSupported);
    if ( *(_DWORD *)(a1 + 148) == 1 )
    {
      v5 = &PciVendorIdTable;
      v6 = 0;
      while ( *(_WORD *)v5 != *(_WORD *)(a1 + 152) )
      {
        ++v6;
        v5 += 2;
        if ( v6 >= 0xB )
          goto LABEL_8;
      }
      v1 = (char *)v5[1];
    }
    else
    {
      v23 = 0;
      v24 = &AcpiVendorIdTable;
      while ( _stricmp(*v24, (const char *)(a1 + 200)) )
      {
        ++v23;
        v24 += 2;
        if ( v23 >= 5 )
          goto LABEL_8;
      }
      v1 = v24[1];
    }
LABEL_8:
    if ( RtlFindMessage(
           *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
           0xBu,
           0,
           0x40010001u,
           &v38) < 0 )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0x8Du, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
      return;
    }
    v7 = v38->Length - 4;
    pcbLength = v7;
    if ( (unsigned __int64)v7 > 0xFFFFFFFE )
    {
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0x8Eu, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
      return;
    }
    if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v38->Text, v7, &pcbLength) >= 0 )
    {
      v8 = pcbLength;
      Text = (wchar_t *)v38->Text;
      if ( pcbLength >= 4 )
      {
        v10 = pcbLength >> 1;
        if ( Text[(pcbLength >> 1) - 1] == 10 )
        {
          v11 = v10 - 2;
          if ( *(&v38->Length + v10) == 13 )
          {
            v12 = pcbLength - 2;
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, pcbLength - 2, 0x49434858u);
            Text = PoolWithTag;
            if ( !PoolWithTag )
            {
              WPP_RECORDER_SF_(
                *(_QWORD *)(a1 + 64),
                2u,
                3u,
                0x8Fu,
                (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
              return;
            }
            memset(PoolWithTag, 0, v8 - 2);
            wcsncpy_s(Text, v12 >> 1, (const wchar_t *)v38->Text, v11);
          }
        }
      }
      v14 = v8 + 112;
      if ( v1 )
      {
        v15 = -1LL;
        while ( *(_WORD *)&v1[2 * v15++ + 2] != 0 )
          ;
        v17 = v14 + 2 * v15;
        pcbLength = v17;
        Data = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x49434858u);
        if ( Data )
        {
          LODWORD(MessageResourceEntry) = 1073807361;
          v19 = RtlStringCbPrintfW(
                  Data,
                  v17,
                  L"%s,#%d;%s;(%s,%X.%X,%X.%X)",
                  v40,
                  MessageResourceEntry,
                  Text,
                  v1,
                  v4,
                  v35,
                  *(unsigned __int8 *)(a1 + 216),
                  *(unsigned __int8 *)(a1 + 217));
          v20 = 0LL;
          if ( v19 >= 0 )
          {
LABEL_21:
            if ( RtlUnalignedStringCbLengthW(Data, v17, &pcbLength) >= 0 )
            {
              v21 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 264))(
                                               WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
                                               *(_QWORD *)a1);
              v22 = IoSetDevicePropertyData(v21, &DEVPKEY_Device_FriendlyName, 0, 1u, 0x19u, pcbLength + 2, Data);
              if ( v22 < 0 )
              {
                Size[0] = v22;
                WPP_RECORDER_SF_d(
                  *(_QWORD *)(a1 + 64),
                  3u,
                  3u,
                  0x95u,
                  (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids,
                  *(_QWORD *)Size);
              }
            }
            goto LABEL_24;
          }
          goto LABEL_24;
        }
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 2u, 3u, 0x90u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
      }
      else
      {
        WPP_RECORDER_SF_(*(_QWORD *)(a1 + 64), 4u, 3u, 0x91u, (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
        if ( RtlFindMessage(
               *(PVOID *)(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters + 24LL),
               0xBu,
               0,
               0x40010002u,
               &v39) >= 0 )
        {
          v25 = v39->Length - 4;
          pcbLength = v25;
          if ( (unsigned __int64)v25 <= 0xFFFFFFFE )
          {
            if ( RtlUnalignedStringCbLengthW((STRSAFE_PCUNZWCH)v39->Text, v25, &pcbLength) >= 0 )
            {
              v26 = pcbLength;
              v17 = v14 + pcbLength - 4;
              pcbLength = v17;
              Data = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x49434858u);
              if ( Data )
              {
                if ( v26 >= 4
                  && (v27 = v26 >> 1, *(_WORD *)&v39->Text[2 * (v26 >> 1) - 2] == 10)
                  && (v28 = v27 - 2, *(&v39->Length + v27) == 13) )
                {
                  v29 = v26 - 2;
                  v30 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v29, 0x49434858u);
                  Dst = v30;
                  if ( !v30 )
                  {
                    WPP_RECORDER_SF_(
                      *(_QWORD *)(a1 + 64),
                      2u,
                      3u,
                      0x94u,
                      (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
                    v20 = 0LL;
                    goto LABEL_24;
                  }
                  memset(v30, 0, v29);
                  v31 = v29 >> 1;
                  v20 = (BYTE *)Dst;
                  wcsncpy_s(Dst, v31, (const wchar_t *)v39->Text, v28);
                }
                else
                {
                  v20 = v39->Text;
                }
                LODWORD(MessageResourceEntrya) = 1073807361;
                if ( RtlStringCbPrintfW(
                       Data,
                       v17,
                       L"%s,#%d;%s;(%s,%X.%X,%X.%X)",
                       v40,
                       MessageResourceEntrya,
                       Text,
                       v20,
                       v4,
                       v35,
                       *(unsigned __int8 *)(a1 + 216),
                       *(unsigned __int8 *)(a1 + 217)) >= 0 )
                  goto LABEL_21;
LABEL_24:
                ExFreePoolWithTag(Data, 0x49434858u);
                if ( v20 )
                  ExFreePoolWithTag(v20, 0x49434858u);
                goto LABEL_26;
              }
              WPP_RECORDER_SF_(
                *(_QWORD *)(a1 + 64),
                2u,
                3u,
                0x93u,
                (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
            }
          }
          else
          {
            WPP_RECORDER_SF_(
              *(_QWORD *)(a1 + 64),
              2u,
              3u,
              0x92u,
              (__int64)&WPP_71d031db04c83962e2b4b0195700cb23_Traceguids);
          }
        }
      }
LABEL_26:
      if ( Text )
        ExFreePoolWithTag(Text, 0x49434858u);
    }
  }
}
