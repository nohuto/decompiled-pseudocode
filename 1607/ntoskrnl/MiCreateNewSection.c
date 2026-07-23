/*
 * XREFs of MiCreateNewSection @ 0x1405050A8
 * Callers:
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 * Callees:
 *     IoSetTopLevelIrp @ 0x140024B10 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x140026868 (MiReleaseControlAreaWaiters.c)
 *     MiMakeImageReadOnly @ 0x1400FA474 (MiMakeImageReadOnly.c)
 *     MiSectionCreated @ 0x1400FB048 (MiSectionCreated.c)
 *     MiReleaseImageSection @ 0x1400FBA60 (MiReleaseImageSection.c)
 *     MiReturnPfnReferenceCount @ 0x1400FBAC0 (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiSetPagesModified @ 0x1401E5490 (MiSetPagesModified.c)
 *     FsRtlReleaseFile @ 0x14042CD30 (FsRtlReleaseFile.c)
 *     SeGetImageRequiredSigningLevel @ 0x140503AB4 (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x14050491C (SeCompareSigningLevelsForAuditableProcess.c)
 *     MiEnablePartitionMappedWrites @ 0x1405055BC (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x1405056C4 (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiParseComImage @ 0x140508108 (MiParseComImage.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14061DB44 (FsRtlGetDirectImageOriginalBase.c)
 */

