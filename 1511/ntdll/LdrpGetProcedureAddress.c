/*
 * XREFs of LdrpGetProcedureAddress @ 0x180034810
 * Callers:
 *     LdrpResolveDelayloadAddress @ 0x1800323F0 (LdrpResolveDelayloadAddress.c)
 *     LdrGetProcedureAddressForCaller @ 0x180032870 (LdrGetProcedureAddressForCaller.c)
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x180031578 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x18007C2B0 (RtlAddressInSectionTable.c)
 *     LdrpLogDbgPrint @ 0x1800C9198 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 a1, unsigned __int8 *a2, int a3, unsigned __int64 *a4)
{
  int v4; // r14d
  bool v8; // si
  char *v9; // rdi
  char *v10; // rbp
  int v11; // eax
  unsigned __int16 Magic; // ax
  unsigned int Size; // r13d
  char v14; // r11
  int v15; // r10d
  int v16; // r9d
  __int64 VirtualAddress; // rax
  int v19; // r8d
  unsigned __int8 *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // cl
  int v23; // eax
  unsigned int v24; // ebx
  unsigned __int64 v25; // rdx
  __int64 v26[9]; // [rsp+40h] [rbp-48h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 *v28; // [rsp+A8h] [rbp+20h]

  v28 = a4;
  v4 = 0;
  OutHeaders = 0LL;
  v26[0] = 0LL;
  v8 = 1;
  v9 = (char *)a1;
  v10 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v8 = (a1 & 1) == 0;
    v9 = (char *)(a1 & 0xFFFFFFFFFFFFFFFCuLL);
  }
  v11 = RtlImageNtHeaderEx(1u, v9, 0LL, &OutHeaders);
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
      if ( v8 || (unsigned int)VirtualAddress < OutHeaders->OptionalHeader.SizeOfHeaders )
      {
        v10 = &v9[VirtualAddress];
      }
      else
      {
        v10 = (char *)RtlAddressInSectionTable(OutHeaders, v9, VirtualAddress);
        if ( !v10 )
          return 3221225594LL;
      }
      goto LABEL_8;
    }
    v11 = RtlpImageDirectoryEntryToData32((__int64)v9, (void *)v8, 0, &OutHeaders, OutHeaders, v26);
    v10 = (char *)v26[0];
  }
  if ( v11 < 0 )
    return 3221225594LL;
  Size = (unsigned int)OutHeaders;
LABEL_8:
  if ( !v10 )
    return 3221225594LL;
  if ( a2 )
  {
    v14 = LdrpDebugFlags;
    if ( (LdrpDebugFlags & 5) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        638,
        (unsigned int)"LdrpGetProcedureAddress",
        2,
        (__int64)"Locating procedure \"%s\" by name\n");
      v14 = LdrpDebugFlags;
    }
    v15 = 0;
    v16 = *((_DWORD *)v10 + 6) - 1;
    v19 = v16 / 2;
    if ( v16 >= 0 )
    {
      while ( 1 )
      {
        v20 = a2;
        v21 = a1 + *(unsigned int *)(a1 + *((unsigned int *)v10 + 8) + 4LL * v19) - (_QWORD)a2;
        while ( 1 )
        {
          v22 = *v20;
          if ( *v20 != v20[v21] )
            break;
          ++v20;
          if ( !v22 )
          {
            v23 = 0;
            goto LABEL_27;
          }
        }
        v23 = v22 < v20[v21] ? -1 : 1;
LABEL_27:
        if ( !v23 )
          break;
        if ( v23 >= 0 )
          v15 = v19 + 1;
        else
          v16 = v19 - 1;
        v19 = (v16 + v15) / 2;
        if ( v16 < v15 )
          goto LABEL_32;
      }
      v24 = *(unsigned __int16 *)(a1 + *((unsigned int *)v10 + 9) + 2LL * v19);
      goto LABEL_41;
    }
LABEL_32:
    if ( (v14 & 3) != 0 )
    {
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        1325,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n");
      v14 = LdrpDebugFlags;
    }
    if ( (v14 & 0x40) != 0 )
      __debugbreak();
    return 3221225594LL;
  }
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
      656,
      (unsigned int)"LdrpGetProcedureAddress",
      2,
      (__int64)"Loading procedure 0x%lx by ordinal\n");
  if ( !a3 )
    return 3221225485LL;
  v24 = a3 - *((_DWORD *)v10 + 4);
LABEL_41:
  if ( v24 < *((_DWORD *)v10 + 5) )
  {
    v25 = a1 + *(unsigned int *)(a1 + *((unsigned int *)v10 + 7) + 4LL * (int)v24);
    *v28 = v25;
    if ( v25 < (unsigned __int64)v10 || v25 >= (unsigned __int64)&v10[Size] )
      return 0LL;
    else
      return 3221226029LL;
  }
  else
  {
    LOBYTE(v4) = a2 != 0LL;
    return (unsigned int)(v4 - 1073741512);
  }
}
