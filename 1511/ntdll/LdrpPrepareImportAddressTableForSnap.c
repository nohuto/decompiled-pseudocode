/*
 * XREFs of LdrpPrepareImportAddressTableForSnap @ 0x18003052C
 * Callers:
 *     LdrpMapAndSnapDependency @ 0x180012FB8 (LdrpMapAndSnapDependency.c)
 *     AVrfpSnapDllImports @ 0x1800CF420 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x180032000 (RtlImageDirectoryEntryToData.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x1800A5AC0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpPrepareImportAddressTableForSnap(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  unsigned int v9; // edx
  __int64 result; // rax
  char *v11; // rcx
  char *v12; // r8
  unsigned int v13; // r9d
  unsigned int *v14; // rdx
  unsigned int v15; // r10d
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  __int64 v18; // rax
  int v19; // [rsp+50h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF
  __int64 v21; // [rsp+60h] [rbp+18h] BYREF
  __int64 v22; // [rsp+68h] [rbp+20h] BYREF

  v2 = a1[6];
  v3 = a1 + 13;
  LOBYTE(a2) = 1;
  a1[12] = RtlImageDirectoryEntryToData(*(_QWORD *)(v2 + 48), a2, 12LL, a1 + 13);
  RtlImageNtHeaderEx(3LL, *(_QWORD *)(v2 + 48), 0LL, &v20);
  LOBYTE(v5) = 1;
  v6 = RtlImageDirectoryEntryToData(*(_QWORD *)(v2 + 48), v5, 10LL, &v19);
  if ( !v6 || !v19 || v19 != *(_DWORD *)v6 || *(_DWORD *)v6 < 0x94u )
    goto LABEL_9;
  v7 = v20;
  if ( (*(_WORD *)(v20 + 94) & 0x4000) != 0 && (*(_DWORD *)(v6 + 144) & 0x100) != 0 )
  {
    v8 = *(_QWORD **)(v6 + 112);
    a1[18] = v8;
    if ( v8 )
    {
      a1[17] = *v8;
LABEL_9:
      v7 = v20;
    }
  }
  if ( !a1[12] )
  {
    v13 = *(_DWORD *)(v7 + 144);
    v14 = (unsigned int *)(*(unsigned __int16 *)(v7 + 20) + v7 + 24);
    if ( v13 )
    {
      v15 = *(unsigned __int16 *)(v7 + 6);
      v16 = 0;
      if ( *(_WORD *)(v7 + 6) )
      {
        while ( 1 )
        {
          v17 = v14[3];
          if ( v13 >= v17 && v13 < v14[4] + v17 )
            break;
          ++v16;
          v14 += 10;
          if ( v16 >= v15 )
            goto LABEL_11;
        }
        a1[12] = *(_QWORD *)(v2 + 48) + v14[3];
        v18 = v14[2];
        *v3 = v18;
        if ( !v18 )
          *v3 = v14[4];
      }
    }
  }
LABEL_11:
  v9 = 0;
  if ( a1[12] && *v3 )
  {
    v22 = a1[12];
    v21 = *v3;
    result = ZwProtectVirtualMemory(-1LL, &v22, &v21, 4LL, a1 + 16);
    v9 = result;
    if ( (int)result < 0 )
      return result;
    v11 = (char *)a1[12];
    v12 = &v11[*v3];
    do
    {
      *(_QWORD *)v11 = *(_QWORD *)v11;
      v11 += 4096;
    }
    while ( v11 < v12 );
  }
  return v9;
}
