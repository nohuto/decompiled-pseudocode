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
  unsigned __int64 v9; // rdi
  _DWORD *v10; // rbp
  int v11; // eax
  __int16 v12; // ax
  unsigned int v13; // r13d
  char v14; // r11
  int v15; // r10d
  int v16; // r9d
  __int64 v17; // rax
  int v19; // r8d
  unsigned __int8 *v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int8 v22; // cl
  int v23; // eax
  unsigned int v24; // ebx
  unsigned __int64 v25; // rdx
  _DWORD *v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+90h] [rbp+8h] BYREF
  unsigned __int64 *v28; // [rsp+A8h] [rbp+20h]

  v28 = a4;
  v4 = 0;
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
  if ( v27 )
  {
    v12 = *(_WORD *)(v27 + 24);
    if ( v12 != 267 )
    {
      if ( v12 != 523 )
        return 3221225594LL;
      if ( !*(_DWORD *)(v27 + 132) )
        return 3221225594LL;
      v17 = *(unsigned int *)(v27 + 136);
      if ( !(_DWORD)v17 )
        return 3221225594LL;
      v13 = *(_DWORD *)(v27 + 140);
      if ( v8 || (unsigned int)v17 < *(_DWORD *)(v27 + 84) )
      {
        v10 = (_DWORD *)(v9 + v17);
      }
      else
      {
        v10 = (_DWORD *)RtlAddressInSectionTable(v27, v9, (unsigned int)v17);
        if ( !v10 )
          return 3221225594LL;
      }
      goto LABEL_8;
    }
    v11 = RtlpImageDirectoryEntryToData32(v9, v8, 0, &v27, v27, &v26);
    v10 = v26;
  }
  if ( v11 < 0 )
    return 3221225594LL;
  v13 = v27;
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
    v16 = v10[6] - 1;
    v19 = v16 / 2;
    if ( v16 >= 0 )
    {
      while ( 1 )
      {
        v20 = a2;
        v21 = a1 + *(unsigned int *)(a1 + (unsigned int)v10[8] + 4LL * v19) - (_QWORD)a2;
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
      v24 = *(unsigned __int16 *)(a1 + (unsigned int)v10[9] + 2LL * v19);
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
  v24 = a3 - v10[4];
LABEL_41:
  if ( v24 < v10[5] )
  {
    v25 = a1 + *(unsigned int *)(a1 + (unsigned int)v10[7] + 4LL * (int)v24);
    *v28 = v25;
    if ( v25 < (unsigned __int64)v10 || v25 >= (unsigned __int64)v10 + v13 )
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
