/*
 * XREFs of NdisOpenFile @ 0x1C00C7C70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     WPP_SF_Z @ 0x1C003EFB4 (WPP_SF_Z.c)
 *     ?NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@@Z @ 0x1C006D8CC (-NdisTraceLoggingDeprecationCandidate@@YAXW4NdisTLDeprecationCandidate@@@Z.c)
 */

void __stdcall NdisOpenFile(
        PNDIS_STATUS Status,
        PNDIS_HANDLE FileHandle,
        PUINT FileLength,
        PNDIS_STRING FileName,
        NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  unsigned __int16 v9; // ax
  wchar_t *PoolWithTag; // rax
  NTSTATUS v11; // edi
  NTSTATUS v12; // eax
  __int64 v13; // rsi
  PVOID v14; // rax
  void *v15; // r14
  NTSTATUS v16; // edi
  _QWORD *v17; // rax
  _BYTE *v18; // rdi
  HANDLE FileHandlea; // [rsp+60h] [rbp-71h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-69h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  _BYTE FileInformation[8]; // [rsp+B8h] [rbp-19h] BYREF
  SIZE_T NumberOfBytes; // [rsp+C0h] [rbp-11h]

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0xEu, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids);
  NdisTraceLoggingDeprecationCandidate((const struct _TlgProvider_t *)1);
  v9 = FileName->MaximumLength + 60;
  if ( v9 < 0x3Cu )
  {
    *Status = -2147483643;
    Destination.MaximumLength = -1;
  }
  else
  {
    Destination.MaximumLength = FileName->MaximumLength + 60;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x6E66444Eu);
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
    v11 = ZwCreateFile(&FileHandlea, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0);
    ExFreePoolWithTag(Destination.Buffer, 0);
    if ( v11 >= 0 )
    {
      v12 = ZwQueryInformationFile(FileHandlea, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
      if ( v12 >= 0 )
      {
        v13 = (unsigned int)NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          v14 = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6966444Eu);
          v15 = v14;
          if ( v14 )
          {
            v16 = ZwReadFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, v14, v13, 0LL, 0LL);
            ZwClose(FileHandlea);
            if ( v16 >= 0 && IoStatusBlock.Information == v13 )
            {
              v17 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6466444Eu);
              v18 = v17;
              if ( v17 )
              {
                *v17 = v15;
                KeInitializeSpinLock(v17 + 1);
                v18[16] = 0;
                *FileHandle = v18;
                *FileLength = v13;
                *Status = 0;
                goto LABEL_32;
              }
              *Status = -1073741670;
            }
            else
            {
              if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
                WPP_SF_d(0x14u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, v16);
              *Status = -1073676260;
            }
            ExFreePoolWithTag(v15, 0);
            goto LABEL_32;
          }
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
            WPP_SF_(0x13u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids);
        }
        else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        {
          WPP_SF_d(0x12u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, NumberOfBytes);
        }
      }
      else if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      {
        WPP_SF_d(0x11u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, v12);
      }
      ZwClose(FileHandlea);
      *Status = -1073676260;
      goto LABEL_32;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_d(0x10u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, v11);
    *Status = -1073676261;
  }
LABEL_32:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_d(0x15u, &WPP_67b83ca0c3bb11ebff428113d40c1d7a_Traceguids, *Status);
}
