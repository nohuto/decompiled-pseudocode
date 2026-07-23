/*
 * XREFs of IopLiveDumpWriteDumpFileWithHvPages @ 0x1406278E0
 * Callers:
 *     IoCaptureLiveDump @ 0x140625FE4 (IoCaptureLiveDump.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x140095EC4 (RtlClearAllBitsEx.c)
 *     RtlNumberOfSetBitsEx @ 0x14013B248 (RtlNumberOfSetBitsEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopLiveDumpAllocNonPagedPool @ 0x1401CAD8C (IopLiveDumpAllocNonPagedPool.c)
 *     SecureDump_Get_SecureDumpHeader @ 0x1401CB844 (SecureDump_Get_SecureDumpHeader.c)
 *     RtlMergeBitMapsEx @ 0x140212F00 (RtlMergeBitMapsEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MmFreeIndependentPages @ 0x1403E1F14 (MmFreeIndependentPages.c)
 *     IopLiveDumpCheckTermination @ 0x140626FD4 (IopLiveDumpCheckTermination.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14062708C (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpGetHvMergePages @ 0x1406271AC (IopLiveDumpGetHvMergePages.c)
 *     IopLiveDumpGetNtMergePages @ 0x140627318 (IopLiveDumpGetNtMergePages.c)
 *     IopLiveDumpWriteBuffer @ 0x140627614 (IopLiveDumpWriteBuffer.c)
 */

