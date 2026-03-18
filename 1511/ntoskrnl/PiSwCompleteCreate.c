/*
 * XREFs of PiSwCompleteCreate @ 0x1404E4050
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14049479C (PiSwPdoPnPDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140042AA0 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlStringCbCopyW @ 0x140090A98 (RtlStringCbCopyW.c)
 *     RtlStringCbLengthW @ 0x140103D90 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PnpAllocatePWSTR @ 0x14043FAE0 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x140441B8C (PnpFreeDevPropertyArray.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140441CC0 (_CmGetDeviceInterfaceClassGuid.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     PiSwLock @ 0x140494B8C (PiSwLock.c)
 *     PiSwFreeInterfaceList @ 0x140494DDC (PiSwFreeInterfaceList.c)
 *     PiSwInterfaceCreate @ 0x1404E3EBC (PiSwInterfaceCreate.c)
 *     PnpCopyDevPropertyArray @ 0x1404E46C0 (PnpCopyDevPropertyArray.c)
 *     PiSwPropertySet @ 0x1404E5C20 (PiSwPropertySet.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1404E6394 (_CmGetDeviceInterfaceReferenceString.c)
 *     IoRegisterDeviceInterface @ 0x14050927C (IoRegisterDeviceInterface.c)
 */

void __fastcall PiSwCompleteCreate(struct _DEVICE_OBJECT *Object)
{
  int PWSTR; // ebx
  __int64 v3; // rsi
  unsigned __int16 *v4; // r13
  struct _DEVICE_OBJECT *v5; // r12
  int v6; // r8d
  _DWORD *DeviceExtension; // rax
  __int64 v8; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 *v12; // r14
  __int64 *i; // rdi
  __int64 v14; // rcx
  char *v15; // r14
  __int64 *j; // rdi
  __int64 ***v17; // rcx
  __int64 **v18; // rax
  __int64 v19; // rcx
  int DeviceInterfaceReferenceString; // eax
  UNICODE_STRING *p_DestinationString; // r8
  __int64 v22; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 **v24; // [rsp+48h] [rbp-C0h]
  size_t pcbLength; // [rsp+50h] [rbp-B8h] BYREF
  char *v26; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString_6; // [rsp+60h] [rbp-A8h] BYREF
  __int64 **v28; // [rsp+70h] [rbp-98h] BYREF
  PCWSTR SourceString; // [rsp+78h] [rbp-90h] BYREF
  char v30[8]; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  GUID InterfaceClassGuid; // [rsp+98h] [rbp-70h] BYREF
  WCHAR v33[264]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&UnicodeString_6.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString_6.Buffer + 2) = 0;
  PWSTR = 0;
  HIWORD(UnicodeString_6.Buffer) = 0;
  v3 = 0LL;
  v26 = 0LL;
  v24 = &v23;
  v4 = 0LL;
  LODWORD(v22) = 0;
  v23 = (__int64 *)&v23;
  v5 = 0LL;
  pcbLength = 0LL;
  UnicodeString_6.Length = 0;
  PiSwLock();
  DeviceExtension = Object->DeviceExtension;
  v8 = *(_QWORD *)DeviceExtension;
  if ( *(_QWORD *)DeviceExtension )
  {
    DeviceExtension[2] &= 0xFFFFFFF9;
    if ( *(_QWORD *)(v8 + 88) )
      goto LABEL_15;
    DeviceObjectExtension = Object->DeviceObjectExtension;
    v4 = (unsigned __int16 *)((char *)DeviceObjectExtension->DeviceNode + 40);
    if ( !*(_QWORD *)(v8 + 80) )
    {
      PWSTR = PnpAllocatePWSTR(
                *((NTSTRSAFE_PCWSTR *)DeviceObjectExtension->DeviceNode + 6),
                ((unsigned __int64)*v4 >> 1) + 1,
                0x57706E50u,
                (PVOID *)&SourceString);
      if ( PWSTR < 0 )
        goto LABEL_15;
      RtlInitUnicodeString((PUNICODE_STRING)(v8 + 72), SourceString);
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
                (unsigned int)&v22,
                (__int64)&v26);
      if ( PWSTR >= 0 )
      {
        v12 = (__int64 *)(v8 + 184);
        for ( i = *(__int64 **)(v8 + 184); i != v12; i = (__int64 *)*i )
        {
          PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2], i[3], *((_DWORD *)i + 8), &v28);
          if ( PWSTR < 0 )
            goto LABEL_15;
          v17 = (__int64 ***)v24;
          v18 = v28;
          *v28 = (__int64 *)&v23;
          v18[1] = (__int64 *)v17;
          if ( *v17 != &v23 )
            __fastfail(3u);
          *v17 = v18;
          v24 = v18;
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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  v15 = v26;
  if ( PWSTR >= 0 )
  {
    if ( v26 )
      PWSTR = PiSwPropertySet(*((_QWORD *)v4 + 1), 1LL, v26, (unsigned int)v22);
    for ( j = v23; j != (__int64 *)&v23; j = (__int64 *)*j )
    {
      PWSTR = CmGetDeviceInterfaceClassGuid(v14, j[2], &InterfaceClassGuid);
      if ( PWSTR < 0 )
        break;
      DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v19, j[2], v33, 260LL, v30);
      PWSTR = DeviceInterfaceReferenceString;
      if ( DeviceInterfaceReferenceString == -1073741772 )
      {
        p_DestinationString = 0LL;
      }
      else
      {
        if ( DeviceInterfaceReferenceString < 0 )
          break;
        RtlInitUnicodeString(&DestinationString, v33);
        p_DestinationString = &DestinationString;
      }
      PWSTR = IoRegisterDeviceInterface(v5, &InterfaceClassGuid, p_DestinationString, &UnicodeString_6);
      if ( PWSTR < 0 )
        break;
      PWSTR = PiSwPropertySet(j[2], 3LL, j[3], *((unsigned int *)j + 8));
      if ( PWSTR < 0 )
        break;
    }
  }
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( v15 )
    PnpFreeDevPropertyArray(v22, v15, 0x57706E50u);
  PiSwFreeInterfaceList(&v23);
  RtlFreeAnsiString(&UnicodeString_6);
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
