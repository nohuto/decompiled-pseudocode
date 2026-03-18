/*
 * XREFs of FstubCreateDiskEFI @ 0x1405160FC
 * Callers:
 *     IoCreateDisk @ 0x140515FF4 (IoCreateDisk.c)
 * Callees:
 *     FstubFreeDiskInformation @ 0x1404E84BC (FstubFreeDiskInformation.c)
 *     FstubAllocateDiskInformation @ 0x1404E8640 (FstubAllocateDiskInformation.c)
 *     FstubWriteBootSectorEFI @ 0x14051601C (FstubWriteBootSectorEFI.c)
 *     FstubWritePartitionTableEFI @ 0x14051645C (FstubWritePartitionTableEFI.c)
 */

__int64 __fastcall FstubCreateDiskEFI(struct _DEVICE_OBJECT *a1, __int128 *a2)
{
  __int64 result; // rax
  _DWORD *v4; // rbx
  int v5; // edi
  unsigned int v6; // r8d
  int v7; // ecx
  __int64 v8; // r14
  unsigned int v9; // ebp
  unsigned int v10; // eax
  __int64 v11; // r14
  unsigned int v12; // r15d
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  P = 0LL;
  result = FstubAllocateDiskInformation(a1, &P);
  if ( (int)result >= 0 )
  {
    v4 = P;
    v5 = FstubWriteBootSectorEFI((__int64)P);
    if ( v5 >= 0 )
    {
      v6 = v4[2];
      v7 = 128;
      v8 = *((_QWORD *)v4 + 7);
      if ( *((_DWORD *)a2 + 4) > 0x80u )
        v7 = *((_DWORD *)a2 + 4);
      v13 = *a2;
      v9 = (v6 * (((v7 << 7) + v6 - 1) / v6)) >> 7;
      v10 = (v9 << 7) / v6;
      v11 = v8 - v10 - 2;
      v12 = v10 + 2;
      v5 = FstubWritePartitionTableEFI((_DWORD)v4, (unsigned int)&v13, v9, v10 + 2, v11, 0, 0, 0LL);
      if ( v5 >= 0 )
      {
        v13 = *a2;
        v5 = FstubWritePartitionTableEFI((_DWORD)v4, (unsigned int)&v13, v9, v12, v11, 1, 0, 0LL);
      }
    }
    FstubFreeDiskInformation(v4);
    return (unsigned int)v5;
  }
  return result;
}
