/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x1800310D8
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180016424 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800D742C (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180031AF0 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 */

NTSTATUS __fastcall LdrpPrepareImportAddressTableForSnap(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR *v2; // rdi
  _QWORD *v4; // rax
  PIMAGE_NT_HEADERS v5; // rcx
  _QWORD *v6; // rax
  NTSTATUS v7; // edx
  NTSTATUS result; // eax
  char *v9; // rcx
  char *v10; // r8
  unsigned int VirtualAddress; // r9d
  unsigned int *v12; // rdx
  unsigned int NumberOfSections; // r10d
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  ULONG_PTR v16; // rax
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp+10h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v2 = (ULONG_PTR *)(a1 + 104);
  *(_QWORD *)(a1 + 96) = RtlImageDirectoryEntryToData(*(PVOID *)(v1 + 48), 1u, 0xCu, (PULONG)(a1 + 104));
  RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 48), 0LL, &OutHeaders);
  v4 = RtlImageDirectoryEntryToData(*(PVOID *)(v1 + 48), 1u, 0xAu, &Size);
  if ( !v4 || !Size || Size != *(_DWORD *)v4 || *(_DWORD *)v4 < 0x94u )
    goto LABEL_9;
  v5 = OutHeaders;
  if ( (OutHeaders->OptionalHeader.DllCharacteristics & 0x4000) != 0 && (v4[18] & 0x100) != 0 )
  {
    v6 = (_QWORD *)v4[14];
    *(_QWORD *)(a1 + 144) = v6;
    if ( v6 )
    {
      *(_QWORD *)(a1 + 136) = *v6;
LABEL_9:
      v5 = OutHeaders;
    }
  }
  if ( !*(_QWORD *)(a1 + 96) )
  {
    VirtualAddress = v5->OptionalHeader.DataDirectory[1].VirtualAddress;
    v12 = (unsigned int *)((char *)&v5->OptionalHeader.Magic + v5->FileHeader.SizeOfOptionalHeader);
    if ( VirtualAddress )
    {
      NumberOfSections = v5->FileHeader.NumberOfSections;
      v14 = 0;
      if ( v5->FileHeader.NumberOfSections )
      {
        while ( 1 )
        {
          v15 = v12[3];
          if ( VirtualAddress >= v15 && VirtualAddress < v12[4] + v15 )
            break;
          ++v14;
          v12 += 10;
          if ( v14 >= NumberOfSections )
            goto LABEL_11;
        }
        *(_QWORD *)(a1 + 96) = *(_QWORD *)(v1 + 48) + v12[3];
        v16 = v12[2];
        *v2 = v16;
        if ( !v16 )
          *v2 = v12[4];
      }
    }
  }
LABEL_11:
  v7 = 0;
  if ( *(_QWORD *)(a1 + 96) && *v2 )
  {
    BaseAddress = *(PVOID *)(a1 + 96);
    RegionSize = *v2;
    result = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, (PULONG)(a1 + 128));
    v7 = result;
    if ( result < 0 )
      return result;
    v9 = *(char **)(a1 + 96);
    v10 = &v9[*v2];
    do
    {
      *(_QWORD *)v9 = *(_QWORD *)v9;
      v9 += 4096;
    }
    while ( v9 < v10 );
  }
  return v7;
}
