/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x180009C70
 * Callers:
 *     EtwpLogger @ 0x1800096B0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1800F4044 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpAddProviderTrackingInfo @ 0x180009E9C (EtwpAddProviderTrackingInfo.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtReadFile @ 0x180093960 (NtReadFile.c)
 *     NtWriteFile @ 0x180093980 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x180093B70 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x180093D90 (ZwQueryVolumeInformationFile.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x1800F4C44 (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpWriteRemainingCompressedData @ 0x1800F54D0 (EtwpWriteRemainingCompressedData.c)
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
  unsigned __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
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
  if ( v4 )
  {
LABEL_2:
    if ( *(_QWORD *)(a1 + 472) == a1 + 472 && *(_QWORD *)(a1 + 488) == a1 + 488 && (*(_DWORD *)(a1 + 332) & 0x1000) == 0 )
    {
      VolumeInformationFile = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 144), v21, v23, 24LL, 3);
      if ( VolumeInformationFile < 0 )
        goto LABEL_16;
      v7 = (v24 + 7) & ~(v24 - 1);
    }
    else
    {
      v7 = *(_DWORD *)(a1 + 208);
    }
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v7);
    if ( !Heap )
    {
      VolumeInformationFile = -1073741801;
      return RtlNtStatusToDosError(VolumeInformationFile);
    }
    v9 = *(_QWORD *)(a1 + 144);
    v20 = 0LL;
    VolumeInformationFile = NtReadFile(v9, 0LL, 0LL, 0LL, v21, Heap, v7, &v20, 0LL);
    if ( VolumeInformationFile < 0 )
      goto LABEL_15;
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
    if ( a2 )
      goto LABEL_15;
    if ( v11 < 0 )
      goto LABEL_15;
    v12 = *(_DWORD *)(a1 + 332);
    if ( (v12 & 0x4000020) == 0 )
      goto LABEL_15;
    if ( (v12 & 0x4000000) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 368);
    }
    else
    {
      v15 = *(unsigned int *)(a1 + 328);
      if ( (v12 & 0x2000) != 0 )
        v16 = v15 << 10;
      else
        v16 = v15 << 20;
      v14 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 400);
      if ( v14 >= v16 )
        goto LABEL_15;
    }
    v19 = v14;
    if ( v14 )
      VolumeInformationFile = ZwSetInformationFile(*(_QWORD *)(a1 + 144), v22, &v19, 8LL, 20);
LABEL_15:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
    goto LABEL_16;
  }
  VolumeInformationFile = EtwpWriteRemainingCompressedData(a1, &v18, &v17);
  if ( VolumeInformationFile >= 0 )
  {
    *(_DWORD *)(a1 + 400) += v18;
    *(_DWORD *)(a1 + 396) += v17;
    goto LABEL_2;
  }
LABEL_16:
  if ( VolumeInformationFile )
    return RtlNtStatusToDosError(VolumeInformationFile);
  return v2;
}
