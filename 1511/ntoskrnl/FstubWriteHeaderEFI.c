/*
 * XREFs of FstubWriteHeaderEFI @ 0x14051636C
 * Callers:
 *     FstubWritePartitionTableEFI @ 0x14051645C (FstubWritePartitionTableEFI.c)
 *     FstubVerifyPartitionTableEFI @ 0x1405F6308 (FstubVerifyPartitionTableEFI.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x140104938 (RtlComputeCrc32.c)
 */

__int64 __fastcall FstubWriteHeaderEFI(
        __int64 a1,
        unsigned int a2,
        __int128 *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8)
{
  __int64 v8; // rbx
  __int128 v10; // xmm0
  __int64 v11; // rdi
  __int64 v13; // rax

  v8 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v8 + 16) = 0;
  *(_DWORD *)(v8 + 20) = 0;
  *(_QWORD *)v8 = 0x5452415020494645LL;
  *(_DWORD *)(v8 + 8) = 0x10000;
  *(_DWORD *)(v8 + 12) = 92;
  if ( a8 )
  {
    v13 = *(_QWORD *)(a1 + 56) - 1LL;
    *(_QWORD *)(v8 + 32) = 1LL;
    *(_QWORD *)(v8 + 24) = v13;
  }
  else
  {
    *(_QWORD *)(v8 + 24) = 1LL;
    *(_QWORD *)(v8 + 32) = *(_QWORD *)(a1 + 56) - 1LL;
  }
  v10 = *a3;
  v11 = *(_QWORD *)(v8 + 24);
  *(_QWORD *)(v8 + 40) = a5;
  *(_QWORD *)(v8 + 48) = a6;
  *(_DWORD *)(v8 + 88) = a7;
  *(_DWORD *)(v8 + 80) = a4;
  *(_DWORD *)(v8 + 84) = 128;
  *(_OWORD *)(v8 + 56) = v10;
  if ( a8 )
    *(_QWORD *)(v8 + 72) = v11 - a2;
  else
    *(_QWORD *)(v8 + 72) = v11 + 1;
  *(_DWORD *)(v8 + 16) = RtlComputeCrc32(0, (PUCHAR)v8, 0x5Cu);
  return FstubWriteSector(*(PDEVICE_OBJECT *)a1, *(_DWORD *)(a1 + 8));
}
