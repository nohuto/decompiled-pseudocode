/*
 * XREFs of ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00C5754
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0063200 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0064748 (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall AllocatePathModalityForDisplayConfig(
        __int64 a1,
        unsigned __int64 a2,
        struct _D3DKMT_GETPATHSMODALITY **a3,
        _DWORD *a4)
{
  unsigned int v4; // ebx
  unsigned __int64 v6; // rdi
  struct _D3DKMT_GETPATHSMODALITY *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v14; // rax

  v4 = 0;
  v6 = a2;
  if ( !(_DWORD)a1 )
    goto LABEL_10;
  a4 = (_DWORD *)(a2 + 68);
  a2 = (unsigned int)a1;
  do
  {
    if ( (*a4 & 1) != 0 )
      ++v4;
    a4 += 18;
    --a2;
  }
  while ( a2 );
  if ( v4 )
  {
    v7 = AllocPathsModality(v4);
    *a3 = v7;
    if ( v7 )
    {
      return 0LL;
    }
    else
    {
      v12 = WdLogNewEntry5_WdError(v9, v8, v10, v11);
      *(_QWORD *)(v12 + 24) = v4;
      WdLogEvent5_WdError(v12);
      return 3221225495LL;
    }
  }
  else
  {
LABEL_10:
    v14 = WdLogNewEntry5_WdError(a1, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = v6;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
}
