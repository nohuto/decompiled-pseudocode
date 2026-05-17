/*
 * XREFs of LdrpGetProcedureAddress @ 0x180032370
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180031D60 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveProcedureAddress @ 0x18007B5EC (LdrpResolveProcedureAddress.c)
 *     LdrpCorInitialize @ 0x1800863F0 (LdrpCorInitialize.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x1800316C4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
 *     RtlAddressInSectionTable @ 0x180080BF0 (RtlAddressInSectionTable.c)
 *     LdrpLogDbgPrint @ 0x1800D057C (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpGetProcedureAddress(unsigned __int64 a1, const char *a2, int a3, char **a4)
{
  bool v8; // bl
  unsigned __int64 v9; // rsi
  char *v10; // rbp
  int v11; // eax
  __int16 v12; // ax
  __int64 v13; // rax
  int v14; // r13d
  char v15; // di
  int v16; // r10d
  int v17; // r9d
  int v18; // r8d
  const char *v19; // rcx
  signed __int64 v20; // rdx
  unsigned __int8 v21; // al
  int v22; // eax
  unsigned int v24; // edi
  char *v25; // rcx
  char *v26; // [rsp+40h] [rbp-38h] BYREF
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF

  v27 = 0LL;
  v26 = 0LL;
  v8 = 1;
  v9 = a1;
  v10 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v8 = (a1 & 1) == 0;
    v9 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  v11 = RtlImageNtHeaderEx(1LL, v9, 0LL, &v27);
  if ( !v27 )
  {
LABEL_46:
    if ( v11 >= 0 )
    {
      v14 = v27;
      goto LABEL_10;
    }
    goto LABEL_42;
  }
  v12 = *(_WORD *)(v27 + 24);
  if ( v12 == 267 )
  {
    v11 = RtlpImageDirectoryEntryToData32(v9, v8, 0, &v27, v27, &v26);
    v10 = v26;
    goto LABEL_46;
  }
  if ( v12 != 523 || !*(_DWORD *)(v27 + 132) || (v13 = *(unsigned int *)(v27 + 136), !(_DWORD)v13) )
  {
LABEL_42:
    v14 = v27;
LABEL_43:
    v10 = 0LL;
    goto LABEL_10;
  }
  v14 = *(_DWORD *)(v27 + 140);
  if ( v8 || (unsigned int)v13 < *(_DWORD *)(v27 + 84) )
  {
    v10 = (char *)(v9 + v13);
    goto LABEL_10;
  }
  v10 = (char *)RtlAddressInSectionTable(v27, v9, (unsigned int)v13);
  if ( !v10 )
    goto LABEL_43;
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
        1325,
        (unsigned int)"LdrpNameToOrdinal",
        1,
        (__int64)"Procedure \"%s\" could not be located in DLL at base 0x%p.\n",
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
    v25 = (char *)(a1 + *(unsigned int *)(a1 + *((unsigned int *)v10 + 7) + 4LL * (int)v24));
    *a4 = v25;
    if ( v25 < v10 || v25 >= &v10[v14] )
      return 0LL;
    else
      return 3221226029LL;
  }
}
