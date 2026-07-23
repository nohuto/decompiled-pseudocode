/*
 * XREFs of IopSafebootDriverLoad @ 0x140622440
 * Callers:
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     RtlCopyUnicodeString @ 0x14002D8E0 (RtlCopyUnicodeString.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     RtlAppendUnicodeToString @ 0x1400C17B0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14010B80C (RtlAppendUnicodeStringToString.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopOpenRegistryKey @ 0x1404C90F0 (IopOpenRegistryKey.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
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
