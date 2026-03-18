/*
 * XREFs of MiCreateDataFileMap @ 0x1404706C4
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 * Callees:
 *     MiInsertSubsectionNode @ 0x14002EB28 (MiInsertSubsectionNode.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x1404711C4 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x1404B1144 (FsRtlSetFileSize.c)
 */

NTSTATUS __fastcall MiCreateDataFileMap(
        PFILE_OBJECT FileObject,
        _QWORD *a2,
        LARGE_INTEGER *a3,
        char a4,
        int a5,
        int a6,
        int a7)
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
  char v19; // bp
  __int64 v20; // rdx
  __int16 v21; // ax
  __int64 v22; // rbx
  __int16 v23; // bp
  __int64 *v24; // r14
  __int16 v25; // ax
  __int16 v26; // cx
  int v27; // ecx
  NTSTATUS result; // eax
  LONGLONG v29; // rax
  _DWORD *v30; // rax
  void *v31; // rcx
  _QWORD *v32; // rcx
  _QWORD *v33; // rbx
  LARGE_INTEGER FileSize; // [rsp+20h] [rbp-38h] BYREF

  if ( (a7 & 1) != 0 )
  {
    QuadPart = a3->QuadPart;
    goto LABEL_3;
  }
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result == -1073741638 )
    return -1073741792;
  if ( result >= 0 )
  {
    QuadPart = FileSize.QuadPart;
    if ( !FileSize.QuadPart && !a3->QuadPart )
      return -1073741538;
    v29 = a3->QuadPart;
    if ( a3->QuadPart > (unsigned __int64)FileSize.QuadPart )
    {
      if ( (a4 & 0x44) == 0 )
        return -1073741760;
      FileSize = *a3;
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
          *a2 = PoolWithTag;
          memset(PoolWithTag, 0, 0x30uLL);
          PoolWithTag[5] = 0LL;
          *(_QWORD *)v14 = PoolWithTag;
          *(_QWORD *)(v14 + 16) = v14 + 8;
          *(_QWORD *)(v14 + 8) = v14 + 8;
          *(_QWORD *)(v14 + 104) = 1LL;
          *(_QWORD *)(v14 + 24) = 1LL;
          *(_QWORD *)(v14 + 112) = 0LL;
          if ( (a7 & 1) != 0 )
            *(_DWORD *)(v14 + 56) |= 0x8000u;
          else
            *(_QWORD *)(v14 + 48) = 1LL;
          *(_DWORD *)(v14 + 56) = *(_DWORD *)(v14 + 56) ^ (*(_DWORD *)(v14 + 56) ^ (a6 << 20)) & 0x3F00000 | 0x82;
          v19 = dword_14034E7B4;
          if ( (a7 & 0x10000) == 0 )
          {
            if ( (a5 & 0x10000000) != 0 )
            {
              *((_WORD *)PoolWithTag + 6) |= 0x8000u;
              v19 |= 8u;
            }
            else if ( (a5 & 0x40000000) != 0 )
            {
              *((_WORD *)PoolWithTag + 6) |= 0x4000u;
              v19 |= 0x18u;
            }
          }
          *PoolWithTag = v14;
          v20 = v14 + 120;
          v21 = (*((_WORD *)PoolWithTag + 6) ^ WORD2(v11)) & 0x3FF;
          PoolWithTag[3] = QuadPart;
          *((_WORD *)PoolWithTag + 6) ^= v21;
          *((_DWORD *)PoolWithTag + 2) = v11;
          *((_BYTE *)PoolWithTag + 14) ^= (*((_BYTE *)PoolWithTag + 14) ^ (2 * v19)) & 0x3E;
          v22 = 0LL;
          v23 = 2 * (v19 & 0x1F);
          do
          {
            v24 = (__int64 *)(v20 + 16);
            v25 = *(_WORD *)(v20 + 32) & 1;
            *(_QWORD *)v20 = v14;
            *(_DWORD *)(v20 + 36) = v22;
            *(_WORD *)(v20 + 32) = v23 | v25 & 0xFFC1 | (WORD2(v22) << 6);
            if ( *(_QWORD *)(v20 + 16) )
            {
              *(_DWORD *)(v20 + 40) = *(_DWORD *)(v20 + 44);
            }
            else
            {
              v26 = *(_WORD *)(v20 + 34) & 0xF;
              *(_DWORD *)(v20 + 40) = (QuadPart >> 12) - v22;
              *(_WORD *)(v20 + 34) = (16 * QuadPart) | v26;
              v27 = *(_DWORD *)(v20 + 44) - (v11 - v22);
              *(_DWORD *)(v20 + 44) = v11 - v22;
              *(_DWORD *)(v20 + 52) = v27;
            }
            v22 += *(unsigned int *)(v20 + 44);
            *(_QWORD *)(v20 + 88) = v20 + 80;
            *(_QWORD *)(v20 + 80) = v20 + 80;
            MiInsertSubsectionNode(v14, v20, 0LL);
            v20 = *v24;
          }
          while ( *v24 );
          return 0;
        }
      }
    }
    return -1073741760;
  }
  return result;
}
