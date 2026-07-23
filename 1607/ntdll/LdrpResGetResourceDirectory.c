/*
 * XREFs of LdrpResGetResourceDirectory @ 0x1800376B0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x180037A68 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     RtlULongLongAdd @ 0x180039184 (RtlULongLongAdd.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x18007FEE4 (LdrpSectionTableFromVirtualAddress.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC934 (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __fastcall LdrpResGetResourceDirectory(
        unsigned __int64 BaseOfImage,
        ULONG64 Size,
        __int16 a3,
        PIMAGE_NT_HEADERS *a4,
        PIMAGE_NT_HEADERS *a5)
{
  ULONG64 v6; // rax
  char v8; // r12
  bool v9; // r14
  int v10; // ebx
  int v11; // r15d
  NTSTATUS result; // eax
  __int64 v13; // r9
  PIMAGE_NT_HEADERS v14; // r13
  _IMAGE_OPTIONAL_HEADER64 *p_OptionalHeader; // rcx
  unsigned int v16; // eax
  unsigned int v17; // esi
  PIMAGE_NT_HEADERS v18; // rdx
  ULONG64 v19; // r14
  unsigned int *v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int16 PointerToSymbolTable; // ax
  unsigned __int16 PointerToSymbolTable_high; // cx
  int v24; // [rsp+48h] [rbp-150h] BYREF
  const wchar_t *v25; // [rsp+50h] [rbp-148h]
  int v26; // [rsp+58h] [rbp-140h] BYREF
  const wchar_t *v27; // [rsp+60h] [rbp-138h]
  __int128 v28; // [rsp+70h] [rbp-128h]
  __int128 v29; // [rsp+80h] [rbp-118h]
  __int128 v30; // [rsp+90h] [rbp-108h]
  __int128 v31; // [rsp+A0h] [rbp-F8h]
  __int128 v32; // [rsp+B0h] [rbp-E8h]
  __int128 v33; // [rsp+C0h] [rbp-D8h]
  __int128 v34; // [rsp+D0h] [rbp-C8h]
  __int128 v35; // [rsp+E0h] [rbp-B8h]
  __int128 v36; // [rsp+F0h] [rbp-A8h]
  __int128 v37; // [rsp+100h] [rbp-98h]
  __int128 v38; // [rsp+110h] [rbp-88h]
  __int128 v39; // [rsp+120h] [rbp-78h]
  __int128 v40; // [rsp+130h] [rbp-68h]
  __int128 v41; // [rsp+140h] [rbp-58h]
  __int128 v42; // [rsp+150h] [rbp-48h]
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+1A0h] [rbp+8h] BYREF
  ULONG64 v44; // [rsp+1A8h] [rbp+10h]
  PIMAGE_NT_HEADERS *v45; // [rsp+1B8h] [rbp+20h]

  v45 = a4;
  v44 = Size;
  v6 = Size;
  v8 = 1;
  v9 = 1;
  v24 = 4456514;
  v25 = L"LdrpResGetResourceDirectory Enter";
  v26 = 4325440;
  v27 = L"LdrpResGetResourceDirectory Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
  {
    LdrpTraceLoadMUIDll(&v24, MEMORY[0x7FFE0384]);
    v6 = v44;
    a4 = v45;
  }
  v10 = 0;
  if ( !BaseOfImage || !a4 || !a5 )
    return -1073741811;
  if ( (BaseOfImage & 3) != 0 )
  {
    v9 = (BaseOfImage & 1) == 0;
    BaseOfImage &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  v11 = a3 & 0x1000;
  result = RtlImageNtHeaderEx(v11 == 0, (PVOID)BaseOfImage, v6, &OutHeaders);
  if ( result >= 0 )
  {
    v14 = OutHeaders;
    p_OptionalHeader = &OutHeaders->OptionalHeader;
    if ( OutHeaders->OptionalHeader.Magic == 267 )
    {
      v28 = *(_OWORD *)&p_OptionalHeader->Magic;
      v29 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v30 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v31 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v32 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v33 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v34 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v41 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
    }
    else
    {
      if ( p_OptionalHeader->Magic != 523 )
      {
        v10 = -1073741701;
        goto LABEL_40;
      }
      v28 = *(_OWORD *)&p_OptionalHeader->Magic;
      v29 = *(_OWORD *)&OutHeaders->OptionalHeader.AddressOfEntryPoint;
      v30 = *(_OWORD *)&OutHeaders->OptionalHeader.SectionAlignment;
      v31 = *(_OWORD *)&OutHeaders->OptionalHeader.MajorSubsystemVersion;
      v32 = *(_OWORD *)&OutHeaders->OptionalHeader.CheckSum;
      v33 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfStackCommit;
      v34 = *(_OWORD *)&OutHeaders->OptionalHeader.SizeOfHeapCommit;
      v35 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      v36 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[2].VirtualAddress;
      v37 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[4].VirtualAddress;
      v38 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[6].VirtualAddress;
      v39 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[8].VirtualAddress;
      v40 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[10].VirtualAddress;
      v41 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[12].VirtualAddress;
      v42 = *(_OWORD *)&OutHeaders->OptionalHeader.DataDirectory[14].VirtualAddress;
      v8 = 0;
    }
    v16 = HIDWORD(v34);
    if ( v8 )
      v16 = HIDWORD(v33);
    if ( v16 <= 2 )
    {
      v10 = -1073741687;
    }
    else
    {
      v17 = v36;
      if ( v8 )
        v17 = v35;
      if ( v17 )
      {
        if ( v9 || v17 < HIDWORD(v31) )
        {
          if ( (int)RtlULongLongAdd(BaseOfImage, v17, &OutHeaders, v13) < 0 )
          {
            v10 = -1073741701;
            goto LABEL_40;
          }
          v18 = OutHeaders;
          v19 = v44;
        }
        else
        {
          v19 = v44;
          v20 = (unsigned int *)LdrpSectionTableFromVirtualAddress(
                                  BaseOfImage,
                                  v44,
                                  (_DWORD)OutHeaders,
                                  0,
                                  v17,
                                  v11 != 0);
          if ( !v20 )
          {
            v10 = -1073741701;
            goto LABEL_40;
          }
          if ( !v20[4] )
          {
            v10 = -1073741687;
            goto LABEL_40;
          }
          v18 = (PIMAGE_NT_HEADERS)(BaseOfImage + v20[5] - (unsigned __int64)v20[3] + v17);
        }
        if ( !v18 )
        {
          v10 = -1073741687;
          goto LABEL_40;
        }
        if ( !v11 )
          goto LABEL_39;
        if ( (unsigned __int64)v18 <= BaseOfImage )
          goto LABEL_44;
        v21 = (BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL) + v19;
        if ( (unsigned __int64)&v18->FileHeader.NumberOfSymbols > v21 )
          goto LABEL_44;
        PointerToSymbolTable = v18->FileHeader.PointerToSymbolTable;
        PointerToSymbolTable_high = HIWORD(v18->FileHeader.PointerToSymbolTable);
        if ( !PointerToSymbolTable && !PointerToSymbolTable_high )
        {
          v10 = -1073741686;
          goto LABEL_40;
        }
        if ( (unsigned __int64)v18 + 8 * PointerToSymbolTable_high + 8 * PointerToSymbolTable > v21 )
        {
LABEL_44:
          v10 = -1073741701;
        }
        else
        {
LABEL_39:
          *v45 = v18;
          *a5 = v14;
        }
      }
      else
      {
        v10 = -1073741687;
      }
    }
LABEL_40:
    if ( (MEMORY[0x7FFE0385] & 1) != 0 )
      LdrpTraceLoadMUIDll(&v26, MEMORY[0x7FFE0384]);
    return v10;
  }
  return result;
}
