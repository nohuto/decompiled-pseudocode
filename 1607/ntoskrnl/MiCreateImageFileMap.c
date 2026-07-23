/*
 * XREFs of MiCreateImageFileMap @ 0x140505A1C
 * Callers:
 *     MiCreateNewSection @ 0x1405050A8 (MiCreateNewSection.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     MiPageRead @ 0x14002348C (MiPageRead.c)
 *     CcZeroEndOfLastPage @ 0x1400243D0 (CcZeroEndOfLastPage.c)
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     ObFastReplaceObject @ 0x1400CADF4 (ObFastReplaceObject.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiCreateMdl @ 0x1400FA8C0 (MiCreateMdl.c)
 *     PsIsCurrentThreadPrefetching @ 0x1400FB220 (PsIsCurrentThreadPrefetching.c)
 *     MiCopyHeaderIfResident @ 0x1400FB338 (MiCopyHeaderIfResident.c)
 *     MiFlushDataSection @ 0x1400FB530 (MiFlushDataSection.c)
 *     MiInitializeImageProtos @ 0x1400FB5BC (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1400FB8C8 (MiGetPageForHeader.c)
 *     MiReturnPfnReferenceCount @ 0x1400FBAC0 (MiReturnPfnReferenceCount.c)
 *     IoIsDeviceEjectable @ 0x1400FBAFC (IoIsDeviceEjectable.c)
 *     MiLegacyImageArchitecture @ 0x1400FBB14 (MiLegacyImageArchitecture.c)
 *     MiInitializeImageHeaderPage @ 0x1400FBB34 (MiInitializeImageHeaderPage.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     FsRtlGetFileSize @ 0x14042B324 (FsRtlGetFileSize.c)
 *     MiBuildImageControlArea @ 0x1405065E4 (MiBuildImageControlArea.c)
 *     MiVerifyImageHeader @ 0x140507040 (MiVerifyImageHeader.c)
 *     MiLogCreateImageFileMapFailure @ 0x140659228 (MiLogCreateImageFileMapFailure.c)
 *     MiCopyDirectMapHeader @ 0x14065A9C4 (MiCopyDirectMapHeader.c)
 *     MiInitializeImageExtents @ 0x14065ACA8 (MiInitializeImageExtents.c)
 */

