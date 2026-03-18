/*
 * XREFs of _PopulateDisplayModeFromPresentPath @ 0x1C0082640
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C0081A50 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C016253C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_OFFSET_ROTATION @ 0x1C0005D38 (D3DKMDT_VPPR_GET_OFFSET_ROTATION.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1C0082978 (ConvertDMMScalingToGdiScaling.c)
 */

D3DKMDT_VIDPN_PRESENT_PATH_ROTATION __fastcall PopulateDisplayModeFromPresentPath(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int a3,
        int a4,
        unsigned __int8 a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
        _BYTE *a10)
{
  unsigned int v11; // edi
  __int64 v13; // r12
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // ebp
  unsigned __int64 v21; // rcx
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // r15
  unsigned int *v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION result; // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  __int64 v39; // rcx
  unsigned __int64 v40; // rtt
  __int64 v41; // rax
  int v42; // eax
  _QWORD *v43; // rax

  v11 = 0;
  v13 = a4;
  *(_DWORD *)(a9 + 8) = a1[7];
  *(_DWORD *)a9 = a1[4];
  v14 = a1[5];
  v15 = *(_DWORD *)(a9 + 40);
  *(_DWORD *)(a9 + 4) = v14;
  *(_DWORD *)(a9 + 24) = (int)(a2[14] << 29) >> 29;
  v16 = (*(_DWORD *)(a9 + 36) ^ a5) & 1;
  *a10 = 0;
  *(_DWORD *)(a9 + 36) ^= v16;
  v17 = a8 & 0xF | v15 & 0xFFFFFFC0;
  *(_DWORD *)(a9 + 40) = v17;
  v18 = v17 ^ ((unsigned __int8)v17 ^ ((a6 != 0) << 6)) & 0x40;
  *(_DWORD *)(a9 + 40) = v18;
  *(_DWORD *)(a9 + 40) = v18 & 0x7F | ((a7 != 0) << 7);
  *(_QWORD *)(a9 + 16) = *(_QWORD *)(a2 + 7);
  v19 = (a2[14] >> 3) & 0x3F;
  if ( ((a2[14] >> 3) & 0x3F) != 0 )
    *(_DWORD *)(a9 + 20) *= (_DWORD)v19;
  v20 = (int)(a2[14] << 29) >> 29;
  if ( !*(_DWORD *)(a9 + 20) )
  {
    v41 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v41);
  }
  v21 = *(unsigned int *)(a9 + 20);
  v22 = 0x624DD2F1A9FBE77LL;
  v23 = *(unsigned int *)(a9 + 16);
  *a10 = 0;
  if ( v21 )
  {
    if ( v21 == 1000 )
    {
      v24 = (unsigned __int64)(((v23 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64)
                             + ((unsigned __int64)((unsigned int)v23
                                                 - ((v23 * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64)) >> 1)) >> 9;
      v23 -= 1000 * v24;
    }
    else
    {
      v40 = v23;
      v23 %= v21;
      v24 = v40 / v21;
    }
    if ( v23 >= v21 - v23 )
      LODWORD(v24) = v24 + 1;
  }
  else
  {
    LODWORD(v24) = -1;
  }
  v25 = (unsigned int *)&unk_1C0038370;
  while ( 1 )
  {
    v26 = *(unsigned int *)(a9 + 20);
    if ( (_DWORD)v26 )
    {
      v23 = v25[1];
      if ( (_DWORD)v23 )
      {
        v22 = *v25;
        v27 = 100000LL * *(unsigned int *)(a9 + 16);
        v28 = v26 == 1000 ? v27 / 0x3E8 : v27 / (unsigned int)v26;
        v29 = v25[1];
        v30 = 99950 * v22;
        v23 = v29 == 1001 ? v30 / 0x3E9 : v30 / v29;
        if ( v28 >= v23 )
        {
          v31 = 100050 * v22;
          v23 = v29 == 1001 ? v31 / 0x3E9 : v31 / v29;
          if ( v28 <= v23 )
            break;
        }
      }
    }
    ++v11;
    v25 += 2;
    if ( v11 >= 6 )
      goto LABEL_22;
  }
  v42 = *(_DWORD *)(a9 + 16) / *(_DWORD *)(a9 + 20);
  if ( v42 != (_DWORD)v24 )
    *a10 = 1;
  LODWORD(v24) = v42;
LABEL_22:
  if ( (unsigned int)(v20 - 2) <= 1 )
    LODWORD(v24) = (unsigned int)v24 >> 1;
  *(_DWORD *)(a9 + 12) = v24;
  ConvertDMMScalingToGdiScaling(a3, a9 + 32, v23, v22);
  result = v13 - 5;
  v36 = v13;
  if ( (unsigned int)(v13 - 5) <= 0xB )
  {
    result = D3DKMDT_VPPR_GET_OFFSET_ROTATION((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v13);
    v36 = ((int)v33 + result - 2) % 4 + 1;
  }
  v37 = v36 - 1;
  if ( v37 )
  {
    v38 = v37 - 1;
    if ( !v38 )
    {
      *(_DWORD *)(a9 + 28) = 2;
      goto LABEL_31;
    }
    v39 = (unsigned int)(v38 - 1);
    if ( !(_DWORD)v39 )
    {
      *(_DWORD *)(a9 + 28) = 3;
      goto LABEL_31;
    }
    if ( (_DWORD)v39 == 1 )
    {
      *(_DWORD *)(a9 + 28) = 4;
      goto LABEL_31;
    }
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v32, v33, v34);
    v43[3] = v13;
    v43[4] = *a1;
    v43[5] = *a2;
    result = (unsigned int)WdLogEvent5_WdWarning(v43);
  }
  *(_DWORD *)(a9 + 28) = 1;
LABEL_31:
  if ( a1[1] == 3 )
  {
LABEL_47:
    *(_DWORD *)(a9 + 40) |= 0x10u;
    *(_DWORD *)(a9 + 36) |= 1u;
    return result;
  }
  if ( a1[1] == 4 )
  {
    *(_DWORD *)(a9 + 40) |= 0x20u;
    goto LABEL_47;
  }
  return result;
}
