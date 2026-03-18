/*
 * XREFs of MonitorGetPreferredMonitorSourceMode @ 0x1C00BD250
 * Callers:
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00BD198 (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredMonitorSourceMode(struct HDXGMONITOR__ *a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rdi
  __int64 v7; // rax
  struct _ERESOURCE *v8; // r15
  char *v9; // r14
  _OWORD *v10; // rcx
  char *v11; // rdi
  _OWORD *v12; // rbp
  __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  char *v17; // rdi
  __int128 v18; // xmm1
  struct DXGMONITOR *v19; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 && a2 )
  {
    result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v19);
    if ( (int)result < 0 )
      return result;
    v6 = v19;
    if ( !v19 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v7);
    }
    KeEnterCriticalRegion();
    v8 = (struct _ERESOURCE *)((char *)v6 + 240);
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v6 + 240), 1u);
    v9 = (char *)v6 + 160;
    v10 = 0LL;
    v11 = (char *)*((_QWORD *)v6 + 20);
    v12 = 0LL;
    if ( v11 != v9 )
    {
      v13 = (__int64)(v11 - 96);
      if ( v13 )
      {
        do
        {
          if ( *(_DWORD *)(v13 + 88) == 1 )
          {
            v14 = *(_DWORD *)(v13 + 84);
            if ( (unsigned int)(v14 - 2) <= 1 )
            {
              if ( v10 )
              {
                v16 = WdLogNewEntry5_WdAssertion(v10);
                WdLogEvent5_WdAssertion(v16);
              }
              v10 = (_OWORD *)v13;
            }
            else if ( v14 == 5 )
            {
              v15 = v13;
              if ( v12 )
                v15 = 1LL;
              v12 = (_OWORD *)v15;
            }
          }
          v17 = *(char **)(v13 + 96);
          if ( v17 == v9 )
            break;
          v13 = (__int64)(v17 - 96);
        }
        while ( v13 );
        if ( (unsigned __int64)v12 > 1 )
        {
          *a2 = *v12;
          a2[1] = v12[1];
          a2[2] = v12[2];
          a2[3] = v12[3];
          a2[4] = v12[4];
          v18 = v12[5];
LABEL_23:
          a2[5] = v18;
LABEL_25:
          ExReleaseResourceLite(v8);
          KeLeaveCriticalRegion();
          return v2;
        }
        if ( v10 )
        {
          *a2 = *v10;
          a2[1] = v10[1];
          a2[2] = v10[2];
          a2[3] = v10[3];
          a2[4] = v10[4];
          v18 = v10[5];
          goto LABEL_23;
        }
      }
    }
    v2 = -1073741275;
    goto LABEL_25;
  }
  return 3221225485LL;
}
