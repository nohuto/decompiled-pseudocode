/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x180018438
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180021DC4 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800C60F0 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180015E10 (RtlImageNtHeaderEx.c)
 *     RtlImageDirectoryEntryToData @ 0x180016860 (RtlImageDirectoryEntryToData.c)
 *     ZwProtectVirtualMemory @ 0x180093E00 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpPrepareImportAddressTableForSnap(_QWORD *a1)
{
  __int64 v1; // rsi
  __int64 *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rax
  unsigned int v7; // edx
  __int64 result; // rax
  char *v9; // rcx
  char *v10; // r8
  unsigned int v11; // r9d
  unsigned int *v12; // rdx
  unsigned int v13; // r10d
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // rax
  int v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+58h] [rbp+10h] BYREF
  __int64 v19; // [rsp+60h] [rbp+18h] BYREF
  __int64 v20; // [rsp+68h] [rbp+20h] BYREF

  v1 = a1[6];
  v2 = a1 + 13;
  a1[12] = RtlImageDirectoryEntryToData(*(_QWORD *)(v1 + 48), 1, 0xCu, (_DWORD *)a1 + 26);
  RtlImageNtHeaderEx(3, *(_QWORD *)(v1 + 48), 0LL, &v18);
  v4 = RtlImageDirectoryEntryToData(*(_QWORD *)(v1 + 48), 1, 0xAu, &v17);
  if ( !v4 || !v17 || v17 != *(_DWORD *)v4 || *(_DWORD *)v4 < 0x94u )
    goto LABEL_9;
  v5 = v18;
  if ( (*(_WORD *)(v18 + 94) & 0x4000) != 0 && (*(_DWORD *)(v4 + 144) & 0x100) != 0 )
  {
    v6 = *(_QWORD **)(v4 + 112);
    a1[18] = v6;
    if ( v6 )
    {
      a1[17] = *v6;
LABEL_9:
      v5 = v18;
    }
  }
  if ( !a1[12] )
  {
    v11 = *(_DWORD *)(v5 + 144);
    v12 = (unsigned int *)(*(unsigned __int16 *)(v5 + 20) + v5 + 24);
    if ( v11 )
    {
      v13 = *(unsigned __int16 *)(v5 + 6);
      v14 = 0;
      if ( *(_WORD *)(v5 + 6) )
      {
        while ( 1 )
        {
          v15 = v12[3];
          if ( v11 >= v15 && v11 < v12[4] + v15 )
            break;
          ++v14;
          v12 += 10;
          if ( v14 >= v13 )
            goto LABEL_11;
        }
        a1[12] = *(_QWORD *)(v1 + 48) + v12[3];
        v16 = v12[2];
        *v2 = v16;
        if ( !v16 )
          *v2 = v12[4];
      }
    }
  }
LABEL_11:
  v7 = 0;
  if ( a1[12] && *v2 )
  {
    v20 = a1[12];
    v19 = *v2;
    result = ZwProtectVirtualMemory(-1LL, &v20, &v19, 4LL, a1 + 16);
    v7 = result;
    if ( (int)result < 0 )
      return result;
    v9 = (char *)a1[12];
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
