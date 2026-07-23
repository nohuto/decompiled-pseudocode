/*
 * XREFs of MiGetSystemAddressForImage @ 0x1404B2908
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     MiSectionControlArea @ 0x14002C050 (MiSectionControlArea.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14012D210 (MiFreePrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x1401300DC (MiSessionInsertImage.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401313D4 (MiAddPrivateFixupEntryForSystemImage.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiImageSuitableForSystem @ 0x1404B2AA0 (MiImageSuitableForSystem.c)
 *     MiSelectSystemImageAddress @ 0x1404B2AC8 (MiSelectSystemImageAddress.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiMapImageInSystemSpace @ 0x140508D28 (MiMapImageInSystemSpace.c)
 *     MiUnmapImageInSystemSpace @ 0x140508E5C (MiUnmapImageInSystemSpace.c)
 *     MiReturnSystemImageAddress @ 0x140544E30 (MiReturnSystemImageAddress.c)
 */

unsigned __int64 __fastcall MiGetSystemAddressForImage(__int64 a1, char a2, _DWORD *a3)
{
  int v4; // r15d
  _DWORD *v5; // r14
  unsigned int v6; // r12d
  unsigned __int64 v7; // rbx
  int v8; // r8d
  PVOID *v9; // rdx
  PVOID *v10; // r10
  __int64 v11; // rcx
  _DWORD *v12; // r9
  unsigned int v14; // r15d
  unsigned __int64 v15; // rax
  _DWORD *v16; // rbx
  PIMAGE_NT_HEADERS v17; // rdx
  unsigned int LoaderFlags; // r8d
  unsigned int NumberOfRvaAndSizes; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // eax
  int SizeOfHeapReserve; // r8d
  unsigned int SizeOfHeapReserve_high; // ecx
  unsigned int v24; // r9d
  int v25; // ebx
  __int64 v26; // r8
  _DWORD v27[4]; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 ImageBase_high; // [rsp+40h] [rbp-128h] BYREF
  unsigned int FileAlignment; // [rsp+48h] [rbp-120h]
  unsigned int SectionAlignment; // [rsp+4Ch] [rbp-11Ch]
  unsigned int SizeOfImage; // [rsp+50h] [rbp-118h]
  int v32; // [rsp+54h] [rbp-114h]
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
  __int64 v48; // [rsp+90h] [rbp-D8h]
  _IMAGE_DATA_DIRECTORY v49; // [rsp+98h] [rbp-D0h]
  __int64 v50; // [rsp+A0h] [rbp-C8h]
  bool v51; // [rsp+A8h] [rbp-C0h]
  int v52; // [rsp+B0h] [rbp-B8h]
  unsigned int v53; // [rsp+B4h] [rbp-B4h]
  unsigned int v54; // [rsp+B8h] [rbp-B0h]
  int v55; // [rsp+BCh] [rbp-ACh]
  _DWORD *v56; // [rsp+C0h] [rbp-A8h]
  PVOID BaseAddress[10]; // [rsp+D0h] [rbp-98h] BYREF

  *a3 = 1;
  v4 = 0;
  v5 = (_DWORD *)MiSectionControlArea(a1);
  v56 = v5;
  v6 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
  v53 = v6;
  v7 = MiImageSuitableForSystem(v5, v27, 0LL);
  if ( v7 )
  {
    v9 = (PVOID *)PsLoadedModuleList;
    v10 = &PsLoadedModuleList;
    while ( v9 != v10 )
    {
      v11 = (__int64)v9[14];
      if ( v11 && v5 == (_DWORD *)MiSectionControlArea(v11) )
      {
        *v12 = 0;
        v8 = 1;
        break;
      }
      v9 = (PVOID *)*v9;
    }
  }
  if ( v7
    && v8 != 1
    && (a2 & 2) == 0
    && ((a2 & 1) == 0 || v7 >= qword_140326950 && v7 < qword_140326950 + 0x8000000000LL)
    && ((a2 & 1) != 0 || v7 < qword_140326950 || v7 >= qword_140326950 + 0x8000000000LL) )
  {
    goto LABEL_15;
  }
  v14 = ((a2 & 1) != 0) + 1;
  v54 = v14;
  if ( v27[0] )
    goto LABEL_18;
  v52 = MiMapImageInSystemSpace(v5, 3LL, BaseAddress);
  if ( v52 < 0 )
    return 0LL;
  v16 = BaseAddress[0];
  v17 = RtlImageNtHeader(BaseAddress[0]);
  v55 = v16[15] + 48;
  if ( v17->OptionalHeader.Magic != 523 )
  {
    Magic = v17->OptionalHeader.Magic;
    FileAlignment = v17->OptionalHeader.FileAlignment;
    SectionAlignment = v17->OptionalHeader.SectionAlignment;
    SizeOfImage = v17->OptionalHeader.SizeOfImage;
    SizeOfHeapReserve = v17->OptionalHeader.SizeOfHeapReserve;
    v32 = SizeOfHeapReserve;
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
    v51 = 0;
    SizeOfHeapReserve_high = HIDWORD(v17->OptionalHeader.SizeOfHeapReserve);
    if ( SizeOfHeapReserve_high > 6 )
      v51 = v17->OptionalHeader.DataDirectory[4].VirtualAddress != 0;
    if ( SizeOfHeapReserve_high > 0xC )
    {
      VirtualAddress = v17->OptionalHeader.DataDirectory[10].VirtualAddress;
      Size = v17->OptionalHeader.DataDirectory[10].Size;
    }
    if ( SizeOfHeapReserve_high <= 0xE )
    {
      v48 = 0LL;
    }
    else
    {
      LODWORD(v48) = v17->OptionalHeader.DataDirectory[12].VirtualAddress;
      v24 = v17->OptionalHeader.DataDirectory[12].Size;
      HIDWORD(v48) = v24;
      if ( (_DWORD)v48 && v24 )
        v32 = SizeOfHeapReserve | 1;
    }
    if ( SizeOfHeapReserve_high <= 5 )
      v49 = 0LL;
    else
      v49 = v17->OptionalHeader.DataDirectory[3];
    if ( SizeOfHeapReserve_high > 0xA )
    {
      LODWORD(v50) = v17->OptionalHeader.DataDirectory[8].VirtualAddress;
      v21 = v17->OptionalHeader.DataDirectory[8].Size;
      goto LABEL_56;
    }
LABEL_57:
    v50 = 0LL;
    goto LABEL_58;
  }
  Magic = 523;
  FileAlignment = v17->OptionalHeader.FileAlignment;
  SectionAlignment = v17->OptionalHeader.SectionAlignment;
  SizeOfImage = v17->OptionalHeader.SizeOfImage;
  LoaderFlags = v17->OptionalHeader.LoaderFlags;
  v32 = LoaderFlags;
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
  v51 = 0;
  NumberOfRvaAndSizes = v17->OptionalHeader.NumberOfRvaAndSizes;
  if ( NumberOfRvaAndSizes > 6 )
    v51 = v17->OptionalHeader.DataDirectory[6].VirtualAddress != 0;
  if ( NumberOfRvaAndSizes > 0xC )
  {
    VirtualAddress = v17->OptionalHeader.DataDirectory[12].VirtualAddress;
    Size = v17->OptionalHeader.DataDirectory[12].Size;
  }
  if ( NumberOfRvaAndSizes <= 0xE )
  {
    v48 = 0LL;
  }
  else
  {
    LODWORD(v48) = v17->OptionalHeader.DataDirectory[14].VirtualAddress;
    v20 = v17->OptionalHeader.DataDirectory[14].Size;
    HIDWORD(v48) = v20;
    if ( (_DWORD)v48 && v20 )
      v32 = LoaderFlags | 1;
  }
  if ( NumberOfRvaAndSizes <= 5 )
    v49 = 0LL;
  else
    v49 = v17->OptionalHeader.DataDirectory[5];
  if ( NumberOfRvaAndSizes <= 0xA )
    goto LABEL_57;
  LODWORD(v50) = v17->OptionalHeader.DataDirectory[10].VirtualAddress;
  v21 = v17->OptionalHeader.DataDirectory[10].Size;
LABEL_56:
  HIDWORD(v50) = v21;
LABEL_58:
  v25 = v52;
  MiUnmapImageInSystemSpace(BaseAddress);
  if ( v25 < 0 )
    return 0LL;
  if ( (int)MiRelocateImage(*(_QWORD *)v5, (unsigned int)&ImageBase_high, v55, v14, -1LL, 1) < 0 )
    return 0LL;
  MiImageSuitableForSystem(v5, v27, v26);
  if ( !v27[0] && (v5[14] & 0x40000000) == 0 )
    return 0LL;
LABEL_18:
  v15 = MiSelectSystemImageAddress(v14, v6);
  v7 = v15;
  if ( v15 )
  {
    v4 = 1;
    if ( !(unsigned int)MiAddPrivateFixupEntryForSystemImage(v5, v15) )
    {
LABEL_59:
      MiReturnSystemImageAddress(v7, v6 << 12);
      return 0LL;
    }
LABEL_15:
    if ( (a2 & 1) == 0 || (int)MiSessionInsertImage(v7, (__int64)v5) >= 0 )
      return v7;
    if ( v4 == 1 )
      MiFreePrivateFixupEntryForSystemImage(v7, 1);
    goto LABEL_59;
  }
  return 0LL;
}
