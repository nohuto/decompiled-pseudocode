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
  NTSTATUS VolumeInformationFile; // esi
  unsigned int v7; // r14d
  __int64 Heap; // r15
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  int v17; // [rsp+50h] [rbp-29h] BYREF
  int v18; // [rsp+54h] [rbp-25h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp-21h] BYREF
  __int64 v20; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v21[16]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v22[16]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v23[20]; // [rsp+88h] [rbp+Fh] BYREF
  int v24; // [rsp+9Ch] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 332) & 0x4000000) == 0;
  v18 = 0;
  v17 = 0;
  if ( !v4 )
  {
    VolumeInformationFile = EtwpWriteRemainingCompressedData(a1, &v18, &v17);
    if ( VolumeInformationFile < 0 )
      goto LABEL_30;
    *(_DWORD *)(a1 + 400) += v18;
    *(_DWORD *)(a1 + 396) += v17;
  }
  if ( *(_QWORD *)(a1 + 472) == a1 + 472 && *(_QWORD *)(a1 + 488) == a1 + 488 && (*(_DWORD *)(a1 + 332) & 0x1000) == 0 )
  {
    VolumeInformationFile = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 144), v21, v23, 24LL, 3);
    if ( VolumeInformationFile < 0 )
      goto LABEL_30;
    v7 = (v24 + 7) & ~(v24 - 1);
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 208);
  }
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v7);
  if ( !Heap )
  {
    VolumeInformationFile = -1073741801;
    return RtlNtStatusToDosError(VolumeInformationFile);
  }
  v9 = *(_QWORD *)(a1 + 144);
  v20 = 0LL;
  VolumeInformationFile = NtReadFile(v9, 0LL, 0LL, 0LL, v21, Heap, v7, &v20, 0LL);
  if ( VolumeInformationFile >= 0 )
  {
    if ( !a2 )
    {
      *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(Heap + 140) = *(_DWORD *)(a1 + 400);
      *(_DWORD *)(Heap + 152) += *(_DWORD *)(a1 + 392);
      *(_DWORD *)(Heap + 380) += *(_DWORD *)(a1 + 396);
      v10 = *(_DWORD *)(a1 + 332);
      if ( (v10 & 0x10000) != 0 )
      {
        if ( (v10 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, Heap, v7, v18, v17);
      }
      else
      {
        *(_QWORD *)(Heap + 120) = MEMORY[0x7FFE0014];
      }
    }
    EtwpAddProviderTrackingInfo(a1, Heap, v7);
    v11 = NtWriteFile(*(_QWORD *)(a1 + 144), 0LL, 0LL, 0LL, v21, Heap, v7, &v20, 0LL);
    VolumeInformationFile = v11;
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
        v19 = v13;
        if ( v13 )
          VolumeInformationFile = ZwSetInformationFile(*(_QWORD *)(a1 + 144), v22, &v19, 8LL, 20);
      }
    }
  }
LABEL_29:
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
LABEL_30:
  if ( VolumeInformationFile )
    return RtlNtStatusToDosError(VolumeInformationFile);
  return v2;
}
