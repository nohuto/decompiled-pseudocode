/*
 * XREFs of NdisOpenFile @ 0x1C00CE860
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_Z @ 0x1C003DF0C (WPP_SF_Z.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C004AB68 (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@@Z @ 0x1C006E44C (-NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@@Z.c)
 */

void __stdcall NdisOpenFile(
        PNDIS_STATUS Status,
        PNDIS_HANDLE FileHandle,
        PUINT FileLength,
        PNDIS_STRING FileName,
        NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  wchar_t *PoolWithTag; // rax
  NTSTATUS v10; // edi
  NTSTATUS v11; // eax
  __int64 v12; // rsi
  PVOID v13; // rax
  void *v14; // r14
  NTSTATUS v15; // edi
  _QWORD *v16; // rax
  _BYTE *v17; // rdi
  HANDLE FileHandlea; // [rsp+60h] [rbp-71h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-69h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  _BYTE FileInformation[8]; // [rsp+B8h] [rbp-19h] BYREF
  SIZE_T NumberOfBytes; // [rsp+C0h] [rbp-11h]

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xEu, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids);
  NdisTraceLoggingDeprecationCandidate((const struct _TlgProvider_t *)1);
  if ( (int)RtlUShortAdd(0x3Cu, FileName->MaximumLength, &Destination.MaximumLength) < 0 )
  {
    *Status = -2147483643;
    goto LABEL_32;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x6E66444Eu);
  Destination.Buffer = PoolWithTag;
  if ( !PoolWithTag )
  {
    *Status = -1073741670;
    goto LABEL_32;
  }
  Destination.Length = 58;
  *(_OWORD *)PoolWithTag = *(_OWORD *)L"\\SystemRoot\\system32\\drivers\\";
  *((_OWORD *)PoolWithTag + 1) = *(_OWORD *)L"oot\\system32\\drivers\\";
  *((_OWORD *)PoolWithTag + 2) = *(_OWORD *)L"em32\\drivers\\";
  *((_QWORD *)PoolWithTag + 6) = *(_QWORD *)L"vers\\";
  *((_DWORD *)PoolWithTag + 14) = *(_DWORD *)L"\\";
  RtlAppendUnicodeStringToString(&Destination, FileName);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_Z(0xFu, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, (__int64 *)&Destination);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwCreateFile(&FileHandlea, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v10 < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_d(0x10u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, v10);
    *Status = -1073676261;
    goto LABEL_32;
  }
  v11 = ZwQueryInformationFile(FileHandlea, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
  if ( v11 < 0 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_d(0x11u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, v11);
LABEL_16:
    ZwClose(FileHandlea);
    *Status = -1073676260;
    goto LABEL_32;
  }
  v12 = (unsigned int)NumberOfBytes;
  if ( !(_DWORD)NumberOfBytes )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_d(0x12u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, NumberOfBytes);
    goto LABEL_16;
  }
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6966444Eu);
  v14 = v13;
  if ( !v13 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_(0x13u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids);
    goto LABEL_16;
  }
  v15 = ZwReadFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, v13, v12, 0LL, 0LL);
  ZwClose(FileHandlea);
  if ( v15 >= 0 && IoStatusBlock.Information == v12 )
  {
    v16 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6466444Eu);
    v17 = v16;
    if ( v16 )
    {
      *v16 = v14;
      KeInitializeSpinLock(v16 + 1);
      v17[16] = 0;
      *FileHandle = v17;
      *FileLength = v12;
      *Status = 0;
      goto LABEL_32;
    }
    *Status = -1073741670;
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_d(0x14u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, v15);
    *Status = -1073676260;
  }
  ExFreePoolWithTag(v14, 0);
LABEL_32:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(0x15u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, *Status);
}
