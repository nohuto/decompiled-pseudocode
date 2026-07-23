/*
 * XREFs of MmLoadSystemImage @ 0x140481880
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x1401320B8 (IopLoadCrashdumpDriver.c)
 *     IoLoadCrashDumpDriver @ 0x1401C6084 (IoLoadCrashDumpDriver.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     MiLoadImportDll @ 0x140544744 (MiLoadImportDll.c)
 *     PnprLoadPluginDriver @ 0x140644C64 (PnprLoadPluginDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14002C4A0 (MiCheckPurgeAndUpMapCount.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     MiSetImageProtection @ 0x140082DB8 (MiSetImageProtection.c)
 *     MiSessionLookupImage @ 0x140087EC4 (MiSessionLookupImage.c)
 *     MiSessionInsertImage @ 0x1401300DC (MiSessionInsertImage.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiValidateStrongCodeDriverImage @ 0x1401E5D44 (MiValidateStrongCodeDriverImage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     MiResolveImageReferences @ 0x14046B54C (MiResolveImageReferences.c)
 *     MiHandleDriverNonPagedSections @ 0x14047D840 (MiHandleDriverNonPagedSections.c)
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MmReleaseLoadLock @ 0x140482154 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140482AA0 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x140482C50 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x140482EC8 (MiDriverLoadSucceeded.c)
 *     MiProcessLoadConfigForDriver @ 0x1404830E8 (MiProcessLoadConfigForDriver.c)
 *     MiMapSystemImage @ 0x14048327C (MiMapSystemImage.c)
 *     MiGetSystemAddressForImage @ 0x1404B2908 (MiGetSystemAddressForImage.c)
 *     MiUseLargeDriverPage @ 0x1404CFA5C (MiUseLargeDriverPage.c)
 *     MiRelocateAmount @ 0x14050A68C (MiRelocateAmount.c)
 *     KseDriverLoadImage @ 0x140514D7C (KseDriverLoadImage.c)
 *     MiCompactServiceTable @ 0x14053A788 (MiCompactServiceTable.c)
 *     MiBackSingleImageWithPagefile @ 0x140547918 (MiBackSingleImageWithPagefile.c)
 *     MiLogFailedDriverLoad @ 0x140659484 (MiLogFailedDriverLoad.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406596A4 (MiLogStrongCodeDriverLoadFailure.c)
 *     VfDriverLoadImage @ 0x1406FDD58 (VfDriverLoadImage.c)
 */

