/*
 * XREFs of EtwpRealtimeSaveState @ 0x1404D3464
 * Callers:
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140086EF8 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x14015A2F0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x14015A6D0 (ZwSetInformationFile.c)
 */

__int64 __fastcall EtwpRealtimeSaveState(__int64 a1)
{
  NTSTATUS v2; // edi
  void *v3; // rcx
  int v5; // ecx
  __int128 v6; // xmm0
  __int64 v7; // rax
  int UsedProcessorCount; // eax
  void *v9; // rcx
  char FileInformation[8]; // [rsp+50h] [rbp-29h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  _DWORD Buffer[4]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+90h] [rbp+17h]
  int v16; // [rsp+94h] [rbp+1Bh]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  __int64 v20; // [rsp+B0h] [rbp+37h]

  v2 = -1073741823;
  if ( (*(_DWORD *)(a1 + 816) & 1) == 0 )
    goto LABEL_2;
  if ( !*(_QWORD *)(a1 + 360) )
    goto LABEL_7;
  v5 = *(_DWORD *)(a1 + 424);
  if ( !v5 )
    goto LABEL_7;
  v6 = *(_OWORD *)(a1 + 432);
  v17 = *(_QWORD *)(a1 + 392);
  v18 = *(_QWORD *)(a1 + 384);
  v16 = *(_DWORD *)(a1 + 4);
  v19 = *(_QWORD *)(a1 + 400);
  v7 = *(_QWORD *)(a1 + 408);
  v15 = v5;
  v20 = v7;
  v14 = v6;
  Buffer[0] = 1933995090;
  Buffer[2] = 1;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
  v9 = *(void **)(a1 + 360);
  Buffer[1] = 0;
  ByteOffset.QuadPart = 0LL;
  Buffer[3] = UsedProcessorCount;
  v2 = ZwWriteFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
  if ( v2 < 0 )
  {
LABEL_7:
    *(_DWORD *)(a1 + 260) += *(_DWORD *)(a1 + 424);
    *(_DWORD *)(a1 + 424) = 0;
    *(_QWORD *)(a1 + 408) = 0LL;
LABEL_2:
    v3 = *(void **)(a1 + 360);
    FileInformation[0] = 1;
    ZwSetInformationFile(v3, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
  }
  return (unsigned int)v2;
}
