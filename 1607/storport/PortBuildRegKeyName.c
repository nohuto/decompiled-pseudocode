/*
 * XREFs of PortBuildRegKeyName @ 0x1C00165A8
 * Callers:
 *     StorPortRegistryRead @ 0x1C0016310 (StorPortRegistryRead.c)
 *     StorPortRegistryWrite @ 0x1C002E0E0 (StorPortRegistryWrite.c)
 * Callees:
 *     RtlStringCbPrintfA @ 0x1C00198D0 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 *     memset @ 0x1C001AD80 (memset.c)
 */

NTSTATUS __fastcall PortBuildRegKeyName(PCUNICODE_STRING SourceString, PUNICODE_STRING Destination, int a3, int a4)
{
  char *v6; // rdx
  NTSTATUS result; // eax
  unsigned int MaximumLength; // ecx
  unsigned int v9; // edx
  int v10; // ecx
  unsigned int v11; // ebx
  int v12; // eax
  wchar_t *PoolWithTag; // rax
  NTSTATUS appended; // ebx
  UNICODE_STRING Source; // [rsp+20h] [rbp-40h] BYREF
  struct _STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  char pszDest[24]; // [rsp+40h] [rbp-20h] BYREF

  if ( a4 )
  {
    v6 = "\\Parameters\\Device";
  }
  else
  {
    RtlStringCbPrintfA(pszDest, 0x18uLL, "\\Parameters\\Device%d", a3);
    v6 = pszDest;
  }
  RtlInitAnsiString(&DestinationString, v6);
  result = RtlAnsiStringToUnicodeString(&Source, &DestinationString, 1u);
  if ( result >= 0 )
  {
    MaximumLength = SourceString->MaximumLength;
    v9 = MaximumLength + Source.MaximumLength;
    if ( v9 < MaximumLength )
    {
      v9 = -1;
      v10 = -1073741675;
    }
    else
    {
      v10 = 0;
    }
    v11 = v9 + 2;
    if ( v9 + 2 < v9 )
    {
      v11 = -1;
      v12 = -1073741675;
    }
    else
    {
      v12 = 0;
    }
    if ( v10 || v12 || v11 > 0xFFFF )
    {
      RtlFreeUnicodeString(&Source);
      return -1073741675;
    }
    else
    {
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v11, 0x42526C50u);
      Destination->Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v11);
        Destination->MaximumLength = v11;
        RtlCopyUnicodeString(Destination, SourceString);
        appended = RtlAppendUnicodeStringToString(Destination, &Source);
        RtlFreeUnicodeString(&Source);
        return appended;
      }
      else
      {
        return -1073741670;
      }
    }
  }
  return result;
}
