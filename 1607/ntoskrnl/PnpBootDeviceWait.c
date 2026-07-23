/*
 * XREFs of PnpBootDeviceWait @ 0x14013C3F0
 * Callers:
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     HeadlessKernelAddLogEntry @ 0x14010B72C (HeadlessKernelAddLogEntry.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     IopOpenRegistryKeyEx @ 0x140550B8C (IopOpenRegistryKeyEx.c)
 */

__int64 __fastcall PnpBootDeviceWait(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, UNICODE_STRING *),
        __int64 a3)
{
  int v6; // ebx
  int RegistryValue; // edi
  int v8; // eax
  ULONG_PTR v9; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  int v12; // [rsp+40h] [rbp-10h] BYREF
  const wchar_t *v13; // [rsp+48h] [rbp-8h]
  HANDLE Handle; // [rsp+88h] [rbp+38h] BYREF
  PVOID P; // [rsp+98h] [rbp+48h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v12 = 7209068;
  v13 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  v6 = 0;
  if ( (int)IopOpenRegistryKeyEx(&Handle, 0LL, &v12, 131097LL) < 0 )
    goto LABEL_12;
  RegistryValue = IopGetRegistryValue(Handle);
  if ( RegistryValue >= 0 )
  {
    if ( *((_DWORD *)P + 3) == 4 )
    {
      v6 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
      ExFreePoolWithTag(P, 0);
      if ( (unsigned int)v6 < 0xC8 )
      {
        v6 = 0;
      }
      else if ( (unsigned int)v6 > 0x2BF20 )
      {
        v6 = 180000;
      }
    }
    else
    {
      RegistryValue = -1073741823;
    }
  }
  ZwClose(Handle);
  if ( RegistryValue < 0 )
LABEL_12:
    v6 = 0;
  P = (PVOID)-2000000LL;
  while ( 1 )
  {
    RtlFreeAnsiString(&DestinationString);
    v8 = a2(a1, a3, &DestinationString);
    v9 = v8;
    if ( v8 >= 0 )
      break;
    if ( v6 <= 0 )
    {
      HeadlessKernelAddLogEntry();
      KeBugCheckEx(0x7Bu, (ULONG_PTR)&DestinationString, v9, 0LL, 0LL);
    }
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&P);
    v6 -= 200;
  }
  RtlFreeAnsiString(&DestinationString);
  return 0LL;
}