__int64 __fastcall IopLiveDumpWriteDumpFileWithHvPages(__int64 a1)
{
  __int64 v2; // rcx
  void *v3; // r12
  _OWORD *v4; // r15
  __int64 v5; // rsi
  LARGE_INTEGER v6; // rax
  void *v7; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  char HvMergePages; // al
  int v10; // r13d
  unsigned __int64 *v11; // r8
  int v12; // r14d
  __int64 *v13; // rax
  int SecureDumpHeader; // ebx
  unsigned __int64 *v15; // r8
  unsigned __int64 *v16; // r9
  char v17; // r10
  __int64 v18; // r11
  ULONG v19; // ebx
  char v20; // al
  __int64 v21; // rbx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  char *v24; // rax
  char *v25; // rdx
  bool v26; // zf
  _OWORD *v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  int v30; // eax
  unsigned int v31; // r14d
  int v32; // r12d
  unsigned int v33; // ebx
  SIZE_T v34; // rcx
  _DWORD *v35; // rax
  ULONG v36; // r8d
  void *v37; // rdx
  HANDLE v38; // rsi
  ULONG v39; // r8d
  char v41; // [rsp+38h] [rbp-D0h]
  char v42; // [rsp+39h] [rbp-CFh]
  char v43; // [rsp+3Ah] [rbp-CEh]
  LARGE_INTEGER ByteOffset; // [rsp+40h] [rbp-C8h] BYREF
  int v45; // [rsp+48h] [rbp-C0h] BYREF
  int v46; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int64 *v47; // [rsp+50h] [rbp-B8h]
  char *v48; // [rsp+58h] [rbp-B0h] BYREF
  char *v49; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-A0h]
  __int64 *v51; // [rsp+70h] [rbp-98h]
  __int64 v52; // [rsp+78h] [rbp-90h]
  __int64 v53; // [rsp+80h] [rbp-88h] BYREF
  __int64 v54; // [rsp+88h] [rbp-80h] BYREF
  PVOID Buffer; // [rsp+90h] [rbp-78h]
  __int64 v56; // [rsp+A0h] [rbp-68h] BYREF
  struct _KTHREAD *v57; // [rsp+A8h] [rbp-60h]
  void *v58; // [rsp+B0h] [rbp-58h]
  __int64 v59; // [rsp+B8h] [rbp-50h]
  __int128 v60; // [rsp+C0h] [rbp-48h] BYREF
  int Src; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v62; // [rsp+D4h] [rbp-34h]
  int v63; // [rsp+E4h] [rbp-24h]
  ULONG v64; // [rsp+E8h] [rbp-20h]
  int v65; // [rsp+ECh] [rbp-1Ch]
  _BYTE v66[512]; // [rsp+F8h] [rbp-10h] BYREF
  unsigned __int64 v67[64]; // [rsp+2F8h] [rbp+1F0h] BYREF

  v2 = a1 + 488;
  v58 = 0LL;
  v3 = 0LL;
  v59 = v2;
  v4 = 0LL;
  v5 = *(_QWORD *)(a1 + 384);
  if ( *(_BYTE *)(a1 + 640) )
    v6.QuadPart = *(_QWORD *)(v5 + 8224) + *(unsigned int *)(a1 + 648);
  else
    v6 = *(LARGE_INTEGER *)(v5 + 8224);
  v7 = *(void **)(a1 + 64);
  ByteOffset = v6;
  v52 = 0LL;
  v41 = 0;
  FileHandle = v7;
  CurrentThread = KeGetCurrentThread();
  v56 = -1LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  v57 = CurrentThread;
  IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v66, &v48, &v45, &v53);
  v51 = (__int64 *)v66;
  RtlClearAllBitsEx((PRTL_BITMAP_EX)(a1 + 440));
  HvMergePages = IopLiveDumpGetHvMergePages(a1, v67, &v49, &v46, &v54);
  v10 = v45;
  v11 = v67;
  v12 = v46;
  v47 = v67;
  v42 = HvMergePages;
  while ( v12 || v10 )
  {
    if ( v10 )
    {
      v13 = &v56;
      if ( v12 )
        v13 = (__int64 *)v11;
      v47 = (unsigned __int64 *)v13;
    }
    else
    {
      v51 = &v56;
    }
    SecureDumpHeader = IopLiveDumpCheckTermination(a1, (__int64)CurrentThread);
    if ( SecureDumpHeader < 0 )
      goto LABEL_72;
    if ( v12 && v15[v12 - 1] < *v16 )
    {
      Buffer = v49;
      v19 = v12 << 12;
LABEL_16:
      v41 = v17;
      v52 = v54;
      v20 = IopLiveDumpGetHvMergePages(a1, v67, &v49, &v46, &v54);
      v12 = v46;
      v42 = v20;
      v47 = v67;
      goto LABEL_17;
    }
    if ( v10 && v16[v10 - 1] < *v15 )
    {
      Buffer = v48;
      v52 = v53;
      v19 = v10 << 12;
      v41 = 1;
      IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v66, &v48, &v45, &v53);
      v10 = v45;
      v51 = (__int64 *)v66;
      goto LABEL_17;
    }
    v22 = *v16;
    v19 = v18;
    v23 = *v15;
    v43 = 0;
    if ( *v16 >= *v15 )
    {
      v25 = v49;
      Buffer = v49;
      v43 = 1;
      if ( v23 != v22 )
        goto LABEL_32;
      v24 = v48;
    }
    else
    {
      v24 = v48;
      Buffer = v48;
    }
    v26 = v10-- == 1;
    v45 = v10;
    if ( v26 )
    {
      v41 = 1;
      v52 = v53;
      IopLiveDumpGetNtMergePages((_RTL_BITMAP_EX *)a1, (__int64)v66, &v48, &v45, &v53);
      v10 = v45;
      v15 = v47;
      v18 = 4096LL;
      v17 = v42;
      v51 = (__int64 *)v66;
    }
    else
    {
      v48 = &v24[v18];
      v51 = (__int64 *)(v16 + 1);
    }
    if ( !v43 )
      goto LABEL_17;
    v25 = v49;
LABEL_32:
    v26 = v12-- == 1;
    v46 = v12;
    if ( v26 )
      goto LABEL_16;
    v49 = &v25[v18];
    v47 = v15 + 1;
