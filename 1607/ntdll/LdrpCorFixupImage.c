/*
 * XREFs of LdrpCorFixupImage @ 0x1800908A0
 * Callers:
 *     LdrpMapImage @ 0x18002F43C (LdrpMapImage.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeader @ 0x180031C10 (RtlImageNtHeader.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __fastcall LdrpCorFixupImage(void *a1)
{
  PIMAGE_NT_HEADERS v1; // rbx
  _BYTE *v2; // rax
  unsigned __int64 *p_SizeOfHeapCommit; // r14
  __int64 v4; // rsi
  NTSTATUS result; // eax
  NTSTATUS v6; // edi
  unsigned int SizeOfHeapReserve_high; // eax
  unsigned __int16 Machine; // ax
  PVOID BaseOfImage; // [rsp+70h] [rbp+40h] BYREF
  ULONG NewProtect; // [rsp+78h] [rbp+48h] BYREF
  ULONG Size; // [rsp+80h] [rbp+50h] BYREF
  ULONG_PTR RegionSize; // [rsp+88h] [rbp+58h] BYREF

  BaseOfImage = a1;
  v1 = RtlImageNtHeader(a1);
  v2 = RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0xEu, &Size);
  if ( v1->OptionalHeader.Magic != 267 || v1->FileHeader.Machine != 332 || (v2[16] & 2) != 0 )
  {
    Machine = v1->FileHeader.Machine;
    if ( Machine < MEMORY[0x7FFE002C] || Machine > MEMORY[0x7FFE002E] )
      return -1073741701;
    else
      return 0;
  }
  p_SizeOfHeapCommit = &v1->OptionalHeader.SizeOfHeapCommit;
  v4 = (__int64)&v1->OptionalHeader
     + 32 * v1->FileHeader.NumberOfSections
     + 8 * v1->FileHeader.NumberOfSections
     + v1->FileHeader.SizeOfOptionalHeader;
  RegionSize = 4096LL;
  if ( (unsigned __int64)(v4 - (_QWORD)BaseOfImage + 16) > 0x1000 )
    return -1073741701;
  result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseOfImage, &RegionSize, 4u, &NewProtect);
  v6 = result;
  if ( result >= 0 )
  {
    memmove(v1->OptionalHeader.DataDirectory, &v1->OptionalHeader.SizeOfHeapCommit, v4 - (_QWORD)p_SizeOfHeapCommit);
    SizeOfHeapReserve_high = HIDWORD(v1->OptionalHeader.SizeOfHeapReserve);
    v1->FileHeader.SizeOfOptionalHeader += 16;
    v1->OptionalHeader.NumberOfRvaAndSizes = SizeOfHeapReserve_high;
    v1->OptionalHeader.LoaderFlags = v1->OptionalHeader.SizeOfHeapReserve;
    *p_SizeOfHeapCommit = HIDWORD(v1->OptionalHeader.SizeOfStackCommit);
    v1->OptionalHeader.SizeOfHeapReserve = LODWORD(v1->OptionalHeader.SizeOfStackCommit);
    v1->OptionalHeader.SizeOfStackCommit = HIDWORD(v1->OptionalHeader.SizeOfStackReserve);
    v1->OptionalHeader.SizeOfStackReserve = LODWORD(v1->OptionalHeader.SizeOfStackReserve);
    v1->OptionalHeader.ImageBase = HIDWORD(v1->OptionalHeader.ImageBase);
    v1->OptionalHeader.Magic = 523;
    ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseOfImage, &RegionSize, NewProtect, &NewProtect);
    return v6;
  }
  return result;
}
