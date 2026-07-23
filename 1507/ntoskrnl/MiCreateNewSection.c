/*
 * XREFs of MiCreateNewSection @ 0x1404702B8
 * Callers:
 *     MiCreateSection @ 0x1404B3940 (MiCreateSection.c)
 * Callees:
 *     MiReleaseImageSection @ 0x14002D97C (MiReleaseImageSection.c)
 *     MiSectionCreated @ 0x14002E3D0 (MiSectionCreated.c)
 *     MiReleaseControlAreaWaiters @ 0x1400887AC (MiReleaseControlAreaWaiters.c)
 *     IoSetTopLevelIrp @ 0x140089060 (IoSetTopLevelIrp.c)
 *     MiReturnPfnReferenceCount @ 0x1400E0858 (MiReturnPfnReferenceCount.c)
 *     MiMakeImageReadOnly @ 0x14011B188 (MiMakeImageReadOnly.c)
 *     MiSetPagesModified @ 0x1402165B0 (MiSetPagesModified.c)
 *     MiParseComImage @ 0x14046E4A4 (MiParseComImage.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     MiCreateDataFileMap @ 0x1404706C4 (MiCreateDataFileMap.c)
 *     FsRtlReleaseFile @ 0x1404B32F0 (FsRtlReleaseFile.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     SeGetImageRequiredSigningLevel @ 0x1405090C8 (SeGetImageRequiredSigningLevel.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x140555D0C (SeCompareSigningLevelsForAuditableProcess.c)
 */

