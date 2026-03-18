/*
 * XREFs of RIMUpdateMonitorQuirk @ 0x1C0006E58
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetPointerDevicePDO @ 0x1C0008858 (RIMGetPointerDevicePDO.c)
 *     RIMGetDeviceObjectPointer @ 0x1C000B2CC (RIMGetDeviceObjectPointer.c)
 *     _TlgWrite @ 0x1C000FA24 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00111F8 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?RIMShouldQuirkOnDeviceTargetingInformation@@YAHPEBG0@Z @ 0x1C00D3010 (-RIMShouldQuirkOnDeviceTargetingInformation@@YAHPEBG0@Z.c)
 */

NTSTATUS __fastcall RIMUpdateMonitorQuirk(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
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
  int v17; // r15d
  int v18; // esi
  int v19; // edi
  NTSTATUS result; // eax
  int v22; // edx
  int v23; // r8d
  const GUID *v24; // r9
  int v25; // r14d
  BOOL v26; // eax
  unsigned __int16 *v27; // rdi
  struct _DEVICE_OBJECT *v28; // rdi
  int v29; // eax
  PVOID v30; // r14
  int v31; // eax
  const GUID *v32; // r9
  bool v33; // zf
  unsigned __int64 v34; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-C0h] BYREF
  int v37; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v38; // [rsp+50h] [rbp-B8h] BYREF
  PVOID v39; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v41; // [rsp+68h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+70h] [rbp-98h] BYREF
  int v43; // [rsp+78h] [rbp-90h] BYREF
  int v44; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v45; // [rsp+80h] [rbp-88h] BYREF
  int v46; // [rsp+84h] [rbp-84h] BYREF
  int v47; // [rsp+88h] [rbp-80h] BYREF
  int v48; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v49; // [rsp+90h] [rbp-78h] BYREF
  int v50; // [rsp+94h] [rbp-74h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v54; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD *v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  __int64 v57; // [rsp+118h] [rbp+10h]
  _DWORD v58[2]; // [rsp+120h] [rbp+18h] BYREF
  __int64 *v59; // [rsp+128h] [rbp+20h]
  __int64 v60; // [rsp+130h] [rbp+28h]
  int *v61; // [rsp+138h] [rbp+30h]
  __int64 v62; // [rsp+140h] [rbp+38h]
  int *v63; // [rsp+148h] [rbp+40h]
  __int64 v64; // [rsp+150h] [rbp+48h]
  int *v65; // [rsp+158h] [rbp+50h]
  __int64 v66; // [rsp+160h] [rbp+58h]
  int *v67; // [rsp+168h] [rbp+60h]
  __int64 v68; // [rsp+170h] [rbp+68h]
  int *v69; // [rsp+178h] [rbp+70h]
  __int64 v70; // [rsp+180h] [rbp+78h]
  int *v71; // [rsp+188h] [rbp+80h]
  __int64 v72; // [rsp+190h] [rbp+88h]
  int *v73; // [rsp+198h] [rbp+90h]
  __int64 v74; // [rsp+1A0h] [rbp+98h]
  int *v75; // [rsp+1A8h] [rbp+A0h]
  __int64 v76; // [rsp+1B0h] [rbp+A8h]
  int *v77; // [rsp+1B8h] [rbp+B0h]
  __int64 v78; // [rsp+1C0h] [rbp+B8h]
  PVOID *v79; // [rsp+1C8h] [rbp+C0h]
  __int64 v80; // [rsp+1D0h] [rbp+C8h]
  HANDLE *p_Handle; // [rsp+1D8h] [rbp+D0h]
  __int64 v82; // [rsp+1E0h] [rbp+D8h]
  unsigned __int64 *v83; // [rsp+1E8h] [rbp+E0h]
  __int64 v84; // [rsp+1F0h] [rbp+E8h]
  char *v85; // [rsp+1F8h] [rbp+F0h]
  __int64 v86; // [rsp+200h] [rbp+F8h]
  PVOID *v87; // [rsp+208h] [rbp+100h]
  __int64 v88; // [rsp+210h] [rbp+108h]
  PVOID *p_Object; // [rsp+218h] [rbp+110h]
  __int64 v90; // [rsp+220h] [rbp+118h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+228h] [rbp+120h] BYREF
  int *v92; // [rsp+248h] [rbp+140h]
  __int64 v93; // [rsp+250h] [rbp+148h]
  _BYTE KeyValueInformation[4]; // [rsp+258h] [rbp+150h] BYREF
  int v95; // [rsp+25Ch] [rbp+154h]
  int v96; // [rsp+264h] [rbp+15Ch]

  LODWORD(v38) = a4;
  Object = 0LL;
  v39 = 0LL;
  Handle = 0LL;
  v41 = 0LL;
  KeyHandle = 0LL;
  v34 = 0xFFFFFFFF00000000uLL;
  v17 = -1;
  v18 = -1;
  v19 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\LegacyTouchScaling");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result < 0 )
    goto LABEL_58;
  RtlInitUnicodeString(&ValueName, L"ForceOverride");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x400u, &ResultLength) >= 0
    && v95 == 4 )
  {
    if ( v96 )
      *(_DWORD *)(a2 + 184) |= 0x200000u;
    else
      *(_DWORD *)(a2 + 184) &= ~0x200000u;
    v19 = 1;
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v37 = (int)v24;
        v92 = &v37;
        v93 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0103DEC, 0LL, v24, 3u, &pData);
      }
    }
  }
  result = ZwClose(KeyHandle);
  if ( !v19 )
  {
LABEL_58:
    if ( *(_QWORD *)(a1 + 760) && (result = a3 - 5, (unsigned int)(a3 - 5) > 2) )
    {
      v25 = a12;
      v26 = a12 == 51;
      LODWORD(v34) = v26;
      if ( a12 == 19 && a13 == 14 && (a8 == 1080 && a9 == 1920 || a8 == 720 && a9 == 1280) )
      {
        v26 = 1;
        LODWORD(v34) = 1;
      }
      if ( !v26 )
        LODWORD(v34) = (unsigned int)RIMShouldQuirkOnDeviceTargetingInformation(L"ACERINC", L"TM01")
                    || (unsigned int)RIMShouldQuirkOnDeviceTargetingInformation(L"BLU", L"WIN JR LTE");
      v27 = (unsigned __int16 *)(a2 + 208);
      if ( (int)RIMGetDeviceObjectPointer(
                  (int)a2 + 208,
                  v22,
                  v23,
                  (unsigned int)&Handle,
                  (__int64)&v39,
                  (__int64)&Object) >= 0 )
      {
        v28 = (struct _DEVICE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v29 = RIMGetPointerDevicePDO(v28);
        v30 = v41;
        if ( v29 >= 0 && IoOpenDeviceRegistryKey(**((PDEVICE_OBJECT **)v41 + 8), 1u, 0x20019u, &KeyHandle) >= 0 )
        {
          RtlInitUnicodeString(&ValueName, L"EnhancedPowerManagementNoDelay");
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x400u,
                 &ResultLength) >= 0
            && v95 == 4 )
          {
            v31 = -1;
            if ( v96 )
              v31 = 1;
            HIDWORD(v34) = v31;
          }
          RtlInitUnicodeString(&ValueName, L"LegacyTouchScaling");
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x400u,
                 &ResultLength) >= 0
            && v95 == 4 )
          {
            v17 = v96 != 0;
          }
          ZwClose(KeyHandle);
        }
        ObfDereferenceObject(v30);
        ZwClose(Handle);
        ObfDereferenceObject(v39);
        ObfDereferenceObject(v28);
        v25 = a12;
        v27 = (unsigned __int16 *)(a2 + 208);
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
               &ResultLength) >= 0
          && v95 == 4 )
        {
          v18 = v96 != 0;
        }
        ZwClose(KeyHandle);
      }
      if ( hProvider > 5u )
      {
        if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
        {
          v56 = 2LL;
          v55 = v58;
          v57 = *((_QWORD *)v27 + 1);
          v58[0] = *v27;
          v59 = &v38;
          v37 = a5;
          v61 = &v37;
          v43 = a6;
          v63 = &v43;
          v44 = a7;
          v65 = &v44;
          v67 = &v45;
          v46 = a10;
          v69 = &v46;
          v71 = &v47;
          v48 = a13;
          v73 = &v48;
          v75 = &v49;
          v50 = a11;
          v77 = &v50;
          LODWORD(v39) = a14;
          v79 = &v39;
          LODWORD(Handle) = a15;
          p_Handle = &Handle;
          v83 = &v34;
          v85 = (char *)&v34 + 4;
          v87 = &v41;
          p_Object = &Object;
          v58[1] = 0;
          v60 = 4LL;
          v62 = 4LL;
          v64 = 4LL;
          v66 = 4LL;
          v45 = a8;
          v68 = 4LL;
          v70 = 4LL;
          v47 = v25;
          v72 = 4LL;
          v74 = 4LL;
          v49 = a9;
          v76 = 4LL;
          v78 = 4LL;
          v80 = 4LL;
          v82 = 4LL;
          v84 = 4LL;
          v86 = 4LL;
          LODWORD(v41) = v17;
          v88 = 4LL;
          LODWORD(Object) = v18;
          v90 = 4LL;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0103CA6, 0LL, v32, 0x14u, &v54);
        }
      }
      *(_DWORD *)(a2 + 184) &= ~0x200000u;
      result = *(_DWORD *)(a2 + 184);
      if ( v17 != -1 )
      {
        v33 = v17 == 0;
        goto LABEL_48;
      }
      if ( v18 != -1 )
      {
        v33 = v18 == 0;
LABEL_48:
        if ( v33 )
        {
          result &= ~0x200000u;
LABEL_50:
          *(_DWORD *)(a2 + 184) = result;
          return result;
        }
LABEL_54:
        result |= 0x200000u;
        goto LABEL_50;
      }
      if ( (_DWORD)v34 )
        goto LABEL_54;
    }
    else
    {
      *(_DWORD *)(a2 + 184) &= ~0x200000u;
    }
  }
  return result;
}