NTSTATUS __fastcall MiCreateImageFileMap(
        PFILE_OBJECT FileObject,
        __int64 a2,
        int a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  NTSTATUS result; // eax
  __int64 v12; // r15
  struct _MDL *v13; // r13
  __int64 PageForHeader; // rax
  __int64 v15; // r14
  int LowPart; // esi
  void *v17; // r13
  unsigned __int64 i; // rdi
  __int64 v19; // rbx
  __int64 v20; // rsi
  unsigned __int64 v21; // r14
  LARGE_INTEGER v22; // rdi
  ULONG_PTR v23; // rdx
  int v24; // esi
  unsigned __int64 v25; // rax
  struct _MDL *Mdl; // rax
  unsigned int *StartVa; // rdx
  unsigned __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r13
  unsigned __int64 v31; // rcx
  int v32; // esi
  unsigned int v33; // edi
  __int64 v34; // r13
  char *v35; // r9
  char *v36; // rdi
  _DWORD *v37; // rsi
  BOOL v38; // r8d
  _DWORD *v39; // rcx
  BOOL v40; // eax
  unsigned int v41; // r8d
  unsigned int v42; // r10d
  unsigned int v43; // edx
  unsigned int v44; // edx
  BOOL v45; // r11d
  int v46; // edx
  __int64 v47; // rax
  int v48; // r13d
  unsigned __int64 v49; // r9
  __int64 v50; // r8
  unsigned __int64 v51; // rcx
  PFILE_OBJECT v52; // r14
  char *v53; // r13
  unsigned __int64 v54; // rdi
  SIZE_T v55; // rcx
  int v56; // esi
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // r8
  char v60; // r13
  unsigned int v61; // eax
  __int64 v62; // rdx
  unsigned __int16 v63; // r9
  bool v64; // si
  unsigned __int64 v65; // rdi
  _DWORD *v66; // rdi
  int v67; // ecx
  __int64 DeviceObject; // rcx
  bool IsDeviceEjectable; // al
  __int16 v70; // dx
  unsigned int v71; // r8d
  PFILE_OBJECT v72; // rax
  int v73; // ebx
  _BYTE *v74; // [rsp+40h] [rbp-C0h]
  __int64 v75; // [rsp+48h] [rbp-B8h]
  unsigned int *v76; // [rsp+50h] [rbp-B0h]
  int v77; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER v78; // [rsp+58h] [rbp-A8h] BYREF
  PLARGE_INTEGER v79; // [rsp+60h] [rbp-A0h]
  PFILE_OBJECT v80; // [rsp+68h] [rbp-98h]
  BOOL v81; // [rsp+70h] [rbp-90h]
  _DWORD *v82; // [rsp+78h] [rbp-88h]
  unsigned __int64 v83; // [rsp+80h] [rbp-80h]
  __int64 v84; // [rsp+88h] [rbp-78h] BYREF
  _DWORD *v85; // [rsp+90h] [rbp-70h] BYREF
  int v86; // [rsp+98h] [rbp-68h] BYREF
  int v87; // [rsp+9Ch] [rbp-64h]
  LARGE_INTEGER FileSize; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-58h]
  __int128 v90; // [rsp+B0h] [rbp-50h] BYREF
  int v91; // [rsp+C0h] [rbp-40h]
  PVOID FsContext; // [rsp+C8h] [rbp-38h] BYREF
  int v93; // [rsp+D0h] [rbp-30h]
  __int16 v94; // [rsp+D4h] [rbp-2Ch]
  __int16 v95; // [rsp+D6h] [rbp-2Ah]
  struct _KEVENT Event; // [rsp+D8h] [rbp-28h] BYREF
  char *v97; // [rsp+F0h] [rbp-10h]
  _QWORD *v98; // [rsp+F8h] [rbp-8h]
  __int64 *v99; // [rsp+100h] [rbp+0h]
  _DWORD *p_FsContext; // [rsp+108h] [rbp+8h] BYREF
  int v101; // [rsp+110h] [rbp+10h]
  int v102; // [rsp+114h] [rbp+14h]
  __int64 v103; // [rsp+118h] [rbp+18h] BYREF
  int v104; // [rsp+120h] [rbp+20h]
  __int64 v105; // [rsp+138h] [rbp+38h]
  __int64 v106; // [rsp+140h] [rbp+40h]
  __int64 v107; // [rsp+148h] [rbp+48h]
  PMDL MemoryDescriptorList; // [rsp+150h] [rbp+50h]
  struct _MDL *v109; // [rsp+158h] [rbp+58h]
  struct _MDL *v110; // [rsp+160h] [rbp+60h]

  v98 = a5;
  v99 = a6;
  v82 = a7;
  p_FsContext = a8;
  v109 = 0LL;
  v110 = 0LL;
  v87 = a3;
  v80 = FileObject;
  MemoryDescriptorList = 0LL;
  result = FsRtlGetFileSize(FileObject, &FileSize);
  if ( result < 0 )
  {
    dword_1403267C0 = 1;
    if ( result == -1073741638 )
      return -1073741792;
    return result;
  }
  if ( FileSize.HighPart )
    return -1073741792;
  v85 = 0LL;
  v83 = 1LL;
  v74 = 0LL;
  v12 = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v103 = 0LL;
  v104 = 1073872952;
  v13 = (struct _MDL *)&v103;
  v105 = 0LL;
  v106 = 4096LL;
  PageForHeader = MiGetPageForHeader(MiSystemPartition, a3);
  v89 = PageForHeader;
  if ( PageForHeader == -1 )
    return -1073741670;
  v15 = 48 * PageForHeader - 0x58000000000LL;
  v107 = PageForHeader;
  v75 = v15;
  v76 = 0LL;
  CcZeroEndOfLastPage(FileObject);
  LowPart = MiFlushDataSection((__int64)FileObject, &v86);
  if ( LowPart == -1073741740 )
    goto LABEL_15;
  if ( v86 == 1 )
    a4 |= 0x40000u;
  if ( (a4 & 0x40080) != 0 && PsIsCurrentThreadPrefetching() )
  {
    dword_1403267C0 = 64;
    LowPart = -1073740749;
LABEL_15:
    v17 = 0LL;
    goto LABEL_16;
  }
  v20 = v89;
  v21 = 0LL;
  v79 = 0LL;
  if ( (a4 & 0x10000) != 0 )
  {
    if ( (unsigned int)MiCopyDirectMapHeader(FileObject, v89) == 1 )
    {
      v21 = 4096LL;
      v79 = (PLARGE_INTEGER)4096;
    }
    else
    {
      v21 = (unsigned __int64)v79;
      a4 &= ~0x10000u;
    }
  }
  v22 = FileSize;
  if ( (a4 & 0x10000) != 0 )
  {
    v24 = (int)v80;
  }
  else
  {
    v23 = v20;
    v24 = (int)v80;
    if ( (unsigned int)MiCopyHeaderIfResident((__int64)v80, v23) == 1 )
    {
      v21 = 4096LL;
      v79 = (PLARGE_INTEGER)4096;
    }
    else if ( ((a4 & 0x20) != 0 || (a4 & 0x400) != 0 && v22.LowPart <= 0x20000)
           && !v80->SectionObjectPointer->DataSectionObject
           && (v25 = ((unsigned __int64)v22.LowPart + 4095) >> 12, v83 = v25, v25 > 1) )
    {
      Mdl = MiCreateMdl(v25 << 12);
      v21 = (unsigned __int64)v79;
      MemoryDescriptorList = Mdl;
      if ( Mdl )
      {
        StartVa = (unsigned int *)Mdl->StartVa;
        v13 = Mdl;
        v76 = StartVa;
        goto LABEL_38;
      }
      v83 = 1LL;
    }
    else
    {
      v21 = (unsigned __int64)v79;
    }
  }
  StartVa = 0LL;
