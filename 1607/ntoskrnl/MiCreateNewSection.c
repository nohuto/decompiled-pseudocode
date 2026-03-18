/*
 * XREFs of MiCreateNewSection @ 0x140522048
 * Callers:
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 * Callees:
 *     IoSetTopLevelIrp @ 0x140024F90 (IoSetTopLevelIrp.c)
 *     MiReleaseControlAreaWaiters @ 0x140026CE8 (MiReleaseControlAreaWaiters.c)
 *     MiMakeImageReadOnly @ 0x1400FC6F4 (MiMakeImageReadOnly.c)
 *     MiSectionCreated @ 0x1400FD2C8 (MiSectionCreated.c)
 *     MiReleaseImageSection @ 0x1400FDCE0 (MiReleaseImageSection.c)
 *     MiReturnPfnReferenceCount @ 0x1400FDD40 (MiReturnPfnReferenceCount.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     MiSetPagesModified @ 0x1401E5664 (MiSetPagesModified.c)
 *     FsRtlReleaseFile @ 0x14042DE60 (FsRtlReleaseFile.c)
 *     SeGetImageRequiredSigningLevel @ 0x140520A4C (SeGetImageRequiredSigningLevel.c)
 *     SeCompareSigningLevelsForAuditableProcess @ 0x1405218BC (SeCompareSigningLevelsForAuditableProcess.c)
 *     MiEnablePartitionMappedWrites @ 0x14052255C (MiEnablePartitionMappedWrites.c)
 *     MiCreateDataFileMap @ 0x140522664 (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MiParseComImage @ 0x1405250A8 (MiParseComImage.c)
 *     MiValidateSectionCreate @ 0x140526D8C (MiValidateSectionCreate.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14061DA90 (FsRtlGetDirectImageOriginalBase.c)
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
  __int16 v41; // [rsp+48h] [rbp-B9h] BYREF
  char v42; // [rsp+4Ah] [rbp-B7h] BYREF
  char v43[4]; // [rsp+4Ch] [rbp-B5h]
  __int64 v44; // [rsp+50h] [rbp-B1h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A9h] BYREF
  __int64 v46; // [rsp+60h] [rbp-A1h] BYREF
  PFILE_OBJECT FileObjecta; // [rsp+68h] [rbp-99h]
  __int64 v48; // [rsp+70h] [rbp-91h] BYREF
  __int64 v49; // [rsp+78h] [rbp-89h]
  __int64 v50; // [rsp+80h] [rbp-81h]
  __int64 v51; // [rsp+88h] [rbp-79h] BYREF
  int v52; // [rsp+90h] [rbp-71h]
  int v53; // [rsp+E0h] [rbp-21h]
  int v54; // [rsp+E4h] [rbp-1Dh]

  LODWORD(v44) = 0;
  *(_DWORD *)v43 = a3;
  LODWORD(v45) = a2;
  v41 = (unsigned __int8)*a7;
  FileObjecta = FileObject;
  v14 = MiEnablePartitionMappedWrites();
  if ( v14 >= 0 )
  {
    v15 = a2 & 0x1000000;
    if ( (a2 & 0x1000000) != 0 )
    {
      ImageFileMap = MiCreateImageFileMap(FileObject, (__int64)&v48, (__int64)&v46, (__int64)&v51, (__int64)&v44);
      v16 = v46;
    }
    else
    {
      v40 = *a9;
      v16 = 0LL;
      v46 = 0LL;
      ImageFileMap = MiCreateDataFileMap(FileObject, v43[0], a2, a4, v40);
      v52 = 0;
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
    v19 = v48;
    v20 = *a8;
    v49 = v48;
    *a10 = v48;
    if ( v20 )
    {
      *a11 = v20;
    }
    else
    {
      v26 = _InterlockedCompareExchange64((volatile signed __int64 *)(v19 + 24), -1LL, -1LL);
      v19 = v48;
      v16 = v46;
      v49 = v48;
      *a11 = v26;
    }
    v21 = *a9;
    v22 = *(_QWORD *)v19;
    if ( (*a9 & 0x2000) != 0 && (FileObject->DeviceObject->Characteristics & 0x10) == 0 && (!v15 || (v52 & 0xFFF) == 0) )
      *(_DWORD *)(v22 + 56) |= 0x20000000u;
    if ( (v21 & 0x4000) != 0 )
      *(_DWORD *)(v22 + 56) |= 0x20000u;
    if ( (((v21 & 0x10000) != 0) & !_bittest((const signed __int32 *)&v45, 0x18u)) != 0 )
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
    v27 = v49;
    v28 = *(_QWORD *)(v49 + 56);
    v45 = v28;
    v18 = MiParseComImage(v22, &v51, (char *)&v41 + 1);
    if ( v18 < 0 )
      goto LABEL_77;
    if ( !v53 && !v54 && !*(_BYTE *)(v28 + 50) )
      *(_BYTE *)(v27 + 15) |= 1u;
    if ( (*(_DWORD *)(v22 + 56) & 0x800) != 0 )
    {
      if ( (*a9 & 0x20000) != 0 )
      {
        dword_140326780 = 80;
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
      v32 = v41;
      if ( (v29 & 0x810) == 0 )
      {
        v33 = FileObjecta;
        if ( (_BYTE)v41 )
        {
          LOBYTE(v30) = v41;
          *(_DWORD *)v43 = SeGetImageRequiredSigningLevel((__int64)FileObjecta, v31, v30, 0LL, &v42);
          if ( *(int *)v43 < 0 )
          {
            MiReturnPfnReferenceCount(v16);
            return *(unsigned int *)v43;
          }
          v32 = v42;
          *a7 = v42;
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
        LODWORD(v45) = (*a9 & 0x400) != 0 && v32 || (v34 & 0x8000) != 0 || *(char *)(v45 + 46) < 0;
        if ( (v34 & 0x40) == 0 )
          v23 = (v34 & 0x20) != 0;
        *(_DWORD *)v43 = 0;
        if ( (*(_DWORD *)(v22 + 56) & 0x40000000) != 0 )
        {
          DirectImageOriginalBase = FsRtlGetDirectImageOriginalBase(v33);
          if ( DirectImageOriginalBase < 0 )
          {
LABEL_91:
            MiReturnPfnReferenceCount(v16);
            return (unsigned int)DirectImageOriginalBase;
          }
          v35 = v50;
          LODWORD(v27) = v49;
        }
        else
        {
          v35 = -1LL;
          v50 = -1LL;
        }
        if ( (_DWORD)v45 != 1 )
          goto LABEL_43;
        if ( v35 == -1 )
          goto LABEL_55;
        DirectImageOriginalBase = MiRelocateImage(v27, (unsigned int)&v51, v44, v23, v35, 0);
        if ( DirectImageOriginalBase >= 0 )
        {
          *(_DWORD *)v43 = 1;
          if ( HIBYTE(v41) == 1 )
            MiMakeImageReadOnly(v22);
LABEL_55:
          v18 = MiValidateSectionCreate(v33, v22, a5, a6);
          if ( v18 >= 0 )
          {
            LODWORD(v27) = v48;
            v36 = SeCompareSigningLevelsForAuditableProcess(
                    (__int64)KeGetCurrentThread()->ApcState.Process,
                    ((unsigned int)*a9 >> 11) & 1);
            v16 = v46;
            if ( !v36 )
              v18 = -1073740760;
            if ( v18 >= 0 )
            {
              if ( *(_DWORD *)v43 )
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
              v35 = v50;
LABEL_43:
              v18 = MiRelocateImage(v27, (unsigned int)&v51, v44, v23, v35, 0);
              if ( v18 >= 0 && HIBYTE(v41) == 1 )
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
      v32 = v41;
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
