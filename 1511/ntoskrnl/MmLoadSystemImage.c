/*
 * XREFs of MmLoadSystemImage @ 0x1403CE970
 * Callers:
 *     IopLoadCrashdumpDriver @ 0x140126DAC (IopLoadCrashdumpDriver.c)
 *     IoLoadCrashDumpDriver @ 0x1401B83F8 (IoLoadCrashDumpDriver.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     NtSetSystemInformation @ 0x1404D4654 (NtSetSystemInformation.c)
 *     MiLoadImportDll @ 0x14050A29C (MiLoadImportDll.c)
 *     PnprLoadPluginDriver @ 0x140610774 (PnprLoadPluginDriver.c)
 * Callees:
 *     MiSetImageProtection @ 0x14001A37C (MiSetImageProtection.c)
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     RtlImageDirectoryEntryToData @ 0x140035E48 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x140037CD8 (RtlImageNtHeader.c)
 *     MiCheckPurgeAndUpMapCount @ 0x1400626D0 (MiCheckPurgeAndUpMapCount.c)
 *     MiSectionControlArea @ 0x1400627B0 (MiSectionControlArea.c)
 *     MiSessionLookupImage @ 0x140120308 (MiSessionLookupImage.c)
 *     MiSessionInsertImage @ 0x14012599C (MiSessionInsertImage.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiValidateStrongCodeDriverImage @ 0x1401CF00C (MiValidateStrongCodeDriverImage.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiUseLargeDriverPage @ 0x1403CC26C (MiUseLargeDriverPage.c)
 *     MiGetSystemAddressForImage @ 0x1403CC454 (MiGetSystemAddressForImage.c)
 *     MiMapSystemImage @ 0x1403CC804 (MiMapSystemImage.c)
 *     MiProcessLoadConfigForDriver @ 0x1403CC914 (MiProcessLoadConfigForDriver.c)
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 *     MiHandleDriverNonPagedSections @ 0x1403CD42C (MiHandleDriverNonPagedSections.c)
 *     MiGenerateSystemImageNames @ 0x1403CD67C (MiGenerateSystemImageNames.c)
 *     MiObtainSectionForDriver @ 0x1403CD7E8 (MiObtainSectionForDriver.c)
 *     MiConstructLoaderEntry @ 0x1403CE188 (MiConstructLoaderEntry.c)
 *     MmReleaseLoadLock @ 0x1403CF8C4 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1403CF8F0 (MmAcquireLoadLock.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiCompactServiceTable @ 0x140506EA0 (MiCompactServiceTable.c)
 *     MiBackSingleImageWithPagefile @ 0x14050CCBC (MiBackSingleImageWithPagefile.c)
 *     MiRelocateAmount @ 0x14054B548 (MiRelocateAmount.c)
 *     MiLogFailedDriverLoad @ 0x1406216B4 (MiLogFailedDriverLoad.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406218DC (MiLogStrongCodeDriverLoadFailure.c)
 */

