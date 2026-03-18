/*
 * XREFs of MiGetSystemAddressForImage @ 0x140576AF0
 * Callers:
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140010684 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x140089EB0 (MiSectionControlArea.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401540CC (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140156304 (MiFreePrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     MiMapImageInSystemSpace @ 0x14051BD60 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x14051BE94 (MiUnmapImageInSystemSpace.c)
 *     MiReturnSystemImageAddress @ 0x140521A7C (MiReturnSystemImageAddress.c)
 *     MiImageSuitableForSystem @ 0x140576C78 (MiImageSuitableForSystem.c)
 *     MiSelectSystemImageAddress @ 0x140579030 (MiSelectSystemImageAddress.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, char a2, _DWORD *a3)
{
  int v4; // r15d
  __int64 *v5; // r12
  unsigned int v6; // r14d
  unsigned __int64 v7; // rbx
  __int64 v8; // r8
  PVOID *v9; // rdx
  PVOID *v10; // r10
  __int64 v11; // rcx
  _DWORD *v12; // r9
  unsigned int v14; // r15d
  __int64 v15; // rax
  _DWORD *v16; // rbx
  PIMAGE_NT_HEADERS v17; // rdx
  __int64 v18; // r9
  __int64 SizeOfHeapReserve_low; // r8
  unsigned int NumberOfRvaAndSizes; // ecx
  unsigned int v21; // eax
  unsigned int SizeOfHeapReserve_high; // ecx
  int v23; // ebx
  __int64 v24; // r8
  _DWORD v25[4]; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 ImageBase_high; // [rsp+40h] [rbp-128h] BYREF
  unsigned int FileAlignment; // [rsp+48h] [rbp-120h]
  unsigned int SectionAlignment; // [rsp+4Ch] [rbp-11Ch]
  unsigned int SizeOfImage; // [rsp+50h] [rbp-118h]
  int SizeOfHeapReserve; // [rsp+54h] [rbp-114h]
  unsigned int SizeOfHeaders; // [rsp+58h] [rbp-110h]
  unsigned int AddressOfEntryPoint; // [rsp+5Ch] [rbp-10Ch]
  unsigned __int64 SizeOfStackReserve_low; // [rsp+60h] [rbp-108h]
  unsigned __int64 SizeOfStackReserve_high; // [rsp+68h] [rbp-100h]
  __int16 Magic; // [rsp+70h] [rbp-F8h]
  unsigned __int16 Subsystem; // [rsp+72h] [rbp-F6h]
  unsigned __int16 MajorSubsystemVersion; // [rsp+74h] [rbp-F4h]
  unsigned __int16 MinorSubsystemVersion; // [rsp+76h] [rbp-F2h]
  unsigned __int16 MajorOperatingSystemVersion; // [rsp+78h] [rbp-F0h]
  unsigned __int16 MinorOperatingSystemVersion; // [rsp+7Ah] [rbp-EEh]
  unsigned __int16 DllCharacteristics; // [rsp+7Ch] [rbp-ECh]
  unsigned int CheckSum; // [rsp+80h] [rbp-E8h]
  unsigned int SizeOfCode; // [rsp+84h] [rbp-E4h]
  unsigned int VirtualAddress; // [rsp+88h] [rbp-E0h]
  unsigned int Size; // [rsp+8Ch] [rbp-DCh]
  __int64 v46; // [rsp+90h] [rbp-D8h]
  _IMAGE_DATA_DIRECTORY v47; // [rsp+98h] [rbp-D0h]
  __int64 v48; // [rsp+A0h] [rbp-C8h]
  bool v49; // [rsp+A8h] [rbp-C0h]
  unsigned int v50; // [rsp+B0h] [rbp-B8h]
  unsigned int v51; // [rsp+B4h] [rbp-B4h]
  unsigned int v52; // [rsp+B8h] [rbp-B0h]
  int v53; // [rsp+BCh] [rbp-ACh]
  __int64 *v54; // [rsp+C0h] [rbp-A8h]
  PVOID BaseAddress[10]; // [rsp+D0h] [rbp-98h] BYREF

  *a3 = 1;
  v4 = 0;
  v5 = (__int64 *)MiSectionControlArea(a1);
  v54 = v5;
  v6 = *(_DWORD *)(*v5 + 8);
  v52 = v6;
  v7 = MiImageSuitableForSystem(v5, v25, 0LL);
  if ( v7 )
  {
    v9 = (PVOID *)PsLoadedModuleList;
    v10 = &PsLoadedModuleList;
    while ( v9 != v10 )
    {
      v11 = (__int64)v9[14];
      if ( v11 && v5 == (__int64 *)MiSectionControlArea(v11) )
      {
        *v12 = 0;
        v8 = 1LL;
        break;
      }
      v9 = (PVOID *)*v9;
    }
  }
  if ( v7 )
  {
    if ( (_DWORD)v8 != 1 && (a2 & 2) == 0 )
    {
      v8 = 0x7FFFFFFFFFLL;
      if ( ((a2 & 1) == 0 || v7 + 0x70000000000LL <= 0x7FFFFFFFFFLL)
        && ((a2 & 1) != 0 || v7 + 0x70000000000LL > 0x7FFFFFFFFFLL) )
      {
        goto LABEL_14;
      }
    }
  }
  v14 = ((a2 & 1) != 0) + 1;
  v50 = v14;
  if ( v25[0] )
    goto LABEL_17;
  v53 = MiMapImageInSystemSpace((__int64)v5, 3u, (__int64)BaseAddress);
  if ( v53 < 0 )
    return 0LL;
  v16 = BaseAddress[0];
  v17 = RtlImageNtHeader(BaseAddress[0]);
  v51 = v16[15] + 48;
  if ( v17->OptionalHeader.Magic != 523 )
  {
    Magic = v17->OptionalHeader.Magic;
    FileAlignment = v17->OptionalHeader.FileAlignment;
    SectionAlignment = v17->OptionalHeader.SectionAlignment;
    SizeOfImage = v17->OptionalHeader.SizeOfImage;
    SizeOfHeapReserve_low = LODWORD(v17->OptionalHeader.SizeOfHeapReserve);
    SizeOfHeapReserve = v17->OptionalHeader.SizeOfHeapReserve;
    ImageBase_high = HIDWORD(v17->OptionalHeader.ImageBase);
    SizeOfHeaders = v17->OptionalHeader.SizeOfHeaders;
    AddressOfEntryPoint = v17->OptionalHeader.AddressOfEntryPoint;
    SizeOfStackReserve_low = LODWORD(v17->OptionalHeader.SizeOfStackReserve);
    SizeOfStackReserve_high = HIDWORD(v17->OptionalHeader.SizeOfStackReserve);
    Subsystem = v17->OptionalHeader.Subsystem;
    MajorSubsystemVersion = v17->OptionalHeader.MajorSubsystemVersion;
    MinorSubsystemVersion = v17->OptionalHeader.MinorSubsystemVersion;
    MajorOperatingSystemVersion = v17->OptionalHeader.MajorOperatingSystemVersion;
    MinorOperatingSystemVersion = v17->OptionalHeader.MinorOperatingSystemVersion;
    DllCharacteristics = v17->OptionalHeader.DllCharacteristics;
    CheckSum = v17->OptionalHeader.CheckSum;
    SizeOfCode = v17->OptionalHeader.SizeOfCode;
    v49 = 0;
    SizeOfHeapReserve_high = HIDWORD(v17->OptionalHeader.SizeOfHeapReserve);
    if ( SizeOfHeapReserve_high > 6 )
      v49 = v17->OptionalHeader.DataDirectory[4].VirtualAddress != 0;
    if ( SizeOfHeapReserve_high > 0xC )
    {
      VirtualAddress = v17->OptionalHeader.DataDirectory[10].VirtualAddress;
      Size = v17->OptionalHeader.DataDirectory[10].Size;
    }
    if ( SizeOfHeapReserve_high <= 0xE )
    {
      v46 = 0LL;
    }
    else
    {
      LODWORD(v46) = v17->OptionalHeader.DataDirectory[12].VirtualAddress;
      v18 = v17->OptionalHeader.DataDirectory[12].Size;
      HIDWORD(v46) = v17->OptionalHeader.DataDirectory[12].Size;
      if ( (_DWORD)v46 && (_DWORD)v18 )
      {
        SizeOfHeapReserve_low = (unsigned int)SizeOfHeapReserve_low | 1;
        SizeOfHeapReserve = SizeOfHeapReserve_low;
      }
    }
    if ( SizeOfHeapReserve_high <= 5 )
      v47 = 0LL;
    else
      v47 = v17->OptionalHeader.DataDirectory[3];
    if ( SizeOfHeapReserve_high > 0xA )
    {
      LODWORD(v48) = v17->OptionalHeader.DataDirectory[8].VirtualAddress;
      v21 = v17->OptionalHeader.DataDirectory[8].Size;
      goto LABEL_54;
    }
LABEL_55:
    v48 = 0LL;
    goto LABEL_56;
  }
  Magic = 523;
  FileAlignment = v17->OptionalHeader.FileAlignment;
  SectionAlignment = v17->OptionalHeader.SectionAlignment;
  SizeOfImage = v17->OptionalHeader.SizeOfImage;
  SizeOfHeapReserve_low = v17->OptionalHeader.LoaderFlags;
  SizeOfHeapReserve = v17->OptionalHeader.LoaderFlags;
  ImageBase_high = v17->OptionalHeader.ImageBase;
  SizeOfHeaders = v17->OptionalHeader.SizeOfHeaders;
  AddressOfEntryPoint = v17->OptionalHeader.AddressOfEntryPoint;
  SizeOfStackReserve_low = v17->OptionalHeader.SizeOfStackReserve;
  SizeOfStackReserve_high = v17->OptionalHeader.SizeOfStackCommit;
  Subsystem = v17->OptionalHeader.Subsystem;
  MajorSubsystemVersion = v17->OptionalHeader.MajorSubsystemVersion;
  MinorSubsystemVersion = v17->OptionalHeader.MinorSubsystemVersion;
  MajorOperatingSystemVersion = v17->OptionalHeader.MajorOperatingSystemVersion;
  MinorOperatingSystemVersion = v17->OptionalHeader.MinorOperatingSystemVersion;
  DllCharacteristics = v17->OptionalHeader.DllCharacteristics;
  CheckSum = v17->OptionalHeader.CheckSum;
  SizeOfCode = v17->OptionalHeader.SizeOfCode;
  v49 = 0;
  NumberOfRvaAndSizes = v17->OptionalHeader.NumberOfRvaAndSizes;
  if ( NumberOfRvaAndSizes > 6 )
    v49 = v17->OptionalHeader.DataDirectory[6].VirtualAddress != 0;
  if ( NumberOfRvaAndSizes > 0xC )
  {
    VirtualAddress = v17->OptionalHeader.DataDirectory[12].VirtualAddress;
    Size = v17->OptionalHeader.DataDirectory[12].Size;
  }
  if ( NumberOfRvaAndSizes <= 0xE )
  {
    v46 = 0LL;
  }
  else
  {
    LODWORD(v46) = v17->OptionalHeader.DataDirectory[14].VirtualAddress;
    v18 = v17->OptionalHeader.DataDirectory[14].Size;
    HIDWORD(v46) = v17->OptionalHeader.DataDirectory[14].Size;
    if ( (_DWORD)v46 && (_DWORD)v18 )
    {
      SizeOfHeapReserve_low = (unsigned int)SizeOfHeapReserve_low | 1;
      SizeOfHeapReserve = SizeOfHeapReserve_low;
    }
  }
  if ( NumberOfRvaAndSizes <= 5 )
    v47 = 0LL;
  else
    v47 = v17->OptionalHeader.DataDirectory[5];
  if ( NumberOfRvaAndSizes <= 0xA )
    goto LABEL_55;
  LODWORD(v48) = v17->OptionalHeader.DataDirectory[10].VirtualAddress;
  v21 = v17->OptionalHeader.DataDirectory[10].Size;
LABEL_54:
  HIDWORD(v48) = v21;
LABEL_56:
  v23 = v53;
  MiUnmapImageInSystemSpace((__int64)BaseAddress, (__int64)v17, SizeOfHeapReserve_low, v18);
  if ( v23 < 0 )
    return 0LL;
  if ( (int)MiRelocateImage(*v5, (__int64)&ImageBase_high, v51, v14, 1u) < 0 )
    return 0LL;
  MiImageSuitableForSystem(v5, v25, v24);
  if ( !v25[0] )
    return 0LL;
LABEL_17:
  v15 = MiSelectSystemImageAddress(v14, v6, v8);
  v7 = v15;
  if ( v15 )
  {
    v4 = 1;
    if ( !(unsigned int)MiAddPrivateFixupEntryForSystemImage((__int64)v5, v15) )
    {
LABEL_57:
      MiReturnSystemImageAddress(v7, v6 << 12);
      return 0LL;
    }
LABEL_14:
    if ( (a2 & 1) == 0 || (int)MiSessionInsertImage(v7, (__int64)v5, v8) >= 0 )
      return v7;
    if ( v4 == 1 )
      MiFreePrivateFixupEntryForSystemImage(v7, 1);
    goto LABEL_57;
  }
  return 0LL;
}