LABEL_38:
  if ( (v13->MdlFlags & 2) != 0 )
  {
    v76 = (unsigned int *)MmMapLockedPagesSpecifyCache(v13, 0, MmCached, 0LL, 0, 0x40000020u);
    StartVa = v76;
    if ( !v76 )
    {
      dword_1403267C0 = 37;
      LowPart = -1073741670;
LABEL_41:
      v15 = v75;
      goto LABEL_15;
    }
    v21 = (unsigned __int64)v79;
    MemoryDescriptorList = v13;
  }
  if ( v21 )
    goto LABEL_56;
  v84 = 0LL;
  LowPart = MiPageRead(v24, (int)v13, (int)&v84, (int)&Event, (__int64)&v78, 0, 0LL);
  if ( LowPart == 259 )
  {
    KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
    LowPart = v78.LowPart;
  }
  if ( LowPart < 0 )
  {
    dword_1403267C0 = 2;
    goto LABEL_48;
  }
  v28 = v83;
  v21 = (unsigned __int64)v79;
  if ( v79 != (PLARGE_INTEGER)(v83 << 12) )
  {
    if ( (unsigned __int64)v79 < 0x40 )
    {
      LowPart = -1073741521;
      dword_1403267C0 = 38;
      goto LABEL_41;
    }
    memset((char *)v76 + (_QWORD)v79, 0, (v83 << 12) - (_QWORD)v79);
    StartVa = v76;
    v21 = (unsigned __int64)v79;
LABEL_56:
    v28 = v83;
    goto LABEL_57;
  }
  StartVa = v76;
