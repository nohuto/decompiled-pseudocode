/*
 * XREFs of MiCreateDataFileMap @ 0x1405056C4
 * Callers:
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x1400FB238 (MiInsertSubsectionNode.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x14042B324 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1404CF4EC (FsRtlSetFileSize.c)
 */

int __fastcall MiCreateDataFileMap(
        PFILE_OBJECT FileObject,
        LARGE_INTEGER a2,
        _QWORD *a3,
        LARGE_INTEGER *a4,
        char a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int64 QuadPart; // rbx
  unsigned __int64 v12; // r15
  _QWORD *PoolWithTag; // rbx
  PVOID v14; // rax
  __int64 v15; // rdi
  _DWORD *v16; // rsi
  unsigned __int64 v17; // r14
  unsigned int v18; // ebp
  _DWORD *v19; // r13
  char v20; // si
  LARGE_INTEGER v21; // rbp
  unsigned __int64 v22; // rdx
  __int16 v23; // ax
  __int64 v24; // rbx
  __int16 v25; // si
  unsigned __int64 *v26; // r14
  __int16 v27; // ax
  __int16 v28; // cx
  int v29; // ecx
  int result; // eax
  LARGE_INTEGER v31; // rax
  _DWORD *v32; // rax
  void *v33; // rcx
  _QWORD *v34; // rcx
  _QWORD *v35; // rbx
  LARGE_INTEGER FileSize; // [rsp+58h] [rbp+10h] BYREF

  FileSize = a2;
  if ( (a8 & 1) != 0 )
  {
    QuadPart = a4->QuadPart;
    FileSize = *a4;
    goto LABEL_3;
  }
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result == -1073741638 )
    return -1073741792;
  if ( result >= 0 )
  {
    QuadPart = FileSize.QuadPart;
    if ( !FileSize.QuadPart && !a4->QuadPart )
      return -1073741538;
    v31 = *a4;
    if ( a4->QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = *a4;
      QuadPart = v31.QuadPart;
      result = FsRtlSetFileSize(FileObject, (__int64 *)&FileSize);
      if ( result < 0 )
        return result;
    }
LABEL_3:
    if ( QuadPart <= 0x3FFFFFFFFFF000LL )
    {
      v12 = (QuadPart + 4095) >> 12;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6D536D4Du);
      if ( !PoolWithTag )
        return -1073741670;
      v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x108uLL, 0x61436D4Du);
      v15 = (__int64)v14;
      if ( !v14 )
      {
        v33 = PoolWithTag;
        goto LABEL_44;
      }
      memset(v14, 0, 0x108uLL);
      v16 = 0LL;
      v17 = 8 * v12;
      v18 = 0x100000;
      v19 = 0LL;
      while ( 1 )
      {
        if ( v17 < 0x100000 )
          v18 = v17;
        if ( v16 )
        {
          v32 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x63536D4Du);
          v16 = v32;
          if ( !v32 )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            v34 = *(_QWORD **)(v15 + 144);
            if ( v34 )
            {
              do
              {
                v35 = (_QWORD *)v34[2];
                ExFreePoolWithTag(v34, 0);
                v34 = v35;
              }
              while ( v35 );
            }
            v33 = (void *)v15;
LABEL_44:
            ExFreePoolWithTag(v33, 0);
            return -1073741670;
          }
          memset(v32, 0, 0x70uLL);
          *((_QWORD *)v19 + 2) = v16;
        }
        else
        {
          v16 = (_DWORD *)(v15 + 128);
        }
        v19 = v16;
        v16[11] = v18 >> 3;
        v17 -= v18;
        if ( !v17 )
        {
          *a3 = PoolWithTag;
          memset(PoolWithTag, 0, 0x30uLL);
          PoolWithTag[5] = 0LL;
          *(_QWORD *)v15 = PoolWithTag;
          *(_QWORD *)(v15 + 16) = v15 + 8;
          *(_QWORD *)(v15 + 8) = v15 + 8;
          *(_QWORD *)(v15 + 112) = 1LL;
          *(_QWORD *)(v15 + 24) = 1LL;
          *(_DWORD *)(v15 + 60) ^= (*(_DWORD *)(v15 + 60) ^ MiSystemPartition[0]) & 0x3FF;
          _InterlockedAdd64(&qword_140323C08, 1uLL);
          *(_QWORD *)(v15 + 104) = 0LL;
          if ( (a8 & 1) != 0 )
            *(_DWORD *)(v15 + 56) |= 0x8000u;
          else
            *(_QWORD *)(v15 + 48) = 1LL;
          v20 = 6;
          *(_DWORD *)(v15 + 56) = *(_DWORD *)(v15 + 56) ^ (*(_DWORD *)(v15 + 56) ^ (a7 << 20)) & 0x3F00000 | 0x82;
          if ( (a8 & 0x10000) == 0 )
          {
            if ( (a6 & 0x10000000) != 0 )
            {
              *((_WORD *)PoolWithTag + 6) |= 0x8000u;
              v20 = 14;
            }
            else if ( (a6 & 0x40000000) != 0 )
            {
              v20 = 30;
              *((_WORD *)PoolWithTag + 6) |= 0x4000u;
            }
          }
          v21 = FileSize;
          v22 = v15 + 128;
          *PoolWithTag = v15;
          v23 = (*((_WORD *)PoolWithTag + 6) ^ WORD2(v12)) & 0x3FF;
          PoolWithTag[3] = v21.QuadPart;
          *((_WORD *)PoolWithTag + 6) ^= v23;
          *((_DWORD *)PoolWithTag + 2) = v12;
          *((_BYTE *)PoolWithTag + 14) ^= (*((_BYTE *)PoolWithTag + 14) ^ (2 * v20)) & 0x3E;
          v24 = 0LL;
          v25 = 2 * (v20 & 0x1F);
          do
          {
            v26 = (unsigned __int64 *)(v22 + 16);
            v27 = *(_WORD *)(v22 + 32) & 1;
            *(_QWORD *)v22 = v15;
            *(_DWORD *)(v22 + 36) = v24;
            *(_WORD *)(v22 + 32) = v25 | v27 & 0xFFC1 | (WORD2(v24) << 6);
            if ( *(_QWORD *)(v22 + 16) )
            {
              *(_DWORD *)(v22 + 40) = *(_DWORD *)(v22 + 44);
            }
            else
            {
              v28 = *(_WORD *)(v22 + 34) & 0xF;
              *(_DWORD *)(v22 + 40) = ((unsigned __int64)v21.QuadPart >> 12) - v24;
              *(_WORD *)(v22 + 34) = (16 * LOWORD(v21.LowPart)) | v28;
              v29 = *(_DWORD *)(v22 + 44) - (v12 - v24);
              *(_DWORD *)(v22 + 44) = v12 - v24;
              *(_DWORD *)(v22 + 52) ^= (*(_DWORD *)(v22 + 52) ^ v29) & 0x7FFFFFFF;
            }
            v24 += *(unsigned int *)(v22 + 44);
            *(_QWORD *)(v22 + 88) = v22 + 80;
            *(_QWORD *)(v22 + 80) = v22 + 80;
            MiInsertSubsectionNode(v15, v22, 0);
            v22 = *v26;
          }
          while ( *v26 );
          return 0;
        }
      }
    }
    return -1073741760;
  }
  return result;
}
