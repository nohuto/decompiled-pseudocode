/*
 * XREFs of PiGetDeviceRegistryProperty @ 0x14067B0F8
 * Callers:
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     wcschr @ 0x140173B98 (wcschr.c)
 *     wcsstr @ 0x140173DA0 (wcsstr.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14017F230 (ZwOpenKey.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x1404D8C10 (PnpDeviceObjectToDeviceInstance.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     PnpFindAlternateStringData @ 0x14054DA2C (PnpFindAlternateStringData.c)
 *     RtlFormatMessage @ 0x1406CA6BC (RtlFormatMessage.c)
 */

__int64 __fastcall PiGetDeviceRegistryProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4, WCHAR *a5, ULONG *a6)
{
  va_list v7; // r13
  struct _KTHREAD *CurrentThread; // rax
  int RegistryValue; // ebx
  struct _KTHREAD *v10; // rcx
  __int16 v11; // ax
  _DWORD *v12; // rdi
  ULONG v13; // esi
  wchar_t *v14; // r14
  wchar_t *v15; // r15
  wchar_t *v16; // rax
  __int64 v17; // rcx
  const wchar_t *v18; // rcx
  unsigned int i; // r12d
  va_list v20; // rax
  __int64 v21; // rcx
  wchar_t *v22; // rax
  char v23; // cl
  PULONG v24; // r12
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  size_t Size; // [rsp+60h] [rbp-A0h] BYREF
  wchar_t *Str; // [rsp+68h] [rbp-98h] BYREF
  PVOID P; // [rsp+70h] [rbp-90h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-88h] BYREF
  PWSTR Buffer; // [rsp+80h] [rbp-80h]
  PULONG ReturnLength; // [rsp+88h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  va_list Arguments[20]; // [rsp+D0h] [rbp-30h] BYREF

  Buffer = a5;
  v7 = 0LL;
  ReturnLength = a6;
  CurrentThread = KeGetCurrentThread();
  P = 0LL;
  Str = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  RegistryValue = PnpDeviceObjectToDeviceInstance(a1, (__int64)&Handle, 131097);
  if ( RegistryValue >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"LogConf");
    ObjectAttributes.RootDirectory = Handle;
    KeyHandle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    RegistryValue = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( RegistryValue >= 0 )
    {
      ZwClose(Handle);
      Handle = KeyHandle;
      RegistryValue = IopGetRegistryValue(KeyHandle, L"BootConfig", 320, &P);
    }
    ZwClose(Handle);
  }
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  v10 = KeGetCurrentThread();
  v11 = v10->KernelApcDisable + 1;
  v10->KernelApcDisable = v11;
  if ( !v11
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v10->ApcState.ApcListHead[0].Flink != &v10->152
    && !v10->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( RegistryValue >= 0 )
  {
    v12 = P;
    v13 = *((_DWORD *)P + 3);
    v14 = (wchar_t *)((char *)P + *((unsigned int *)P + 2));
    if ( *((_DWORD *)P + 1) == 1
      && (unsigned int)PnpFindAlternateStringData((char *)P + *((unsigned int *)P + 2), v13, &Str, &Size) )
    {
      v15 = Str;
      v13 = Size;
      v14 = Str;
      v16 = wcsstr(Str, L";(");
      v7 = (va_list)v16;
      v17 = (v13 >> 1) - 2;
      if ( v16 && v15[v17] == 41 )
      {
        *v16 = 0;
        v7 = (va_list)(v16 + 2);
        v15[v17] = 0;
        memset(Arguments, 0, sizeof(Arguments));
        v18 = (const wchar_t *)v7;
        Arguments[0] = v7;
        for ( i = 1; ; ++i )
        {
          v22 = wcschr(v18, 0x2Cu);
          if ( !v22 )
          {
            v23 = 0;
            goto LABEL_19;
          }
          *v22 = 0;
          v20 = (va_list)(v22 + 1);
          if ( i >= 0x13 )
            break;
          v21 = i;
          Arguments[v21] = v20;
          v18 = (const wchar_t *)v20;
        }
        v23 = 1;
        goto LABEL_19;
      }
    }
    else
    {
      v15 = Str;
    }
    v23 = 0;
LABEL_19:
    v24 = ReturnLength;
    if ( *ReturnLength < v13 )
    {
      RegistryValue = -1073741789;
    }
    else if ( v12[1] == 8 )
    {
      if ( v7 )
      {
        if ( v23 )
          RegistryValue = -1073741619;
        else
          RegistryValue = RtlFormatMessage(v15, 0, 0, 0, 1u, Arguments, Buffer, *ReturnLength, ReturnLength);
      }
      else
      {
        memmove(Buffer, v14, v13);
      }
    }
    else
    {
      RegistryValue = -1073741584;
    }
    *v24 = v13;
    ExFreePoolWithTag(v12, 0);
  }
  return (unsigned int)RegistryValue;
}
