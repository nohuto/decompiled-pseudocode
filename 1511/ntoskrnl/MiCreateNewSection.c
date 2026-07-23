/*
 * XREFs of MiCreateNewSection @ 0x1403C8128
 * Callers:
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 * Callees:
 *     MiReleaseControlAreaWaiters @ 0x14000C640 (MiReleaseControlAreaWaiters.c)
 *     MiSectionCreated @ 0x140038BD8 (MiSectionCreated.c)
 *     IoSetTopLevelIrp @ 0x14003AD60 (IoSetTopLevelIrp.c)
 *     MiMakeImageReadOnly @ 0x1400E7680 (MiMakeImageReadOnly.c)
 *     MiReleaseImageSection @ 0x1400EBDE8 (MiReleaseImageSection.c)
 *     MiReturnPfnReferenceCount @ 0x1400EC1DC (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiSetPagesModified @ 0x1401D4A14 (MiSetPagesModified.c)
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiEnablePartitionMappedWrites @ 0x1403C85B0 (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x1403C86B8 (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     FsRtlReleaseFile @ 0x1403F9150 (FsRtlReleaseFile.c)
 *     SeGetImageRequiredSigningLevel @ 0x1404A967C (SeGetImageRequiredSigningLevel.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 *     MiParseComImage @ 0x1404B536C (MiParseComImage.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x1404C06B8 (SeCompareSigningLevelsForAuditableProcess.c)
 */

