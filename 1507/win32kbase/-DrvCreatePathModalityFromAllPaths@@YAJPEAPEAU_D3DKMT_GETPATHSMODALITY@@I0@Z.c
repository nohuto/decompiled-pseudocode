/*
 * XREFs of ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00B8F00
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C001C8D8 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C001C9C4 (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall DrvCreatePathModalityFromAllPaths(
        struct _D3DKMT_GETPATHSMODALITY **a1,
        unsigned int a2,
        struct _D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned int i; // esi
  int PathsModality; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned int v23; // ebx
  __int64 v24; // rax
  int v25; // edx
  int v26; // eax
  struct _D3DKMT_GETPATHSMODALITY *v27; // rax
  __int64 v28; // rax
  struct _D3DKMT_GETPATHSMODALITY *v29; // rax
  struct _D3DKMT_GETPATHSMODALITY *v30; // rcx
  _OWORD *v31; // r8
  _OWORD *v32; // rax
  __int128 v33; // xmm0

  i = 0;
  if ( a2 < 2 )
  {
    PathsModality = GetPathsModality(0LL, a3, a2 != 0 ? 8 : 1, 0);
    v12 = PathsModality;
    if ( PathsModality < 0 )
    {
      v13 = WdLogNewEntry5_WdError(v9, v8, v10, v11);
      *(_QWORD *)(v13 + 24) = v12;
      *(_QWORD *)(v13 + 32) = 24754LL;
      WdLogEvent5_WdError(v13);
    }
    return (unsigned int)v12;
  }
  if ( !*a1 )
  {
    if ( a2 != 2 )
    {
      v15 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v15);
    }
    v16 = GetPathsModality(0LL, a1, 0x10u, 0);
    v20 = v16;
    if ( v16 < 0 )
    {
      v21 = WdLogNewEntry5_WdError(a1, v17, v18, v19);
      *(_QWORD *)(v21 + 24) = v20;
      *(_QWORD *)(v21 + 32) = 24774LL;
      WdLogEvent5_WdError(v21);
      return (unsigned int)v20;
    }
    if ( !*a1 )
    {
      v22 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v22);
    }
  }
  v23 = a2 - 1;
  if ( !v23 )
  {
    v24 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v24);
  }
  v25 = 0;
  while ( v23 )
  {
    for ( i = 0; i < *((unsigned __int16 *)*a1 + 10); ++i )
    {
      v26 = *((_DWORD *)*a1 + 54 * i + 12);
      if ( (v26 & 0x1000000) != 0 )
      {
        if ( v25 )
        {
          if ( (v26 & 0x1C000000) != 0 )
          {
LABEL_22:
            if ( !--v23 )
              break;
          }
        }
        else if ( (v26 & 0x1C000000) == 0 )
        {
          goto LABEL_22;
        }
      }
    }
    if ( (unsigned int)++v25 >= 2 )
    {
      if ( v23 )
        return 2147483674LL;
      break;
    }
  }
  v27 = AllocPathsModality(1u);
  *a3 = v27;
  if ( !v27 )
  {
    v28 = WdLogNewEntry5_WdLowResource();
    LODWORD(v12) = -1073741670;
    *(_QWORD *)(v28 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v28);
    return (unsigned int)v12;
  }
  *((_WORD *)v27 + 10) = 1;
  *((_DWORD *)*a3 + 8) = 8;
  v29 = *a1;
  v30 = *a3;
  *(_OWORD *)v30 = *(_OWORD *)*a1;
  *((_DWORD *)v30 + 4) = *((_DWORD *)v29 + 4);
  v31 = (_OWORD *)((char *)*a3 + 48);
  v32 = (_OWORD *)((char *)*a1 + 216 * i + 48);
  *v31 = *v32;
  v31[1] = v32[1];
  v31[2] = v32[2];
  v31[3] = v32[3];
  v31[4] = v32[4];
  v31[5] = v32[5];
  v31[6] = v32[6];
  v31 += 8;
  v33 = v32[7];
  v32 += 8;
  *(v31 - 1) = v33;
  *v31 = *v32;
  v31[1] = v32[1];
  v31[2] = v32[2];
  v31[3] = v32[3];
  v31[4] = v32[4];
  *((_QWORD *)v31 + 10) = *((_QWORD *)v32 + 10);
  *((_QWORD *)*a3 + 28) = 0LL;
  return 0LL;
}
