/*
 * XREFs of PiSwCompleteCreate @ 0x1404C6A1C
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x1403F1680 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002DC60 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x140053560 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ObfReferenceObject @ 0x14006A060 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     RtlStringCbLengthW @ 0x14009ED7C (RtlStringCbLengthW.c)
 *     RtlStringCbCopyW @ 0x1400C47BC (RtlStringCbCopyW.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PiSwLock @ 0x1403F1A74 (PiSwLock.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     PiSwPropertySet @ 0x140487AA0 (PiSwPropertySet.c)
 *     PiSwInterfaceCreate @ 0x1404C6888 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x1404C6C98 (PiSwFreeInterfaceList.c)
 *     PnpCopyDevPropertyArray @ 0x1404C70A4 (PnpCopyDevPropertyArray.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1404F8A48 (_CmGetDeviceInterfaceClassGuid.c)
 *     PnpAllocatePWSTR @ 0x140501D70 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x140502730 (PnpFreeDevPropertyArray.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140528F14 (_CmGetDeviceInterfaceReferenceString.c)
 *     IoRegisterDeviceInterface @ 0x140540868 (IoRegisterDeviceInterface.c)
 */

void __fastcall PiSwCompleteCreate(struct _DEVICE_OBJECT *Object)
{
  int PWSTR; // ebx
  __int64 v3; // rsi
  __int64 v4; // r13
  struct _DEVICE_OBJECT *v5; // r12
  int v6; // r8d
  _DWORD *DeviceExtension; // rax
  __int64 v8; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 *v12; // r14
  __int64 *i; // rdi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r14
  __int64 *j; // rdi
  __int64 **v20; // rcx
  __int64 **v21; // rax
  __int64 v22; // rcx
  int DeviceInterfaceReferenceString; // eax
  UNICODE_STRING *p_DestinationString; // r8
  __int64 v25; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-C8h] BYREF
  __int64 **v27; // [rsp+48h] [rbp-C0h]
  __int64 v28; // [rsp+50h] [rbp-B8h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A8h] BYREF
  PCWSTR v31[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 ***v32; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  GUID InterfaceClassGuid; // [rsp+98h] [rbp-70h] BYREF
  WCHAR v35[264]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  PWSTR = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  v3 = 0LL;
  v28 = 0LL;
  v27 = &v26;
  v4 = 0LL;
  LODWORD(v25) = 0;
  v26 = (__int64 *)&v26;
  v5 = 0LL;
  pcbLength = 0LL;
  UnicodeString.Length = 0;
  PiSwLock();
  DeviceExtension = Object->DeviceExtension;
  v8 = *(_QWORD *)DeviceExtension;
  if ( *(_QWORD *)DeviceExtension )
  {
    DeviceExtension[2] &= 0xFFFFFFF9;
    if ( *(_QWORD *)(v8 + 88) )
      goto LABEL_15;
    DeviceObjectExtension = Object->DeviceObjectExtension;
    v4 = (__int64)DeviceObjectExtension->DeviceNode + 40;
    if ( !*(_QWORD *)(v8 + 80) )
    {
      PWSTR = PnpAllocatePWSTR(*((NTSTRSAFE_PCWSTR *)DeviceObjectExtension->DeviceNode + 6));
      if ( PWSTR < 0 )
        goto LABEL_15;
      RtlInitUnicodeString((PUNICODE_STRING)(v8 + 72), v31[1]);
    }
    v10 = *(_QWORD *)(v8 + 144);
    if ( !v10
      || !_InterlockedExchange64((volatile __int64 *)(v10 + 104), 0LL)
      || (v3 = *(_QWORD *)(v8 + 144), *(_QWORD *)(v8 + 144) = 0LL, !v3)
      || (v11 = *(_QWORD *)(v3 + 184),
          PWSTR = RtlStringCbCopyW(
                    *(NTSTRSAFE_PWSTR *)(v3 + 24),
                    *(unsigned int *)(v11 + 8),
                    *(NTSTRSAFE_PCWSTR *)(v8 + 80)),
          PWSTR >= 0)
      && (PWSTR = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(v3 + 24), *(unsigned int *)(v11 + 8), &pcbLength), PWSTR >= 0) )
    {
      PWSTR = PnpCopyDevPropertyArray(
                *(_DWORD *)(v8 + 176),
                *(_QWORD *)(v8 + 168),
                v6,
                (unsigned int)&v25,
                (__int64)&v28);
      if ( PWSTR >= 0 )
      {
        v12 = (__int64 *)(v8 + 184);
        for ( i = *(__int64 **)(v8 + 184); i != v12; i = (__int64 *)*i )
        {
          PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2], i[3], *((_DWORD *)i + 8), &v32);
          if ( PWSTR < 0 )
            goto LABEL_15;
          v20 = v27;
          if ( *v27 != (__int64 *)&v26 )
            __fastfail(3u);
          v21 = (__int64 **)v32;
          *v32 = &v26;
          v21[1] = (__int64 *)v20;
          *v20 = (__int64 *)v21;
          v27 = v21;
        }
        v5 = Object;
        ObfReferenceObject(Object);
      }
    }
  }
  else
  {
    PWSTR = -1073741811;
  }
LABEL_15:
  ExReleaseResourceLite(&PiSwLockObj);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v14, v15, v16);
  v18 = v28;
  if ( PWSTR >= 0 )
  {
    if ( v28 )
      PWSTR = PiSwPropertySet(*(_QWORD *)(v4 + 8), 1u, v28, v25);
    for ( j = v26; j != (__int64 *)&v26; j = (__int64 *)*j )
    {
      PWSTR = CmGetDeviceInterfaceClassGuid(v17, j[2], &InterfaceClassGuid);
      if ( PWSTR < 0 )
        break;
      DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v22, j[2], v35, 260LL, v31);
      PWSTR = DeviceInterfaceReferenceString;
      if ( DeviceInterfaceReferenceString == -1073741772 )
      {
        p_DestinationString = 0LL;
      }
      else
      {
        if ( DeviceInterfaceReferenceString < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, v35);
        p_DestinationString = &DestinationString;
      }
      PWSTR = IoRegisterDeviceInterface(v5, &InterfaceClassGuid, p_DestinationString, &UnicodeString);
      if ( PWSTR < 0 )
        break;
      PWSTR = PiSwPropertySet(j[2], 3u, j[3], *((_DWORD *)j + 8));
      if ( PWSTR < 0 )
        break;
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v18 )
    PnpFreeDevPropertyArray((unsigned int)v25, v18, 1466986064LL);
  PiSwFreeInterfaceList(&v26);
  RtlFreeAnsiString(&UnicodeString);
  if ( v3 )
  {
    if ( PWSTR < 0 )
      *(_QWORD *)(v3 + 56) = 0LL;
    else
      *(_QWORD *)(v3 + 56) = pcbLength + 2;
    *(_DWORD *)(v3 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v3, 0);
  }
}