__int64 __fastcall MiCreateNewSection(
        PFILE_OBJECT FileObject,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        char *a6,
        signed __int64 *a7,
        int *a8,
        __int64 *a9,
        signed __int64 *a10)
{
  int v13; // edi
  int v15; // r12d
  int ImageFileMap; // eax
  __int64 v17; // r15
  int v18; // ebx
  signed __int64 v19; // rcx
  __int64 v20; // r13
  signed __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rsi
  PFILE_OBJECT v24; // r9
  _QWORD *v25; // rax
  int v26; // ecx
  int v27; // r14d
  __int64 v28; // r12
  int v29; // ecx
  unsigned int v30; // ebx
  char v31; // dl
  PFILE_OBJECT v32; // r12
  char v33; // al
  char v34; // al
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  int v38; // [rsp+28h] [rbp-D9h]
  int v39; // [rsp+40h] [rbp-C1h]
  __int16 v40; // [rsp+48h] [rbp-B9h] BYREF
  char v41; // [rsp+4Ah] [rbp-B7h] BYREF
  PFILE_OBJECT FileObjecta; // [rsp+50h] [rbp-B1h]
  _QWORD *v43; // [rsp+58h] [rbp-A9h]
  __int64 v44; // [rsp+60h] [rbp-A1h] BYREF
  __int64 v45; // [rsp+68h] [rbp-99h] BYREF
  __int64 v46; // [rsp+70h] [rbp-91h] BYREF
  __int64 v47; // [rsp+78h] [rbp-89h]
  __int64 v48; // [rsp+88h] [rbp-79h] BYREF
  int v49; // [rsp+90h] [rbp-71h]
  int v50; // [rsp+E0h] [rbp-21h]
  int v51; // [rsp+E4h] [rbp-1Dh]

  LODWORD(v44) = 0;
  LODWORD(v43) = a3;
  FileObjecta = FileObject;
  v40 = (unsigned __int8)*a6;
  v13 = MiEnablePartitionMappedWrites();
  if ( v13 >= 0 )
  {
    v15 = a2 & 0x1000000;
    if ( (a2 & 0x1000000) != 0 )
    {
      ImageFileMap = MiCreateImageFileMap(FileObject, (__int64)&v46, (__int64)&v45, (__int64)&v48, (__int64)&v44);
      v17 = v45;
    }
    else
    {
      v39 = *a8;
      v17 = 0LL;
      v45 = 0LL;
      ImageFileMap = MiCreateDataFileMap(FileObject, (char)v43, a2, a4, v39);
      v49 = 0;
    }
    v18 = ImageFileMap;
    if ( ImageFileMap < 0 )
    {
      if ( (*a8 & 2) != 0 )
      {
        IoSetTopLevelIrp(0LL);
        FsRtlReleaseFile(FileObject);
        *a8 &= ~2u;
      }
      return (unsigned int)v18;
    }
    v19 = *a7;
    v20 = v46;
    *a9 = v46;
    if ( v19 )
    {
      *a10 = v19;
    }
    else
    {
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 24), -1LL, -1LL);
      v17 = v45;
      v20 = v46;
      *a10 = v21;
    }
    v22 = *a8;
    v23 = *(_QWORD *)v20;
    v24 = FileObjecta;
    if ( (*a8 & 0x2000) != 0 && (FileObjecta->DeviceObject->Characteristics & 0x10) == 0 && (!v15 || (v49 & 0xFFF) == 0) )
      *(_DWORD *)(v23 + 56) |= 0x20000000u;
    if ( (v22 & 0x4000) != 0 )
      *(_DWORD *)(v23 + 56) |= 0x20000u;
    if ( !v15 && (v22 & 0x10000) != 0 )
      *(_DWORD *)(v23 + 56) |= 0x40000000u;
    v25 = (_QWORD *)MiSectionCreated((__int64)v24, v23, v17);
    v26 = *a8;
    v27 = 2;
    v43 = v25;
    if ( (v26 & 2) != 0 )
    {
      IoSetTopLevelIrp(0LL);
      FsRtlReleaseFile(FileObjecta);
      *a8 &= ~2u;
      v25 = v43;
    }
    if ( v15 )
    {
      v28 = *(_QWORD *)(v20 + 56);
      v47 = v28;
      v18 = MiParseComImage(v23, &v48, (char *)&v40 + 1);
      if ( v18 < 0 )
      {
LABEL_28:
        MiReturnPfnReferenceCount(v17);
        return (unsigned int)v18;
      }
      if ( !v50 && !v51 && !*(_BYTE *)(v28 + 50) )
        *(_BYTE *)(v20 + 15) |= 1u;
      if ( (*(_BYTE *)(v20 + 14) & 1) != 0 )
      {
        if ( (*a8 & 0x20000) != 0 )
        {
          dword_1402FE4B8 = 80;
          v18 = -1073740749;
          goto LABEL_28;
        }
        v18 = MiSetPagesModified((__int64 *)v23, a5);
        if ( v18 < 0 )
          goto LABEL_28;
      }
      v29 = *a8;
      if ( (*a8 & 0x100) != 0 )
      {
        v30 = 4;
      }
      else if ( (v29 & 0x20) != 0 )
      {
        v30 = 1;
      }
      else if ( (v29 & 0x10) != 0 )
      {
        v30 = (*a8 & 0x1000) != 0 ? 8 : 2;
      }
      else
      {
        v30 = 0;
      }
      if ( (v29 & 0x800) != 0 )
        v30 |= 0x10u;
      v31 = v40;
      if ( (v29 & 0x8400) == 0 || (v29 & 0x810) != 0 )
      {
        v32 = FileObjecta;
      }
      else
      {
        v32 = FileObjecta;
        if ( (_BYTE)v40 )
        {
          LODWORD(v43) = SeGetImageRequiredSigningLevel(FileObjecta, (__int64)&v41);
          if ( (int)v43 < 0 )
          {
            MiReturnPfnReferenceCount(v17);
            return (unsigned int)v43;
          }
          v31 = v41;
          LOBYTE(v40) = v41;
          *a6 = v41;
        }
      }
      if ( (*a8 & 0x20000) != 0 )
      {
        v33 = v31;
        v30 |= 0x40000000u;
        if ( !v31 )
          v33 = 4;
        v31 = v33;
        LOBYTE(v40) = v33;
      }
      if ( (MiFlags & 0x40000) != 0 )
      {
        v34 = v31;
        *a8 |= 0x8000u;
        if ( !v31 )
          v34 = 1;
        v31 = v34;
        LOBYTE(v40) = v34;
      }
      if ( ((*a8 & 0x400) == 0 || !v31) && (*a8 & 0x8000) == 0 && *(char *)(v47 + 46) >= 0 )
        goto LABEL_69;
      LOBYTE(v38) = v31;
      v18 = MiValidateSectionCreate(v32, v23, a5, v30, v38);
      if ( v18 >= 0 )
      {
        v20 = v46;
        LOBYTE(v36) = v40;
        LOBYTE(v35) = *(_BYTE *)(v46 + 15) >> 4;
        v37 = SeCompareSigningLevelsForAuditableProcess(
                KeGetCurrentThread()->ApcState.Process,
                ((unsigned int)*a8 >> 11) & 1,
                v35,
                v36);
        v17 = v45;
        if ( !v37 )
          v18 = -1073740760;
        if ( v18 >= 0 )
        {
LABEL_69:
          if ( (*a8 & 0x40) == 0 )
            v27 = (*a8 & 0x20) != 0;
          v18 = MiRelocateImage(v20, (__int64)&v48, v44, v27, (*(_DWORD *)(v23 + 56) >> 30) & 1);
          if ( v18 >= 0 && HIBYTE(v40) == 1 )
            MiMakeImageReadOnly(v23);
        }
      }
      MiReturnPfnReferenceCount(v17);
      if ( v18 < 0 )
        return (unsigned int)v18;
      v25 = (_QWORD *)MiReleaseImageSection((__int64)v32, v23);
    }
    MiReleaseControlAreaWaiters(v25);
    return (unsigned int)v18;
  }
  if ( (*a8 & 2) != 0 )
  {
    IoSetTopLevelIrp(0LL);
    FsRtlReleaseFile(FileObject);
    *a8 &= ~2u;
  }
  return (unsigned int)v13;
}
