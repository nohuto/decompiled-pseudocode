/*
 * XREFs of MonitorGetPreferredMonitorSourceMode @ 0x1C00D3944
 * Callers:
 *     ?DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C00D388C (-DmmGetPreferredMonitorSourceModeOnTarget@@YAJPEAXIPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0008148 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetPreferredMonitorSourceMode(struct HDXGMONITOR__ *a1, _OWORD *a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGMONITOR *v9; // rdi
  struct _ERESOURCE *v10; // r15
  __int64 v11; // r8
  __int64 v12; // r9
  char *v13; // r14
  _OWORD *v14; // rcx
  char *v15; // rdi
  _OWORD *v16; // rbp
  __int64 v17; // rdi
  char *v18; // rdi
  __int128 v19; // xmm1
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  struct DXGMONITOR *v24; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 || !a2 )
    return 3221225485LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v24);
  if ( (int)result >= 0 )
  {
    v9 = v24;
    if ( !v24 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      WdLogEvent5_WdAssertion(v22);
    }
    KeEnterCriticalRegion();
    v10 = (struct _ERESOURCE *)((char *)v9 + 240);
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 240), 1u);
    v13 = (char *)v9 + 160;
    v14 = 0LL;
    v15 = (char *)*((_QWORD *)v9 + 20);
    v16 = 0LL;
    if ( v15 != v13 )
    {
      v17 = (__int64)(v15 - 96);
      if ( v17 )
      {
        do
        {
          if ( *(_DWORD *)(v17 + 88) == 1 )
          {
            v20 = *(unsigned int *)(v17 + 84);
            if ( (unsigned int)(v20 - 2) <= 1 )
            {
              if ( v14 )
              {
                v23 = WdLogNewEntry5_WdAssertion(v14, v20, v11, v12);
                WdLogEvent5_WdAssertion(v23);
              }
              v14 = (_OWORD *)v17;
            }
            else if ( (_DWORD)v20 == 5 )
            {
              v21 = v17;
              if ( v16 )
                v21 = 1LL;
              v16 = (_OWORD *)v21;
            }
          }
          v18 = *(char **)(v17 + 96);
          if ( v18 == v13 )
            break;
          v17 = (__int64)(v18 - 96);
        }
        while ( v17 );
        if ( (unsigned __int64)v16 > 1 )
        {
          *a2 = *v16;
          a2[1] = v16[1];
          a2[2] = v16[2];
          a2[3] = v16[3];
          a2[4] = v16[4];
          v19 = v16[5];
LABEL_13:
          a2[5] = v19;
LABEL_14:
          ExReleaseResourceLite(v10);
          KeLeaveCriticalRegion();
          return v2;
        }
        if ( v14 )
        {
          *a2 = *v14;
          a2[1] = v14[1];
          a2[2] = v14[2];
          a2[3] = v14[3];
          a2[4] = v14[4];
          v19 = v14[5];
          goto LABEL_13;
        }
      }
    }
    v2 = -1073741275;
    goto LABEL_14;
  }
  return result;
}
