/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x18005C2B0
 * Callers:
 *     EtwpLogger @ 0x18005BCF0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1800F3EE4 (EtwpBufferingModeFlush.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     EtwpAddProviderTrackingInfo @ 0x180045C24 (EtwpAddProviderTrackingInfo.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A5180 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A51C0 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x1800A55A0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A59E0 (ZwQueryVolumeInformationFile.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x1800F4648 (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpWriteRemainingCompressedData @ 0x1800F4ECC (EtwpWriteRemainingCompressedData.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  int v6; // esi
  ULONG Length; // r14d
  PVOID Buffer; // r15
  void *v9; // rcx
  int v10; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int v17; // [rsp+50h] [rbp-29h] BYREF
  int v18; // [rsp+54h] [rbp-25h] BYREF
  unsigned __int64 FileInformation; // [rsp+58h] [rbp-21h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK v22; // [rsp+78h] [rbp-1h] BYREF
  _BYTE FsInformation[20]; // [rsp+88h] [rbp+Fh] BYREF
  int v24; // [rsp+9Ch] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 332) & 0x4000000) == 0;
  v18 = 0;
  v17 = 0;
  if ( !v4 )
  {
    v6 = EtwpWriteRemainingCompressedData(a1, &v18, &v17);
    if ( v6 < 0 )
      goto LABEL_30;
    *(_DWORD *)(a1 + 400) += v18;
    *(_DWORD *)(a1 + 396) += v17;
  }
  if ( *(_QWORD *)(a1 + 472) == a1 + 472 && *(_QWORD *)(a1 + 488) == a1 + 488 && (*(_DWORD *)(a1 + 332) & 0x1000) == 0 )
  {
    v6 = ZwQueryVolumeInformationFile(
           *(HANDLE *)(a1 + 144),
           &IoStatusBlock,
           FsInformation,
           0x18u,
           FileFsSizeInformation);
    if ( v6 < 0 )
      goto LABEL_30;
    Length = (v24 + 7) & ~(v24 - 1);
  }
  else
  {
    Length = *(_DWORD *)(a1 + 208);
  }
  Buffer = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
  if ( !Buffer )
  {
    v6 = -1073741801;
    return RtlNtStatusToDosError(v6);
  }
  v9 = *(void **)(a1 + 144);
  ByteOffset.QuadPart = 0LL;
  v6 = NtReadFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  if ( v6 >= 0 )
  {
    if ( !a2 )
    {
      *((_DWORD *)Buffer + 29) = *(_DWORD *)(a1 + 204);
      *((_DWORD *)Buffer + 35) = *(_DWORD *)(a1 + 400);
      *((_DWORD *)Buffer + 38) += *(_DWORD *)(a1 + 392);
      *((_DWORD *)Buffer + 95) += *(_DWORD *)(a1 + 396);
      v10 = *(_DWORD *)(a1 + 332);
      if ( (v10 & 0x10000) != 0 )
      {
        if ( (v10 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, (_DWORD)Buffer, Length, v18, v17);
      }
      else
      {
        *((_QWORD *)Buffer + 15) = MEMORY[0x7FFE0014];
      }
    }
    EtwpAddProviderTrackingInfo(a1, (__int64)Buffer, Length);
    v11 = NtWriteFile(*(HANDLE *)(a1 + 144), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v6 = v11;
    if ( !a2 && v11 >= 0 )
    {
      v12 = *(_DWORD *)(a1 + 332);
      if ( (v12 & 0x4000020) != 0 )
      {
        if ( (v12 & 0x4000000) != 0 )
        {
          v13 = *(_QWORD *)(a1 + 368);
        }
        else
        {
          v14 = *(unsigned int *)(a1 + 328);
          if ( (v12 & 0x2000) != 0 )
            v15 = v14 << 10;
          else
            v15 = v14 << 20;
          v13 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 400);
          if ( v13 >= v15 )
            goto LABEL_29;
        }
        FileInformation = v13;
        if ( v13 )
          v6 = ZwSetInformationFile(*(HANDLE *)(a1 + 144), &v22, &FileInformation, 8u, FileEndOfFileInformation);
      }
    }
  }
LABEL_29:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
LABEL_30:
  if ( v6 )
    return RtlNtStatusToDosError(v6);
  return v2;
}
