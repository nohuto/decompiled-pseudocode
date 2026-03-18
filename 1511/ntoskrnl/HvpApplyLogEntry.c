/*
 * XREFs of HvpApplyLogEntry @ 0x1405EDD44
 * Callers:
 *     HvApplyLegacyLogFile @ 0x1405ED680 (HvApplyLegacyLogFile.c)
 *     HvApplyLogFile @ 0x1405ED860 (HvApplyLogFile.c)
 * Callees:
 *     HvViewMapPinFile @ 0x1401AAC18 (HvViewMapPinFile.c)
 *     HvpExpandMap @ 0x1403D5150 (HvpExpandMap.c)
 *     HvpValidateLoadedBin @ 0x1403D8FD8 (HvpValidateLoadedBin.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 *     HvpAddDummyBinToHive @ 0x1405EDAD4 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1405EDC64 (HvpAddLoadedBinToHive.c)
 *     HvpCopyModifiedData @ 0x1405EDFD4 (HvpCopyModifiedData.c)
 */

__int64 __fastcall HvpApplyLogEntry(
        ULONG_PTR BugCheckParameter2,
        _DWORD *a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        int *a6)
{
  int v6; // eax
  __int64 v7; // rbx
  __int64 v8; // r10
  unsigned int *v9; // r12
  int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // r15d
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // edx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx
  int v25; // r9d
  unsigned int v26; // edi
  unsigned int v27; // edi
  bool v28; // al
  int v29; // eax
  __int64 v30; // rcx
  unsigned int v31; // edi
  int i; // edi
  __int64 v33; // rdi
  __int64 v36; // [rsp+28h] [rbp-40h]
  int v37; // [rsp+70h] [rbp+8h]
  int *v38; // [rsp+78h] [rbp+10h] BYREF

  v6 = a2[4];
  v7 = 0LL;
  v8 = *(_QWORD *)(BugCheckParameter2 + 64);
  v9 = a4;
  a5 = 0;
  v13 = 0;
  *(_DWORD *)(v8 + 40) = v6;
  v14 = a2[4];
  v15 = *(_DWORD *)(BugCheckParameter2 + 1400);
  if ( v15 >= v14 )
    goto LABEL_39;
  v16 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v14, 1);
  if ( v16 < 0 )
    return (unsigned int)v16;
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
  {
    v16 = HvViewMapPinFile((unsigned int *)(BugCheckParameter2 + 200));
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  v16 = HvpExpandMap(BugCheckParameter2, 0, v15, a2[4]);
  if ( v16 < 0 )
    return (unsigned int)v16;
  v17 = 0;
  *(_DWORD *)(BugCheckParameter2 + 1400) = a2[4];
  v18 = 0;
  v37 = 0;
  if ( !a2[5] )
  {
LABEL_32:
    v31 = a2[4];
    if ( v17 < v15 )
      v17 = v15;
    if ( v31 > v17 )
    {
      for ( i = v31 - v17; i; i -= 4096 )
      {
        v16 = HvpAddDummyBinToHive(BugCheckParameter2, 0LL, a2[4] - i, &v38);
        if ( v16 < 0 )
          return (unsigned int)v16;
      }
    }
    v9 = a4;
LABEL_39:
    if ( a2[5] )
    {
      do
      {
        v33 = *(unsigned int *)(a3 + 8 * v7 + 4);
        if ( *(_DWORD *)(a3 + 8 * v7) >= v15 )
          break;
        HvpCopyModifiedData(BugCheckParameter2);
        v9 = (unsigned int *)((char *)v9 + v33);
        v13 += v33;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < a2[5] );
    }
    if ( (a2[2] & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
    v16 = 1073741833;
    *a6 = v13;
    return (unsigned int)v16;
  }
  while ( 1 )
  {
    v19 = v18;
    v36 = v18;
    v20 = *(unsigned int *)(a3 + 8LL * v18 + 4);
    v21 = *(_DWORD *)(a3 + 8LL * v18);
    v17 = v21 + v20;
    if ( v21 + (unsigned int)v20 <= v15 )
    {
      v9 = (unsigned int *)((char *)v9 + v20);
      goto LABEL_30;
    }
    if ( v21 < v15 )
    {
      v22 = v15 - v21;
      v21 = v15;
      v9 = (unsigned int *)((char *)v9 + v22);
    }
    if ( v18 && (v23 = v18 - 1, v24 = *(_DWORD *)(a3 + 8 * v23 + 4), v25 = *(_DWORD *)(a3 + 8 * v23), v25 + v24 >= v15) )
      v26 = v21 - v25 - v24;
    else
      v26 = v21 - v15;
    if ( v26 )
      break;
LABEL_19:
    v27 = *(_DWORD *)(a3 + 8 * v19) + *(_DWORD *)(a3 + 8 * v19 + 4);
    if ( v21 < v27 )
    {
      while ( 1 )
      {
        v28 = HvpValidateLoadedBin(v9, v21, a2[4]);
        if ( !v28 )
          goto LABEL_25;
        if ( v9[2] > v27 - v21 )
          v28 = 0;
        if ( v28 )
          v29 = HvpAddLoadedBinToHive(BugCheckParameter2, v9, v21, &v38);
        else
LABEL_25:
          v29 = HvpAddDummyBinToHive(BugCheckParameter2, v9, v21, &v38);
        v16 = v29;
        if ( v29 < 0 )
          return (unsigned int)v16;
        v30 = (unsigned int)v38[2];
        a5 += v30;
        v21 += v30;
        v9 = (unsigned int *)((char *)v9 + v30);
        if ( v21 >= v27 )
        {
          v19 = v36;
          break;
        }
      }
    }
    v17 = *(_DWORD *)(a3 + 8 * v19) + *(_DWORD *)(a3 + 8 * v19 + 4);
    v18 = v37;
LABEL_30:
    v37 = ++v18;
    if ( v18 >= a2[5] )
    {
      v13 = a5;
      goto LABEL_32;
    }
  }
  while ( 1 )
  {
    v16 = HvpAddDummyBinToHive(BugCheckParameter2, 0LL, v21 - v26, &v38);
    if ( v16 < 0 )
      return (unsigned int)v16;
    v26 -= 4096;
    if ( !v26 )
    {
      v19 = v36;
      goto LABEL_19;
    }
  }
}