__int64 __fastcall MmLoadSystemImage(
        UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        UNICODE_STRING *a3,
        int a4,
        char **a5,
        char **a6)
{
  int v8; // esi
  __int64 result; // rax
  unsigned int v10; // r14d
  int v11; // eax
  char *v12; // rdi
  signed int ConfigForDriver; // ebx
  PVOID v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  char *SystemAddressForImage; // r12
  PVOID *v19; // r13
  char *v20; // rax
  void *v21; // r15
  PIMAGE_NT_HEADERS v22; // r14
  char v23; // r15
  unsigned int v24; // r15d
  PVOID v25; // rax
  unsigned __int64 v26; // r13
  int v27; // r14d
  unsigned int *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rsi
  bool v31; // r14
  UNICODE_STRING *v32; // r15
  __int64 v33; // rsi
  int inserted; // eax
  unsigned int TimeDateStamp; // eax
  char *v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rdx
  _QWORD *v39; // rax
  int v40; // r14d
  unsigned int *i; // rsi
  __int64 v42; // rcx
  _QWORD *v43; // rcx
  int j; // r8d
  char *v45; // rbx
  char v46; // [rsp+28h] [rbp-D8h]
  char v47; // [rsp+40h] [rbp-C0h]
  char v48; // [rsp+41h] [rbp-BFh]
  __int64 Lock; // [rsp+48h] [rbp-B8h]
  bool v50; // [rsp+50h] [rbp-B0h]
  int v51; // [rsp+54h] [rbp-ACh] BYREF
  PVOID Object; // [rsp+58h] [rbp-A8h]
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Size; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+70h] [rbp-90h]
  __int64 v56; // [rsp+78h] [rbp-88h] BYREF
  UNICODE_STRING v57; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String1; // [rsp+90h] [rbp-70h] BYREF
  char *v59; // [rsp+A0h] [rbp-60h] BYREF
  ULONG v60; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING v61; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-40h]
  _OWORD v63[12]; // [rsp+C8h] [rbp-38h] BYREF
  char v66; // [rsp+1B8h] [rbp+B8h]

  v66 = a4;
  v51 = 1;
  *a6 = 0LL;
  v8 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (a4 & 2) != 0 )
      return 3221225714LL;
    if ( (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) == 0 )
      return 3221225495LL;
  }
  result = MiGenerateSystemImageNames(&a1->Length, a2, a3, &v57, &v61, &String1);
  if ( (int)result >= 0 )
  {
    v48 = 0;
    v50 = 0;
    v10 = 0;
    P = 0LL;
    Lock = MmAcquireLoadLock();
    v11 = MiObtainSectionForDriver(&String1, a1, a4, (PVOID **)&P);
    v12 = (char *)P;
    ConfigForDriver = v11;
    if ( v11 < 0 )
      goto LABEL_62;
    v14 = (PVOID)*((_QWORD *)P + 14);
    Object = v14;
    if ( v14 )
    {
      v15 = MiSectionControlArea((__int64)v14);
      v55 = v15;
      v10 = *(_DWORD *)(*(_QWORD *)v15 + 8LL);
      v14 = Object;
    }
    else
    {
      v15 = 1LL;
      v55 = 1LL;
    }
    if ( !ConfigForDriver )
    {
      v47 = 1;
      *((_DWORD *)v12 + 16) = v10 << 12;
      v50 = v8 != 0;
      SystemAddressForImage = (char *)MiGetSystemAddressForImage((__int64)v14, a4, &v51);
      if ( !SystemAddressForImage )
      {
        ObDereferenceObjectDeferDelete(Object);
        ExFreePoolWithTag(v12, 0);
        v33 = Lock;
        ConfigForDriver = -1073741670;
        v32 = a1;
LABEL_65:
        MmReleaseLoadLock(v33);
        if ( v48 == 1 )
          MiLogFailedDriverLoad(v32, 0LL, 0LL, (unsigned int)ConfigForDriver);
        goto LABEL_41;
      }
      MiCheckPurgeAndUpMapCount(v15, v16, v17);
      v19 = (PVOID *)(v12 + 48);
      *((_QWORD *)v12 + 6) = SystemAddressForImage;
LABEL_9:
      ConfigForDriver = MiMapSystemImage((__int64)Object, (unsigned __int64)SystemAddressForImage);
      if ( ConfigForDriver >= 0 )
      {
        if ( v8 || SystemAddressForImage != *(char **)(*(_QWORD *)v15 + 32LL) )
        {
          v21 = 0LL;
        }
        else
        {
          v20 = (char *)MiUseLargeDriverPage((__int64)Object, v10, SystemAddressForImage, &v57);
          v21 = v20;
          if ( v20 )
          {
            _InterlockedExchangeAdd((_DWORD *)&xmmword_1402FE598 + 3, -v10);
            v12 = (char *)P;
            SystemAddressForImage = v20;
            *v19 = v20;
          }
        }
        v48 = 1;
        if ( v47 == 1 )
        {
          v22 = RtlImageNtHeader(*v19);
          if ( !v22 )
          {
            ConfigForDriver = -1073741279;
            goto LABEL_76;
          }
          if ( v22->FileHeader.Machine != 0x8664 || v22->OptionalHeader.Magic != 523 )
          {
            ConfigForDriver = -1073741520;
            goto LABEL_76;
          }
          if ( (MiFlags & 0x10000) != 0 )
          {
            ConfigForDriver = MiValidateStrongCodeDriverImage((__int64)v22);
            if ( ConfigForDriver < 0 )
            {
              v62 = 0LL;
              memset(v63, 0, 0x98uLL);
              LODWORD(v63[7]) = v22->OptionalHeader.CheckSum;
              TimeDateStamp = v22->FileHeader.TimeDateStamp;
              v63[5] = v57;
              DWORD1(v63[9]) = TimeDateStamp;
              MiLogStrongCodeDriverLoadFailure("SectionWXable");
LABEL_81:
              v33 = Lock;
              v32 = a1;
              goto LABEL_40;
            }
          }
          ConfigForDriver = MiConstructLoaderEntry((__int64)v12, (const void **)&v57, &String1.Length, v66, v51, &v59);
          if ( ConfigForDriver < 0 )
            goto LABEL_76;
          ExFreePoolWithTag(v12, 0);
          v12 = v59;
          P = v59;
        }
        if ( !v51 && !v21 && !v8 )
          MiBackSingleImageWithPagefile(v12);
        v23 = v47;
        if ( v47 != 1 )
        {
          v31 = v50;
          if ( !v50 )
          {
LABEL_36:
            ConfigForDriver = MiHandleDriverNonPagedSections((__int64)v12, v66, 1);
            if ( ConfigForDriver >= 0 )
            {
              if ( v31 )
                *((_BYTE *)MiSessionLookupImage((unsigned __int64)SystemAddressForImage) + 64) = 1;
              v46 = v23;
              v32 = a1;
              MiDriverLoadSucceeded(
                (__int64)v12,
                (__int64)Object,
                (__int64)a1,
                (__int64)&String1,
                (__int64)&v57,
                v46,
                v66);
              v33 = Lock;
              MmReleaseLoadLock(Lock);
              ConfigForDriver = 0;
              *a5 = v12;
              *a6 = SystemAddressForImage;
LABEL_40:
              if ( ConfigForDriver >= 0 )
              {
LABEL_41:
                if ( a2 )
                  ExFreePoolWithTag(String1.Buffer, 0);
                return (unsigned int)ConfigForDriver;
              }
              goto LABEL_63;
            }
            goto LABEL_76;
          }
        }
        ConfigForDriver = MiProcessLoadConfigForDriver((__int64)v12);
        if ( ConfigForDriver < 0 )
        {
          v33 = Lock;
          v32 = a1;
          goto LABEL_63;
        }
        v24 = 0;
        v25 = RtlImageDirectoryEntryToData(*((PVOID *)v12 + 6), 1u, 0xCu, &Size);
        v26 = (unsigned __int64)v25;
        if ( !v25 || (v27 = Size) == 0 )
        {
          v26 = 0LL;
          v27 = 0;
          v28 = (unsigned int *)RtlImageDirectoryEntryToData(*((PVOID *)v12 + 6), 1u, 1u, &v60);
          if ( !v28 )
            goto LABEL_94;
          do
          {
            v37 = *v28;
            if ( !(_DWORD)v37 )
              break;
            v38 = *((_QWORD *)v12 + 6) + v28[4];
            v39 = (_QWORD *)(*((_QWORD *)v12 + 6) + v37);
            v40 = 0;
            while ( *v39 )
            {
              ++v39;
              ++v40;
            }
            v27 = 8 * v40;
            Size = v27;
            if ( !(unsigned int)MiSetImageProtection((__int64)v12, v38, v27) )
            {
              v36 = "UnwritableImportDirectory";
              goto LABEL_85;
            }
            ++v24;
            v28 += 5;
          }
          while ( v28 );
          if ( !v24 )
          {
LABEL_94:
            v23 = v47;
            goto LABEL_34;
          }
LABEL_28:
          *((_DWORD *)v12 + 26) |= 0x1000u;
          v56 = -2LL;
          ConfigForDriver = MiResolveImageReferences(
                              SystemAddressForImage,
                              (__int64)&v57,
                              &v61,
                              a2,
                              (unsigned __int64 **)((unsigned __int64)&v56 & -(__int64)(v47 != 0)));
          if ( *(_QWORD *)(v55 + 136) )
          {
            if ( v26 )
            {
              MiSetImageProtection((__int64)v12, v26, v27);
            }
            else
            {
              for ( i = &v28[-5 * v24]; i; i += 5 )
              {
                v42 = *i;
                if ( !(_DWORD)v42 )
                  break;
                v43 = (_QWORD *)(*((_QWORD *)v12 + 6) + v42);
                for ( j = 0; *v43; ++j )
                  ++v43;
                MiSetImageProtection((__int64)v12, *((_QWORD *)v12 + 6) + i[4], 8 * j);
              }
            }
          }
          *((_DWORD *)v12 + 26) &= ~0x1000u;
          if ( ConfigForDriver < 0 )
          {
            v48 = 0;
            goto LABEL_81;
          }
          v23 = v47;
          if ( v47 == 1 )
            *((_QWORD *)v12 + 17) = v56;
LABEL_34:
          v30 = v55;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v55 + 56LL) + 46LL) & 0x40) == 0 )
          {
            v45 = &SystemAddressForImage[*(unsigned int *)(**(_QWORD **)(v55 + 96) + 56LL)];
            MiSetImageProtection((__int64)v12, (unsigned __int64)v45, 8u);
            *(_QWORD *)v45 = &SystemAddressForImage[-MiRelocateAmount(v30)];
            if ( *(_QWORD *)(v30 + 136) )
              MiSetImageProtection((__int64)v12, (unsigned __int64)v45, 8u);
          }
          v31 = v50;
          if ( !v50 )
            goto LABEL_36;
          LOBYTE(v29) = v23;
          ConfigForDriver = MiCompactServiceTable(v12, v29);
          if ( ConfigForDriver >= 0 )
            goto LABEL_36;
