/*
 * XREFs of LdrpGetProcedureAddress @ 0x180015BD0
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180016020 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveForwarder @ 0x18001664C (LdrpResolveForwarder.c)
 *     LdrpResolveProcedureAddress @ 0x180016890 (LdrpResolveProcedureAddress.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     RtlpImageDirectoryEntryToData32 @ 0x180017390 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x180017410 (RtlAddressInSectionTable.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 BaseOfImage, const char *a2, int a3, char **a4)
{
  char *v5; // rsi
  bool v9; // di
  char *v10; // rbp
  NTSTATUS v11; // eax
  unsigned __int16 Magic; // ax
  __int64 VirtualAddress; // rax
  unsigned int Size; // r12d
  char v15; // di
  int v16; // r10d
  int v17; // r9d
  int v18; // r8d
  const char *v19; // rcx
  char *v20; // rdx
  unsigned __int8 v21; // al
  int v22; // eax
  unsigned int v24; // ebx
  char *v25; // rdx
  __int64 v26; // [rsp+40h] [rbp-38h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+80h] [rbp+8h] BYREF

  v5 = (char *)BaseOfImage;
  OutHeaders = 0LL;
  v26 = 0LL;
  v9 = 1;
  v10 = 0LL;
  if ( (BaseOfImage & 3) != 0 )
  {
    v9 = (BaseOfImage & 1) == 0;
    v5 = (char *)(BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL);
  }
  v11 = RtlImageNtHeaderEx(1u, v5, 0LL, &OutHeaders);
  if ( OutHeaders )
  {
    Magic = OutHeaders->OptionalHeader.Magic;
    if ( Magic != 267 )
    {
      if ( Magic != 523 )
        return 3221225594LL;
      if ( !OutHeaders->OptionalHeader.NumberOfRvaAndSizes )
        return 3221225594LL;
      VirtualAddress = OutHeaders->OptionalHeader.DataDirectory[0].VirtualAddress;
      if ( !(_DWORD)VirtualAddress )
        return 3221225594LL;
      Size = OutHeaders->OptionalHeader.DataDirectory[0].Size;
      if ( v9 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
      {
        v10 = &v5[VirtualAddress];
      }
      else
      {
        v10 = (char *)RtlAddressInSectionTable(OutHeaders, v5, VirtualAddress);
        if ( !v10 )
          return 3221225594LL;
      }
      goto LABEL_10;
    }
    v11 = RtlpImageDirectoryEntryToData32(v5, OutHeaders, (__int64)&v26);
    v10 = (char *)v26;
  }
  if ( v11 < 0 )
    return 3221225594LL;
  Size = (unsigned int)OutHeaders;
LABEL_10:
  if ( !v10 )
    return 3221225594LL;
  if ( a2 )
  {
    v15 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 5) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        638,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        (__int64)"Locating procedure \"%s\" by name\n",
        a2);
      v15 = LdrpDebugFlags;
    }
    v16 = 0;
    v17 = *((_DWORD *)v10 + 6) - 1;
    v18 = v17 / 2;
    if ( v17 >= 0 )
    {
      while ( 1 )
      {
        v19 = a2;
        v20 = (char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v10 + 8) + 4LL * v18) - (_QWORD)a2);
        while ( 1 )
        {
          v21 = *v19;
          if ( *v19 != v20[(_QWORD)v19] )
            break;
          ++v19;
          if ( !v21 )
          {
            v22 = 0;
            goto LABEL_19;
          }
        }
        v22 = v21 < (unsigned int)v20[(_QWORD)v19] ? -1 : 1;
LABEL_19:
        if ( !v22 )
          break;
        if ( v22 >= 0 )
          v16 = v18 + 1;
        else
          v17 = v18 - 1;
        v18 = (v17 + v16) / 2;
        if ( v17 < v16 )
          goto LABEL_23;
      }
      v24 = *(unsigned __int16 *)(BaseOfImage + *((unsigned int *)v10 + 9) + 2LL * v18);
      goto LABEL_30;
    }
LABEL_23:
    if ( (v15 & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1329,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        a2,
        (const void *)BaseOfImage);
      v15 = LdrpDebugFlags;
    }
    if ( (v15 & 0x40) != 0 )
      __debugbreak();
    return 3221225594LL;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      656,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      (__int64)"Loading procedure 0x%lx by ordinal\n",
      a3);
  if ( !a3 )
    return 3221225485LL;
  v24 = a3 - *((_DWORD *)v10 + 4);
LABEL_30:
  if ( v24 >= *((_DWORD *)v10 + 5) )
  {
    if ( a2 )
      return 3221225785LL;
    else
      return 3221225784LL;
  }
  else
  {
    v25 = (char *)(BaseOfImage + *(unsigned int *)(BaseOfImage + *((unsigned int *)v10 + 7) + 4LL * (int)v24));
    *a4 = v25;
    if ( v25 < v10 || v25 >= &v10[Size] )
      return 0LL;
    else
      return 3221226029LL;
  }
}