__int64 __fastcall MmLoadSystemImage(
        __int64 a1,
        const UNICODE_STRING *a2,
        __int64 a3,
        unsigned int a4,
        PVOID **a5,
        char **a6)
{
  __int64 v6; // r13
  unsigned int v7; // r14d
  int v9; // esi
  __int64 result; // rax
  PVOID *v11; // rdi
  signed int ConfigForDriver; // ebx
  void *v13; // r12
  char *SystemAddressForImage; // r15
  __int64 v15; // r13
  __int64 v16; // rax
  char v17; // bl
  PIMAGE_NT_HEADERS v18; // r14
  unsigned int v19; // r12d
  PVOID v20; // rax
  unsigned __int64 v21; // r13
  int v22; // r14d
  unsigned int *v23; // rsi
  char v24; // r13
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // rsi
  int inserted; // eax
  int TimeDateStamp; // eax
  char *v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rax
  int v34; // r14d
  unsigned int *i; // rsi
  __int64 v36; // rcx
  _QWORD *v37; // rcx
  int j; // r8d
  char *v39; // rbx
  __int64 v40; // rdx
  char v41; // [rsp+40h] [rbp-C0h]
  char v42; // [rsp+41h] [rbp-BFh]
  __int64 Lock; // [rsp+48h] [rbp-B8h]
  bool v44; // [rsp+50h] [rbp-B0h]
  int v45; // [rsp+54h] [rbp-ACh] BYREF
  ULONG Size; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  void *v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h] BYREF
  __int128 v51; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-70h] BYREF
  ULONG v53; // [rsp+A0h] [rbp-60h] BYREF
  PVOID *v54; // [rsp+A8h] [rbp-58h] BYREF
  int v55[56]; // [rsp+B0h] [rbp-50h] BYREF

  v6 = 1LL;
  v7 = 0;
  v45 = 1;
  *a6 = 0LL;
  v9 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (a4 & 2) != 0 )
      return 3221225714LL;
    if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      return 3221225495LL;
  }
  result = MiGenerateSystemImageNames(a1, a2, a3, &v51, v55, &String1);
  if ( (int)result >= 0 )
  {
    v42 = 0;
    P = 0LL;
    v44 = 0;
    Lock = MmAcquireLoadLock();
    v11 = 0LL;
    ConfigForDriver = MiObtainSectionForDriver(&String1);
    if ( ConfigForDriver < 0 )
      goto LABEL_54;
    v13 = (void *)*((_QWORD *)P + 14);
    v49 = v13;
    if ( v13 )
    {
      v6 = MiSectionControlArea((__int64)v13);
      v7 = *(_DWORD *)(*(_QWORD *)v6 + 8LL);
    }
    v48 = v6;
    if ( !ConfigForDriver )
    {
      v41 = 1;
      v44 = v9 != 0;
      MEMORY[0x40] = v7 << 12;
      SystemAddressForImage = (char *)MiGetSystemAddressForImage(v13, a4, &v45);
      if ( !SystemAddressForImage )
      {
        ObDereferenceObjectDeferDelete(v13);
        ExFreePoolWithTag(0LL, 0);
        v27 = Lock;
        ConfigForDriver = -1073741670;
        v26 = a1;
LABEL_57:
        MmReleaseLoadLock(v27);
        if ( v42 == 1 )
          MiLogFailedDriverLoad(v26, 0LL, 0LL, (unsigned int)ConfigForDriver);
        goto LABEL_40;
      }
      MiCheckPurgeAndUpMapCount(v6);
      MEMORY[0x30] = SystemAddressForImage;
LABEL_9:
      ConfigForDriver = MiMapSystemImage(v49, SystemAddressForImage, a4);
      if ( ConfigForDriver < 0 )
        goto LABEL_54;
      v15 = 0LL;
      if ( !v9 && SystemAddressForImage == *(char **)(*(_QWORD *)v48 + 32LL) )
      {
        v16 = MiUseLargeDriverPage(v49, v7, SystemAddressForImage, &v51);
        v15 = v16;
        if ( v16 )
        {
          _InterlockedExchangeAdd((_DWORD *)&xmmword_1403268A8 + 3, -v7);
          v11 = (PVOID *)P;
          SystemAddressForImage = (char *)v16;
          MEMORY[0x30] = v16;
        }
      }
      v17 = v41;
      v42 = 1;
      if ( v41 == 1 )
      {
        v18 = RtlImageNtHeader(MEMORY[0x30]);
        if ( !v18 )
        {
          ConfigForDriver = -1073741279;
          goto LABEL_54;
        }
        if ( v18->FileHeader.Machine != 0x8664 || v18->OptionalHeader.Magic != 523 )
        {
          ConfigForDriver = -1073741520;
          goto LABEL_54;
        }
        if ( (MiFlags & 0x4000) != 0 )
        {
          ConfigForDriver = MiValidateStrongCodeDriverImage((__int64)v18);
          if ( ConfigForDriver < 0 )
          {
            memset(&v55[4], 0, 0xA0uLL);
            v55[34] = v18->OptionalHeader.CheckSum;
            TimeDateStamp = v18->FileHeader.TimeDateStamp;
            *(_OWORD *)&v55[26] = v51;
            v55[43] = TimeDateStamp;
            MiLogStrongCodeDriverLoadFailure("SectionWXable");
LABEL_74:
            v27 = Lock;
            v26 = a1;
            goto LABEL_39;
          }
        }
        ConfigForDriver = MiConstructLoaderEntry(
                            (__int64)v11,
                            (const void **)&v51,
                            (const void **)&String1,
                            a4,
                            v45,
                            (__int64 *)&v54);
        if ( ConfigForDriver < 0 )
        {
LABEL_54:
          v26 = a1;
          v27 = Lock;
LABEL_55:
          if ( v11 )
            MiUnloadSystemImage((ULONG_PTR)v11);
          goto LABEL_57;
        }
        ExFreePoolWithTag(v11, 0);
        v11 = v54;
        v17 = 1;
        P = v54;
      }
      if ( !v45 && !v15 && !v9 )
        MiBackSingleImageWithPagefile(v11);
      v19 = 0;
      v20 = RtlImageDirectoryEntryToData(v11[6], 1u, 0xCu, &Size);
      v21 = (unsigned __int64)v20;
      if ( v20 && (v22 = Size) != 0 )
      {
        if ( !(unsigned int)MiSetImageProtection((__int64)v11, (unsigned __int64)v20, Size) )
        {
          v30 = "UnwritableIAT";
LABEL_78:
          MiLogStrongCodeDriverLoadFailure(v30);
          dword_1403267C0 = 192;
          ConfigForDriver = -1073741701;
          goto LABEL_54;
        }
        v19 = 1;
        v23 = 0LL;
      }
      else
      {
        v21 = 0LL;
        v22 = 0;
        v23 = (unsigned int *)RtlImageDirectoryEntryToData(v11[6], 1u, 1u, &v53);
        if ( !v23 )
          goto LABEL_87;
        do
        {
          v31 = *v23;
          if ( !(_DWORD)v31 )
            break;
          v32 = (unsigned __int64)v11[6] + v23[4];
          v33 = (char *)v11[6] + v31;
          v34 = 0;
          while ( *v33 )
          {
            ++v33;
            ++v34;
          }
          v22 = 8 * v34;
          Size = v22;
          if ( !(unsigned int)MiSetImageProtection((__int64)v11, v32, v22) )
          {
            v30 = "UnwritableImportDirectory";
            goto LABEL_78;
          }
          ++v19;
          v23 += 5;
        }
        while ( v23 );
        if ( !v19 )
        {
LABEL_87:
          v24 = v41;
LABEL_32:
          ConfigForDriver = MiProcessLoadConfigForDriver(v11);
          if ( ConfigForDriver >= 0 )
          {
            v25 = v48;
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v48 + 56LL) + 46LL) & 0x40) == 0 )
            {
              v39 = &SystemAddressForImage[*(unsigned int *)(**(_QWORD **)(v48 + 96) + 64LL)];
              MiSetImageProtection((__int64)v11, (unsigned __int64)v39, 8u);
              *(_QWORD *)v39 = &SystemAddressForImage[-MiRelocateAmount(v25, 0LL)];
              if ( *(_QWORD *)(v25 + 144) != v40 )
                MiSetImageProtection((__int64)v11, (unsigned __int64)v39, v40 + 8);
            }
            VfDriverLoadImage(v11, 0LL, 0LL, 0LL);
            KseDriverLoadImage(v11);
            if ( !v44 || (ConfigForDriver = MiCompactServiceTable(v11), ConfigForDriver >= 0) )
            {
              ConfigForDriver = MiHandleDriverNonPagedSections((__int64)v11, a4, 1);
              if ( ConfigForDriver >= 0 )
              {
                if ( v44 )
                  *((_BYTE *)MiSessionLookupImage((unsigned __int64)SystemAddressForImage) + 64) = 1;
                v26 = a1;
                MiDriverLoadSucceeded((_DWORD)v11, (_DWORD)v49, a1, (unsigned int)&String1, (__int64)&v51, v24, a4);
                v27 = Lock;
                MmReleaseLoadLock(Lock);
                ConfigForDriver = 0;
                *a5 = v11;
                *a6 = SystemAddressForImage;
LABEL_39:
                if ( ConfigForDriver >= 0 )
                {
LABEL_40:
                  if ( a2 )
                    ExFreePoolWithTag(String1.Buffer, 0);
                  return (unsigned int)ConfigForDriver;
                }
                goto LABEL_55;
              }
            }
          }
          goto LABEL_54;
        }
      }
      *((_DWORD *)v11 + 26) |= 0x1000u;
      v50 = -2LL;
      ConfigForDriver = MiResolveImageReferences(
                          SystemAddressForImage,
                          (__int64)&v51,
                          v55,
                          a2,
                          (_QWORD *)((unsigned __int64)&v50 & -(__int64)(v17 != 0)));
      if ( *(_QWORD *)(v48 + 144) )
      {
        if ( v21 )
        {
          MiSetImageProtection((__int64)v11, v21, v22);
        }
        else
        {
          for ( i = &v23[-5 * v19]; i; i += 5 )
          {
            v36 = *i;
            if ( !(_DWORD)v36 )
              break;
            v37 = (char *)v11[6] + v36;
            for ( j = 0; *v37; ++j )
              ++v37;
            MiSetImageProtection((__int64)v11, (unsigned __int64)v11[6] + i[4], 8 * j);
          }
        }
      }
      *((_DWORD *)v11 + 26) &= ~0x1000u;
      if ( ConfigForDriver < 0 )
      {
        v42 = 0;
        goto LABEL_74;
      }
      v24 = v41;
      if ( v41 == 1 )
        v11[17] = (PVOID)v50;
      goto LABEL_32;
    }
    v41 = 0;
    SystemAddressForImage = (char *)MEMORY[0x30];
    if ( v9 )
    {
      inserted = MiSessionInsertImage(MEMORY[0x30], v6);
      ConfigForDriver = inserted;
      if ( inserted < 0 )
      {
LABEL_61:
        MmReleaseLoadLock(Lock);
        goto LABEL_40;
      }
      if ( inserted == 272 )
      {
LABEL_59:
        *a5 = 0LL;
        *a6 = SystemAddressForImage;
        if ( (MEMORY[0x68] & 0x4000000) != 0 )
          ConfigForDriver = -1073741411;
        else
          ConfigForDriver = v9 == 0 ? 0xC000010E : 0;
        goto LABEL_61;
      }
      v44 = 1;
    }
    if ( ConfigForDriver != 272 )
    {
      ++MEMORY[0x6C];
      goto LABEL_9;
    }
    goto LABEL_59;
  }
  return result;
}