LABEL_57:
  if ( *(_WORD *)StartVa != 23117 )
  {
    LowPart = -1073741521;
    goto LABEL_41;
  }
  v29 = StartVa[15];
  v81 = v29;
  if ( (int)v29 + 264 < (unsigned int)v29 )
  {
    LowPart = -1073741520;
    dword_1403267C0 = 6;
    goto LABEL_41;
  }
  v30 = v29;
  v31 = v29 + 264;
  if ( v31 > v22.QuadPart )
  {
    LowPart = -1073741520;
    dword_1403267C0 = 5;
    goto LABEL_41;
  }
  if ( v31 <= v28 << 12 )
  {
    if ( v31 > v21 )
    {
      LowPart = -1073741520;
      dword_1403267C0 = 39;
      goto LABEL_41;
    }
    v36 = (char *)StartVa + v30;
    v35 = (char *)(v21 - v30);
    goto LABEL_81;
  }
  v109 = MiCreateMdl(0x2000uLL);
  v32 = (int)v109;
  if ( v109 )
  {
    v33 = v30 & 0xFFFFF000;
    v84 = (unsigned int)v30 & 0xFFFFF000;
    KeResetEvent(&Event);
    v79 = 0LL;
    LowPart = MiPageRead((int)v80, v32, (int)&v84, (int)&Event, (__int64)&v78, 0, 0LL);
    if ( LowPart == 259 )
    {
      KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
      LowPart = v78.LowPart;
    }
    if ( LowPart < 0 )
    {
      dword_1403267C0 = 8;
LABEL_48:
      if ( LowPart != -1073741740 )
      {
        v17 = 0LL;
        goto LABEL_50;
      }
      goto LABEL_68;
    }
    if ( v79 != (PLARGE_INTEGER)0x2000 && (unsigned __int64)v79 < (unsigned __int64)(v30 & 0xFFF) + 264 )
    {
      LowPart = -1073741520;
      dword_1403267C0 = 24;
      goto LABEL_41;
    }
    v34 = v30 & 0xFFF;
    StartVa = v76;
    v35 = (char *)v79 - v34;
    v21 = (unsigned __int64)v79 + v33;
    v97 = (char *)v109->StartVa + v34;
    v79 = (PLARGE_INTEGER)v21;
    v36 = v97;
LABEL_81:
    LowPart = MiVerifyImageHeader(v82, v36, StartVa, v35);
    if ( LowPart )
    {
      dword_1403267C0 = 9;
      goto LABEL_41;
    }
    v37 = v82;
    if ( v82[6] >= v82[4] )
    {
      LowPart = -1073741701;
      dword_1403267C0 = 16;
      goto LABEL_41;
    }
    v38 = v81;
    v39 = p_FsContext;
    *p_FsContext = v81 + 48;
    if ( *((_WORD *)v37 + 24) == 267 )
      *v39 = v38 + 52;
    if ( !(((v37[4] & 0xFFF) != 0) + (v37[4] >> 12)) )
    {
      LowPart = -1073741701;
      dword_1403267C0 = 10;
      goto LABEL_41;
    }
    v91 = *((_DWORD *)v36 + 5);
    v90 = *(_OWORD *)(v36 + 4);
    if ( (v91 & 7) != 0 )
    {
      LowPart = -1073741701;
      dword_1403267C0 = 14;
      goto LABEL_41;
    }
    if ( (unsigned __int16)*v37 )
    {
      LowPart = -1073741701;
      dword_1403267C0 = 15;
      goto LABEL_41;
    }
    v40 = MiLegacyImageArchitecture(v90);
    v44 = HIWORD(v43);
    v45 = v40;
    v81 = v40;
    if ( v40 )
    {
      if ( (v44 & 1) != 0 && (v37[15] & 0x1000) != 0 )
        goto LABEL_96;
    }
    else
    {
      if ( (v44 & 1) != 0 )
      {
LABEL_96:
        LowPart = -1073741701;
        dword_1403267C0 = 23;
        goto LABEL_41;
      }
      if ( (v37[15] & 0x140) != 0x140 )
      {
        LowPart = -1073741701;
        dword_1403267C0 = 44;
        goto LABEL_41;
      }
    }
    v46 = (unsigned __int16)v91 + 24;
    if ( v41 + v46 + 40 * WORD1(v90) <= v41 )
    {
      LowPart = -1073741701;
      dword_1403267C0 = 52;
      goto LABEL_41;
    }
    v47 = v46 + v41;
    v48 = v46 + v41;
    v49 = (unsigned int)v37[6];
    v50 = 40LL * WORD1(v90);
    v51 = v50 + v47;
    if ( v49 < v50 + v47 )
      LODWORD(v49) = v50 + v47;
    v77 = v49;
    if ( (unsigned int)v49 > v42 )
    {
      LowPart = -1073741701;
      dword_1403267C0 = 48;
      goto LABEL_41;
    }
    if ( v51 > v21 )
    {
      v54 = v50 + (((_WORD)v46 + (_WORD)v36) & 0xFFF);
      if ( v54 - 1 > 0xFFFFFFFE || (v55 = (v54 + 4095) & 0xFFFFFFFFFFFFF000uLL, v54 > v55) )
      {
        LowPart = -1073741701;
        dword_1403267C0 = 53;
        goto LABEL_41;
      }
      v110 = MiCreateMdl(v55);
      v56 = (int)v110;
      if ( !v110 )
      {
        dword_1403267C0 = 18;
        goto LABEL_67;
      }
      v57 = v48 & 0xFFFFF000;
      v53 = (char *)v110->StartVa + (v48 & 0xFFF);
      v84 = v57;
      KeResetEvent(&Event);
      v79 = 0LL;
      v52 = v80;
      LowPart = MiPageRead((int)v80, v56, (int)&v84, (int)&Event, (__int64)&v78, 0, 0LL);
      if ( LowPart == 259 )
      {
        KeWaitForSingleObject(&Event, WrPageIn, 0, 0, 0LL);
        LowPart = v78.LowPart;
      }
      if ( LowPart < 0 )
      {
        dword_1403267C0 = 19;
        if ( LowPart == -1073741740 )
          goto LABEL_41;
        v17 = 0LL;
LABEL_50:
        v15 = v75;
        if ( LowPart != -1073741209 )
          LowPart = -1073741792;
        goto LABEL_16;
      }
      if ( (unsigned __int64)v79 < v54 )
      {
        LowPart = -1073741701;
        dword_1403267C0 = 40;
        goto LABEL_41;
      }
      v45 = v81;
      v37 = v82;
    }
    else
    {
      v52 = v80;
      LODWORD(v53) = (_DWORD)v36 + v46;
    }
    if ( v37[3] < 0x1000u )
    {
      if ( (a4 & 0x20000) != 0 )
      {
        LowPart = -1073741701;
        MiLogCreateImageFileMapFailure(v51, v52);
LABEL_122:
        dword_1403267C0 = 22;
        goto LABEL_41;
      }
      if ( !v45 )
      {
        LowPart = -1073741701;
        goto LABEL_122;
      }
      a4 |= 0x80000u;
    }
    v58 = MiBuildImageControlArea(
            v87,
            (_DWORD)v53,
            (_DWORD)v37,
            (unsigned int)&v90,
            a4,
            (__int64)&FileSize,
            (__int64)&v85);
    v12 = (__int64)v85;
    LowPart = v58;
    if ( v58 >= 0 )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v85 + 56LL) + 64LL) = v77;
      *(_DWORD *)(v12 + 60) ^= (*(_DWORD *)(v12 + 60) ^ MiSystemPartition[0]) & 0x3FF;
      if ( (a4 & 0x200) != 0 )
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v12 + 56LL) + 51LL) |= 0x10u;
      v59 = *(_QWORD *)v12;
      v60 = 0;
      v74 = *(_BYTE **)v12;
      if ( !v109 && !v110 && (a4 & 0x90000) == 0 )
      {
        v61 = v82[6];
        if ( v61 < 0x1000 )
        {
          if ( (v61 & 0x1FF) != 0 )
            ++*(_QWORD *)(v59 + 16);
          v60 = 1;
        }
      }
      v64 = (a4 & 0x40080) != 0
         || IoIsDeviceEjectable((__int64)v80->DeviceObject)
         || (v91 & 0x4000000) != 0 && (*(_DWORD *)(v62 + 52) & 1) != 0
         || (v63 & HIWORD(v91)) != 0 && (*(_DWORD *)(v62 + 52) & 0x10) != 0;
      v65 = *(_QWORD *)(v59 + 16);
      if ( v65 )
      {
        if ( !(unsigned int)MiChargeCommit((__int64)MiSystemPartition, v65, 0) )
        {
          dword_1403267C0 = 35;
          LowPart = -1073741523;
          goto LABEL_147;
        }
        _InterlockedExchangeAdd64(&qword_140327958, v65);
      }
      _InterlockedAdd64(&qword_140323C08, 1uLL);
      v12 = (__int64)v85;
      v66 = v82;
      v67 = v85[14];
      if ( (v67 & 0x20000) != 0 && (a4 & 0x80000) == 0 && (v82[5] & 0x1000000) == 0 )
        v85[14] = v67 | 0x4000000;
      if ( v83 > 1 )
        MiInitializeImageProtos(v12, (__int64)MemoryDescriptorList, v75);
      if ( v60 == 1 )
        MiInitializeImageHeaderPage(v89, (unsigned int)v66[6]);
      v17 = v74;
      if ( *((_WORD *)v66 + 24) == 267 )
        v74[14] |= 0x40u;
      if ( v64 )
      {
        *(_DWORD *)(v12 + 56) |= 0x800u;
        if ( (a4 & 0x40080) != 0 )
          *(_DWORD *)(v12 + 56) |= 0x40000u;
        if ( (PerfGlobalGroupMask & 4) != 0 )
        {
          DeviceObject = (__int64)v80->DeviceObject;
          FsContext = v80->FsContext;
          v94 = HIWORD(v91);
          v93 = *(_DWORD *)(DeviceObject + 52);
          v95 = (a4 >> 18) & 1;
          IsDeviceEjectable = IoIsDeviceEjectable(DeviceObject);
          v102 = 0;
          v101 = 16;
          p_FsContext = &FsContext;
          v95 = (4 * ((a4 >> 7) & 1)) | v70 & 0xFFF9 | (2 * IsDeviceEjectable) & 0xFB;
          EtwTraceKernelEvent((int)&p_FsContext, 1, v71, 617, 4200450);
        }
      }
      else if ( (a4 & 0x10000) != 0 )
      {
        v72 = v80;
        *(_DWORD *)(v12 + 56) |= 0x40000000u;
        *(_QWORD *)(v12 + 64) = v72;
        v73 = MiInitializeImageExtents(v12);
        ObFastReplaceObject((volatile __int64 *)(v12 + 64), 0LL);
        if ( v73 < 0 )
        {
          dword_1403267C0 = 11;
          *(_DWORD *)(v12 + 56) &= ~0x40000000u;
        }
      }
      LowPart = 0;
      v15 = v75;
      *v98 = v74;
      *v99 = v75;
      goto LABEL_16;
    }
LABEL_147:
    v17 = v74;
    goto LABEL_69;
  }
  dword_1403267C0 = 7;
LABEL_67:
  LowPart = -1073741670;
LABEL_68:
  v17 = 0LL;
LABEL_69:
  v15 = v75;
LABEL_16:
  for ( i = 0LL; i < 3; ++i )
  {
    v19 = (__int64)*(&MemoryDescriptorList + i);
    if ( v19 )
    {
      if ( (*(_BYTE *)(v19 + 10) & 1) != 0 )
      {
        MmUnmapLockedPages(*(PVOID *)(v19 + 24), *(&MemoryDescriptorList + i));
      }
      else
      {
        ExFreePoolWithTag(*(PVOID *)(v19 + 32), 0);
        IoFreeMdl((PMDL)v19);
      }
    }
  }
  if ( LowPart < 0 )
  {
    MiReturnPfnReferenceCount(v15);
    if ( v17 )
      ExFreePoolWithTag(v17, 0);
    if ( v12 )
      ExFreePoolWithTag((PVOID)v12, 0);
  }
  return LowPart;
}