LABEL_17:
    SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, Buffer, v19, &ByteOffset, a1, 0);
    if ( SecureDumpHeader < 0 )
      goto LABEL_72;
    v11 = v47;
    CurrentThread = v57;
    if ( v41 )
    {
      v21 = v52;
      MmFreeIndependentPages(*(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v52), 0x40000uLL);
      v11 = v47;
      *(_QWORD *)(*(_QWORD *)(a1 + 552) + 8 * v21) = 0LL;
      CurrentThread = v57;
      v41 = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 640) )
  {
    v27 = IopLiveDumpAllocNonPagedPool(0x1000uLL);
    v4 = v27;
    if ( !v27 )
    {
      SecureDumpHeader = -1073741670;
      goto LABEL_72;
    }
    memset(v27, 0, 0x1000uLL);
  }
  LODWORD(v60) = 1886221636;
  *(_QWORD *)((char *)&v60 + 4) = 0x10626F6C42LL;
  HIDWORD(v60) = -268421063;
  if ( *(_BYTE *)(a1 + 640) )
  {
    v28 = 16LL;
    *v4 = v60;
    goto LABEL_42;
  }
  SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, &v60, 0x10u, &ByteOffset, a1, 1);
  if ( SecureDumpHeader >= 0 )
  {
    v28 = 0LL;
LABEL_42:
    v29 = *(_OWORD *)(a1 + 144);
    v30 = *(_DWORD *)(a1 + 168);
    v26 = *(_BYTE *)(a1 + 640) == 0;
    v31 = 32;
    v65 = 0;
    v62 = v29;
    Src = 32;
    v63 = v30;
    if ( v26 )
    {
      v64 = ((ByteOffset.LowPart + 4127) & 0xFFFFF000) - ByteOffset.LowPart;
      SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, &Src, 0x20u, &ByteOffset, a1, 1);
      if ( SecureDumpHeader >= 0 )
      {
        ByteOffset.QuadPart += v64;
        goto LABEL_53;
      }
    }
    else
    {
      v32 = (v28 + 4127) & 0xFFFFF000;
      v64 = v32 - v28 - 32;
      if ( (unsigned int)(4096 - v28) < 0x20 )
        v31 = 4096 - v28;
      memmove(&v4[(unsigned __int64)v28 / 0x10], &Src, v31);
      while ( v32 )
      {
        SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, v4, 0x1000u, &ByteOffset, a1, 0);
        if ( SecureDumpHeader < 0 )
          goto LABEL_70;
        v32 -= 4096;
        memset(v4, 0, 0x1000uLL);
        if ( v31 != Src )
        {
          v33 = Src - v31;
          if ( Src - v31 > 0x1000 )
            v33 = 4096;
          memmove(v4, (char *)&Src + v31, v33);
          v31 += v33;
        }
      }
      v3 = v58;
LABEL_53:
      SecureDumpHeader = IopLiveDumpWriteBuffer(
                           FileHandle,
                           *(PVOID *)(a1 + 160),
                           *(_DWORD *)(a1 + 168),
                           &ByteOffset,
                           a1,
                           0);
      if ( SecureDumpHeader >= 0 )
      {
        RtlMergeBitMapsEx((unsigned __int64 *)(a1 + 368), (unsigned __int64 *)(a1 + 440));
        *(_DWORD *)(v5 + 0x2000) = 1347241043;
        *(_DWORD *)(v5 + 8196) = 1347245380;
        *(_QWORD *)(v5 + 8232) = RtlNumberOfSetBitsEx((_QWORD *)(a1 + 368));
        if ( *(_BYTE *)(a1 + 640) )
          *(_QWORD *)(v5 + 4000) = ByteOffset.QuadPart - *(unsigned int *)(a1 + 648);
        else
          *(LARGE_INTEGER *)(v5 + 4000) = ByteOffset;
        *(_DWORD *)(v5 + 4176) |= 0x10u;
        if ( *(_BYTE *)(a1 + 640) )
        {
          v34 = *(unsigned int *)(a1 + 648);
          ByteOffset.QuadPart = v34;
          v35 = IopLiveDumpAllocNonPagedPool(v34);
          v3 = v35;
          if ( !v35 )
          {
            SecureDumpHeader = -1073741670;
            goto LABEL_70;
          }
          SecureDumpHeader = SecureDump_Get_SecureDumpHeader(v5, v35, *(_DWORD *)(a1 + 648));
          if ( SecureDumpHeader >= 0 )
          {
LABEL_65:
            v36 = *(_DWORD *)(v5 + 8224);
            v37 = (void *)v5;
            v38 = FileHandle;
            SecureDumpHeader = IopLiveDumpWriteBuffer(FileHandle, v37, v36, &ByteOffset, a1, 0);
            if ( SecureDumpHeader >= 0 && *(_BYTE *)(a1 + 640) )
            {
              v39 = *(_DWORD *)(a1 + 648);
              ByteOffset.QuadPart = 0LL;
              SecureDumpHeader = IopLiveDumpWriteBuffer(v38, v3, v39, &ByteOffset, a1, 1);
            }
          }
          if ( v3 )
            ExFreePoolWithTag(v3, 0);
          goto LABEL_70;
        }
        ByteOffset.QuadPart = 0LL;
        goto LABEL_65;
      }
    }
  }
LABEL_70:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_72:
  IopLiveDumpFreeDumpBuffers(v59);
  return (unsigned int)SecureDumpHeader;
}
