/*
 * XREFs of ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00BAE0C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00511C0 (DrvSetDisplayConfig.c)
 * Callees:
 *     sub_1C0052570 @ 0x1C0052570 (sub_1C0052570.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C005265C (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall DrvCreatePathModalityFromAllPaths(
        struct _D3DKMT_GETPATHSMODALITY **a1,
        __int64 a2,
        struct _D3DKMT_GETPATHSMODALITY **a3,
        __int64 a4)
{
  unsigned int i; // esi
  int v6; // ebx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rax
  int v23; // edx
  int v24; // eax
  struct _D3DKMT_GETPATHSMODALITY *v25; // rax
  __int64 v26; // rax
  struct _D3DKMT_GETPATHSMODALITY *v27; // rax
  struct _D3DKMT_GETPATHSMODALITY *v28; // rcx
  _OWORD *v29; // r8
  _OWORD *v30; // rax
  __int128 v31; // xmm0

  i = 0;
  v6 = a2;
  if ( (unsigned int)a2 < 2 )
  {
    v8 = sub_1C0052570(0LL, a3, (_DWORD)a2 != 0 ? 8 : 1, 0LL);
    v13 = v8;
    if ( v8 < 0 )
    {
      v14 = WdLogNewEntry5_WdError(v10, v9, v11, v12);
      *(_QWORD *)(v14 + 24) = v13;
      *(_QWORD *)(v14 + 32) = 24952LL;
      WdLogEvent5_WdError(v14);
    }
    return (unsigned int)v13;
  }
  if ( !*a1 )
  {
    if ( (_DWORD)a2 != 2 )
    {
      v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v16);
    }
    v17 = sub_1C0052570(0LL, a1, 16LL, 0LL);
    v18 = v17;
    if ( v17 < 0 )
    {
      v19 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
      *(_QWORD *)(v19 + 24) = v18;
      *(_QWORD *)(v19 + 32) = 24972LL;
      WdLogEvent5_WdError(v19);
      return (unsigned int)v18;
    }
    if ( !*a1 )
    {
      v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v20);
    }
  }
  v21 = v6 - 1;
  if ( !v21 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = 0;
  while ( v21 )
  {
    for ( i = 0; i < *((unsigned __int16 *)*a1 + 10); ++i )
    {
      v24 = *((_DWORD *)*a1 + 54 * i + 12);
      if ( (v24 & 0x1000000) != 0 )
      {
        if ( v23 )
        {
          if ( (v24 & 0x1C000000) != 0 )
          {
LABEL_22:
            if ( !--v21 )
              break;
          }
        }
        else if ( (v24 & 0x1C000000) == 0 )
        {
          goto LABEL_22;
        }
      }
    }
    if ( (unsigned int)++v23 >= 2 )
    {
      if ( v21 )
        return 2147483674LL;
      break;
    }
  }
  v25 = AllocPathsModality(1u);
  *a3 = v25;
  if ( !v25 )
  {
    v26 = WdLogNewEntry5_WdLowResource();
    LODWORD(v13) = -1073741670;
    *(_QWORD *)(v26 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v26);
    return (unsigned int)v13;
  }
  *((_WORD *)v25 + 10) = 1;
  *((_DWORD *)*a3 + 8) = 8;
  v27 = *a1;
  v28 = *a3;
  *(_OWORD *)v28 = *(_OWORD *)*a1;
  *((_DWORD *)v28 + 4) = *((_DWORD *)v27 + 4);
  v29 = (_OWORD *)((char *)*a3 + 48);
  v30 = (_OWORD *)((char *)*a1 + 216 * i + 48);
  *v29 = *v30;
  v29[1] = v30[1];
  v29[2] = v30[2];
  v29[3] = v30[3];
  v29[4] = v30[4];
  v29[5] = v30[5];
  v29[6] = v30[6];
  v29 += 8;
  v31 = v30[7];
  v30 += 8;
  *(v29 - 1) = v31;
  *v29 = *v30;
  v29[1] = v30[1];
  v29[2] = v30[2];
  v29[3] = v30[3];
  v29[4] = v30[4];
  *((_QWORD *)v29 + 10) = *((_QWORD *)v30 + 10);
  *((_QWORD *)*a3 + 28) = 0LL;
  return 0LL;
}
