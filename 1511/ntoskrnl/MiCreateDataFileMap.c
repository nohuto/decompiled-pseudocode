/*
 * XREFs of MiCreateDataFileMap @ 0x1403C86B8
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x14000C820 (MiInsertSubsectionNode.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x1403F7C1C (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1404A2234 (FsRtlSetFileSize.c)
 */

NTSTATUS __fastcall MiCreateDataFileMap(
        PFILE_OBJECT FileObject,
        LARGE_INTEGER a2,
        _QWORD *a3,
        LARGE_INTEGER *a4,
        char a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int64 QuadPart; // rsi
  unsigned __int64 v11; // r12
  _QWORD *PoolWithTag; // rbx
  PVOID v13; // rax
  __int64 v14; // rdi
  _DWORD *v15; // rbp
  unsigned __int64 v16; // r15
  unsigned int v17; // r14d
  _DWORD *v18; // r13
  int v19; // eax
  char v20; // bp
  __int64 v21; // rdx
  __int16 v22; // ax
  __int64 v23; // rbx
  __int16 v24; // bp
  __int64 *v25; // r14
  __int16 v26; // ax
  int v27; // ecx
  NTSTATUS result; // eax
  LONGLONG v29; // rax
  _DWORD *v30; // rax
  void *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rbx
  LARGE_INTEGER FileSize; // [rsp+68h] [rbp+10h] BYREF
  _QWORD *v35; // [rsp+70h] [rbp+18h]

  v35 = a3;
  FileSize = a2;
  if ( (a8 & 1) != 0 )
  {
    QuadPart = a4->QuadPart;
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
    v29 = a4->QuadPart;
    if ( a4->QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a5 & 0x44) == 0 )
        return -1073741760;
      FileSize = *a4;
      QuadPart = v29;
      result = FsRtlSetFileSize(FileObject);
      if ( result < 0 )
        return result;
    }
LABEL_3:
    if ( QuadPart <= 0x3FFFFFFFFFF000LL )
    {
      v11 = (QuadPart + 4095) >> 12;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x6D536D4Du);
      if ( !PoolWithTag )
        return -1073741670;
      v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x61436D4Du);
      v14 = (__int64)v13;
      if ( !v13 )
      {
        v31 = PoolWithTag;
        goto LABEL_44;
      }
      memset(v13, 0, 0x100uLL);
      v15 = 0LL;
      v16 = 8 * v11;
      v17 = 0x100000;
      v18 = 0LL;
      while ( 1 )
      {
        if ( v16 < 0x100000 )
          v17 = v16;
        if ( v15 )
        {
          v30 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x63536D4Du);
          v15 = v30;
          if ( !v30 )
          {
            ExFreePoolWithTag(PoolWithTag, 0);
            v32 = *(_QWORD **)(v14 + 136);
            if ( v32 )
            {
              do
              {
                v33 = (_QWORD *)v32[2];
                ExFreePoolWithTag(v32, 0);
                v32 = v33;
              }
              while ( v33 );
            }
            v31 = (void *)v14;
LABEL_44:
            ExFreePoolWithTag(v31, 0);
            return -1073741670;
          }
          memset(v30, 0, 0x70uLL);
          *((_QWORD *)v18 + 2) = v15;
        }
        else
        {
          v15 = (_DWORD *)(v14 + 120);
        }
        v18 = v15;
        v15[11] = v17 >> 3;
        v16 -= v17;
        if ( !v16 )
        {
          *v35 = PoolWithTag;
          memset(PoolWithTag, 0, 0x30uLL);
          PoolWithTag[5] = 0LL;
          *(_QWORD *)v14 = PoolWithTag;
          *(_QWORD *)(v14 + 16) = v14 + 8;
          *(_QWORD *)(v14 + 8) = v14 + 8;
          *(_QWORD *)(v14 + 104) = 1LL;
          *(_QWORD *)(v14 + 24) = 1LL;
          v19 = (*(_DWORD *)(v14 + 60) ^ MiSystemPartition[0]) & 0x3FF;
          *(_QWORD *)(v14 + 112) = 0LL;
          *(_DWORD *)(v14 + 60) ^= v19;
          if ( (a8 & 1) != 0 )
            *(_DWORD *)(v14 + 56) |= 0x8000u;
          else
            *(_QWORD *)(v14 + 48) = 1LL;
          v20 = 6;
          *(_DWORD *)(v14 + 56) = *(_DWORD *)(v14 + 56) ^ (*(_DWORD *)(v14 + 56) ^ (a7 << 20)) & 0x3F00000 | 0x82;
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
          *PoolWithTag = v14;
          v21 = v14 + 120;
          v22 = (*((_WORD *)PoolWithTag + 6) ^ WORD2(v11)) & 0x3FF;
          PoolWithTag[3] = QuadPart;
          *((_WORD *)PoolWithTag + 6) ^= v22;
          *((_DWORD *)PoolWithTag + 2) = v11;
          *((_BYTE *)PoolWithTag + 14) ^= (*((_BYTE *)PoolWithTag + 14) ^ (2 * v20)) & 0x3E;
          v23 = 0LL;
          v24 = 2 * (v20 & 0x1F);
          do
          {
            v25 = (__int64 *)(v21 + 16);
            v26 = *(_WORD *)(v21 + 32) & 1;
            *(_QWORD *)v21 = v14;
            *(_DWORD *)(v21 + 36) = v23;
            *(_WORD *)(v21 + 32) = v24 | v26 & 0xFFC1 | (WORD2(v23) << 6);
            if ( *(_QWORD *)(v21 + 16) )
            {
              *(_DWORD *)(v21 + 40) = *(_DWORD *)(v21 + 44);
            }
            else
            {
              *(_DWORD *)(v21 + 40) = (QuadPart >> 12) - v23;
              *(_WORD *)(v21 + 34) = *(_WORD *)(v21 + 34) & 0xF | (16 * QuadPart);
              v27 = *(_DWORD *)(v21 + 44) - (v11 - v23);
              *(_DWORD *)(v21 + 44) = v11 - v23;
              *(_DWORD *)(v21 + 52) ^= (*(_DWORD *)(v21 + 52) ^ v27) & 0x7FFFFFFF;
            }
            v23 += *(unsigned int *)(v21 + 44);
            *(_QWORD *)(v21 + 88) = v21 + 80;
            *(_QWORD *)(v21 + 80) = v21 + 80;
            MiInsertSubsectionNode(v14, v21, 0LL);
            v21 = *v25;
          }
          while ( *v25 );
          return 0;
        }
      }
    }
    return -1073741760;
  }
  return result;
}
