/*
 * XREFs of MmLoadSystemImage @ 0x140574658
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x1401531A4 (IopLoadCrashdumpDriver.c)
 *     IoLoadCrashDumpDriver @ 0x1401F37B8 (IoLoadCrashDumpDriver.c)
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 *     MiLoadImportDll @ 0x140571A68 (MiLoadImportDll.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     PnprLoadPluginDriver @ 0x1406904E8 (PnprLoadPluginDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MiSetImageProtection @ 0x140023100 (MiSetImageProtection.c)
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiCheckPurgeAndUpMapCount @ 0x14008A920 (MiCheckPurgeAndUpMapCount.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400EF678 (ObDereferenceObjectDeferDelete.c)
 *     MiSessionLookupImage @ 0x1400FEA40 (MiSessionLookupImage.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiValidateStrongCodeDriverImage @ 0x14020E5D4 (MiValidateStrongCodeDriverImage.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     MmReleaseLoadLock @ 0x1404523E8 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiBackSingleImageWithPagefile @ 0x140571514 (MiBackSingleImageWithPagefile.c)
 *     MiCompactServiceTable @ 0x140571924 (MiCompactServiceTable.c)
 *     MiUseLargeDriverPage @ 0x140573B54 (MiUseLargeDriverPage.c)
 *     MiObtainSectionForDriver @ 0x140574C30 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x140574DD8 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 *     MiHandleDriverNonPagedSections @ 0x14057516C (MiHandleDriverNonPagedSections.c)
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 *     MiProcessLoadConfigForDriver @ 0x140575BA0 (MiProcessLoadConfigForDriver.c)
 *     MiMapSystemImage @ 0x140575D34 (MiMapSystemImage.c)
 *     MiConstructLoaderEntry @ 0x140576044 (MiConstructLoaderEntry.c)
 *     MiGetSystemAddressForImage @ 0x140576AF0 (MiGetSystemAddressForImage.c)
 *     MiRelocateAmount @ 0x1405C28DC (MiRelocateAmount.c)
 *     MiLogFailedDriverLoad @ 0x1406A0D4C (MiLogFailedDriverLoad.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406A0F7C (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MmLoadSystemImage(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        PVOID **a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // r14d
  int v8; // esi
  __int64 result; // rax
  __int64 v10; // r12
  PVOID *v11; // rdi
  signed int ConfigForDriver; // ebx
  __int64 v13; // r8
  PVOID v14; // rcx
  unsigned __int64 SystemAddressForImage; // r13
  void *v16; // rax
  void *v17; // r12
  PIMAGE_NT_HEADERS v18; // r14
  char v19; // r15
  unsigned int v20; // r15d
  PVOID v21; // rax
  unsigned __int64 v22; // r12
  ULONG v23; // r14d
  unsigned int *v24; // rsi
  __int64 v25; // rsi
  bool v26; // r14
  __int64 v27; // r14
  __int64 v28; // rsi
  int inserted; // eax
  _QWORD *v30; // rbx
  unsigned int TimeDateStamp; // eax
  char *v32; // rcx
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  _QWORD *v35; // rax
  int v36; // r14d
  unsigned int *i; // rsi
  __int64 v38; // rcx
  _QWORD *v39; // rcx
  int j; // r8d
  char v41; // [rsp+40h] [rbp-C0h]
  char v42; // [rsp+41h] [rbp-BFh]
  char v43; // [rsp+44h] [rbp-BCh]
  struct _KTHREAD *Lock; // [rsp+48h] [rbp-B8h]
  bool v45; // [rsp+50h] [rbp-B0h]
  int v46; // [rsp+54h] [rbp-ACh] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h]
  ULONG Size; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h]
  __int64 v51; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v52; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-70h] BYREF
  PVOID *v54; // [rsp+A0h] [rbp-60h] BYREF
  ULONG v55; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v56[16]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-40h]
  _OWORD v58[12]; // [rsp+C8h] [rbp-38h] BYREF

  v6 = 0;
  v46 = 1;
  *a6 = 0LL;
  v8 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (a4 & 2) != 0 )
      return 3221225714LL;
    if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      return 3221225495LL;
  }
  result = MiGenerateSystemImageNames(a1, a2, a3, &v52, v56, &String1);
  if ( (int)result >= 0 )
  {
    v42 = 0;
    v45 = 0;
    v10 = 0LL;
    v43 = 0;
    P = 0LL;
    Lock = MmAcquireLoadLock();
    v11 = 0LL;
    ConfigForDriver = MiObtainSectionForDriver(&String1);
    if ( ConfigForDriver < 0 )
      goto LABEL_63;
    v14 = (PVOID)*((_QWORD *)P + 14);
    Object = v14;
    if ( v14 )
    {
      v10 = MiSectionControlArea((__int64)v14);
      v6 = *(_DWORD *)(*(_QWORD *)v10 + 8LL);
      v14 = Object;
    }
    v50 = v10;
    if ( !ConfigForDriver )
    {
      v41 = 1;
      MEMORY[0x40] = v6 << 12;
      v45 = v8 != 0;
      SystemAddressForImage = MiGetSystemAddressForImage(v14, a4, &v46);
      if ( !SystemAddressForImage )
      {
        ObDereferenceObjectDeferDelete(Object);
        ExFreePoolWithTag(0LL, 0);
        v28 = (__int64)Lock;
        ConfigForDriver = -1073741670;
        v27 = a1;
LABEL_66:
        MmReleaseLoadLock(v28);
        if ( v42 == 1 )
          MiLogFailedDriverLoad(v27, 0LL, 0LL, (unsigned int)ConfigForDriver);
        goto LABEL_41;
      }
      MiCheckPurgeAndUpMapCount(v10);
      MEMORY[0x30] = SystemAddressForImage;
LABEL_9:
      ConfigForDriver = MiMapSystemImage(Object, SystemAddressForImage, a4);
      if ( ConfigForDriver >= 0 )
      {
        v43 = 1;
        if ( v8 || SystemAddressForImage != *(_QWORD *)(*(_QWORD *)v10 + 32LL) )
        {
          v17 = 0LL;
        }
        else
        {
          v16 = MiUseLargeDriverPage((__int64)Object, v6, SystemAddressForImage, &v52);
          v17 = v16;
          if ( v16 )
          {
            _InterlockedExchangeAdd((_DWORD *)&xmmword_14034EA58 + 3, -v6);
            v11 = (PVOID *)P;
            SystemAddressForImage = (unsigned __int64)v16;
            MEMORY[0x30] = v16;
          }
        }
        v42 = 1;
        if ( v41 == 1 )
        {
          v18 = RtlImageNtHeader(MEMORY[0x30]);
          if ( !v18 )
          {
            ConfigForDriver = -1073741279;
            goto LABEL_77;
          }
          if ( v18->FileHeader.Machine != 0x8664 || v18->OptionalHeader.Magic != 523 )
          {
            ConfigForDriver = -1073741520;
            goto LABEL_77;
          }
          if ( (MiFlags & 0x30000) != 0 )
          {
            ConfigForDriver = MiValidateStrongCodeDriverImage((__int64)v18);
            if ( ConfigForDriver < 0 && (BYTE2(MiFlags) & 3) == 1 )
            {
              v57 = 0LL;
              memset(v58, 0, 0x98uLL);
              LODWORD(v58[7]) = v18->OptionalHeader.CheckSum;
              TimeDateStamp = v18->FileHeader.TimeDateStamp;
              v58[5] = v52;
              DWORD1(v58[9]) = TimeDateStamp;
              MiLogStrongCodeDriverLoadFailure("SectionWXable");
LABEL_82:
              LOBYTE(v10) = v43;
              v28 = (__int64)Lock;
              v27 = a1;
              goto LABEL_40;
            }
          }
          ConfigForDriver = MiConstructLoaderEntry(
                              (_DWORD)v11,
                              (unsigned int)&v52,
                              (unsigned int)&String1,
                              a4,
                              v46,
                              (__int64)&v54);
          if ( ConfigForDriver < 0 )
            goto LABEL_77;
          ExFreePoolWithTag(v11, 0);
          v11 = v54;
          P = v54;
        }
        v43 = 5;
        if ( !v46 && !v17 && !v8 )
          MiBackSingleImageWithPagefile((__int64)v11);
        v19 = v41;
        if ( v41 != 1 )
        {
          v26 = v45;
          if ( !v45 )
          {
            LOBYTE(v10) = 5;
LABEL_36:
            ConfigForDriver = MiHandleDriverNonPagedSections(v11, a4, 1LL);
            if ( ConfigForDriver >= 0 )
            {
              LOBYTE(v10) = v10 | 8;
              if ( v26 )
                *((_BYTE *)MiSessionLookupImage(SystemAddressForImage) + 64) = 1;
              v27 = a1;
              MiDriverLoadSucceeded((_DWORD)v11, (_DWORD)Object, a1, (unsigned int)&String1, (__int64)&v52, v19, a4);
              v28 = (__int64)Lock;
              MmReleaseLoadLock((__int64)Lock);
              ConfigForDriver = 0;
              *a5 = v11;
              *a6 = SystemAddressForImage;
LABEL_40:
              if ( ConfigForDriver >= 0 )
              {
LABEL_41:
                if ( a2 )
                  ExFreePoolWithTag(String1.Buffer, 0);
                return (unsigned int)ConfigForDriver;
              }
              goto LABEL_64;
            }
LABEL_63:
            v27 = a1;
            v28 = (__int64)Lock;
LABEL_64:
            if ( v11 )
              MiUnloadSystemImage((ULONG_PTR)v11, v10);
            goto LABEL_66;
          }
        }
        ConfigForDriver = MiProcessLoadConfigForDriver(v11);
        if ( ConfigForDriver >= 0 )
        {
          v20 = 0;
          v21 = RtlImageDirectoryEntryToData(v11[6], 1u, 0xCu, &Size);
          v22 = (unsigned __int64)v21;
          if ( v21 && (v23 = Size) != 0 )
          {
            if ( (unsigned int)MiSetImageProtection((__int64)v11, (unsigned __int64)v21, Size) )
            {
              v20 = 1;
              v24 = 0LL;
LABEL_28:
              *((_DWORD *)v11 + 26) |= 0x1000u;
              v51 = -2LL;
              ConfigForDriver = MiResolveImageReferences(
                                  SystemAddressForImage,
                                  (unsigned int)&v52,
                                  (unsigned int)v56,
                                  a2,
                                  (unsigned __int64)&v51 & -(__int64)(v41 != 0));
              if ( *(_QWORD *)(v50 + 136) )
              {
                if ( v22 )
                {
                  MiSetImageProtection((__int64)v11, v22, v23);
                }
                else
                {
                  for ( i = &v24[-5 * v20]; i; i += 5 )
                  {
                    v38 = *i;
                    if ( !(_DWORD)v38 )
                      break;
                    v39 = (char *)v11[6] + v38;
                    for ( j = 0; *v39; ++j )
                      ++v39;
                    MiSetImageProtection((__int64)v11, (unsigned __int64)v11[6] + i[4], 8 * j);
                  }
                }
              }
              *((_DWORD *)v11 + 26) &= ~0x1000u;
              if ( ConfigForDriver < 0 )
              {
                v42 = 0;
                goto LABEL_82;
              }
              v19 = v41;
              if ( v41 == 1 )
                v11[17] = (PVOID)v51;
LABEL_34:
              v25 = v50;
              LOBYTE(v10) = 21;
              if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v50 + 56LL) + 46LL) & 0x40) == 0 )
              {
                v30 = (_QWORD *)(SystemAddressForImage + *(unsigned int *)(**(_QWORD **)(v50 + 96) + 56LL));
                MiSetImageProtection((__int64)v11, (unsigned __int64)v30, 8u);
                *v30 = SystemAddressForImage - MiRelocateAmount(v25);
                if ( *(_QWORD *)(v25 + 136) )
                  MiSetImageProtection((__int64)v11, (unsigned __int64)v30, 8u);
              }
              v26 = v45;
              if ( v45 )
              {
                ConfigForDriver = MiCompactServiceTable((__int64)v11, v19);
                if ( ConfigForDriver < 0 )
                  goto LABEL_63;
              }
              goto LABEL_36;
            }
            if ( (BYTE2(MiFlags) & 3) != 1 )
              goto LABEL_87;
            v32 = "UnwritableIAT";
          }
          else
          {
            v22 = 0LL;
            v23 = 0;
            v24 = (unsigned int *)RtlImageDirectoryEntryToData(v11[6], 1u, 1u, &v55);
            if ( !v24 )
            {
LABEL_96:
              v19 = v41;
              goto LABEL_34;
            }
            while ( 1 )
            {
              v33 = *v24;
              if ( !(_DWORD)v33 )
              {
LABEL_95:
                if ( v20 )
                  goto LABEL_28;
                goto LABEL_96;
              }
              v34 = (unsigned __int64)v11[6] + v24[4];
              v35 = (char *)v11[6] + v33;
              v36 = 0;
              while ( *v35 )
              {
                ++v35;
                ++v36;
              }
              v23 = 8 * v36;
              Size = v23;
              if ( !(unsigned int)MiSetImageProtection((__int64)v11, v34, v23) )
                break;
              ++v20;
              v24 += 5;
              if ( !v24 )
                goto LABEL_95;
            }
            if ( (BYTE2(MiFlags) & 3) != 1 )
              goto LABEL_87;
            v32 = "UnwritableImportDirectory";
          }
          MiLogStrongCodeDriverLoadFailure(v32);
LABEL_87:
          dword_14034E980 = 192;
          ConfigForDriver = -1073741701;
        }
      }
LABEL_77:
      LOBYTE(v10) = v43;
      goto LABEL_63;
    }
    v41 = 0;
    SystemAddressForImage = MEMORY[0x30];
    if ( v8 )
    {
      inserted = MiSessionInsertImage(MEMORY[0x30], v10, v13);
      ConfigForDriver = inserted;
      if ( inserted < 0 )
      {
LABEL_59:
        MmReleaseLoadLock((__int64)Lock);
        goto LABEL_41;
      }
      if ( inserted == 272 )
      {
LABEL_57:
        *a5 = 0LL;
        *a6 = SystemAddressForImage;
        if ( (MEMORY[0x68] & 0x4000000) != 0 )
          ConfigForDriver = -1073741411;
        else
          ConfigForDriver = v8 == 0 ? 0xC000010E : 0;
        goto LABEL_59;
      }
      v45 = 1;
    }
    if ( ConfigForDriver != 272 )
    {
      ++MEMORY[0x6C];
      goto LABEL_9;
    }
    goto LABEL_57;
  }
  return result;
}
