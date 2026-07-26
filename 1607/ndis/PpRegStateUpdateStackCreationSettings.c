/*
 * XREFs of PpRegStateUpdateStackCreationSettings @ 0x1C00E446C
 * Callers:
 *     IoDevObjCreateDeviceSecure @ 0x1C009CFE0 (IoDevObjCreateDeviceSecure.c)
 * Callees:
 *     WdmlibRtlInitUnicodeStringEx @ 0x1C0073CD8 (WdmlibRtlInitUnicodeStringEx.c)
 *     PiRegStateOpenClassKey @ 0x1C00E3FF8 (PiRegStateOpenClassKey.c)
 *     CmRegUtilCreateWstrKey @ 0x1C00E4650 (CmRegUtilCreateWstrKey.c)
 */

__int64 __fastcall PpRegStateUpdateStackCreationSettings(unsigned int *a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // r8d
  __int64 v5; // r9
  int v6; // eax
  void *v7; // rbx
  NTSTATUS WstrKey; // ebx
  ULONG DataSize; // r9d
  void *Data; // r10
  HANDLE KeyHandle; // [rsp+40h] [rbp-28h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp+20h] BYREF

  result = PiRegStateOpenClassKey(a1, a2, 0, 0LL, &Handle);
  if ( (int)result >= 0 )
  {
    v6 = PiRegStateDiscriptor;
    v7 = &PiRegStateSysAllInherittedSecurityDescriptor;
    if ( !PiRegStateDiscriptor )
    {
      LOBYTE(v5) = 1;
      if ( (int)SeCaptureSecurityDescriptor(&PiRegStateSysAllInherittedSecurityDescriptor, 0LL, 1LL, v5, &P) < 0 )
      {
        v6 = 2;
        PiRegStateDiscriptor = 2;
      }
      else
      {
        PiRegStateDiscriptor = 1;
        ExFreePoolWithTag(P, 0);
        v6 = PiRegStateDiscriptor;
      }
    }
    if ( v6 != 1 )
      v7 = 0LL;
    P = v7;
    WstrKey = CmRegUtilCreateWstrKey(
                (_DWORD)Handle,
                (unsigned int)L"Properties",
                v4,
                v5,
                (__int64)v7,
                0LL,
                (__int64)&KeyHandle);
    ZwClose(Handle);
    if ( WstrKey >= 0 )
    {
      RtlLengthSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a2 + 8));
      WstrKey = WdmlibRtlInitUnicodeStringEx(&DestinationString, L"Security");
      if ( WstrKey >= 0 )
        WstrKey = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
      ZwClose(KeyHandle);
    }
    return (unsigned int)WstrKey;
  }
  return result;
}
