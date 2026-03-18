/*
 * XREFs of IopSafebootDriverLoad @ 0x1405F8504
 * Callers:
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x1400030E4 (RtlAppendUnicodeStringToString.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x140043CB0 (RtlCopyUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14008FA78 (RtlAppendUnicodeToString.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     IopOpenRegistryKey @ 0x14049446C (IopOpenRegistryKey.c)
 */

char __fastcall IopSafebootDriverLoad(PCUNICODE_STRING Source)
{
  const WCHAR *v3; // rdx
  unsigned __int16 Length; // ax
  char v5; // di
  wchar_t *PoolWithTagPriority; // rax
  NTSTATUS v7; // ebx
  ULONG v8; // [rsp+20h] [rbp-30h]
  ULONG v9; // [rsp+20h] [rbp-30h]
  UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+18h] BYREF
  HANDLE v13; // [rsp+70h] [rbp+20h] BYREF

  switch ( InitSafeBootMode )
  {
    case 1:
      v3 = L"MINIMAL";
      break;
    case 2:
      v3 = L"NETWORK";
      break;
    case 3:
      return 1;
    default:
      return 0;
  }
  RtlInitUnicodeString(&DestinationString, v3);
  Length = Source->Length;
  v5 = 0;
  Destination.Length = 0;
  Destination.MaximumLength = DestinationString.Length + Length + 8;
  if ( ViVerifierDriverAddedThunkListHead )
    PoolWithTagPriority = (wchar_t *)ExAllocatePoolWithTagPriority(
                                       PagedPool,
                                       Destination.MaximumLength,
                                       0x20206F49u,
                                       (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    PoolWithTagPriority = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x20206F49u);
  Destination.Buffer = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return 0;
  RtlCopyUnicodeString(&Destination, &DestinationString);
  if ( RtlAppendUnicodeToString(&Destination, L"\\") < 0 )
  {
    ExFreePoolWithTag(Destination.Buffer, 0);
    return 0;
  }
  if ( RtlAppendUnicodeStringToString(&Destination, Source) >= 0 )
  {
    LOBYTE(v8) = 0;
    if ( IopOpenRegistryKey(&Handle, 0LL, &CmRegistryMachineSystemCurrentControlSetControlSafeBoot, 0xF003Fu, v8) >= 0 )
    {
      LOBYTE(v9) = 0;
      v7 = IopOpenRegistryKey(&v13, Handle, &Destination, 0xF003Fu, v9);
      ObCloseHandle(Handle, 0);
      if ( v7 >= 0 )
      {
        ObCloseHandle(v13, 0);
        v5 = 1;
      }
    }
  }
  ExFreePoolWithTag(Destination.Buffer, 0);
  return v5;
}
