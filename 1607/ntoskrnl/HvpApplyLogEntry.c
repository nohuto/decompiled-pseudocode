/*
 * XREFs of HvpApplyLogEntry @ 0x1406126C4
 * Callers:
 *     HvApplyLegacyLogFile @ 0x140612000 (HvApplyLegacyLogFile.c)
 *     HvApplyLogFile @ 0x1406121E0 (HvApplyLogFile.c)
 * Callees:
 *     HvViewMapPinFile @ 0x1401B65E8 (HvViewMapPinFile.c)
 *     HvpExpandMap @ 0x14047CBA0 (HvpExpandMap.c)
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     HvpValidateLoadedBin @ 0x1404F7398 (HvpValidateLoadedBin.c)
 *     HvpAddDummyBinToHive @ 0x140612454 (HvpAddDummyBinToHive.c)
 *     HvpAddLoadedBinToHive @ 0x1406125E4 (HvpAddLoadedBinToHive.c)
 *     HvpCopyModifiedData @ 0x140612960 (HvpCopyModifiedData.c)
 */

__int64 __fastcall HvpApplyLogEntry(
        ULONG_PTR BugCheckParameter2,
        _DWORD *a2,
        __int64 a3,
        unsigned int *a4,
        int a5,
        int *a6)
{
  __int64 v6; // r10
  __int64 v7; // rbx
  int v8; // eax
  unsigned int *v10; // r12
  unsigned int v13; // r15d
  int v14; // esi
  unsigned int v15; // ecx
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

  v6 = *(_QWORD *)(BugCheckParameter2 + 64);
  v7 = 0LL;
  v8 = a2[4];
  v10 = a4;
  a5 = 0;
  *(_DWORD *)(v6 + 40) = v8;
  v13 = *(_DWORD *)(BugCheckParameter2 + 1400);
  v14 = 0;
  v15 = a2[4];
  if ( v13 >= v15 )
    goto LABEL_40;
  if ( (*(_DWORD *)(BugCheckParameter2 + 144) & 0x8001) == 0 )
  {
    v16 = CmpDoFileSetSizeEx(BugCheckParameter2, 0, v15, 1);
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 124) & 4) != 0 )
  {
    v16 = HvViewMapPinFile((unsigned int *)(BugCheckParameter2 + 200));
    if ( v16 < 0 )
      return (unsigned int)v16;
  }
  v16 = HvpExpandMap(BugCheckParameter2, 0, v13, a2[4]);
  if ( v16 < 0 )
    return (unsigned int)v16;
  v17 = 0;
  *(_DWORD *)(BugCheckParameter2 + 1400) = a2[4];
  v18 = 0;
  v37 = 0;
  if ( !a2[5] )
  {
LABEL_33:
    v31 = a2[4];
    if ( v17 < v13 )
      v17 = v13;
    if ( v31 > v17 )
    {
      for ( i = v31 - v17; i; i -= 4096 )
      {
        v16 = HvpAddDummyBinToHive(BugCheckParameter2, 0LL, a2[4] - i, &v38);
        if ( v16 < 0 )
          return (unsigned int)v16;
      }
    }
    v10 = a4;
LABEL_40:
    if ( a2[5] )
    {
      do
      {
        v33 = *(unsigned int *)(a3 + 8 * v7 + 4);
        if ( *(_DWORD *)(a3 + 8 * v7) >= v13 )
          break;
        HvpCopyModifiedData(BugCheckParameter2);
        v10 = (unsigned int *)((char *)v10 + v33);
        v14 += v33;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < a2[5] );
    }
    if ( (a2[2] & 1) != 0 )
      *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 144LL) |= 1u;
    v16 = 1073741833;
    *a6 = v14;
    return (unsigned int)v16;
  }
  while ( 1 )
  {
    v19 = v18;
    v36 = v18;
    v20 = *(unsigned int *)(a3 + 8LL * v18 + 4);
    v21 = *(_DWORD *)(a3 + 8LL * v18);
    v17 = v21 + v20;
    if ( v21 + (unsigned int)v20 <= v13 )
    {
      v10 = (unsigned int *)((char *)v10 + v20);
      goto LABEL_31;
    }
    if ( v21 < v13 )
    {
      v22 = v13 - v21;
      v21 = v13;
      v10 = (unsigned int *)((char *)v10 + v22);
    }
    if ( v18 && (v23 = v18 - 1, v24 = *(_DWORD *)(a3 + 8 * v23 + 4), v25 = *(_DWORD *)(a3 + 8 * v23), v25 + v24 >= v13) )
      v26 = v21 - v25 - v24;
    else
      v26 = v21 - v13;
    if ( v26 )
      break;
LABEL_20:
    v27 = *(_DWORD *)(a3 + 8 * v19) + *(_DWORD *)(a3 + 8 * v19 + 4);
    if ( v21 < v27 )
    {
      while ( 1 )
      {
        v28 = HvpValidateLoadedBin(v10, v21, a2[4]);
        if ( !v28 )
          goto LABEL_26;
        if ( v10[2] > v27 - v21 )
          v28 = 0;
        if ( v28 )
          v29 = HvpAddLoadedBinToHive(BugCheckParameter2, v10, v21, &v38);
        else
LABEL_26:
          v29 = HvpAddDummyBinToHive(BugCheckParameter2, v10, v21, &v38);
        v16 = v29;
        if ( v29 < 0 )
          return (unsigned int)v16;
        v30 = (unsigned int)v38[2];
        a5 += v30;
        v21 += v30;
        v10 = (unsigned int *)((char *)v10 + v30);
        if ( v21 >= v27 )
        {
          v19 = v36;
          break;
        }
      }
    }
    v17 = *(_DWORD *)(a3 + 8 * v19) + *(_DWORD *)(a3 + 8 * v19 + 4);
    v18 = v37;
LABEL_31:
    v37 = ++v18;
    if ( v18 >= a2[5] )
    {
      v14 = a5;
      goto LABEL_33;
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
      goto LABEL_20;
    }
  }
}
