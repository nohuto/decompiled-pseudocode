/*
 * XREFs of LdrpResGetMappingSize @ 0x1800397F0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x18003BEB0 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180030438 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     ZwQueryVirtualMemory @ 0x1800A5520 (ZwQueryVirtualMemory.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResGetMappingSize(__int64 a1, unsigned __int64 *a2, int a3, char a4)
{
  unsigned __int64 v7; // r14
  unsigned __int64 FileSizeFromLoadAsDataTable; // rdi
  unsigned __int64 SizeOfImage; // rsi
  bool v10; // r13
  NTSTATUS VirtualMemory; // ebx
  PVOID BaseAddress[2]; // [rsp+40h] [rbp-68h] BYREF
  int v14; // [rsp+50h] [rbp-58h] BYREF
  const wchar_t *v15; // [rsp+58h] [rbp-50h]
  _BYTE MemoryInformation[16]; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp-38h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+B0h] [rbp+8h] BYREF
  char v19; // [rsp+C8h] [rbp+20h]

  v19 = a4;
  LODWORD(BaseAddress[0]) = 3670070;
  BaseAddress[1] = L"LdrpResGetMappingSize Enter";
  v14 = 3538996;
  v15 = L"LdrpResGetMappingSize Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll(BaseAddress, MEMORY[0x7FFE0384]);
  if ( a1 && a2 )
  {
    v7 = 0LL;
    if ( (a3 & 0x20000) != 0 )
      v7 = *a2;
    *a2 = 0LL;
    FileSizeFromLoadAsDataTable = 0LL;
    SizeOfImage = 0LL;
    v10 = (a3 & 0x100) != 0 && (a1 & 1) == 0;
    BaseAddress[0] = (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
    VirtualMemory = RtlImageNtHeaderEx(1u, (PVOID)(a1 & 0xFFFFFFFFFFFFFFFCuLL), 0LL, &OutHeaders);
    if ( VirtualMemory >= 0 )
    {
      if ( OutHeaders->OptionalHeader.Magic == 267 || OutHeaders->OptionalHeader.Magic == 523 )
      {
        SizeOfImage = OutHeaders->OptionalHeader.SizeOfImage;
      }
      else
      {
        SizeOfImage = 0LL;
        VirtualMemory = -1073741701;
      }
    }
    if ( VirtualMemory < 0 )
      return (unsigned int)VirtualMemory;
    if ( !v10 || !SizeOfImage )
    {
      if ( !v19 )
        FileSizeFromLoadAsDataTable = LdrpGetFileSizeFromLoadAsDataTable(a1);
      if ( FileSizeFromLoadAsDataTable )
      {
        VirtualMemory = 0;
      }
      else
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          BaseAddress[0],
                          MemoryRegionInformation,
                          MemoryInformation,
                          0x20uLL,
                          0LL);
        if ( VirtualMemory >= 0 )
          FileSizeFromLoadAsDataTable = v17;
      }
      if ( FileSizeFromLoadAsDataTable || !SizeOfImage )
        goto LABEL_16;
      VirtualMemory = 0;
    }
    FileSizeFromLoadAsDataTable = SizeOfImage;
LABEL_16:
    if ( VirtualMemory >= 0 )
    {
      if ( v7 && v7 < FileSizeFromLoadAsDataTable )
        VirtualMemory = -1073741793;
      else
        *a2 = FileSizeFromLoadAsDataTable;
    }
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v14, MEMORY[0x7FFE0384]);
    return (unsigned int)VirtualMemory;
  }
  return 3221225485LL;
}
