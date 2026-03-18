/*
 * XREFs of ?DrvLogDisplayDriverEvent@@YAXW4_DISP_DRIVER_LOG@@@Z @ 0x1C005CE5C
 * Callers:
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     DrvBuildDevmodeList @ 0x1C0058F50 (DrvBuildDevmodeList.c)
 *     DrvGetDisplayDriverParameters @ 0x1C00592A0 (DrvGetDisplayDriverParameters.c)
 *     ldevLoadImage @ 0x1C005C640 (ldevLoadImage.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C006157C (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrvLogDisplayDriverEvent(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  __int64 v8; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp+7h] BYREF
  struct _UNICODE_STRING v10; // [rsp+50h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+27h] BYREF
  int Data; // [rsp+A8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+B0h] [rbp+77h] BYREF

  Data = 1;
  if ( G_fConsole )
  {
    RtlInitUnicodeString(&DestinationString, &word_1C008D840);
    v4 = a1 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          v7 = v6 - 1;
          if ( v7 && (unsigned int)(v7 - 1) > 1 )
            return;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"OldDisplayDriver");
        }
      }
    }
    v8 = WdLogNewEntry5_WdEvent(v3, v2);
    WdLogEvent5_WdEvent(v8);
    if ( DestinationString.Length )
    {
      RtlInitUnicodeString(
        &v10,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InvalidDisplay");
      ObjectAttributes.ObjectName = &v10;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateKey(&KeyHandle, 0x2000000u, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
      {
        ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
        ZwClose(KeyHandle);
      }
    }
  }
}
