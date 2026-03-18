/*
 * XREFs of MiCreateImageFileMap @ 0x1404FCC48
 * Callers:
 *     MiCreateNewSection @ 0x1404702B8 (MiCreateNewSection.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     PsIsCurrentThreadPrefetching @ 0x14002EB10 (PsIsCurrentThreadPrefetching.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoPageRead @ 0x140085D50 (IoPageRead.c)
 *     CcZeroEndOfLastPage @ 0x140088AE0 (CcZeroEndOfLastPage.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnmapLockedPages @ 0x1400ADB20 (MmUnmapLockedPages.c)
 *     MiCreateMdl @ 0x1400DFC50 (MiCreateMdl.c)
 *     MiInitializeImageHeaderPage @ 0x1400E0384 (MiInitializeImageHeaderPage.c)
 *     IoIsDeviceEjectable @ 0x1400E03F0 (IoIsDeviceEjectable.c)
 *     MiCopyHeaderIfResident @ 0x1400E0408 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x1400E07B8 (MiFlushDataSection.c)
 *     MiReturnPfnReferenceCount @ 0x1400E0858 (MiReturnPfnReferenceCount.c)
 *     MiGetPageForHeader @ 0x1400E1178 (MiGetPageForHeader.c)
 *     MiInitializeImageProtos @ 0x1400E3274 (MiInitializeImageProtos.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x1404711C4 (FsRtlGetFileSize.c)
 *     MiVerifyImageHeader @ 0x1404FBE4C (MiVerifyImageHeader.c)
 *     MiBuildImageControlArea @ 0x1404FC19C (MiBuildImageControlArea.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        int a2,
        unsigned int a3,
        _QWORD *a4,
        __int64 *a5,
        _DWORD *a6,
        PVOID *a7)
{
  NTSTATUS result; // eax
  ULONG_PTR Information; // r12
  struct _MDL *p_MemoryDescriptorList; // r13
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 PageForHeader; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  int Status; // r14d
  int v20; // edi
  int v21; // eax
  LARGE_INTEGER v22; // rbx
  __int64 StartVa; // rdx
  unsigned __int64 v24; // r14
  struct _MDL *v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r13
  unsigned __int64 v29; // rcx
  struct _MDL *v30; // r14
  unsigned int v31; // ebx
  __int64 v32; // r13
  unsigned __int64 v33; // r9
  __int64 v34; // rbx
  _DWORD *v35; // r11
  unsigned int v36; // r8d
  _DWORD *v37; // rcx
  unsigned int v38; // r10d
  int v39; // edx
  int v40; // edx
  __int64 v41; // rax
  int v42; // r13d
  unsigned __int64 v43; // r9
  __int64 v44; // r8
  char *v45; // r13
  ULONG_PTR v46; // rbx
  SIZE_T v47; // rcx
  struct _MDL *v48; // r14
  LARGE_INTEGER v49; // rax
  int v50; // eax
  __int64 v51; // r8
  unsigned int v52; // eax
  __int16 v53; // r14
  __int64 v54; // rdx
  bool v55; // r13
  unsigned __int64 v56; // rbx
  int v57; // ecx
  _DWORD *v58; // rbx
  bool v59; // zf
  _BYTE *v60; // rbx
  __int16 v61; // di
  PDEVICE_OBJECT DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  unsigned int v64; // r8d
  unsigned __int64 i; // rdi
  __int64 v66; // rbx
  __int64 v67; // [rsp+40h] [rbp-C0h]
  char v68; // [rsp+50h] [rbp-B0h]
  char *v69; // [rsp+58h] [rbp-A8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD *v71; // [rsp+70h] [rbp-90h]
  unsigned int v72; // [rsp+78h] [rbp-88h]
  int v73; // [rsp+7Ch] [rbp-84h]
  PFILE_OBJECT FileObjecta; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER StartingOffset; // [rsp+88h] [rbp-78h] BYREF
  PVOID P; // [rsp+90h] [rbp-70h]
  ULONG_PTR v77; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v78; // [rsp+A0h] [rbp-60h]
  __int128 v79; // [rsp+A8h] [rbp-58h] BYREF
  int v80; // [rsp+B8h] [rbp-48h]
  LARGE_INTEGER FileSize; // [rsp+C0h] [rbp-40h] BYREF
  int v82; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR v83; // [rsp+D0h] [rbp-30h]
  PVOID FsContext; // [rsp+D8h] [rbp-28h] BYREF
  ULONG Characteristics; // [rsp+E0h] [rbp-20h]
  __int16 v86; // [rsp+E4h] [rbp-1Ch]
  __int16 v87; // [rsp+E6h] [rbp-1Ah]
  struct _KEVENT Event; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD *v89; // [rsp+100h] [rbp+0h]
  __int64 *v90; // [rsp+108h] [rbp+8h]
  char *v91; // [rsp+110h] [rbp+10h]
  PVOID *p_FsContext; // [rsp+118h] [rbp+18h] BYREF
  int v93; // [rsp+120h] [rbp+20h]
  int v94; // [rsp+124h] [rbp+24h]
  struct _MDL MemoryDescriptorList; // [rsp+128h] [rbp+28h] BYREF
  __int64 v96; // [rsp+158h] [rbp+58h]
  PMDL Mdl; // [rsp+160h] [rbp+60h]
  struct _MDL *v98; // [rsp+168h] [rbp+68h]
  struct _MDL *v99; // [rsp+170h] [rbp+70h]

  v90 = a5;
  v71 = a6;
  p_FsContext = a7;
  v73 = a2;
  v98 = 0LL;
  v99 = 0LL;
  v89 = a4;
  FileObjecta = FileObject;
  Mdl = 0LL;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result < 0 )
  {
    dword_14034E980 = 1;
    if ( result == -1073741638 )
      return -1073741792;
    return result;
  }
  if ( FileSize.HighPart )
    return -1073741792;
  v78 = 1LL;
  v77 = 0LL;
  P = 0LL;
  Information = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  MemoryDescriptorList.Next = 0LL;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
  MemoryDescriptorList.StartVa = 0LL;
  *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
  PageForHeader = MiGetPageForHeader(a2, v13, v14, v15);
  v83 = PageForHeader;
  if ( PageForHeader == -1 )
    return -1073741670;
  v96 = PageForHeader;
  v69 = 0LL;
  v67 = 48 * PageForHeader - 0x58000000000LL;
  CcZeroEndOfLastPage(FileObject, 0x58000000000LL, v17, v18);
  Status = MiFlushDataSection((__int64)FileObject, &v82);
  if ( Status == -1073741740 )
    goto LABEL_152;
  v20 = v82 == 1;
  if ( (v82 == 1 || (a3 & 0x80u) != 0) && PsIsCurrentThreadPrefetching() )
  {
    dword_14034E980 = 64;
    Status = -1073740749;
    goto LABEL_152;
  }
  v21 = MiCopyHeaderIfResident((__int64)FileObject, v83);
  v22 = FileSize;
  if ( v21 == 1 )
  {
    StartVa = 0LL;
    Information = 4096LL;
    IoStatusBlock.Information = 4096LL;
    v24 = 1LL;
    goto LABEL_26;
  }
  IoStatusBlock.Information = 0LL;
  if ( (a3 & 0x20) == 0 && ((a3 & 0x400) == 0 || FileSize.LowPart > 0x20000)
    || FileObjecta->SectionObjectPointer->DataSectionObject )
  {
    v24 = 1LL;
    goto LABEL_25;
  }
  v24 = ((unsigned __int64)FileSize.LowPart + 4095) >> 12;
  v78 = v24;
  if ( v24 <= 1 )
  {
LABEL_25:
    StartVa = 0LL;
    goto LABEL_26;
  }
  v25 = MiCreateMdl(v24 << 12);
  Information = IoStatusBlock.Information;
  Mdl = v25;
  if ( v25 )
  {
    StartVa = (__int64)v25->StartVa;
    p_MemoryDescriptorList = v25;
    v69 = (char *)StartVa;
  }
  else
  {
    StartVa = 0LL;
    v24 = 1LL;
    v78 = 1LL;
  }
LABEL_26:
  if ( (p_MemoryDescriptorList->MdlFlags & 2) != 0 )
  {
    v69 = (char *)MmMapLockedPagesSpecifyCache(p_MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
    StartVa = (__int64)v69;
    if ( !v69 )
    {
      dword_14034E980 = 37;
      Status = -1073741670;
LABEL_151:
      Information = 0LL;
      goto LABEL_152;
    }
    Information = IoStatusBlock.Information;
    Mdl = p_MemoryDescriptorList;
  }
  if ( !Information )
  {
    StartingOffset.QuadPart = 0LL;
    Status = IoPageRead(FileObjecta, p_MemoryDescriptorList, &StartingOffset, &Event, &IoStatusBlock);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
    {
      dword_14034E980 = 2;
      goto LABEL_35;
    }
    v24 = v78;
    Information = IoStatusBlock.Information;
    if ( IoStatusBlock.Information != v78 << 12 )
    {
      if ( IoStatusBlock.Information < 0x40 )
      {
        Status = -1073741521;
        dword_14034E980 = 38;
        goto LABEL_151;
      }
      memset(&v69[IoStatusBlock.Information], 0, (v78 << 12) - IoStatusBlock.Information);
      Information = IoStatusBlock.Information;
    }
    StartVa = (__int64)v69;
  }
  if ( *(_WORD *)StartVa != 23117 )
  {
    Status = -1073741521;
    goto LABEL_151;
  }
  v27 = *(unsigned int *)(StartVa + 60);
  v72 = v27;
  if ( (int)v27 + 264 < (unsigned int)v27 )
  {
    Status = -1073741520;
    dword_14034E980 = 6;
    goto LABEL_151;
  }
  v28 = v27;
  v29 = v27 + 264;
  if ( v29 > v22.QuadPart )
  {
    Status = -1073741520;
    dword_14034E980 = 5;
    goto LABEL_151;
  }
  if ( v29 <= v24 << 12 )
  {
    if ( v29 > Information )
    {
      Status = -1073741520;
      dword_14034E980 = 39;
      goto LABEL_151;
    }
    v34 = StartVa + v28;
    v33 = Information - v28;
  }
  else
  {
    v98 = MiCreateMdl(0x2000uLL);
    v30 = v98;
    if ( !v98 )
    {
      Status = -1073741670;
      dword_14034E980 = 7;
      goto LABEL_151;
    }
    v31 = v28 & 0xFFFFF000;
    StartingOffset.QuadPart = (unsigned int)v28 & 0xFFFFF000;
    KeResetEvent(&Event);
    IoStatusBlock.Information = 0LL;
    Status = IoPageRead(FileObjecta, v30, &StartingOffset, &Event, &IoStatusBlock);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
    {
      dword_14034E980 = 8;
      goto LABEL_35;
    }
    if ( IoStatusBlock.Information != 0x2000 && IoStatusBlock.Information < (unsigned __int64)(v28 & 0xFFF) + 264 )
    {
      Status = -1073741520;
      dword_14034E980 = 24;
      goto LABEL_151;
    }
    v32 = v28 & 0xFFF;
    StartVa = (__int64)v69;
    v33 = IoStatusBlock.Information - v32;
    Information = v31 + IoStatusBlock.Information;
    v91 = (char *)v98->StartVa + v32;
    IoStatusBlock.Information = Information;
    v34 = (__int64)v91;
  }
  Status = MiVerifyImageHeader((__int64)v71, v34, StartVa, v33);
  if ( Status )
  {
    dword_14034E980 = 9;
    goto LABEL_151;
  }
  v35 = v71;
  if ( v71[6] >= v71[4] )
  {
    dword_14034E980 = 16;
LABEL_150:
    Status = -1073741701;
    goto LABEL_151;
  }
  v36 = v72;
  v37 = p_FsContext;
  *(_DWORD *)p_FsContext = v72 + 48;
  if ( *((_WORD *)v35 + 24) == 267 )
    *v37 = v36 + 52;
  v38 = v35[4];
  if ( !(((v38 & 0xFFF) != 0) + (v38 >> 12)) )
  {
    dword_14034E980 = 10;
    goto LABEL_150;
  }
  v39 = *(_DWORD *)(v34 + 20);
  v80 = v39;
  v79 = *(_OWORD *)(v34 + 4);
  if ( (v39 & 7) != 0 )
  {
    dword_14034E980 = 14;
    goto LABEL_150;
  }
  if ( (unsigned __int16)*v35 )
  {
    dword_14034E980 = 15;
    goto LABEL_150;
  }
  if ( (_WORD)v79 == 332 || (_WORD)v79 == 0x8664 )
  {
    if ( (v39 & 0x10000) != 0 && (v35[15] & 0x1000) != 0 )
      goto LABEL_78;
  }
  else
  {
    if ( (v39 & 0x10000) != 0 )
    {
LABEL_78:
      dword_14034E980 = 23;
      goto LABEL_150;
    }
    if ( (v35[15] & 0x140) != 0x140 )
    {
      dword_14034E980 = 44;
      goto LABEL_150;
    }
  }
  v40 = (unsigned __int16)v80 + 24;
  if ( v36 + v40 + 40 * WORD1(v79) <= v36 )
  {
    dword_14034E980 = 52;
    goto LABEL_150;
  }
  v41 = v40 + v36;
  v42 = v40 + v36;
  v43 = (unsigned int)v35[6];
  v44 = 40LL * WORD1(v79);
  if ( v43 < v44 + v41 )
    LODWORD(v43) = v44 + v41;
  v72 = v43;
  if ( (unsigned int)v43 > v38 )
  {
    dword_14034E980 = 48;
    goto LABEL_150;
  }
  if ( v44 + v41 > Information )
  {
    v46 = v44 + ((v40 + (int)v34) & 0xFFFLL);
    if ( v46 - 1 > 0xFFFFFFFE || (v47 = (v46 + 4095) & 0xFFFFFFFFFFFFF000uLL, v46 > v47) )
    {
      dword_14034E980 = 53;
      goto LABEL_150;
    }
    v99 = MiCreateMdl(v47);
    v48 = v99;
    if ( !v99 )
    {
      Status = -1073741670;
      dword_14034E980 = 18;
      goto LABEL_151;
    }
    v49.QuadPart = v42 & 0xFFFFF000;
    v45 = (char *)v99->StartVa + (v42 & 0xFFF);
    StartingOffset = v49;
    KeResetEvent(&Event);
    IoStatusBlock.Information = 0LL;
    Status = IoPageRead(FileObjecta, v48, &StartingOffset, &Event, &IoStatusBlock);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
    {
      dword_14034E980 = 19;
LABEL_35:
      if ( Status != -1073741740 )
      {
        Information = 0LL;
        v26 = v67;
        if ( Status != -1073741209 )
          Status = -1073741792;
        goto LABEL_153;
      }
      goto LABEL_151;
    }
    if ( IoStatusBlock.Information < v46 )
    {
      dword_14034E980 = 40;
      goto LABEL_150;
    }
    v35 = v71;
  }
  else
  {
    LODWORD(v45) = v34 + v40;
  }
  if ( v35[3] < 0x1000u )
  {
    if ( (a3 & 0x20000) != 0 || (_WORD)v79 != 332 && (_WORD)v79 != 0x8664 )
    {
      dword_14034E980 = 22;
      goto LABEL_150;
    }
    v20 |= 8u;
  }
  v50 = MiBuildImageControlArea(v20, v73, (int)v45, (__int64)v35, &v79, a3, (unsigned int *)&FileSize, &v77);
  Information = v77;
  Status = v50;
  if ( v50 >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v77 + 56LL) + 64LL) = v72;
    if ( (a3 & 0x200) != 0 )
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)Information + 56LL) + 51LL) |= 0x10u;
    v51 = *(_QWORD *)Information;
    P = *(PVOID *)Information;
    if ( v98 || v99 || (v20 & 8) != 0 || (v52 = v71[6], v52 >= 0x1000) )
    {
      v68 = 0;
    }
    else
    {
      if ( (v52 & 0x1FF) != 0 )
        ++*(_QWORD *)(v51 + 16);
      v68 = 1;
    }
    v53 = HIWORD(v80);
    v73 = v20 & 1;
    v55 = (v20 & 1) != 0
       || (a3 & 0x80u) != 0
       || IoIsDeviceEjectable((__int64)FileObjecta->DeviceObject)
       || (v53 & 0x400) != 0 && (*(_DWORD *)(v54 + 52) & 1) != 0
       || (v53 & 0x800) != 0 && (*(_DWORD *)(v54 + 52) & 0x10) != 0;
    v56 = *(_QWORD *)(v51 + 16);
    if ( v56 )
    {
      if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v56, 0) )
      {
        dword_14034E980 = 35;
        Status = -1073741523;
        goto LABEL_152;
      }
      _InterlockedExchangeAdd64(&qword_14034FD10, v56);
      Information = v77;
      v53 = HIWORD(v80);
    }
    v57 = *(_DWORD *)(Information + 56);
    v58 = v71;
    if ( (v57 & 0x20000) != 0 && (v20 & 8) == 0 && (v71[5] & 0x1000000) == 0 )
      *(_DWORD *)(Information + 56) = v57 | 0x4000000;
    if ( v78 > 1 )
      MiInitializeImageProtos(Information, (__int64)Mdl, v67);
    if ( v68 == 1 )
      MiInitializeImageHeaderPage(v83, (unsigned int)v58[6]);
    v59 = *((_WORD *)v58 + 24) == 267;
    v60 = P;
    if ( v59 )
      *((_BYTE *)P + 14) |= 0x40u;
    if ( v55 )
    {
      v60[14] |= 1u;
      if ( v73 || (a3 & 0x80u) != 0 )
        *(_DWORD *)(Information + 56) |= 0x40000u;
      if ( (PerfGlobalGroupMask & 4) != 0 )
      {
        v61 = v20 & 1;
        v86 = v53;
        DeviceObject = FileObjecta->DeviceObject;
        FsContext = FileObjecta->FsContext;
        Characteristics = DeviceObject->Characteristics;
        v87 = v61;
        IsDeviceEjectable = IoIsDeviceEjectable((__int64)DeviceObject);
        v94 = 0;
        v93 = 16;
        p_FsContext = &FsContext;
        v87 = (4 * ((a3 >> 7) & 1)) | v61 & 0xFFF9 | (2 * IsDeviceEjectable) & 0xFB;
        EtwTraceKernelEvent((int)&p_FsContext, 1, v64, 0x269u, 4200450);
      }
    }
    Status = 0;
    v26 = v67;
    *v89 = v60;
    *v90 = v67;
    goto LABEL_153;
  }
LABEL_152:
  v26 = v67;
LABEL_153:
  for ( i = 0LL; i < 3; ++i )
  {
    v66 = (__int64)*(&Mdl + i);
    if ( v66 )
    {
      if ( (*(_BYTE *)(v66 + 10) & 1) != 0 )
      {
        MmUnmapLockedPages(*(PVOID *)(v66 + 24), *(&Mdl + i));
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(v66 + 32), 0);
        IoFreeMdl((PMDL)v66);
      }
    }
  }
  if ( Status < 0 )
  {
    MiReturnPfnReferenceCount(v26);
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( Information )
      ExFreePoolWithTag((PVOID)Information, 0);
  }
  return Status;
}
