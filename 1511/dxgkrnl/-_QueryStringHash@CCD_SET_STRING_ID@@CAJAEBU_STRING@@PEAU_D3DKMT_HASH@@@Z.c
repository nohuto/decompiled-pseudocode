/*
 * XREFs of ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAU_D3DKMT_HASH@@@Z @ 0x1C005F5B4
 * Callers:
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C00A23F8 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00A38EC (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C00A39CC (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 * Callees:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x1C005F664 (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_QueryStringHash(PCANSI_STRING SourceString, struct _D3DKMT_HASH *a2)
{
  NTSTATUS v4; // eax
  __int64 v5; // rcx
  __int64 Md5Checksum; // rbx
  __int64 v8; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-20h] BYREF

  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_OWORD *)a2 = 0u;
  *((_DWORD *)a2 + 4) = 0;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v4 = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 1u);
  Md5Checksum = v4;
  if ( v4 < 0
    || (Md5Checksum = (int)CcdCreateMd5Checksum(
                             (const unsigned __int8 *)DestinationString.Buffer,
                             DestinationString.Length,
                             (unsigned __int8 *)a2 + 4),
        RtlFreeUnicodeString(&DestinationString),
        (int)Md5Checksum < 0) )
  {
    v8 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v8 + 24) = Md5Checksum;
    *(_QWORD *)(v8 + 32) = SourceString;
    WdLogEvent5_WdError(v8);
  }
  else
  {
    *(_DWORD *)a2 = 1;
  }
  return (unsigned int)Md5Checksum;
}
