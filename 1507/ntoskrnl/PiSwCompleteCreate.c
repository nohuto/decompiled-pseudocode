/*
 * XREFs of PiSwCompleteCreate @ 0x14045B4C4
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14045ADD4 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140025FE8 (RtlStringCbLengthW.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     RtlStringCbCopyW @ 0x1400CF240 (RtlStringCbCopyW.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x14043E844 (PnpFreeDevPropertyArray.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x14043F2AC (_CmGetDeviceInterfaceClassGuid.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     PiSwInterfaceCreate @ 0x14045A278 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x14045B83C (PiSwFreeInterfaceList.c)
 *     PnpCopyDevPropertyArray @ 0x14045B858 (PnpCopyDevPropertyArray.c)
 *     PiSwPropertySet @ 0x1404D7440 (PiSwPropertySet.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14055EC58 (_CmGetDeviceInterfaceReferenceString.c)
 *     IoRegisterDeviceInterface @ 0x14057EEA0 (IoRegisterDeviceInterface.c)
 */

void __fastcall PiSwCompleteCreate(struct _DEVICE_OBJECT *Object)
{
  int PWSTR; // ebx
  __int64 v3; // rsi
  unsigned __int16 *v4; // r13
  struct _DEVICE_OBJECT *v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r8d
  _DWORD *DeviceExtension; // rax
  __int64 v9; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rax
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 *v13; // r14
  __int64 *i; // rdi
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  char *v17; // r14
  __int64 **j; // rdi
  __int64 ***v19; // rcx
  __int64 **v20; // rax
  __int64 v21; // rcx
  int DeviceInterfaceReferenceString; // eax
  UNICODE_STRING *p_DestinationString; // r8
  __int64 v24; // [rsp+38h] [rbp-D0h] BYREF
  __int64 *v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 **v26; // [rsp+48h] [rbp-C0h]
  size_t pcbLength; // [rsp+50h] [rbp-B8h] BYREF
  char *v28; // [rsp+58h] [rbp-B0h] BYREF
  UNICODE_STRING UnicodeString_6; // [rsp+60h] [rbp-A8h] BYREF
  __int64 ***v30; // [rsp+70h] [rbp-98h] BYREF
  PCWSTR SourceString; // [rsp+78h] [rbp-90h] BYREF
  char v32[8]; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  GUID InterfaceClassGuid; // [rsp+98h] [rbp-70h] BYREF
  WCHAR v35[264]; // [rsp+A8h] [rbp-60h] BYREF

  *(_QWORD *)&UnicodeString_6.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString_6.Buffer + 2) = 0;
  PWSTR = 0;
  HIWORD(UnicodeString_6.Buffer) = 0;
  v3 = 0LL;
  v28 = 0LL;
  v26 = &v25;
  v4 = 0LL;
  LODWORD(v24) = 0;
  v25 = (__int64 *)&v25;
  v5 = 0LL;
  CurrentThread = KeGetCurrentThread();
  pcbLength = 0LL;
  UnicodeString_6.Length = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  DeviceExtension = Object->DeviceExtension;
  v9 = *(_QWORD *)DeviceExtension;
  if ( !*(_QWORD *)DeviceExtension )
  {
    PWSTR = -1073741811;
    goto LABEL_15;
  }
  DeviceExtension[2] &= 0xFFFFFFF9;
  if ( !*(_QWORD *)(v9 + 88) )
  {
    DeviceObjectExtension = Object->DeviceObjectExtension;
    v4 = (unsigned __int16 *)((char *)DeviceObjectExtension->DeviceNode + 40);
    if ( !*(_QWORD *)(v9 + 80) )
    {
      PWSTR = PnpAllocatePWSTR(
                *((NTSTRSAFE_PCWSTR *)DeviceObjectExtension->DeviceNode + 6),
                ((unsigned __int64)*v4 >> 1) + 1,
                0x57706E50u,
                (PVOID *)&SourceString);
      if ( PWSTR < 0 )
        goto LABEL_15;
      RtlInitUnicodeString((PUNICODE_STRING)(v9 + 72), SourceString);
    }
    v11 = *(_QWORD *)(v9 + 144);
    if ( !v11
      || !_InterlockedExchange64((volatile __int64 *)(v11 + 104), 0LL)
      || (v3 = *(_QWORD *)(v9 + 144), *(_QWORD *)(v9 + 144) = 0LL, !v3)
      || (v12 = *(_QWORD *)(v3 + 184),
          PWSTR = RtlStringCbCopyW(
                    *(NTSTRSAFE_PWSTR *)(v3 + 24),
                    *(unsigned int *)(v12 + 8),
                    *(NTSTRSAFE_PCWSTR *)(v9 + 80)),
          PWSTR >= 0)
      && (PWSTR = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(v3 + 24), *(unsigned int *)(v12 + 8), &pcbLength), PWSTR >= 0) )
    {
      PWSTR = PnpCopyDevPropertyArray(
                *(_DWORD *)(v9 + 176),
                *(_QWORD *)(v9 + 168),
                v7,
                (unsigned int)&v24,
                (__int64)&v28);
      if ( PWSTR >= 0 )
      {
        v13 = (__int64 *)(v9 + 184);
        for ( i = *(__int64 **)(v9 + 184); i != v13; i = (__int64 *)*i )
        {
          PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2], i[3], *((_DWORD *)i + 8), (__int64)&v30);
          if ( PWSTR < 0 )
            goto LABEL_15;
          v19 = (__int64 ***)v26;
          v20 = (__int64 **)v30;
          *v30 = &v25;
          v20[1] = (__int64 *)v19;
          if ( *v19 != &v25 )
            __fastfail(3u);
          *v19 = v20;
          v26 = v20;
        }
        v5 = Object;
        ObfReferenceObject(Object);
      }
    }
  }
LABEL_15:
  ExReleaseResourceLite(&PiSwLockObj);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  v17 = v28;
  if ( PWSTR >= 0 )
  {
    if ( v28 )
      PWSTR = PiSwPropertySet(*((_QWORD *)v4 + 1), 1LL, v28, (unsigned int)v24);
    for ( j = (__int64 **)v25; j != &v25; j = (__int64 **)*j )
    {
      PWSTR = CmGetDeviceInterfaceClassGuid((__int64)v15, (const wchar_t *)j[2], &InterfaceClassGuid);
      if ( PWSTR < 0 )
        break;
      DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v21, j[2], v35, 260LL, v32);
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
  if ( v17 )
    PnpFreeDevPropertyArray(v24, v17, 0x57706E50u);
  PiSwFreeInterfaceList(&v25);
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