__int64 __fastcall MiCreateNewSection(
        PFILE_OBJECT FileObject,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        char *a7,
        signed __int64 *a8,
        int *a9,
        __int64 *a10,
        signed __int64 *a11)
{
  int v14; // edi
  int v15; // r12d
  __int64 v16; // rdi
  int ImageFileMap; // eax
  int v18; // ebx
  __int64 v19; // rsi
  signed __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rsi
  int v23; // r15d
  _QWORD *v24; // r13
  signed __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r13
  int v29; // ecx
  __int64 v30; // r8
  unsigned int v31; // ebx
  char v32; // dl
  struct _FILE_OBJECT *v33; // r13
  int v34; // ecx
  __int64 v35; // rax
  int v36; // eax
  char v37; // al
  char v38; // al
  int DirectImageOriginalBase; // r12d
  int v40; // [rsp+40h] [rbp-C1h]
  char v41[8]; // [rsp+48h] [rbp-B9h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B1h] BYREF
  __int64 v43; // [rsp+58h] [rbp-A9h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A1h] BYREF
  PFILE_OBJECT FileObjecta; // [rsp+68h] [rbp-99h]
  __int64 v46; // [rsp+70h] [rbp-91h] BYREF
  __int64 v47; // [rsp+78h] [rbp-89h]
  __int64 v48; // [rsp+80h] [rbp-81h]
  __int64 v49; // [rsp+88h] [rbp-79h] BYREF
  int v50; // [rsp+90h] [rbp-71h]
  int v51; // [rsp+E0h] [rbp-21h]
  int v52; // [rsp+E4h] [rbp-1Dh]

  LODWORD(v42) = 0;
  *(_DWORD *)&v41[4] = a3;
  LODWORD(v43) = a2;
  v41[0] = *a7;
  FileObjecta = FileObject;
  v41[1] = 0;
  v14 = MiEnablePartitionMappedWrites();
  if ( v14 >= 0 )
  {
    v15 = a2 & 0x1000000;
    if ( (a2 & 0x1000000) != 0 )
    {
      ImageFileMap = MiCreateImageFileMap(FileObject, (__int64)&v46, (__int64)&v44, (__int64)&v49, (__int64)&v42);
      v16 = v44;
    }
    else
    {
      v40 = *a9;
      v16 = 0LL;
      v44 = 0LL;
      ImageFileMap = MiCreateDataFileMap(FileObject, v41[4], a2, a4, v40);
      v50 = 0;
    }
    v18 = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*a9 & 2) != 0 )
      {
        IoSetTopLevelIrp(0LL);
        FsRtlReleaseFile(FileObject);
        *a9 &= ~2u;
      }
      return (unsigned int)v18;
    }
    v19 = v46;
    v20 = *a8;
    v47 = v46;
    *a10 = v46;
    if ( v20 )
    {
      *a11 = v20;
    }
    else
    {
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), -1LL, -1LL);
      v19 = v46;
      v16 = v44;
      v47 = v46;
      *a11 = v26;
    }
    v21 = *a9;
    v22 = *(_QWORD *)v19;
    if ( (*a9 & 0x2000) != 0 && (FileObject->DeviceObject->Characteristics & 0x10) == 0 && (!v15 || (v50 & 0xFFF) == 0) )
      *(_DWORD *)(v22 + 56) |= 0x20000000u;
    if ( (v21 & 0x4000) != 0 )
      *(_DWORD *)(v22 + 56) |= 0x20000u;
    if ( (((v21 & 0x10000) != 0) & !_bittest((const signed __int32 *)&v43, 0x18u)) != 0 )
      *(_DWORD *)(v22 + 56) |= 0x40000000u;
    v23 = 2;
    v24 = (_QWORD *)MiSectionCreated((__int64)FileObject, v22, v16);
    if ( (*a9 & 2) != 0 )
    {
      IoSetTopLevelIrp(0LL);
      FsRtlReleaseFile(FileObjecta);
      *a9 &= ~2u;
    }
    if ( !v15 )
      goto LABEL_15;
    v27 = v47;
    v28 = *(_QWORD *)(v47 + 56);
    v43 = v28;
    v18 = MiParseComImage(v22, &v49, &v41[1]);
    if ( v18 < 0 )
      goto LABEL_77;
    if ( !v51 && !v52 && !*(_BYTE *)(v28 + 50) )
      *(_BYTE *)(v27 + 15) |= 1u;
    if ( (*(_DWORD *)(v22 + 56) & 0x800) != 0 )
    {
      if ( (*a9 & 0x20000) != 0 )
      {
        dword_1403267C0 = 80;
        v18 = -1073740749;
        goto LABEL_77;
      }
      v18 = MiSetPagesModified((__int64 *)v22, a5);
      if ( v18 < 0 )
        goto LABEL_77;
    }
    v29 = *a9;
    v30 = 4LL;
    if ( (*a9 & 0x100) != 0 )
    {
      v31 = 4;
    }
    else if ( (v29 & 0x20) != 0 )
    {
      v31 = 1;
    }
    else if ( (v29 & 0x10) != 0 )
    {
      v31 = (*a9 & 0x1000) != 0 ? 8 : 2;
    }
    else
    {
      v31 = 0;
    }
    if ( (v29 & 0x800) != 0 )
      v31 |= 0x10u;
    if ( (v29 & 0x400) != 0 || (v29 & 0x8000) != 0 )
    {
      v32 = v41[0];
      if ( (v29 & 0x810) == 0 )
      {
        v33 = FileObjecta;
        if ( v41[0] )
        {
          LOBYTE(v30) = v41[0];
          *(_DWORD *)&v41[4] = SeGetImageRequiredSigningLevel(FileObjecta, v31, v30, 0LL, &v41[2]);
          if ( *(int *)&v41[4] < 0 )
          {
            MiReturnPfnReferenceCount(v16);
            return *(unsigned int *)&v41[4];
          }
          v32 = v41[2];
          *a7 = v41[2];
        }
LABEL_32:
        if ( (*a9 & 0x20000) != 0 )
        {
          v37 = v32;
          if ( !v32 )
            v37 = 4;
          v32 = v37;
        }
        if ( (MiFlags & 0x10000) != 0 )
        {
          v38 = v32;
          *a9 |= 0x8000u;
          if ( !v32 )
            v38 = 1;
          v32 = v38;
        }
        v34 = *a9;
        LODWORD(v43) = (*a9 & 0x400) != 0 && v32 || (v34 & 0x8000) != 0 || *(char *)(v43 + 46) < 0;
        if ( (v34 & 0x40) == 0 )
          v23 = (v34 & 0x20) != 0;
        *(_DWORD *)&v41[4] = 0;
        if ( (*(_DWORD *)(v22 + 56) & 0x40000000) != 0 )
        {
          DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v33);
          if ( DirectImageOriginalBase < 0 )
          {
LABEL_91:
            MiReturnPfnReferenceCount(v16);
            return (unsigned int)DirectImageOriginalBase;
          }
          v35 = v48;
          LODWORD(v27) = v47;
        }
        else
        {
          v35 = -1LL;
          v48 = -1LL;
        }
        if ( (_DWORD)v43 != 1 )
          goto LABEL_43;
        if ( v35 == -1 )
          goto LABEL_55;
        DirectImageOriginalBase = MiRelocateImage(v27, (unsigned int)&v49, v42, v23, v35, 0);
        if ( DirectImageOriginalBase >= 0 )
        {
          *(_DWORD *)&v41[4] = 1;
          if ( v41[1] == 1 )
            MiMakeImageReadOnly(v22);
LABEL_55:
          v18 = MiValidateSectionCreate(v33, v22, a5, a6);
          if ( v18 >= 0 )
          {
            LODWORD(v27) = v46;
            v36 = SeCompareSigningLevelsForAuditableProcess(
                    (__int64)KeGetCurrentThread()->ApcState.Process,
                    ((unsigned int)*a9 >> 11) & 1);
            v16 = v44;
            if ( !v36 )
              v18 = -1073740760;
            if ( v18 >= 0 )
            {
              if ( *(_DWORD *)&v41[4] )
              {
LABEL_46:
                MiReturnPfnReferenceCount(v16);
                if ( v18 < 0 )
                  return (unsigned int)v18;
                v24 = (_QWORD *)MiReleaseImageSection((__int64)v33, v22);
LABEL_15:
                MiReleaseControlAreaWaiters(v24);
                return (unsigned int)v18;
              }
              v35 = v48;
LABEL_43:
              v18 = MiRelocateImage(v27, (unsigned int)&v49, v42, v23, v35, 0);
              if ( v18 >= 0 && v41[1] == 1 )
                MiMakeImageReadOnly(v22);
              goto LABEL_46;
            }
          }
LABEL_77:
          MiReturnPfnReferenceCount(v16);
          return (unsigned int)v18;
        }
        goto LABEL_91;
      }
    }
    else
    {
      v32 = v41[0];
    }
    v33 = FileObjecta;
    goto LABEL_32;
  }
  if ( (*a9 & 2) != 0 )
  {
    IoSetTopLevelIrp(0LL);
    FsRtlReleaseFile(FileObject);
    *a9 &= ~2u;
  }
  return (unsigned int)v14;
}