LABEL_62:
          v32 = a1;
          v33 = Lock;
          goto LABEL_63;
        }
        if ( (unsigned int)MiSetImageProtection((__int64)v12, (unsigned __int64)v25, Size) )
        {
          v24 = 1;
          v28 = 0LL;
          goto LABEL_28;
        }
        v36 = "UnwritableIAT";
LABEL_85:
        MiLogStrongCodeDriverLoadFailure(v36);
        dword_1402FE4B8 = 192;
        ConfigForDriver = -1073741701;
      }
LABEL_76:
      v33 = Lock;
      v32 = a1;
LABEL_63:
      if ( v12 )
        MiUnloadSystemImage((ULONG_PTR)v12);
      goto LABEL_65;
    }
    v47 = 0;
    v19 = (PVOID *)(v12 + 48);
    SystemAddressForImage = (char *)*((_QWORD *)v12 + 6);
    if ( v8 )
    {
      inserted = MiSessionInsertImage(*((_QWORD *)v12 + 6), v15);
      ConfigForDriver = inserted;
      if ( inserted < 0 )
      {
LABEL_59:
        MmReleaseLoadLock(Lock);
        goto LABEL_41;
      }
      if ( inserted == 272 )
      {
LABEL_57:
        *a5 = v12;
        *a6 = SystemAddressForImage;
        if ( (*((_DWORD *)v12 + 26) & 0x4000000) != 0 )
          ConfigForDriver = -1073741411;
        else
          ConfigForDriver = v8 == 0 ? 0xC000010E : 0;
        goto LABEL_59;
      }
      v50 = 1;
    }
    if ( ConfigForDriver != 272 )
    {
      ++*((_WORD *)v12 + 54);
      goto LABEL_9;
    }
    goto LABEL_57;
  }
  return result;
}
