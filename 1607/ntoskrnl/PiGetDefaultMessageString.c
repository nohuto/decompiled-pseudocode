/*
 * XREFs of PiGetDefaultMessageString @ 0x140574B00
 * Callers:
 *     PiNormalizeDeviceText @ 0x1404B7EB8 (PiNormalizeDeviceText.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlInitAnsiString @ 0x140074D74 (RtlInitAnsiString.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1403F54C4 (RtlAnsiStringToUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     RtlFindMessage @ 0x1404FF964 (RtlFindMessage.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     IopReferenceDriverObjectByName @ 0x140539268 (IopReferenceDriverObjectByName.c)
 */

__int64 __fastcall PiGetDefaultMessageString(HANDLE KeyHandle, ULONG MessageId, _QWORD *a3)
{
  PVOID *v6; // rdi
  NTSTATUS DriverNameFromKeyNode; // ebx
  PVOID *v8; // rax
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // rsi
  unsigned __int64 v11; // rbx
  _WORD *PoolWithTag; // rax
  _WORD *v13; // r14
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  _STRING SourceString; // [rsp+50h] [rbp-10h] BYREF
  PMESSAGE_RESOURCE_ENTRY MessageResourceEntry; // [rsp+A8h] [rbp+48h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  v6 = 0LL;
  DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(KeyHandle, &DestinationString);
  if ( DriverNameFromKeyNode >= 0 )
  {
    v8 = (PVOID *)IopReferenceDriverObjectByName(&DestinationString);
    v6 = v8;
    if ( v8 )
    {
      DriverNameFromKeyNode = RtlFindMessage(v8[3], 0xBu, 0, MessageId, &MessageResourceEntry);
      if ( DriverNameFromKeyNode < 0 )
        goto LABEL_11;
      if ( (MessageResourceEntry->Flags & 1) != 0 )
      {
        if ( !RtlCreateUnicodeString(&UnicodeString, (PCWSTR)MessageResourceEntry->Text) )
        {
LABEL_14:
          DriverNameFromKeyNode = -1073741670;
          goto LABEL_11;
        }
LABEL_6:
        Length = UnicodeString.Length;
        Buffer = UnicodeString.Buffer;
        if ( UnicodeString.Length >= 4u && *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) == 13 )
        {
          *(wchar_t *)((char *)UnicodeString.Buffer + UnicodeString.Length - 4) = 0;
          Length -= 4;
          UnicodeString.Length = Length;
        }
        v11 = Length;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length + 2LL, 0x20207050u);
        v13 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, Buffer, (unsigned int)v11);
          *a3 = v13;
          v13[v11 >> 1] = 0;
          DriverNameFromKeyNode = 0;
          goto LABEL_11;
        }
        goto LABEL_14;
      }
      RtlInitAnsiString(&SourceString, (PCSZ)MessageResourceEntry->Text);
      DriverNameFromKeyNode = RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u);
      if ( DriverNameFromKeyNode >= 0 )
        goto LABEL_6;
    }
    else
    {
      DriverNameFromKeyNode = -1073741823;
    }
  }
LABEL_11:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v6 )
    ObfDereferenceObject(v6);
  return (unsigned int)DriverNameFromKeyNode;
}
