/*
 * XREFs of MiCreateImageFileMap @ 0x1403C9488
 * Callers:
 *     MiCreateNewSection @ 0x1403C8128 (MiCreateNewSection.c)
 * Callees:
 *     MiLegacyImageArchitecture @ 0x140006E10 (MiLegacyImageArchitecture.c)
 *     ObFastReplaceObject @ 0x14000D374 (ObFastReplaceObject.c)
 *     MiFlushDataSection @ 0x14000E728 (MiFlushDataSection.c)
 *     MiCopyHeaderIfResident @ 0x14000E7B8 (MiCopyHeaderIfResident.c)
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x140011920 (MiGetPageForHeader.c)
 *     IoIsDeviceEjectable @ 0x140011D7C (IoIsDeviceEjectable.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     CcZeroEndOfLastPage @ 0x14003D0A0 (CcZeroEndOfLastPage.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     MiCreateMdl @ 0x1400C86FC (MiCreateMdl.c)
 *     PsIsCurrentThreadPrefetching @ 0x1400DD130 (PsIsCurrentThreadPrefetching.c)
 *     MiInitializeImageHeaderPage @ 0x1400EB630 (MiInitializeImageHeaderPage.c)
 *     MiReturnPfnReferenceCount @ 0x1400EC1DC (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiBuildImageControlArea @ 0x1403C9B5C (MiBuildImageControlArea.c)
 *     FsRtlGetFileSize @ 0x1403F7C1C (FsRtlGetFileSize.c)
 *     MiVerifyImageHeader @ 0x1404ACC70 (MiVerifyImageHeader.c)
 *     MiLogCreateImageFileMapFailure @ 0x140623B00 (MiLogCreateImageFileMapFailure.c)
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 *     MiCopyDirectMapHeader @ 0x14062C788 (MiCopyDirectMapHeader.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 *a6,
        _DWORD *a7,
        PVOID *a8)
{
  NTSTATUS result; // eax
  __int64 *v12; // r12
  ULONG_PTR Information; // r14
  struct _MDL *p_MemoryDescriptorList; // rsi
  __int64 PageForHeader; // rax
  unsigned int *StartVa; // r13
  LARGE_INTEGER v17; // rdi
  NTSTATUS Status; // esi
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  ULONG_PTR v22; // rcx
  char *v23; // r8
  ULONG_PTR v24; // r9
  char *v25; // rdi
  _DWORD *v26; // r11
  BOOL v27; // r9d
  _DWORD *v28; // rcx
  BOOL v29; // eax
  unsigned int v30; // r9d
  _DWORD *v31; // r11
  unsigned int v32; // edx
  unsigned int v33; // edx
  BOOL v34; // r10d
  int v35; // edx
  int v36; // r13d
  __int64 v37; // rcx
  PFILE_OBJECT v38; // r14
  char *v39; // r13
  int v40; // eax
  __int64 v41; // r8
  bool v42; // si
  unsigned int v43; // eax
  __int16 v44; // r14
  __int64 v45; // rdx
  bool v46; // r13
  unsigned __int64 v47; // rdi
  int v48; // r8d
  _DWORD *v49; // rdi
  __int64 v50; // r13
  unsigned __int64 i; // rdi
  __int64 v52; // rbx
  unsigned __int64 v53; // rax
  struct _MDL *v54; // rax
  struct _MDL *v55; // rsi
  unsigned int v56; // edi
  __int64 v57; // r13
  ULONG_PTR v58; // rdi
  SIZE_T v59; // rcx
  struct _MDL *v60; // rsi
  LARGE_INTEGER v61; // rax
  PDEVICE_OBJECT DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  __int16 v64; // dx
  unsigned int v65; // r8d
  PFILE_OBJECT v66; // rax
  ULONG_PTR v67; // rbx
  _BYTE *P; // [rsp+40h] [rbp-C0h]
  __int64 v69; // [rsp+48h] [rbp-B8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-B0h] BYREF
  PFILE_OBJECT FileObjecta; // [rsp+60h] [rbp-A0h]
  int v72; // [rsp+68h] [rbp-98h]
  BOOL v73; // [rsp+6Ch] [rbp-94h]
  _DWORD *v74; // [rsp+70h] [rbp-90h]
  unsigned __int64 v75; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER StartingOffset; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v77; // [rsp+88h] [rbp-78h]
  PVOID v78; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER FileSize; // [rsp+98h] [rbp-68h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-60h]
  __int128 v81; // [rsp+A8h] [rbp-58h] BYREF
  int v82; // [rsp+B8h] [rbp-48h]
  PVOID FsContext; // [rsp+C0h] [rbp-40h] BYREF
  ULONG Characteristics; // [rsp+C8h] [rbp-38h]
  __int16 v85; // [rsp+CCh] [rbp-34h]
  __int16 v86; // [rsp+CEh] [rbp-32h]
  struct _KEVENT Event; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD *v88; // [rsp+E8h] [rbp-18h]
  __int64 *v89; // [rsp+F0h] [rbp-10h]
  char *v90; // [rsp+F8h] [rbp-8h]
  PVOID *p_FsContext; // [rsp+100h] [rbp+0h] BYREF
  int v92; // [rsp+108h] [rbp+8h]
  int v93; // [rsp+10Ch] [rbp+Ch]
  struct _MDL MemoryDescriptorList; // [rsp+110h] [rbp+10h] BYREF
  __int64 v95; // [rsp+140h] [rbp+40h]
  PMDL Mdl; // [rsp+148h] [rbp+48h]
  struct _MDL *v97; // [rsp+150h] [rbp+50h]
  struct _MDL *v98; // [rsp+158h] [rbp+58h]

  Mdl = 0LL;
  v88 = a5;
  v89 = a6;
  v74 = a7;
  p_FsContext = a8;
  v97 = 0LL;
  v98 = 0LL;
  v72 = a3;
  FileObjecta = FileObject;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result >= 0 )
  {
    if ( FileSize.HighPart )
      return -1073741792;
    v12 = 0LL;
    v75 = 1LL;
    Information = 0LL;
    v78 = 0LL;
    P = 0LL;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_DWORD *)&MemoryDescriptorList.Size = 1073872952;
    MemoryDescriptorList.Next = 0LL;
    p_MemoryDescriptorList = &MemoryDescriptorList;
    MemoryDescriptorList.StartVa = 0LL;
    *(_QWORD *)&MemoryDescriptorList.ByteCount = 4096LL;
    PageForHeader = MiGetPageForHeader((__int64)MiSystemPartition, a3);
    v80 = PageForHeader;
    if ( PageForHeader == -1 )
      return -1073741670;
    v95 = PageForHeader;
    StartVa = 0LL;
    v69 = 48 * PageForHeader - 0x58000000000LL;
    v77 = 0LL;
    CcZeroEndOfLastPage(FileObject);
    if ( (unsigned int)MiFlushDataSection((__int64)FileObject) )
      a4 |= 0x40000u;
    if ( (a4 & 0x40080) != 0 && PsIsCurrentThreadPrefetching() )
    {
      dword_1402FE4B8 = 64;
      Status = -1073740749;
      goto LABEL_91;
    }
    IoStatusBlock.Information = 0LL;
    if ( (a4 & 0x10000) != 0 )
    {
      if ( (unsigned int)MiCopyDirectMapHeader(FileObject, v80) == 1 )
      {
        Information = 4096LL;
        IoStatusBlock.Information = 4096LL;
      }
      else
      {
        Information = IoStatusBlock.Information;
        a4 &= ~0x10000u;
      }
    }
    v17 = FileSize;
    if ( (a4 & 0x10000) == 0 )
    {
      if ( (unsigned int)MiCopyHeaderIfResident((__int64)FileObjecta, v80) == 1 )
      {
        Information = 4096LL;
        IoStatusBlock.Information = 4096LL;
      }
      else if ( ((a4 & 0x20) != 0 || (a4 & 0x400) != 0 && v17.LowPart <= 0x20000)
             && !FileObjecta->SectionObjectPointer->DataSectionObject
             && (v53 = ((unsigned __int64)v17.LowPart + 4095) >> 12, v75 = v53, v53 > 1) )
      {
        v54 = MiCreateMdl(v53 << 12);
        Information = IoStatusBlock.Information;
        Mdl = v54;
        if ( v54 )
        {
          StartVa = (unsigned int *)v54->StartVa;
          p_MemoryDescriptorList = v54;
          v77 = StartVa;
        }
        else
        {
          v75 = 1LL;
        }
      }
      else
      {
        Information = IoStatusBlock.Information;
      }
    }
    if ( (p_MemoryDescriptorList->MdlFlags & 2) != 0 )
    {
      v77 = (unsigned int *)MmMapLockedPagesSpecifyCache(p_MemoryDescriptorList, 0, MmCached, 0LL, 0, 0x40000020u);
      StartVa = v77;
      if ( !v77 )
      {
        dword_1402FE4B8 = 37;
        Status = -1073741670;
        goto LABEL_90;
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
        dword_1402FE4B8 = 2;
        goto LABEL_110;
      }
      v19 = v75;
      Information = IoStatusBlock.Information;
      if ( IoStatusBlock.Information == v75 << 12 )
      {
LABEL_21:
        if ( *(_WORD *)StartVa != 23117 )
        {
          Status = -1073741521;
          goto LABEL_90;
        }
        v20 = StartVa[15];
        v73 = v20;
        if ( (int)v20 + 264 < (unsigned int)v20 )
        {
          Status = -1073741520;
          dword_1402FE4B8 = 6;
          goto LABEL_90;
        }
        v21 = (unsigned int)v20;
        v22 = v20 + 264;
        if ( v22 > v17.QuadPart )
        {
          Status = -1073741520;
          dword_1402FE4B8 = 5;
          goto LABEL_90;
        }
        if ( v22 > v19 << 12 )
        {
          v97 = MiCreateMdl(0x2000uLL);
          v55 = v97;
          if ( !v97 )
          {
            Status = -1073741670;
            dword_1402FE4B8 = 7;
            goto LABEL_90;
          }
          v56 = v21 & 0xFFFFF000;
          StartingOffset.QuadPart = (unsigned int)v21 & 0xFFFFF000;
          KeResetEvent(&Event);
          IoStatusBlock.Information = 0LL;
          Status = IoPageRead(FileObjecta, v55, &StartingOffset, &Event, &IoStatusBlock);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
            Status = IoStatusBlock.Status;
          }
          if ( Status < 0 )
          {
            dword_1402FE4B8 = 8;
            goto LABEL_110;
          }
          if ( IoStatusBlock.Information != 0x2000 && IoStatusBlock.Information < (unsigned __int64)(v21 & 0xFFF) + 264 )
          {
            Status = -1073741520;
            dword_1402FE4B8 = 24;
            goto LABEL_90;
          }
          v57 = v21 & 0xFFF;
          v23 = (char *)v77;
          v24 = IoStatusBlock.Information - v57;
          Information = v56 + IoStatusBlock.Information;
          v90 = (char *)v97->StartVa + v57;
          IoStatusBlock.Information = Information;
          v25 = v90;
        }
        else
        {
          if ( v22 > Information )
          {
            Status = -1073741520;
            dword_1402FE4B8 = 39;
            goto LABEL_90;
          }
          v23 = (char *)v77;
          v24 = Information - v21;
          v25 = (char *)v77 + v21;
        }
        Status = MiVerifyImageHeader(v74, v25, v23, v24);
        if ( Status )
        {
          dword_1402FE4B8 = 9;
          goto LABEL_90;
        }
        v26 = v74;
        if ( v74[6] >= v74[4] )
        {
          dword_1402FE4B8 = 16;
        }
        else
        {
          v27 = v73;
          v28 = p_FsContext;
          *(_DWORD *)p_FsContext = v73 + 48;
          if ( *((_WORD *)v26 + 24) == 267 )
            *v28 = v27 + 52;
          if ( ((v26[4] & 0xFFF) != 0) + (v26[4] >> 12) )
          {
            v82 = *((_DWORD *)v25 + 5);
            v81 = *(_OWORD *)(v25 + 4);
            if ( (v82 & 7) != 0 )
            {
              dword_1402FE4B8 = 14;
            }
            else
            {
              if ( !(unsigned __int16)*v26 )
              {
                v29 = MiLegacyImageArchitecture(v81);
                v33 = HIWORD(v32);
                v34 = v29;
                v73 = v29;
                if ( v29 )
                {
                  if ( (v33 & 1) != 0 && (v31[15] & 0x1000) != 0 )
                    goto LABEL_132;
                }
                else
                {
                  if ( (v33 & 1) != 0 )
                  {
LABEL_132:
                    dword_1402FE4B8 = 23;
                    goto LABEL_170;
                  }
                  if ( (v31[15] & 0x140) != 0x140 )
                  {
                    dword_1402FE4B8 = 44;
                    goto LABEL_170;
                  }
                }
                v35 = (unsigned __int16)v82 + 24;
                if ( v30 + v35 + 40 * WORD1(v81) <= v30 )
                {
                  dword_1402FE4B8 = 52;
                  goto LABEL_170;
                }
                v36 = v35 + v30;
                v37 = 40LL * WORD1(v81);
                if ( v37 + (unsigned __int64)(v35 + v30) <= Information )
                {
                  v38 = FileObjecta;
                  LODWORD(v39) = (_DWORD)v25 + v35;
LABEL_39:
                  if ( v31[3] >= 0x1000u )
                    goto LABEL_40;
                  if ( (a4 & 0x20000) != 0 )
                  {
                    Status = -1073741701;
                    MiLogCreateImageFileMapFailure(v37, v38);
                  }
                  else
                  {
                    if ( v34 )
                    {
                      a4 |= 0x80000u;
LABEL_40:
                      v40 = MiBuildImageControlArea(
                              v72,
                              (_DWORD)v39,
                              (_DWORD)v31,
                              (unsigned int)&v81,
                              a4,
                              (__int64)&FileSize,
                              (__int64)&v78);
                      v12 = (__int64 *)v78;
                      Status = v40;
                      if ( v40 >= 0 )
                      {
                        *((_DWORD *)v78 + 15) ^= (*((_DWORD *)v78 + 15) ^ MiSystemPartition[0]) & 0x3FF;
                        if ( (a4 & 0x200) != 0 )
                          *(_BYTE *)(*(_QWORD *)(*v12 + 56) + 51LL) |= 0x10u;
                        v41 = *v12;
                        v42 = 0;
                        P = (_BYTE *)*v12;
                        if ( !v97 && !v98 && (a4 & 0x80000) == 0 )
                        {
                          v43 = v74[6];
                          if ( v43 < 0x1000 )
                          {
                            if ( (v43 & 0x1FF) != 0 )
                              ++*(_QWORD *)(v41 + 16);
                            v42 = (a4 & 0x10000) == 0;
                          }
                        }
                        v44 = HIWORD(v82);
                        v72 = a4 & 0x40080;
                        v46 = (a4 & 0x40080) != 0
                           || IoIsDeviceEjectable((__int64)FileObjecta->DeviceObject)
                           || (v44 & 0x400) != 0 && (*(_DWORD *)(v45 + 52) & 1) != 0
                           || (v44 & 0x800) != 0 && (*(_DWORD *)(v45 + 52) & 0x10) != 0;
                        v47 = *(_QWORD *)(v41 + 16);
                        if ( !v47 )
                          goto LABEL_56;
                        if ( (unsigned int)MiChargeCommit((unsigned __int64)MiSystemPartition, v47, 0LL) )
                        {
                          _InterlockedExchangeAdd64(&qword_1402FF850, v47);
                          v12 = (__int64 *)v78;
                          v44 = HIWORD(v82);
LABEL_56:
                          v48 = *((_DWORD *)v12 + 14);
                          v49 = v74;
                          if ( (v48 & 0x20000) != 0 && (a4 & 0x80000) == 0 && (v74[5] & 0x1000000) == 0 )
                            *((_DWORD *)v12 + 14) = v48 | 0x4000000;
                          if ( v75 > 1 )
                            MiInitializeImageProtos((__int64)v12, (__int64)Mdl, v69);
                          if ( v42 )
                            MiInitializeImageHeaderPage(v80, (unsigned int)v49[6]);
                          if ( *((_WORD *)v49 + 24) == 267 )
                            P[14] |= 0x40u;
                          if ( v46 )
                          {
                            P[14] |= 1u;
                            if ( v72 )
                              *((_DWORD *)v12 + 14) |= 0x40000u;
                            if ( (PerfGlobalGroupMask & 4) != 0 )
                            {
                              v85 = v44;
                              DeviceObject = FileObjecta->DeviceObject;
                              FsContext = FileObjecta->FsContext;
                              Characteristics = DeviceObject->Characteristics;
                              v86 = (a4 >> 18) & 1;
                              IsDeviceEjectable = IoIsDeviceEjectable((__int64)DeviceObject);
                              v93 = 0;
                              v92 = 16;
                              p_FsContext = &FsContext;
                              v86 = (4 * ((a4 >> 7) & 1)) | v64 & 0xFFF9 | (2 * IsDeviceEjectable) & 0xFB;
                              EtwTraceKernelEvent((int)&p_FsContext, 1, v65, 0x269u, 4200450);
                            }
                          }
                          else if ( (a4 & 0x10000) != 0 )
                          {
                            v66 = FileObjecta;
                            v67 = (ULONG_PTR)(v12 + 15);
                            *((_DWORD *)v12 + 14) |= 0x40000000u;
                            v12[8] = (__int64)v66;
                            while ( v67 )
                            {
                              if ( (*(_BYTE *)(v67 + 34) & 2) == 0 )
                                MiAllocateFileExtents(v67, 0);
                              v67 = *(_QWORD *)(v67 + 16);
                            }
                            ObFastReplaceObject(v12 + 8, 0LL);
                          }
                          v50 = v69;
                          Information = (ULONG_PTR)P;
                          *v88 = P;
                          Status = 0;
                          *v89 = v69;
                          goto LABEL_66;
                        }
                        dword_1402FE4B8 = 35;
                        Status = -1073741523;
                      }
                      Information = (ULONG_PTR)P;
                      goto LABEL_91;
                    }
                    Status = -1073741701;
                  }
                  dword_1402FE4B8 = 22;
LABEL_90:
                  Information = 0LL;
LABEL_91:
                  v50 = v69;
LABEL_66:
                  for ( i = 0LL; i < 3; ++i )
                  {
                    v52 = (__int64)*(&Mdl + i);
                    if ( v52 )
                    {
                      if ( (*(_BYTE *)(v52 + 10) & 1) != 0 )
                      {
                        MmUnmapLockedPages(*(PVOID *)(v52 + 24), *(&Mdl + i));
                      }
                      else
                      {
                        ExFreePoolWithTag(*(PVOID *)(v52 + 32), 0);
                        IoFreeMdl((PMDL)v52);
                      }
                    }
                  }
                  if ( Status < 0 )
                  {
                    MiReturnPfnReferenceCount(v50);
                    if ( Information )
                      ExFreePoolWithTag((PVOID)Information, 0);
                    if ( v12 )
                      ExFreePoolWithTag(v12, 0);
                  }
                  return Status;
                }
                v58 = v37 + ((v35 + (int)v25) & 0xFFFLL);
                if ( v58 - 1 > 0xFFFFFFFE || (v59 = (v58 + 4095) & 0xFFFFFFFFFFFFF000uLL, v58 > v59) )
                {
                  dword_1402FE4B8 = 53;
                  goto LABEL_170;
                }
                v98 = MiCreateMdl(v59);
                v60 = v98;
                if ( !v98 )
                {
                  Status = -1073741670;
                  dword_1402FE4B8 = 18;
                  goto LABEL_90;
                }
                v61.QuadPart = v36 & 0xFFFFF000;
                v39 = (char *)v98->StartVa + (v36 & 0xFFF);
                StartingOffset = v61;
                KeResetEvent(&Event);
                v38 = FileObjecta;
                IoStatusBlock.Information = 0LL;
                Status = IoPageRead(FileObjecta, v60, &StartingOffset, &Event, &IoStatusBlock);
                if ( Status == 259 )
                {
                  KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
                  Status = IoStatusBlock.Status;
                }
                if ( Status >= 0 )
                {
                  if ( IoStatusBlock.Information < v58 )
                  {
                    dword_1402FE4B8 = 40;
                    goto LABEL_170;
                  }
                  v34 = v73;
                  v31 = v74;
                  goto LABEL_39;
                }
                dword_1402FE4B8 = 19;
LABEL_110:
                if ( Status != -1073741740 )
                {
                  v50 = v69;
                  Information = 0LL;
                  if ( Status != -1073741209 )
                    Status = -1073741792;
                  goto LABEL_66;
                }
                goto LABEL_90;
              }
              dword_1402FE4B8 = 15;
            }
          }
          else
          {
            dword_1402FE4B8 = 10;
          }
        }
LABEL_170:
        Status = -1073741701;
        goto LABEL_90;
      }
      if ( IoStatusBlock.Information < 0x40 )
      {
        Status = -1073741521;
        dword_1402FE4B8 = 38;
        goto LABEL_90;
      }
      memset((char *)StartVa + IoStatusBlock.Information, 0, (v75 << 12) - IoStatusBlock.Information);
      Information = IoStatusBlock.Information;
    }
    v19 = v75;
    goto LABEL_21;
  }
  dword_1402FE4B8 = 1;
  if ( result == -1073741638 )
    return -1073741792;
  return result;
}
