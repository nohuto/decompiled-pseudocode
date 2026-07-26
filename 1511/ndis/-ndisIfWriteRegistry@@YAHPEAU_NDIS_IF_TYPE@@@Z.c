/*
 * XREFs of ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C00BF254
 * Callers:
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C009E688 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00BF7C0 (NdisIfFreeNetLuidIndex.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

__int64 __fastcall ndisIfWriteRegistry(struct _NDIS_IF_TYPE *a1)
{
  ULONG v2; // ecx
  unsigned int RegistryKey; // ebx
  wchar_t *PoolWithTag; // rax
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-29h] BYREF
  int ValueData; // [rsp+40h] [rbp-19h] BYREF
  _UNICODE_STRING String; // [rsp+48h] [rbp-11h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-1h] BYREF
  char v10; // [rsp+68h] [rbp+Fh] BYREF

  *(_DWORD *)&String.Length = 2621440;
  *(_DWORD *)&Destination.Length = 0;
  v2 = *((unsigned __int16 *)a1 + 8);
  Destination.Buffer = 0LL;
  String.Buffer = (wchar_t *)&v10;
  if ( RtlIntegerToUnicodeString(v2, 0xAu, &String) )
  {
    RegistryKey = -1073741670;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes\\");
    Destination.Length = 0;
    Destination.MaximumLength = String.Length + DestinationString.Length + 4;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &String);
    if ( !RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer)
      || (RegistryKey = RtlCreateRegistryKey(1u, (PWSTR)Destination.Buffer)) == 0 )
    {
      ValueData = *((unsigned __int16 *)a1 + 8);
      RegistryKey = RtlWriteRegistryValue(1u, (PCWSTR)Destination.Buffer, L"IfType", 4u, &ValueData, 4u);
      if ( !RegistryKey )
        RegistryKey = RtlWriteRegistryValue(
                        1u,
                        (PCWSTR)Destination.Buffer,
                        L"IfUsedNetLuidIndices",
                        3u,
                        *((PVOID *)a1 + 7),
                        *((_DWORD *)a1 + 10));
    }
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return RegistryKey;
}
