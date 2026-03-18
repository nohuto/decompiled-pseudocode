/*
 * XREFs of IoReadDiskSignature @ 0x1405B748C
 * Callers:
 *     <none>
 * Callees:
 *     RtlComputeCrc32 @ 0x140134D10 (RtlComputeCrc32.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FstubReadSectors @ 0x140563264 (FstubReadSectors.c)
 */

NTSTATUS __stdcall IoReadDiskSignature(PDEVICE_OBJECT DeviceObject, ULONG BytesPerSector, PDISK_SIGNATURE Signature)
{
  ULONG v3; // ebx
  _QWORD *Buffer; // rax
  _QWORD *v7; // rdi
  int Sectors; // esi
  __m128i v9; // xmm1
  const __m128i *v10; // rax
  __int64 v11; // rcx
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __m128i v14; // xmm1
  int v16; // ebx
  ULONG v17; // eax

  v3 = BytesPerSector;
  if ( BytesPerSector < 0x200 )
    v3 = 512;
  Buffer = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v3, 0x42747346u);
  v7 = Buffer;
  if ( !Buffer )
    return -1073741801;
  Sectors = FstubReadSectors(DeviceObject, v3, 0LL, 1, Buffer);
  if ( Sectors >= 0 )
  {
    if ( *((_BYTE *)v7 + 450) != 0xEE || *((_BYTE *)v7 + 466) || *((_BYTE *)v7 + 482) || *((_BYTE *)v7 + 498) )
    {
      v9 = 0LL;
      v10 = (const __m128i *)v7;
      v11 = 32LL;
      do
      {
        v12 = _mm_loadu_si128(v10++);
        v13 = _mm_add_epi32(v12, v9);
        v9 = v13;
        --v11;
      }
      while ( v11 );
      Signature->PartitionStyle = 0;
      v14 = _mm_add_epi32(v13, _mm_srli_si128(v13, 8));
      Signature->Mbr.Signature = *((_DWORD *)v7 + 110);
      Signature->Mbr.CheckSum = -_mm_cvtsi128_si32(_mm_add_epi32(v14, _mm_srli_si128(v14, 4)));
    }
    else
    {
      Sectors = FstubReadSectors(DeviceObject, v3, 1LL, 1, v7);
      if ( Sectors >= 0 )
      {
        if ( *v7 == 0x5452415020494645LL
          && *((_DWORD *)v7 + 2) == 0x10000
          && *((_DWORD *)v7 + 3) == 92
          && (v16 = *((_DWORD *)v7 + 4),
              *((_DWORD *)v7 + 4) = 0,
              v17 = RtlComputeCrc32(0, (PUCHAR)v7, 0x5Cu),
              *((_DWORD *)v7 + 4) = v16,
              v17 == v16) )
        {
          Signature->PartitionStyle = 1;
          Signature->4 = *(union _DISK_SIGNATURE::$9D353A9A2948DD7B98BCBBCC4F8D6995 *)(v7 + 7);
        }
        else
        {
          Sectors = -1073741774;
        }
      }
    }
  }
  ExFreePoolWithTag(v7, 0);
  return Sectors;
}
