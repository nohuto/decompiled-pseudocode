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

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 a1, const char *a2, int a3, char **a4)
{
  unsigned __int64 v5; // rsi
  bool v9; // di
  char *v10; // rbp
  int v11; // eax
  __int16 v12; // ax
  __int64 v13; // rax
  int v14; // r12d
  char v15; // di
  int v16; // r10d
  int v17; // r9d
  int v18; // r8d
  const char *v19; // rcx
  signed __int64 v20; // rdx
  unsigned __int8 v21; // al
  int v22; // eax
  unsigned int v24; // ebx
  char *v25; // rdx
  char *v26; // [rsp+40h] [rbp-38h] BYREF
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF

  v5 = a1;
  v27 = 0LL;
  v26 = 0LL;
  v9 = 1;
  v10 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v9 = (a1 & 1) == 0;
    v5 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v11 = RtlImageNtHeaderEx(1LL, v5, 0LL, &v27);
  if ( v27 )
  {
    v12 = *(_WORD *)(v27 + 24);
    if ( v12 != 267 )
    {
      if ( v12 != 523 )
        return 3221225594LL;
      if ( !*(_DWORD *)(v27 + 132) )
        return 3221225594LL;
      v13 = *(unsigned int *)(v27 + 136);
      if ( !(_DWORD)v13 )
        return 3221225594LL;
      v14 = *(_DWORD *)(v27 + 140);
      if ( v9 || (unsigned int)v13 < *(_DWORD *)(v27 + 84) )
      {
        v10 = (char *)(v5 + v13);
      }
      else
      {
        v10 = (char *)RtlAddressInSectionTable(v27, v5, (unsigned int)v13);
        if ( !v10 )
          return 3221225594LL;
      }
      goto LABEL_10;
    }
    v11 = RtlpImageDirectoryEntryToData32(v5, v9, 0, (unsigned int)&v27, v27, (__int64)&v26);
    v10 = v26;
  }
  if ( v11 < 0 )
    return 3221225594LL;
  v14 = v27;
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
        "Locating procedure \"%s\" by name\n",
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
        v20 = a1 + *(unsigned int *)(a1 + *((unsigned int *)v10 + 8) + 4LL * v18) - (_QWORD)a2;
        while ( 1 )
        {
          v21 = *v19;
          if ( *v19 != v19[v20] )
            break;
          ++v19;
          if ( !v21 )
          {
            v22 = 0;
            goto LABEL_19;
          }
        }
        v22 = v21 < (unsigned int)v19[v20] ? -1 : 1;
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
      v24 = *(unsigned __int16 *)(a1 + *((unsigned int *)v10 + 9) + 2LL * v18);
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
        "Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
        a2,
        (const void *)a1);
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
      "Loading procedure 0x%lx by ordinal\n",
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
    v25 = (char *)(a1 + *(unsigned int *)(a1 + *((unsigned int *)v10 + 7) + 4LL * (int)v24));
    *a4 = v25;
    if ( v25 < v10 || v25 >= &v10[v14] )
      return 0LL;
    else
      return 3221226029LL;
  }
}
