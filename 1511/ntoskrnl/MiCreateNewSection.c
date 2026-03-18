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
  int v30; // r8d
  unsigned int v31; // ebx
  char v32; // dl
  PFILE_OBJECT v33; // r12
  char v34; // al
  char v35; // al
  __int64 v36; // r8
  __int64 v37; // r9
  int v38; // eax
  int v39; // [rsp+28h] [rbp-D9h]
  int v40; // [rsp+40h] [rbp-C1h]
  __int16 v41; // [rsp+48h] [rbp-B9h] BYREF
  char v42; // [rsp+4Ah] [rbp-B7h] BYREF
  PFILE_OBJECT FileObjecta; // [rsp+50h] [rbp-B1h]
  _QWORD *v44; // [rsp+58h] [rbp-A9h]
  __int64 v45; // [rsp+60h] [rbp-A1h] BYREF
  __int64 v46; // [rsp+68h] [rbp-99h] BYREF
  __int64 v47; // [rsp+70h] [rbp-91h] BYREF
  __int64 v48; // [rsp+78h] [rbp-89h]
  __int64 v49; // [rsp+88h] [rbp-79h] BYREF
  int v50; // [rsp+90h] [rbp-71h]
  int v51; // [rsp+E0h] [rbp-21h]
  int v52; // [rsp+E4h] [rbp-1Dh]

  LODWORD(v45) = 0;
  LODWORD(v44) = a3;
  FileObjecta = FileObject;
  v41 = (unsigned __int8)*a6;
  v13 = MiEnablePartitionMappedWrites();
  if ( v13 >= 0 )
  {
    v15 = a2 & 0x1000000;
    if ( (a2 & 0x1000000) != 0 )
    {
      ImageFileMap = MiCreateImageFileMap(FileObject, (__int64)&v47, (__int64)&v46, (__int64)&v49, (__int64)&v45);
      v17 = v46;
    }
    else
    {
      v40 = *a8;
      v17 = 0LL;
      v46 = 0LL;
      ImageFileMap = MiCreateDataFileMap(FileObject, (char)v44, a2, a4, v40);
      v50 = 0;
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
    v20 = v47;
    *a9 = v47;
    if ( v19 )
    {
      *a10 = v19;
    }
    else
    {
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 24), -1LL, -1LL);
      v17 = v46;
      v20 = v47;
      *a10 = v21;
    }
    v22 = *a8;
    v23 = *(_QWORD *)v20;
    v24 = FileObjecta;
    if ( (*a8 & 0x2000) != 0 && (FileObjecta->DeviceObject->Characteristics & 0x10) == 0 && (!v15 || (v50 & 0xFFF) == 0) )
      *(_DWORD *)(v23 + 56) |= 0x20000000u;
    if ( (v22 & 0x4000) != 0 )
      *(_DWORD *)(v23 + 56) |= 0x20000u;
    if ( !v15 && (v22 & 0x10000) != 0 )
      *(_DWORD *)(v23 + 56) |= 0x40000000u;
    v25 = (_QWORD *)MiSectionCreated((__int64)v24, v23, v17);
    v26 = *a8;
    v27 = 2;
    v44 = v25;
    if ( (v26 & 2) != 0 )
    {
      IoSetTopLevelIrp(0LL);
      FsRtlReleaseFile(FileObjecta);
      *a8 &= ~2u;
      v25 = v44;
    }
    if ( v15 )
    {
      v28 = *(_QWORD *)(v20 + 56);
      v48 = v28;
      v18 = MiParseComImage(v23, &v49, (char *)&v41 + 1);
      if ( v18 < 0 )
      {
LABEL_28:
        MiReturnPfnReferenceCount(v17);
        return (unsigned int)v18;
      }
      if ( !v51 && !v52 && !*(_BYTE *)(v28 + 50) )
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
      v30 = 4;
      if ( (*a8 & 0x100) != 0 )
      {
        v31 = 4;
      }
      else if ( (v29 & 0x20) != 0 )
      {
        v31 = 1;
      }
      else if ( (v29 & 0x10) != 0 )
      {
        v31 = (*a8 & 0x1000) != 0 ? 8 : 2;
      }
      else
      {
        v31 = 0;
      }
      if ( (v29 & 0x800) != 0 )
        v31 |= 0x10u;
      v32 = v41;
      if ( (v29 & 0x8400) == 0 || (v29 & 0x810) != 0 )
      {
        v33 = FileObjecta;
      }
      else
      {
        v33 = FileObjecta;
        if ( (_BYTE)v41 )
        {
          LOBYTE(v30) = v41;
          LODWORD(v44) = SeGetImageRequiredSigningLevel((_DWORD)FileObjecta, v31, v30, 0, (__int64)&v42);
          if ( (int)v44 < 0 )
          {
            MiReturnPfnReferenceCount(v17);
            return (unsigned int)v44;
          }
          v32 = v42;
          LOBYTE(v41) = v42;
          *a6 = v42;
        }
      }
      if ( (*a8 & 0x20000) != 0 )
      {
        v34 = v32;
        v31 |= 0x40000000u;
        if ( !v32 )
          v34 = 4;
        v32 = v34;
        LOBYTE(v41) = v34;
      }
      if ( (MiFlags & 0x40000) != 0 )
      {
        v35 = v32;
        *a8 |= 0x8000u;
        if ( !v32 )
          v35 = 1;
        v32 = v35;
        LOBYTE(v41) = v35;
      }
      if ( ((*a8 & 0x400) == 0 || !v32) && (*a8 & 0x8000) == 0 && *(char *)(v48 + 46) >= 0 )
        goto LABEL_69;
      LOBYTE(v39) = v32;
      v18 = MiValidateSectionCreate(v33, v23, a5, v31, v39);
      if ( v18 >= 0 )
      {
        v20 = v47;
        LOBYTE(v37) = v41;
        LOBYTE(v36) = *(_BYTE *)(v47 + 15) >> 4;
        v38 = SeCompareSigningLevelsForAuditableProcess(
                KeGetCurrentThread()->ApcState.Process,
                ((unsigned int)*a8 >> 11) & 1,
                v36,
                v37);
        v17 = v46;
        if ( !v38 )
          v18 = -1073740760;
        if ( v18 >= 0 )
        {
LABEL_69:
          if ( (*a8 & 0x40) == 0 )
            v27 = (*a8 & 0x20) != 0;
          v18 = MiRelocateImage(v20, (__int64)&v49, v45, v27, (*(_DWORD *)(v23 + 56) >> 30) & 1);
          if ( v18 >= 0 && HIBYTE(v41) == 1 )
            MiMakeImageReadOnly(v23);
        }
      }
      MiReturnPfnReferenceCount(v17);
      if ( v18 < 0 )
        return (unsigned int)v18;
      v25 = (_QWORD *)MiReleaseImageSection((__int64)v33, v23);
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
