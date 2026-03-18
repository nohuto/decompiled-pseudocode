/*
 * XREFs of PfpParametersInitialize @ 0x1407DEF34
 * Callers:
 *     PfInitializeSuperfetch @ 0x1407DEE3C (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwCreateKey @ 0x14017F390 (ZwCreateKey.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PfpSetBaseTime @ 0x1405B692C (PfpSetBaseTime.c)
 *     PfpSetParameter @ 0x1405B69C4 (PfpSetParameter.c)
 *     PfpParametersRead @ 0x1405B6A18 (PfpParametersRead.c)
 *     PfSnParametersRead @ 0x1405B6BFC (PfSnParametersRead.c)
 *     PfpGetParameter @ 0x1405B7000 (PfpGetParameter.c)
 *     PfpCreateEvent @ 0x1405B7260 (PfpCreateEvent.c)
 *     PfSnParametersSetDefaults @ 0x1407DF218 (PfSnParametersSetDefaults.c)
 */

NTSTATUS __fastcall PfpParametersInitialize(__int64 a1)
{
  HANDLE *v2; // rsi
  NTSTATUS result; // eax
  HANDLE v4; // rcx
  _DWORD *v5; // rdi
  __int64 v6; // r8
  ULONG v7; // eax
  HANDLE v8; // rcx
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp+7h] BYREF
  UNICODE_STRING v10; // [rsp+58h] [rbp+17h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp+27h] BYREF
  ULONG v12; // [rsp+A8h] [rbp+67h] BYREF

  memset((void *)a1, 0, 0x220uLL);
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = PfpParametersWatcher;
  *(_QWORD *)(a1 + 56) = a1;
  *(_QWORD *)(a1 + 68) = 0LL;
  *(_QWORD *)(a1 + 76) = 0LL;
  *(_QWORD *)(a1 + 84) = 0LL;
  *(_QWORD *)(a1 + 88) = 10000LL;
  *(_DWORD *)(a1 + 92) = 10000;
  *(_DWORD *)(a1 + 68) = 0x80000000;
  *(_DWORD *)(a1 + 80) = 16;
  *(_DWORD *)(a1 + 76) = 64;
  *(_DWORD *)(a1 + 84) = 5000;
  PfSnParametersSetDefaults(a1);
  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchParametersChanged");
  PfpCreateEvent(&DestinationString, SynchronizationEvent, (PVOID *)a1);
  RtlInitUnicodeString(
    &v10,
    L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Memory Management\\PrefetchParameters");
  v2 = (HANDLE *)(a1 + 8);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &v10;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateKey((PHANDLE)(a1 + 8), 0xF003Fu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( result < 0 )
  {
    *v2 = 0LL;
  }
  else
  {
    PfpParametersRead(a1);
    PfSnParametersRead(a1);
    v4 = *v2;
    v5 = (_DWORD *)(a1 + 72);
    v12 = 4;
    if ( PfpGetParameter(v4, L"BootId", 4, (void *)(a1 + 72), &v12) < 0 )
      *v5 = 0;
    v7 = v12;
    v8 = *v2;
    ++*v5;
    PfpSetParameter(v8, L"BootId", v6, (void *)(a1 + 72), v7);
    return PfpSetBaseTime(*v2, (_DWORD *)(a1 + 540));
  }
  return result;
}
