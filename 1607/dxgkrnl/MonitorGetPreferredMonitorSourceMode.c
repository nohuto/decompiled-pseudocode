/*
 * XREFs of MonitorGetPreferredMonitorSourceMode @ 0x1C00D8094
 * Callers:
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00D7FD4 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0001BB0 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredMonitorSourceMode(struct HDXGMONITOR__ *a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rdi
  struct _ERESOURCE *v7; // r15
  char *v8; // r14
  _OWORD *v9; // rcx
  char *v10; // rdi
  _OWORD *v11; // rbp
  __int64 v12; // rdi
  char *v13; // rdi
  __int128 v14; // xmm1
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGMONITOR *v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v19);
  if ( (int)result >= 0 )
  {
    v6 = v19;
    if ( !v19 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    v7 = (struct _ERESOURCE *)((char *)v6 + 240);
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v6 + 240), 1u);
    v8 = (char *)v6 + 160;
    v9 = 0LL;
    v10 = (char *)*((_QWORD *)v6 + 20);
    v11 = 0LL;
    if ( v10 != v8 )
    {
      v12 = v10 ? (__int64)(v10 - 96) : 0LL;
      if ( v12 )
      {
        do
        {
          if ( *(_DWORD *)(v12 + 88) == 1 )
          {
            v15 = *(_DWORD *)(v12 + 84);
            if ( (unsigned int)(v15 - 2) <= 1 )
            {
              if ( v9 )
              {
                v18 = WdLogNewEntry5_WdAssertion(v9);
                WdLogEvent5_WdAssertion(v18);
              }
              v9 = (_OWORD *)v12;
            }
            else if ( v15 == 5 )
            {
              v16 = v12;
              if ( v11 )
                v16 = 1LL;
              v11 = (_OWORD *)v16;
            }
          }
          v13 = *(char **)(v12 + 96);
          if ( v13 == v8 )
            break;
          v12 = v13 ? (__int64)(v13 - 96) : 0LL;
        }
        while ( v12 );
        if ( (unsigned __int64)v11 > 1 )
        {
          *a2 = *v11;
          a2[1] = v11[1];
          a2[2] = v11[2];
          a2[3] = v11[3];
          a2[4] = v11[4];
          v14 = v11[5];
LABEL_17:
          a2[5] = v14;
LABEL_18:
          ExReleaseResourceLite(v7);
          KeLeaveCriticalRegion();
          return v2;
        }
        if ( v9 )
        {
          *a2 = *v9;
          a2[1] = v9[1];
          a2[2] = v9[2];
          a2[3] = v9[3];
          a2[4] = v9[4];
          v14 = v9[5];
          goto LABEL_17;
        }
      }
    }
    v2 = -1073741275;
    goto LABEL_18;
  }
  return result;
}
