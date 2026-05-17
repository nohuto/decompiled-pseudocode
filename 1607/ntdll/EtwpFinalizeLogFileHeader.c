/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x1800530C0
 * Callers:
 *     EtwpLogger @ 0x180052AF0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x1800FD694 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpFinalizeRelogFileHeaderStats @ 0x180002F4C (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpWriteRemainingCompressedData @ 0x1800031C0 (EtwpWriteRemainingCompressedData.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     EtwpAddProviderTrackingInfo @ 0x180054EC8 (EtwpAddProviderTrackingInfo.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A64E0 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A6520 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x1800A6900 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A6D40 (ZwQueryVolumeInformationFile.c)
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
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  int v17; // [rsp+50h] [rbp-29h] BYREF
  int v18; // [rsp+54h] [rbp-25h] BYREF
  __int64 v19; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v21[16]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v22[16]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v23[20]; // [rsp+88h] [rbp+Fh] BYREF
  int v24; // [rsp+9Ch] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 324) & 0x4000000) == 0;
  v18 = 0;
  v17 = 0;
  if ( v4 )
  {
LABEL_2:
    if ( *(_QWORD *)(a1 + 464) == a1 + 464 && *(_QWORD *)(a1 + 480) == a1 + 480 && (*(_DWORD *)(a1 + 324) & 0x1000) == 0 )
    {
      VolumeInformationFile = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 144), v21, v23, 24LL, 3);
      if ( VolumeInformationFile < 0 )
        goto LABEL_20;
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
    v19 = 0LL;
    VolumeInformationFile = NtReadFile(v9, 0LL, 0LL, 0LL, v21, Heap, v7, &v19, 0LL);
    if ( VolumeInformationFile < 0 )
      goto LABEL_19;
    if ( !a2 )
    {
      *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(Heap + 140) = *(_DWORD *)(a1 + 392);
      *(_DWORD *)(Heap + 152) += *(_DWORD *)(a1 + 384);
      *(_DWORD *)(Heap + 380) += *(_DWORD *)(a1 + 388);
      v10 = *(_DWORD *)(a1 + 324);
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
    v11 = NtWriteFile(*(_QWORD *)(a1 + 144), 0LL, 0LL, 0LL, v21, Heap, v7, &v19, 0LL);
    VolumeInformationFile = v11;
    if ( a2 )
      goto LABEL_19;
    if ( v11 < 0 )
      goto LABEL_19;
    v12 = *(_DWORD *)(a1 + 324);
    if ( (v12 & 0x4000020) == 0 )
      goto LABEL_19;
    if ( (v12 & 0x4000000) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 360);
    }
    else
    {
      v15 = *(unsigned int *)(a1 + 320);
      if ( (v12 & 0x2000) != 0 )
        v16 = v15 << 10;
      else
        v16 = v15 << 20;
      v13 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 392);
      if ( v13 >= v16 )
        goto LABEL_19;
    }
    v20 = v13;
    if ( v13 )
      VolumeInformationFile = ZwSetInformationFile(*(_QWORD *)(a1 + 144), v22, &v20, 8LL, 20);
LABEL_19:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    goto LABEL_20;
  }
  VolumeInformationFile = EtwpWriteRemainingCompressedData(a1, &v18, &v17);
  if ( VolumeInformationFile >= 0 )
  {
    *(_DWORD *)(a1 + 392) += v18;
    *(_DWORD *)(a1 + 388) += v17;
    goto LABEL_2;
  }
LABEL_20:
  if ( VolumeInformationFile )
    return RtlNtStatusToDosError(VolumeInformationFile);
  return v2;
}