__int64 __fastcall MiCreateNewSection(
        PFILE_OBJECT FileObject,
        int a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        char *a6,
        __int64 a7,
        int *a8,
        _QWORD *a9)
{
  int v11; // r13d
  __int64 v12; // r14
  int ImageFileMap; // eax
  __int16 v14; // r8
  int v15; // ebx
  __int64 **v16; // rsi
  int v17; // edx
  __int64 *v18; // rsi
  unsigned int v19; // r15d
  _QWORD *v20; // r12
  __int64 v22; // r12
  __int64 v23; // r13
  int v24; // ecx
  unsigned int v25; // ebx
  char v26; // dl
  PFILE_OBJECT v27; // r13
  int ImageRequiredSigningLevel; // r12d
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  char v32; // al
  int v33; // [rsp+20h] [rbp-B9h]
  int v34; // [rsp+30h] [rbp-A9h]
  char v35; // [rsp+40h] [rbp-99h] BYREF
  _BYTE v36[15]; // [rsp+41h] [rbp-98h] BYREF
  __int64 v37; // [rsp+50h] [rbp-89h] BYREF
  __int64 v38; // [rsp+58h] [rbp-81h] BYREF
  __int64 v39; // [rsp+60h] [rbp-79h]
  __int64 v40; // [rsp+70h] [rbp-69h] BYREF
  int v41; // [rsp+78h] [rbp-61h]
  int v42; // [rsp+C8h] [rbp-11h]
  int v43; // [rsp+CCh] [rbp-Dh]
  char v45; // [rsp+128h] [rbp+4Fh]

  LODWORD(v37) = 0;
  v35 = 0;
  v45 = *a6;
  v11 = a2 & 0x1000000;
  if ( (a2 & 0x1000000) != 0 )
  {
    ImageFileMap = MiCreateImageFileMap(FileObject, (__int64)&v38, (__int64)&v40, (__int64)&v37);
    v14 = v41;
    v12 = v38;
  }
  else
  {
    v12 = 0LL;
    v34 = *a8;
    v38 = 0LL;
    ImageFileMap = MiCreateDataFileMap(FileObject, a2, a4, v34);
    v14 = 0;
    v41 = 0;
  }
  v15 = ImageFileMap;
  if ( ImageFileMap < 0 )
  {
    if ( (*a8 & 2) != 0 )
    {
      IoSetTopLevelIrp(0LL);
      FsRtlReleaseFile(FileObject);
      *a8 &= ~2u;
    }
    return (unsigned int)v15;
  }
  v16 = *(__int64 ***)&v36[7];
  v17 = *a8;
  *a9 = *(_QWORD *)&v36[7];
  v18 = *v16;
  if ( (v17 & 0x2000) != 0 && (FileObject->DeviceObject->Characteristics & 0x10) == 0 && (!v11 || (v14 & 0xFFF) == 0) )
    *((_DWORD *)v18 + 14) |= 0x20000000u;
  if ( (v17 & 0x4000) != 0 )
    *((_DWORD *)v18 + 14) |= 0x20000u;
  if ( (v17 & 0x10000) != 0 && (a2 & 0x1000000) == 0 )
    *((_DWORD *)v18 + 14) |= 0x40000000u;
  v19 = 2;
  v20 = (_QWORD *)MiSectionCreated((__int64)FileObject, (__int64)v18, v12);
  if ( (*a8 & 2) != 0 )
  {
    IoSetTopLevelIrp(0LL);
    FsRtlReleaseFile(FileObject);
    *a8 &= ~2u;
  }
  if ( !v11 )
  {
LABEL_12:
    MiReleaseControlAreaWaiters(v20);
    return (unsigned int)v15;
  }
  v22 = *(_QWORD *)&v36[7];
  v23 = *(_QWORD *)(*(_QWORD *)&v36[7] + 56LL);
  v39 = v23;
  v15 = MiParseComImage(v18, (unsigned int *)&v40, &v35);
  if ( v15 < 0 )
    goto LABEL_64;
  if ( !v42 && !v43 && !*(_BYTE *)(v23 + 50) )
    *(_BYTE *)(v22 + 15) |= 1u;
  if ( (*(_BYTE *)(v22 + 14) & 1) != 0 )
  {
    if ( (*a8 & 0x20000) != 0 )
    {
      dword_14034E980 = 80;
      v15 = -1073740749;
    }
    else
    {
      v15 = MiSetPagesModified(v18, a5);
      if ( v15 >= 0 )
        goto LABEL_18;
    }
LABEL_64:
    MiReturnPfnReferenceCount(v12);
    return (unsigned int)v15;
  }
LABEL_18:
  if ( *(char *)(v23 + 46) < 0 && *(_DWORD *)(v23 + 32) == 17 )
    *a8 |= 0x8000u;
  v24 = *a8;
  if ( (*a8 & 0x100) != 0 )
  {
    v25 = 4;
  }
  else if ( (v24 & 0x20) != 0 )
  {
    v25 = 1;
  }
  else if ( (v24 & 0x10) != 0 )
  {
    v25 = (*a8 & 0x1000) != 0 ? 8 : 2;
  }
  else
  {
    v25 = 0;
  }
  if ( (v24 & 0x800) != 0 )
    v25 |= 0x10u;
  if ( (v24 & 0x400) == 0 && (v24 & 0x8000) == 0 )
  {
    v26 = v45;
LABEL_28:
    v27 = FileObject;
LABEL_29:
    if ( (*a8 & 0x20000) != 0 )
    {
      v32 = v26;
      v25 |= 0x40000000u;
      if ( !v26 )
        v32 = 4;
      v26 = v32;
      v45 = v32;
    }
    if ( (*a8 & 0x8400) == 0 || !v26 && *(char *)(v39 + 46) >= 0 )
      goto LABEL_33;
    LOBYTE(v33) = v26;
    v15 = MiValidateSectionCreate(v27, v18, a5, v25, v33);
    if ( v15 >= 0 )
    {
      v22 = *(_QWORD *)&v36[7];
      LOBYTE(v30) = v45;
      LOBYTE(v29) = *(_BYTE *)(*(_QWORD *)&v36[7] + 15LL) >> 4;
      v31 = SeCompareSigningLevelsForAuditableProcess(
              KeGetCurrentThread()->ApcState.Process,
              ((unsigned int)*a8 >> 11) & 1,
              v29,
              v30);
      v12 = v38;
      if ( !v31 )
        v15 = -1073740760;
      if ( v15 >= 0 )
      {
LABEL_33:
        if ( (*a8 & 0x40) == 0 )
          v19 = (*a8 & 0x20) != 0;
        v15 = MiRelocateImage(v22, (__int64)&v40, v37, v19, 0);
        if ( v15 >= 0 && v35 == 1 )
          MiMakeImageReadOnly((__int64)v18);
      }
    }
    MiReturnPfnReferenceCount(v12);
    if ( v15 < 0 )
      return (unsigned int)v15;
    v20 = (_QWORD *)MiReleaseImageSection((__int64)v27, (__int64)v18);
    goto LABEL_12;
  }
  v26 = v45;
  if ( (v24 & 0x810) != 0 )
    goto LABEL_28;
  v27 = FileObject;
  if ( !v45 )
    goto LABEL_29;
  ImageRequiredSigningLevel = SeGetImageRequiredSigningLevel(FileObject, (__int64)v36);
  if ( ImageRequiredSigningLevel >= 0 )
  {
    v26 = v36[0];
    v22 = *(_QWORD *)&v36[7];
    v45 = v36[0];
    *a6 = v36[0];
    goto LABEL_29;
  }
  MiReturnPfnReferenceCount(v12);
  return (unsigned int)ImageRequiredSigningLevel;
}
