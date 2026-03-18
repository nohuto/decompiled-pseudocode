/*
 * XREFs of RIMUpdateMonitorQuirk @ 0x1C0009A78
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C0009978 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000F23C (RIMGetDeviceObjectPointer.c)
 *     _TlgKeywordOn @ 0x1C0049E20 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C004A48C (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RIMUpdateMonitorQuirk(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        ULONG a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  int v16; // r13d
  int v17; // r12d
  int v18; // esi
  int v21; // edi
  NTSTATUS result; // eax
  __int64 v23; // rdx
  const GUID *v24; // r9
  unsigned __int16 *v25; // rdi
  struct _DEVICE_OBJECT *v26; // rdi
  int v27; // eax
  PVOID v28; // r13
  int v29; // eax
  const GUID *v30; // r9
  __int64 v31; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  int v33; // [rsp+48h] [rbp-C0h] BYREF
  int v34; // [rsp+4Ch] [rbp-BCh] BYREF
  ULONG ResultLength[2]; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v36; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v37; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  int v40; // [rsp+78h] [rbp-90h] BYREF
  int v41; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v42; // [rsp+80h] [rbp-88h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-80h] BYREF
  int v44; // [rsp+98h] [rbp-70h] BYREF
  int v45; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v46; // [rsp+A0h] [rbp-68h] BYREF
  int v47; // [rsp+A4h] [rbp-64h] BYREF
  int v48; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR v51; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD *v52; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  __int64 v54; // [rsp+128h] [rbp+20h]
  _DWORD v55[2]; // [rsp+130h] [rbp+28h] BYREF
  int *v56; // [rsp+138h] [rbp+30h]
  __int64 v57; // [rsp+140h] [rbp+38h]
  ULONG *v58; // [rsp+148h] [rbp+40h]
  __int64 v59; // [rsp+150h] [rbp+48h]
  __int64 *v60; // [rsp+158h] [rbp+50h]
  __int64 v61; // [rsp+160h] [rbp+58h]
  int *v62; // [rsp+168h] [rbp+60h]
  __int64 v63; // [rsp+170h] [rbp+68h]
  int *v64; // [rsp+178h] [rbp+70h]
  __int64 v65; // [rsp+180h] [rbp+78h]
  int *v66; // [rsp+188h] [rbp+80h]
  __int64 v67; // [rsp+190h] [rbp+88h]
  int *v68; // [rsp+198h] [rbp+90h]
  __int64 v69; // [rsp+1A0h] [rbp+98h]
  int *v70; // [rsp+1A8h] [rbp+A0h]
  __int64 v71; // [rsp+1B0h] [rbp+A8h]
  int *v72; // [rsp+1B8h] [rbp+B0h]
  __int64 v73; // [rsp+1C0h] [rbp+B8h]
  int *v74; // [rsp+1C8h] [rbp+C0h]
  __int64 v75; // [rsp+1D0h] [rbp+C8h]
  int *v76; // [rsp+1D8h] [rbp+D0h]
  __int64 v77; // [rsp+1E0h] [rbp+D8h]
  PVOID *v78; // [rsp+1E8h] [rbp+E0h]
  __int64 v79; // [rsp+1F0h] [rbp+E8h]
  int *v80; // [rsp+1F8h] [rbp+F0h]
  __int64 v81; // [rsp+200h] [rbp+F8h]
  HANDLE *p_Handle; // [rsp+208h] [rbp+100h]
  __int64 v83; // [rsp+210h] [rbp+108h]
  PVOID *v84; // [rsp+218h] [rbp+110h]
  __int64 v85; // [rsp+220h] [rbp+118h]
  PVOID *p_Object; // [rsp+228h] [rbp+120h]
  __int64 v87; // [rsp+230h] [rbp+128h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+238h] [rbp+130h] BYREF
  ULONG *v89; // [rsp+258h] [rbp+150h]
  int v90; // [rsp+260h] [rbp+158h]
  int v91; // [rsp+264h] [rbp+15Ch]
  _BYTE KeyValueInformation[4]; // [rsp+268h] [rbp+160h] BYREF
  int v93; // [rsp+26Ch] [rbp+164h]
  int v94; // [rsp+274h] [rbp+16Ch]

  v34 = a4;
  Object = 0LL;
  v36 = 0LL;
  v33 = -1;
  v16 = -1;
  LODWORD(v31) = -1;
  v17 = -1;
  v18 = -1;
  Handle = 0LL;
  v37 = 0LL;
  KeyHandle = 0LL;
  v21 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\LegacyTouchScaling");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    goto LABEL_53;
  RtlInitUnicodeString(&ValueName, L"ForceOverride");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, ResultLength) >= 0
    && v93 == 4 )
  {
    if ( v94 )
      *(_DWORD *)(a2 + 176) |= 0x200000u;
    else
      *(_DWORD *)(a2 + 176) &= ~0x200000u;
    v21 = 1;
    if ( dword_1C0101D10 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0101D10, 0x400000000000uLL) )
      {
        v91 = 0;
        v89 = &ResultLength[1];
        ResultLength[1] = (unsigned int)v24;
        v90 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0101D10, &unk_1C00EDBB5, 0LL, v24, 3u, &pData);
      }
    }
  }
  result = ZwClose(KeyHandle);
  if ( !v21 )
  {
LABEL_53:
    if ( *(_QWORD *)(a1 + 808) && (result = a3 - 6, (unsigned int)(a3 - 6) > 2) )
    {
      if ( a10 && a11 && (a10 == 1205 && a11 == 906 || a10 == 1080 && a11 == 1920) )
        v33 = 1;
      v25 = (unsigned __int16 *)(a2 + 200);
      if ( (int)RIMGetDeviceObjectPointer(a2 + 200, v23, 3LL, &Handle, &v36, &Object) >= 0 )
      {
        v26 = (struct _DEVICE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v27 = RIMGetPointerDevicePDO(v26, &v37);
        v28 = v37;
        if ( v27 >= 0 && IoOpenDeviceRegistryKey(**((PDEVICE_OBJECT **)v37 + 8), 1u, 0x20019u, &KeyHandle) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"EnhancedPowerManagementNoDelay");
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x400u,
                 ResultLength) >= 0
            && v93 == 4 )
          {
            v29 = -1;
            if ( v94 )
              v29 = 1;
            LODWORD(v31) = v29;
          }
          RtlInitUnicodeString(&ValueName, L"LegacyTouchScaling");
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x400u,
                 ResultLength) >= 0
            && v93 == 4 )
          {
            v17 = v94 != 0;
          }
          ZwClose(KeyHandle);
        }
        ObfDereferenceObject(v28);
        ZwClose(Handle);
        ObfDereferenceObject(v36);
        ObfDereferenceObject(v26);
        v16 = v31;
        v25 = (unsigned __int16 *)(a2 + 200);
      }
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\LegacyTouchScaling");
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Enable");
        if ( ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x400u,
               ResultLength) >= 0
          && v93 == 4 )
        {
          v18 = v94 != 0;
        }
        ZwClose(KeyHandle);
      }
      if ( dword_1C0101D10 > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0101D10, 0x400000000000uLL) )
        {
          v53 = 2LL;
          v52 = v55;
          v54 = *((_QWORD *)v25 + 1);
          v55[0] = *v25;
          v56 = &v34;
          ResultLength[1] = a5;
          v58 = &ResultLength[1];
          LODWORD(v31) = a6;
          v60 = &v31;
          v42 = a7;
          v62 = &v42;
          v44 = a8;
          v64 = &v44;
          v66 = &v48;
          v47 = a12;
          v68 = &v47;
          v45 = a13;
          v70 = &v45;
          v41 = a9;
          v72 = &v41;
          v74 = &v40;
          v46 = a14;
          v76 = &v46;
          LODWORD(v36) = a15;
          v78 = &v36;
          v80 = &v33;
          p_Handle = &Handle;
          v84 = &v37;
          v55[1] = 0;
          v57 = 4LL;
          v59 = 4LL;
          v61 = 4LL;
          v63 = 4LL;
          v65 = 4LL;
          v48 = a10;
          v67 = 4LL;
          v69 = 4LL;
          v71 = 4LL;
          v73 = 4LL;
          v40 = a11;
          v75 = 4LL;
          v77 = 4LL;
          v79 = 4LL;
          v81 = 4LL;
          LODWORD(Handle) = v16;
          v83 = 4LL;
          LODWORD(v37) = v17;
          v85 = 4LL;
          LODWORD(Object) = v18;
          p_Object = &Object;
          v87 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0101D10, &unk_1C00EDA6F, 0LL, v30, 0x14u, &v51);
        }
      }
      *(_DWORD *)(a2 + 176) |= 0x200000u;
      result = *(_DWORD *)(a2 + 176);
      if ( v17 != -1 )
      {
        if ( !v17 )
        {
LABEL_46:
          result &= ~0x200000u;
LABEL_50:
          *(_DWORD *)(a2 + 176) = result;
          return result;
        }
LABEL_49:
        result |= 0x200000u;
        goto LABEL_50;
      }
      if ( v18 != -1 )
      {
        if ( !v18 )
          goto LABEL_46;
        goto LABEL_49;
      }
    }
    else
    {
      *(_DWORD *)(a2 + 176) &= ~0x200000u;
    }
  }
  return result;
}
