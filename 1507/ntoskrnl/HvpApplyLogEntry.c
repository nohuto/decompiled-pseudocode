/*
 * XREFs of HvpApplyLogEntry @ 0x140666234
 * Callers:
 *     HvApplyLegacyLogFile @ 0x140665B70 (HvApplyLegacyLogFile.c)
 *     HvApplyLogFile @ 0x140665D50 (HvApplyLogFile.c)
 * Callees:
 *     HvViewMapPinFile @ 0x1401E08A0 (HvViewMapPinFile.c)
 *     HvpValidateLoadedBin @ 0x1404A038C (HvpValidateLoadedBin.c)
 *     HvpExpandMap @ 0x1404AF490 (HvpExpandMap.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 *     HvpAddDummyBinToHive @ 0x140665FC4 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x140666154 (HvpAddLoadedBinToHive.c)
 *     HvpCopyModifiedData @ 0x1406664C4 (HvpCopyModifiedData.c)
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
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ecx
  unsigned int v21; // edx
  __int64 v22; // r8
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // edx
  int v28; // r9d
  unsigned int v29; // edi
  unsigned int v30; // edi
  bool v31; // al
  int v32; // eax
  __int64 v33; // rcx
  unsigned int v34; // edi
  int i; // edi
  __int64 v36; // rdi
  __int64 v39; // [rsp+28h] [rbp-40h]
  int v40; // [rsp+70h] [rbp+8h]
  int *v41; // [rsp+78h] [rbp+10h] BYREF

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
  v17 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v14, 1);
  if ( v17 < 0 )
    return (unsigned int)v17;
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
  {
    v17 = HvViewMapPinFile((unsigned int *)(BugCheckParameter2 + 200), v16, v18, v19);
    if ( v17 < 0 )
      return (unsigned int)v17;
  }
  v17 = HvpExpandMap(BugCheckParameter2, 0, v15, a2[4]);
  if ( v17 < 0 )
    return (unsigned int)v17;
  v20 = 0;
  *(_DWORD *)(BugCheckParameter2 + 1400) = a2[4];
  v21 = 0;
  v40 = 0;
  if ( !a2[5] )
  {
LABEL_32:
    v34 = a2[4];
    if ( v20 < v15 )
      v20 = v15;
    if ( v34 > v20 )
    {
      for ( i = v34 - v20; i; i -= 4096 )
      {
        v17 = HvpAddDummyBinToHive(BugCheckParameter2, 0LL, a2[4] - i, &v41);
        if ( v17 < 0 )
          return (unsigned int)v17;
      }
    }
    v9 = a4;
LABEL_39:
    if ( a2[5] )
    {
      do
      {
        v36 = *(unsigned int *)(a3 + 8 * v7 + 4);
        if ( *(_DWORD *)(a3 + 8 * v7) >= v15 )
          break;
        HvpCopyModifiedData(BugCheckParameter2);
        v9 = (unsigned int *)((char *)v9 + v36);
        v13 += v36;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < a2[5] );
    }
    if ( (a2[2] & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
    v17 = 1073741833;
    *a6 = v13;
    return (unsigned int)v17;
  }
  while ( 1 )
  {
    v22 = v21;
    v39 = v21;
    v23 = *(unsigned int *)(a3 + 8LL * v21 + 4);
    v24 = *(_DWORD *)(a3 + 8LL * v21);
    v20 = v24 + v23;
    if ( v24 + (unsigned int)v23 <= v15 )
    {
      v9 = (unsigned int *)((char *)v9 + v23);
      goto LABEL_30;
    }
    if ( v24 < v15 )
    {
      v25 = v15 - v24;
      v24 = v15;
      v9 = (unsigned int *)((char *)v9 + v25);
    }
    if ( v21 && (v26 = v21 - 1, v27 = *(_DWORD *)(a3 + 8 * v26 + 4), v28 = *(_DWORD *)(a3 + 8 * v26), v28 + v27 >= v15) )
      v29 = v24 - v28 - v27;
    else
      v29 = v24 - v15;
    if ( v29 )
      break;
LABEL_19:
    v30 = *(_DWORD *)(a3 + 8 * v22) + *(_DWORD *)(a3 + 8 * v22 + 4);
    if ( v24 < v30 )
    {
      while ( 1 )
      {
        v31 = HvpValidateLoadedBin(v9, v24, a2[4]);
        if ( !v31 )
          goto LABEL_25;
        if ( v9[2] > v30 - v24 )
          v31 = 0;
        if ( v31 )
          v32 = HvpAddLoadedBinToHive(BugCheckParameter2, v9, v24, &v41);
        else
LABEL_25:
          v32 = HvpAddDummyBinToHive(BugCheckParameter2, v9, v24, &v41);
        v17 = v32;
        if ( v32 < 0 )
          return (unsigned int)v17;
        v33 = (unsigned int)v41[2];
        a5 += v33;
        v24 += v33;
        v9 = (unsigned int *)((char *)v9 + v33);
        if ( v24 >= v30 )
        {
          v22 = v39;
          break;
        }
      }
    }
    v20 = *(_DWORD *)(a3 + 8 * v22) + *(_DWORD *)(a3 + 8 * v22 + 4);
    v21 = v40;
LABEL_30:
    v40 = ++v21;
    if ( v21 >= a2[5] )
    {
      v13 = a5;
      goto LABEL_32;
    }
  }
  while ( 1 )
  {
    v17 = HvpAddDummyBinToHive(BugCheckParameter2, 0LL, v24 - v29, &v41);
    if ( v17 < 0 )
      return (unsigned int)v17;
    v29 -= 4096;
    if ( !v29 )
    {
      v22 = v39;
      goto LABEL_19;
    }
  }
}
