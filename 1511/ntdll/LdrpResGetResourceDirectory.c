/*
 * XREFs of LdrpResGetResourceDirectory @ 0x180037860
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037C1C (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     RtlULongLongAdd @ 0x18003935C (RtlULongLongAdd.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x18007AF40 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpTraceLoadMUIDll @ 0x1800D44B4 (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 BaseOfImage,
        ULONG64 Size,
        __int16 a3,
        PIMAGE_NT_HEADERS *a4,
        PIMAGE_NT_HEADERS *a5)
{
  PIMAGE_NT_HEADERS *v5; // rax
  char v8; // r12
  bool v9; // r14
  int v10; // ebx
  int v11; // r15d
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v13; // r13
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rcx
  unsigned int v15; // eax
  unsigned int v16; // esi
  PIMAGE_NT_HEADERS v17; // rdx
  ULONG64 v18; // r14
  unsigned int *v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int16 PointerToSymbolTable; // ax
  unsigned __int16 PointerToSymbolTable_high; // cx
  int v23; // [rsp+48h] [rbp-150h] BYREF
  const wchar_t *v24; // [rsp+50h] [rbp-148h]
  int v25; // [rsp+58h] [rbp-140h] BYREF
  const wchar_t *v26; // [rsp+60h] [rbp-138h]
  __int128 v27; // [rsp+70h] [rbp-128h]
  __int128 v28; // [rsp+80h] [rbp-118h]
  __int128 v29; // [rsp+90h] [rbp-108h]
  __int128 v30; // [rsp+A0h] [rbp-F8h]
  __int128 v31; // [rsp+B0h] [rbp-E8h]
  __int128 v32; // [rsp+C0h] [rbp-D8h]
  __int128 v33; // [rsp+D0h] [rbp-C8h]
  __int128 v34; // [rsp+E0h] [rbp-B8h]
  __int128 v35; // [rsp+F0h] [rbp-A8h]
  __int128 v36; // [rsp+100h] [rbp-98h]
  __int128 v37; // [rsp+110h] [rbp-88h]
  __int128 v38; // [rsp+120h] [rbp-78h]
  __int128 v39; // [rsp+130h] [rbp-68h]
  __int128 v40; // [rsp+140h] [rbp-58h]
  __int128 v41; // [rsp+150h] [rbp-48h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+1A0h] [rbp+8h] BYREF
  ULONG64 v43; // [rsp+1A8h] [rbp+10h]
  PIMAGE_NT_HEADERS *v44; // [rsp+1B8h] [rbp+20h]

  v44 = a4;
  v43 = Size;
  v5 = a4;
  v8 = 1;
  v9 = 1;
  v25 = 4456514;
  v26 = L"LdrpResGetResourceDirectory Enter";
  v23 = 4325440;
  v24 = L"LdrpResGetResourceDirectory Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(&v25, MEMORY[0x7FFE0384]);
    Size = v43;
    v5 = v44;
  }
  v10 = 0;
  if ( !BaseOfImage || !v5 || !a5 )
    return -1073741811;
  if ( (BaseOfImage & 3) != 0 )
  {
    v9 = (BaseOfImage & 1) == 0;
    BaseOfImage &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  v11 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v11 == 0, (PVOID)BaseOfImage, Size, &OutHeaders);
  if ( result >= 0 )
  {
    v13 = OutHeaders;
    p_OptionalHeader = &OutHeaders->OptionalHeader;
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      v27 = *(_OWORD *)&p_OptionalHeader->Magic;
      v28 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v29 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v30 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v31 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v32 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v33 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v34 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
    }
    else
    {
      if ( p_OptionalHeader->Magic != 523 )
      {
        v10 = -1073741701;
        goto LABEL_40;
      }
      v27 = *(_OWORD *)&p_OptionalHeader->Magic;
      v28 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v29 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v30 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v31 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v32 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v33 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v34 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
      v41 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[14].VirtualAddress;
      v8 = 0;
    }
    v15 = HIDWORD(v33);
    if ( v8 )
      v15 = HIDWORD(v32);
    if ( v15 <= 2 )
    {
      v10 = -1073741687;
    }
    else
    {
      v16 = v35;
      if ( v8 )
        v16 = v34;
      if ( v16 )
      {
        if ( v9 || v16 < HIDWORD(v30) )
        {
          if ( (int)RtlULongLongAdd(BaseOfImage, v16, &OutHeaders) < 0 )
          {
            v10 = -1073741701;
            goto LABEL_40;
          }
          v17 = OutHeaders;
          v18 = v43;
        }
        else
        {
          v18 = v43;
          v19 = (unsigned int *)LdrpSectionTableFromVirtualAddress(
                                  BaseOfImage,
                                  v43,
                                  (_DWORD)OutHeaders,
                                  0,
                                  v16,
                                  v11 != 0);
          if ( !v19 )
          {
            v10 = -1073741701;
            goto LABEL_40;
          }
          if ( !v19[4] )
          {
            v10 = -1073741687;
            goto LABEL_40;
          }
          v17 = (PIMAGE_NT_HEADERS)(BaseOfImage + v19[5] - (unsigned __int64)v19[3] + v16);
        }
        if ( !v17 )
        {
          v10 = -1073741687;
          goto LABEL_40;
        }
        if ( !v11 )
          goto LABEL_39;
        if ( (unsigned __int64)v17 <= BaseOfImage )
          goto LABEL_44;
        v20 = (BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL) + v18;
        if ( (unsigned __int64)&v17->FileHeader.NumberOfSymbols > v20 )
          goto LABEL_44;
        PointerToSymbolTable = v17->FileHeader.PointerToSymbolTable;
        PointerToSymbolTable_high = HIWORD(v17->FileHeader.PointerToSymbolTable);
        if ( !PointerToSymbolTable && !PointerToSymbolTable_high )
        {
          v10 = -1073741686;
          goto LABEL_40;
        }
        if ( (unsigned __int64)v17 + 8 * PointerToSymbolTable_high + 8 * PointerToSymbolTable > v20 )
        {
LABEL_44:
          v10 = -1073741701;
        }
        else
        {
LABEL_39:
          *v44 = v17;
          *a5 = v13;
        }
      }
      else
      {
        v10 = -1073741687;
      }
    }
LABEL_40:
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v23, MEMORY[0x7FFE0384]);
    return v10;
  }
  return result;
}
